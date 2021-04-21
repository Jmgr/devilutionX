#include "storm/storm_sdl_rw.h"

#include <cstdint>
#include <cstring>

#include "engine.h"
#include "storm/storm.h"

namespace devilution {

static HANDLE SFileRwGetHandle(struct SDL_RWops *context)
{
	return (HANDLE)context->hidden.unknown.data1;
}

static void SFileRwSetHandle(struct SDL_RWops *context, HANDLE handle)
{
	context->hidden.unknown.data1 = handle;
}

#ifndef USE_SDL1
static Sint64 SFileRwSize(struct SDL_RWops *context)
{
	return SFileGetFileSize(SFileRwGetHandle(context), nullptr);
}
#endif

#ifndef USE_SDL1
static Sint64 SFileRwSeek(struct SDL_RWops *context, Sint64 offset, int whence)
#else
static int SFileRw_seek(struct SDL_RWops *context, int offset, int whence)
#endif
{
	DWORD swhence;
	switch (whence) {
	case RW_SEEK_SET:
		swhence = DVL_FILE_BEGIN;
		break;
	case RW_SEEK_CUR:
		swhence = DVL_FILE_CURRENT;
		break;
	case RW_SEEK_END:
		swhence = DVL_FILE_END;
		break;
	default:
		return -1;
	}
	const std::uint64_t pos = SFileSetFilePointer(SFileRwGetHandle(context), offset, swhence);
	if (pos == static_cast<std::uint64_t>(-1)) {
		SDL_Log("SFileRw_seek error: %ud", (unsigned int)SErrGetLastError());
	}
	return pos;
}

#ifndef USE_SDL1
static size_t SFileRwRead(struct SDL_RWops *context, void *ptr, size_t size, size_t maxnum)
#else
static int SFileRw_read(struct SDL_RWops *context, void *ptr, int size, int maxnum)
#endif
{
	DWORD numRead = 0;
	if (!SFileReadFile(SFileRwGetHandle(context), ptr, maxnum * size, &numRead, nullptr)) {
		const DWORD errCode = SErrGetLastError();
		if (errCode != STORM_ERROR_HANDLE_EOF) {
			SDL_Log("SFileRw_read error: %u %u ERROR CODE %u", (unsigned int)size, (unsigned int)maxnum, (unsigned int)errCode);
		}
	}
	return numRead / size;
}

static int SFileRwClose(struct SDL_RWops *context)
{
	mem_free_dbg(context);
	return 0;
}

SDL_RWops *SFileRw_FromStormHandle(HANDLE handle)
{
	SDL_RWops *result = (SDL_RWops *)DiabloAllocPtr(sizeof(SDL_RWops));
	std::memset(result, 0, sizeof(*result));

#ifndef USE_SDL1
	result->size = &SFileRwSize;
	result->type = SDL_RWOPS_UNKNOWN;
#else
	result->type = 0;
#endif

	result->seek = &SFileRwSeek;
	result->read = &SFileRwRead;
	result->write = nullptr;
	result->close = &SFileRwClose;
	SFileRwSetHandle(result, handle);
	return result;
}

} // namespace devilution
