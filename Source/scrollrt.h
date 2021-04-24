/**
 * @file scrollrt.h
 *
 * Interface of functionality for rendering the dungeons, monsters and calling other render routines.
 */
#pragma once

#include <stdint.h>
#include <string_view>

#include "engine.h"
#include "miniwin/miniwin.h"

namespace devilution {

#define PANELS_COVER (gnScreenWidth <= PANEL_WIDTH && gnScreenHeight <= SPANEL_HEIGHT + PANEL_HEIGHT)

enum _scroll_direction : uint8_t {
	SDIR_NONE,
	SDIR_N,
	SDIR_NE,
	SDIR_E,
	SDIR_SE,
	SDIR_S,
	SDIR_SW,
	SDIR_W,
	SDIR_NW,
};

constexpr std::string_view toString(_scroll_direction value)
{
	switch(value) {
	case SDIR_NONE:
		return "None";
	case SDIR_N:
		return "North";
	case SDIR_NE:
		return "North East";
	case SDIR_E:
		return "East";
	case SDIR_SE:
		return "South East";
	case SDIR_S:
		return "South";
	case SDIR_SW:
		return "South West";
	case SDIR_W:
		return "West";
	case SDIR_NW:
		return "North West";
	}
}

// Defined in SourceX/controls/plctrls.cpp
extern bool sgbControllerActive;
extern bool IsMovingMouseCursorWithController();

extern int light_table_index;
extern DWORD level_cel_block;
extern char arch_draw_type;
extern bool cel_transparency_active;
extern bool cel_foliage_active;
extern int level_piece_id;
extern bool AutoMapShowItems;

void ClearCursor();
void ShiftGrid(int *x, int *y, int horizontal, int vertical);
int RowsCoveredByPanel();
void CalcTileOffset(int *offsetX, int *offsetY);
void TilesInView(int *columns, int *rows);
void CalcViewportGeometry();

/**
 * @brief Start rendering of screen, town variation
 * @param out Buffer to render to
 * @param StartX Center of view in dPiece coordinate
 * @param StartY Center of view in dPiece coordinate
 */
void DrawView(const CelOutputBuffer &out, int StartX, int StartY);

void ClearScreenBuffer();
#ifdef _DEBUG
void ScrollView();
#endif
void EnableFrameCount();
void scrollrt_draw_game_screen(bool draw_cursor);
void DrawAndBlit();

} // namespace devilution
