/**
 * @file towners.h
 *
 * Interface of functionality for loading and spawning towners.
 */
#pragma once

#include <stdint.h>
#include <string_view>

#include "items.h"
#include "player.h"
#include "quests.h"

namespace devilution {

#define NUM_TOWNERS 16

enum _talker_id : uint8_t {
	TOWN_SMITH,
	TOWN_HEALER,
	TOWN_DEADGUY,
	TOWN_TAVERN,
	TOWN_STORY,
	TOWN_DRUNK,
	TOWN_WITCH,
	TOWN_BMAID,
	TOWN_PEGBOY,
	TOWN_COW,
	TOWN_FARMER,
	TOWN_GIRL,
	TOWN_COWFARM,
	NUM_TOWNER_TYPES,
};

constexpr std::string_view toString(_talker_id value)
{
	switch(value) {
	case TOWN_SMITH:
		return "Smith";
	case TOWN_HEALER:
		return "Healer";
	case TOWN_DEADGUY:
		return "Deadguy";
	case TOWN_TAVERN:
		return "Tavern";
	case TOWN_STORY:
		return "Story";
	case TOWN_DRUNK:
		return "Drunk";
	case TOWN_WITCH:
		return "Witch";
	case TOWN_BMAID:
		return "Bmaid";
	case TOWN_PEGBOY:
		return "Pegboy";
	case TOWN_COW:
		return "Cow";
	case TOWN_FARMER:
		return "Farmer";
	case TOWN_GIRL:
		return "Girl";
	case TOWN_COWFARM:
		return "Cowfarm";
	case NUM_TOWNER_TYPES:
		return "Num Towner Types";
	}
}

struct TNQ {
	uint8_t _qsttype;
	uint8_t _qstmsg;
	bool _qstmsgact;
};

struct TownerStruct {
	uint8_t *_tNAnim[8];
	uint8_t *_tNData;
	uint8_t *_tAnimData;
	int16_t _tSeed;
	int16_t _tx; // Tile X-position of NPC
	int16_t _ty; // Tile Y-position of NPC
	int16_t _tAnimWidth;
	int16_t _tAnimWidth2;
	int16_t _tAnimDelay; // Tick length of each frame in the current animation
	int16_t _tAnimCnt;   // Increases by one each game tick, counting how close we are to _pAnimDelay
	uint8_t _tAnimLen;   // Number of frames in current animation
	uint8_t _tAnimFrame; // Current frame of animation.
	uint8_t _tAnimFrameCnt;
	uint8_t _tNFrames;
	char _tName[PLR_NAME_LEN];
	TNQ qsts[MAXQUESTS];
	bool _tSelFlag;
	bool _tMsgSaid;
	int8_t _tAnimOrder;
	int8_t _tTalkingToPlayer;
	bool _tbtcnt;
	_talker_id _ttype;
};

extern TownerStruct towners[NUM_TOWNERS];

void InitTowners();
void FreeTownerGFX();
void ProcessTowners();
ItemStruct *PlrHasItem(int pnum, int item, int *i);
void TalkToTowner(int p, int t);

extern _speech_id Qtalklist[NUM_TOWNER_TYPES][MAXQUESTS];

} // namespace devilution
