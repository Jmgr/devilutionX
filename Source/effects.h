/**
 * @file effects.h
 *
 * Interface of functions for loading and playing sounds.
 */
#pragma once

#include <cstdint>

#include "sound.h"

namespace devilution {

enum _sfx_id : int16_t {
	PS_WALK1,
	PS_WALK2,
	PS_WALK3,
	PS_WALK4,
	PS_BFIRE,
	PS_FMAG,
	PS_TMAG,
	PS_LGHIT,
	PS_LGHIT1,
	PS_SWING,
	PS_SWING2,
	PS_DEAD,
	IS_STING1,
	IS_FBALLBOW,
	IS_QUESTDN,
	IS_ARMRFKD,
	IS_BARLFIRE,
	IS_BARREL,
	IS_POPPOP8,
	IS_POPPOP5,
	IS_POPPOP3,
	IS_POPPOP2,
	IS_BHIT,
	IS_BHIT1,
	IS_CHEST,
	IS_DOORCLOS,
	IS_DOOROPEN,
	IS_FANVL,
	IS_FAXE,
	IS_FBLST,
	IS_FBODY,
	IS_FBOOK,
	IS_FBOW,
	IS_FCAP,
	IS_FHARM,
	IS_FLARM,
	IS_FMAG,
	IS_FMAG1,
	IS_FMUSH,
	IS_FPOT,
	IS_FRING,
	IS_FROCK,
	IS_FSCRL,
	IS_FSHLD,
	IS_FSIGN,
	IS_FSTAF,
	IS_FSWOR,
	IS_GOLD,
	IS_HLMTFKD,
	IS_IANVL,
	IS_IAXE,
	IS_IBLST,
	IS_IBODY,
	IS_IBOOK,
	IS_IBOW,
	IS_ICAP,
	IS_IGRAB,
	IS_IHARM,
	IS_ILARM,
	IS_IMUSH,
	IS_IPOT,
	IS_IRING,
	IS_IROCK,
	IS_ISCROL,
	IS_ISHIEL,
	IS_ISIGN,
	IS_ISTAF,
	IS_ISWORD,
	IS_LEVER,
	IS_MAGIC,
	IS_MAGIC1,
	IS_RBOOK,
	IS_SARC,
	IS_SHLDFKD,
	IS_SWRDFKD,
	IS_TITLEMOV,
	IS_TITLSLCT,
	SFX_SILENCE,
	IS_TRAP,
	IS_CAST1,
	IS_CAST10,
	IS_CAST12,
	IS_CAST2,
	IS_CAST3,
	IS_CAST4,
	IS_CAST5,
	IS_CAST6,
	IS_CAST7,
	IS_CAST8,
	IS_CAST9,
	LS_HEALING,
	IS_REPAIR,
	LS_ACID,
	LS_ACIDS,
	LS_APOC,
	LS_ARROWALL,
	LS_BLODBOIL,
	LS_BLODSTAR,
	LS_BLSIMPT,
	LS_BONESP,
	LS_BSIMPCT,
	LS_CALDRON,
	LS_CBOLT,
	LS_CHLTNING,
	LS_DSERP,
	LS_ELECIMP1,
	LS_ELEMENTL,
	LS_ETHEREAL,
	LS_FBALL,
	LS_FBOLT1,
	LS_FBOLT2,
	LS_FIRIMP1,
	LS_FIRIMP2,
	LS_FLAMWAVE,
	LS_FLASH,
	LS_FOUNTAIN,
	LS_GOLUM,
	LS_GOLUMDED,
	LS_GSHRINE,
	LS_GUARD,
	LS_GUARDLAN,
	LS_HOLYBOLT,
	LS_HYPER,
	LS_INFRAVIS,
	LS_INVISIBL,
	LS_INVPOT,
	LS_LNING1,
	LS_LTNING,
	LS_MSHIELD,
	LS_NESTXPLD,
	LS_NOVA,
	LS_PORTAL,
	LS_PUDDLE,
	LS_RESUR,
	LS_SCURSE,
	LS_SCURIMP,
	LS_SENTINEL,
	LS_SHATTER,
	LS_SOULFIRE,
	LS_SPOUTLOP,
	LS_SPOUTSTR,
	LS_STORM,
	LS_TRAPDIS,
	LS_TELEPORT,
	LS_VTHEFT,
	LS_WALLLOOP,
	LS_WALLSTRT,
	LS_LMAG,
	TSFX_BMAID1,
	TSFX_BMAID2,
	TSFX_BMAID3,
	TSFX_BMAID4,
	TSFX_BMAID5,
	TSFX_BMAID6,
	TSFX_BMAID7,
	TSFX_BMAID8,
	TSFX_BMAID9,
	TSFX_BMAID10,
	TSFX_BMAID11,
	TSFX_BMAID12,
	TSFX_BMAID13,
	TSFX_BMAID14,
	TSFX_BMAID15,
	TSFX_BMAID16,
	TSFX_BMAID17,
	TSFX_BMAID18,
	TSFX_BMAID19,
	TSFX_BMAID20,
	TSFX_BMAID21,
	TSFX_BMAID22,
	TSFX_BMAID23,
	TSFX_BMAID24,
	TSFX_BMAID25,
	TSFX_BMAID26,
	TSFX_BMAID27,
	TSFX_BMAID28,
	TSFX_BMAID29,
	TSFX_BMAID30,
	TSFX_BMAID31,
	TSFX_BMAID32,
	TSFX_BMAID33,
	TSFX_BMAID34,
	TSFX_BMAID35,
	TSFX_BMAID36,
	TSFX_BMAID37,
	TSFX_BMAID38,
	TSFX_BMAID39,
	TSFX_BMAID40,
	TSFX_SMITH1,
	TSFX_SMITH2,
	TSFX_SMITH3,
	TSFX_SMITH4,
	TSFX_SMITH5,
	TSFX_SMITH6,
	TSFX_SMITH7,
	TSFX_SMITH8,
	TSFX_SMITH9,
	TSFX_SMITH10,
	TSFX_SMITH11,
	TSFX_SMITH12,
	TSFX_SMITH13,
	TSFX_SMITH14,
	TSFX_SMITH15,
	TSFX_SMITH16,
	TSFX_SMITH17,
	TSFX_SMITH18,
	TSFX_SMITH19,
	TSFX_SMITH20,
	TSFX_SMITH21,
	TSFX_SMITH22,
	TSFX_SMITH23,
	TSFX_SMITH24,
	TSFX_SMITH25,
	TSFX_SMITH26,
	TSFX_SMITH27,
	TSFX_SMITH28,
	TSFX_SMITH29,
	TSFX_SMITH30,
	TSFX_SMITH31,
	TSFX_SMITH32,
	TSFX_SMITH33,
	TSFX_SMITH34,
	TSFX_SMITH35,
	TSFX_SMITH36,
	TSFX_SMITH37,
	TSFX_SMITH38,
	TSFX_SMITH39,
	TSFX_SMITH40,
	TSFX_SMITH41,
	TSFX_SMITH42,
	TSFX_SMITH43,
	TSFX_SMITH44,
	TSFX_SMITH45,
	TSFX_SMITH46,
	TSFX_SMITH47,
	TSFX_SMITH48,
	TSFX_SMITH49,
	TSFX_SMITH50,
	TSFX_SMITH51,
	TSFX_SMITH52,
	TSFX_SMITH53,
	TSFX_SMITH54,
	TSFX_SMITH55,
	TSFX_SMITH56,
	TSFX_COW1,
	TSFX_COW2,
	/*
	TSFX_COW3,
	TSFX_COW4,
	TSFX_COW5,
	TSFX_COW6,
	*/
	TSFX_COW7,
	TSFX_COW8,
	TSFX_DEADGUY,
	TSFX_DRUNK1,
	TSFX_DRUNK2,
	TSFX_DRUNK3,
	TSFX_DRUNK4,
	TSFX_DRUNK5,
	TSFX_DRUNK6,
	TSFX_DRUNK7,
	TSFX_DRUNK8,
	TSFX_DRUNK9,
	TSFX_DRUNK10,
	TSFX_DRUNK11,
	TSFX_DRUNK12,
	TSFX_DRUNK13,
	TSFX_DRUNK14,
	TSFX_DRUNK15,
	TSFX_DRUNK16,
	TSFX_DRUNK17,
	TSFX_DRUNK18,
	TSFX_DRUNK19,
	TSFX_DRUNK20,
	TSFX_DRUNK21,
	TSFX_DRUNK22,
	TSFX_DRUNK23,
	TSFX_DRUNK24,
	TSFX_DRUNK25,
	TSFX_DRUNK26,
	TSFX_DRUNK27,
	TSFX_DRUNK28,
	TSFX_DRUNK29,
	TSFX_DRUNK30,
	TSFX_DRUNK31,
	TSFX_DRUNK32,
	TSFX_DRUNK33,
	TSFX_DRUNK34,
	TSFX_DRUNK35,
	TSFX_HEALER1,
	TSFX_HEALER2,
	TSFX_HEALER3,
	TSFX_HEALER4,
	TSFX_HEALER5,
	TSFX_HEALER6,
	TSFX_HEALER7,
	TSFX_HEALER8,
	TSFX_HEALER9,
	TSFX_HEALER10,
	TSFX_HEALER11,
	TSFX_HEALER12,
	TSFX_HEALER13,
	TSFX_HEALER14,
	TSFX_HEALER15,
	TSFX_HEALER16,
	TSFX_HEALER17,
	TSFX_HEALER18,
	TSFX_HEALER19,
	TSFX_HEALER20,
	TSFX_HEALER21,
	TSFX_HEALER22,
	TSFX_HEALER23,
	TSFX_HEALER24,
	TSFX_HEALER25,
	TSFX_HEALER26,
	TSFX_HEALER27,
	TSFX_HEALER28,
	TSFX_HEALER29,
	TSFX_HEALER30,
	TSFX_HEALER31,
	TSFX_HEALER32,
	TSFX_HEALER33,
	TSFX_HEALER34,
	TSFX_HEALER35,
	TSFX_HEALER36,
	TSFX_HEALER37,
	TSFX_HEALER38,
	TSFX_HEALER39,
	TSFX_HEALER40,
	TSFX_HEALER41,
	TSFX_HEALER42,
	TSFX_HEALER43,
	TSFX_HEALER44,
	TSFX_HEALER45,
	TSFX_HEALER46,
	TSFX_HEALER47,
	TSFX_PEGBOY1,
	TSFX_PEGBOY2,
	TSFX_PEGBOY3,
	TSFX_PEGBOY4,
	TSFX_PEGBOY5,
	TSFX_PEGBOY6,
	TSFX_PEGBOY7,
	TSFX_PEGBOY8,
	TSFX_PEGBOY9,
	TSFX_PEGBOY10,
	TSFX_PEGBOY11,
	TSFX_PEGBOY12,
	TSFX_PEGBOY13,
	TSFX_PEGBOY14,
	TSFX_PEGBOY15,
	TSFX_PEGBOY16,
	TSFX_PEGBOY17,
	TSFX_PEGBOY18,
	TSFX_PEGBOY19,
	TSFX_PEGBOY20,
	TSFX_PEGBOY21,
	TSFX_PEGBOY22,
	TSFX_PEGBOY23,
	TSFX_PEGBOY24,
	TSFX_PEGBOY25,
	TSFX_PEGBOY26,
	TSFX_PEGBOY27,
	TSFX_PEGBOY28,
	TSFX_PEGBOY29,
	TSFX_PEGBOY30,
	TSFX_PEGBOY31,
	TSFX_PEGBOY32,
	TSFX_PEGBOY33,
	TSFX_PEGBOY34,
	TSFX_PEGBOY35,
	TSFX_PEGBOY36,
	TSFX_PEGBOY37,
	TSFX_PEGBOY38,
	TSFX_PEGBOY39,
	TSFX_PEGBOY40,
	TSFX_PEGBOY41,
	TSFX_PEGBOY42,
	TSFX_PEGBOY43,
	TSFX_PRIEST0,
	TSFX_PRIEST1,
	TSFX_PRIEST2,
	TSFX_PRIEST3,
	TSFX_PRIEST4,
	TSFX_PRIEST5,
	TSFX_PRIEST6,
	TSFX_PRIEST7,
	TSFX_STORY0,
	TSFX_STORY1,
	TSFX_STORY2,
	TSFX_STORY3,
	TSFX_STORY4,
	TSFX_STORY5,
	TSFX_STORY6,
	TSFX_STORY7,
	TSFX_STORY8,
	TSFX_STORY9,
	TSFX_STORY10,
	TSFX_STORY11,
	TSFX_STORY12,
	TSFX_STORY13,
	TSFX_STORY14,
	TSFX_STORY15,
	TSFX_STORY16,
	TSFX_STORY17,
	TSFX_STORY18,
	TSFX_STORY19,
	TSFX_STORY20,
	TSFX_STORY21,
	TSFX_STORY22,
	TSFX_STORY23,
	TSFX_STORY24,
	TSFX_STORY25,
	TSFX_STORY26,
	TSFX_STORY27,
	TSFX_STORY28,
	TSFX_STORY29,
	TSFX_STORY30,
	TSFX_STORY31,
	TSFX_STORY32,
	TSFX_STORY33,
	TSFX_STORY34,
	TSFX_STORY35,
	TSFX_STORY36,
	TSFX_STORY37,
	TSFX_STORY38,
	TSFX_TAVERN0,
	TSFX_TAVERN1,
	TSFX_TAVERN2,
	TSFX_TAVERN3,
	TSFX_TAVERN4,
	TSFX_TAVERN5,
	TSFX_TAVERN6,
	TSFX_TAVERN7,
	TSFX_TAVERN8,
	TSFX_TAVERN9,
	TSFX_TAVERN10,
	TSFX_TAVERN11,
	TSFX_TAVERN12,
	TSFX_TAVERN13,
	TSFX_TAVERN14,
	TSFX_TAVERN15,
	TSFX_TAVERN16,
	TSFX_TAVERN17,
	TSFX_TAVERN18,
	TSFX_TAVERN19,
	TSFX_TAVERN20,
	TSFX_TAVERN21,
	TSFX_TAVERN22,
	TSFX_TAVERN23,
	TSFX_TAVERN24,
	TSFX_TAVERN25,
	TSFX_TAVERN26,
	TSFX_TAVERN27,
	TSFX_TAVERN28,
	TSFX_TAVERN29,
	TSFX_TAVERN30,
	TSFX_TAVERN31,
	TSFX_TAVERN32,
	TSFX_TAVERN33,
	TSFX_TAVERN34,
	TSFX_TAVERN35,
	TSFX_TAVERN36,
	TSFX_TAVERN37,
	TSFX_TAVERN38,
	TSFX_TAVERN39,
	TSFX_TAVERN40,
	TSFX_TAVERN41,
	TSFX_TAVERN42,
	TSFX_TAVERN43,
	TSFX_TAVERN44,
	TSFX_TAVERN45,
	TSFX_WITCH1,
	TSFX_WITCH2,
	TSFX_WITCH3,
	TSFX_WITCH4,
	TSFX_WITCH5,
	TSFX_WITCH6,
	TSFX_WITCH7,
	TSFX_WITCH8,
	TSFX_WITCH9,
	TSFX_WITCH10,
	TSFX_WITCH11,
	TSFX_WITCH12,
	TSFX_WITCH13,
	TSFX_WITCH14,
	TSFX_WITCH15,
	TSFX_WITCH16,
	TSFX_WITCH17,
	TSFX_WITCH18,
	TSFX_WITCH19,
	TSFX_WITCH20,
	TSFX_WITCH21,
	TSFX_WITCH22,
	TSFX_WITCH23,
	TSFX_WITCH24,
	TSFX_WITCH25,
	TSFX_WITCH26,
	TSFX_WITCH27,
	TSFX_WITCH28,
	TSFX_WITCH29,
	TSFX_WITCH30,
	TSFX_WITCH31,
	TSFX_WITCH32,
	TSFX_WITCH33,
	TSFX_WITCH34,
	TSFX_WITCH35,
	TSFX_WITCH36,
	TSFX_WITCH37,
	TSFX_WITCH38,
	TSFX_WITCH39,
	TSFX_WITCH40,
	TSFX_WITCH41,
	TSFX_WITCH42,
	TSFX_WITCH43,
	TSFX_WITCH44,
	TSFX_WITCH45,
	TSFX_WITCH46,
	TSFX_WITCH47,
	TSFX_WITCH48,
	TSFX_WITCH49,
	TSFX_WITCH50,
	TSFX_WOUND,
	PS_MAGE1,
	PS_MAGE2,
	PS_MAGE3,
	PS_MAGE4,
	PS_MAGE5,
	PS_MAGE6,
	PS_MAGE7,
	PS_MAGE8,
	PS_MAGE9,
	PS_MAGE10,
	PS_MAGE11,
	PS_MAGE12,
	PS_MAGE13,
	PS_MAGE14,
	PS_MAGE15,
	PS_MAGE16,
	PS_MAGE17,
	PS_MAGE18,
	PS_MAGE19,
	PS_MAGE20,
	PS_MAGE21,
	PS_MAGE22,
	PS_MAGE23,
	PS_MAGE24,
	PS_MAGE25,
	PS_MAGE26,
	PS_MAGE27,
	PS_MAGE28,
	PS_MAGE29,
	PS_MAGE30,
	PS_MAGE31,
	PS_MAGE32,
	PS_MAGE33,
	PS_MAGE34,
	PS_MAGE35,
	PS_MAGE36,
	PS_MAGE37,
	PS_MAGE38,
	PS_MAGE39,
	PS_MAGE40,
	PS_MAGE41,
	PS_MAGE42,
	PS_MAGE43,
	PS_MAGE44,
	PS_MAGE45,
	PS_MAGE46,
	PS_MAGE47,
	PS_MAGE48,
	PS_MAGE49,
	PS_MAGE50,
	PS_MAGE51,
	PS_MAGE52,
	PS_MAGE53,
	PS_MAGE54,
	PS_MAGE55,
	PS_MAGE56,
	PS_MAGE57,
	PS_MAGE58,
	PS_MAGE59,
	PS_MAGE60,
	PS_MAGE61,
	PS_MAGE62,
	PS_MAGE63,
	PS_MAGE64,
	PS_MAGE65,
	PS_MAGE66,
	PS_MAGE67,
	PS_MAGE68,
	PS_MAGE69,
	PS_MAGE69B,
	PS_MAGE70,
	PS_MAGE71,
	PS_MAGE72,
	PS_MAGE73,
	PS_MAGE74,
	PS_MAGE75,
	PS_MAGE76,
	PS_MAGE77,
	PS_MAGE78,
	PS_MAGE79,
	PS_MAGE80,
	PS_MAGE81,
	PS_MAGE82,
	PS_MAGE83,
	PS_MAGE84,
	PS_MAGE85,
	PS_MAGE86,
	PS_MAGE87,
	PS_MAGE88,
	PS_MAGE89,
	PS_MAGE90,
	PS_MAGE91,
	PS_MAGE92,
	PS_MAGE93,
	PS_MAGE94,
	PS_MAGE95,
	PS_MAGE96,
	PS_MAGE97,
	PS_MAGE98,
	PS_MAGE99,
	PS_MAGE100,
	PS_MAGE101,
	PS_MAGE102,
	PS_ROGUE1,
	PS_ROGUE2,
	PS_ROGUE3,
	PS_ROGUE4,
	PS_ROGUE5,
	PS_ROGUE6,
	PS_ROGUE7,
	PS_ROGUE8,
	PS_ROGUE9,
	PS_ROGUE10,
	PS_ROGUE11,
	PS_ROGUE12,
	PS_ROGUE13,
	PS_ROGUE14,
	PS_ROGUE15,
	PS_ROGUE16,
	PS_ROGUE17,
	PS_ROGUE18,
	PS_ROGUE19,
	PS_ROGUE20,
	PS_ROGUE21,
	PS_ROGUE22,
	PS_ROGUE23,
	PS_ROGUE24,
	PS_ROGUE25,
	PS_ROGUE26,
	PS_ROGUE27,
	PS_ROGUE28,
	PS_ROGUE29,
	PS_ROGUE30,
	PS_ROGUE31,
	PS_ROGUE32,
	PS_ROGUE33,
	PS_ROGUE34,
	PS_ROGUE35,
	PS_ROGUE36,
	PS_ROGUE37,
	PS_ROGUE38,
	PS_ROGUE39,
	PS_ROGUE40,
	PS_ROGUE41,
	PS_ROGUE42,
	PS_ROGUE43,
	PS_ROGUE44,
	PS_ROGUE45,
	PS_ROGUE46,
	PS_ROGUE47,
	PS_ROGUE48,
	PS_ROGUE49,
	PS_ROGUE50,
	PS_ROGUE51,
	PS_ROGUE52,
	PS_ROGUE53,
	PS_ROGUE54,
	PS_ROGUE55,
	PS_ROGUE56,
	PS_ROGUE57,
	PS_ROGUE58,
	PS_ROGUE59,
	PS_ROGUE60,
	PS_ROGUE61,
	PS_ROGUE62,
	PS_ROGUE63,
	PS_ROGUE64,
	PS_ROGUE65,
	PS_ROGUE66,
	PS_ROGUE67,
	PS_ROGUE68,
	PS_ROGUE69,
	PS_ROGUE69B,
	PS_ROGUE70,
	PS_ROGUE71,
	PS_ROGUE72,
	PS_ROGUE73,
	PS_ROGUE74,
	PS_ROGUE75,
	PS_ROGUE76,
	PS_ROGUE77,
	PS_ROGUE78,
	PS_ROGUE79,
	PS_ROGUE80,
	PS_ROGUE81,
	PS_ROGUE82,
	PS_ROGUE83,
	PS_ROGUE84,
	PS_ROGUE85,
	PS_ROGUE86,
	PS_ROGUE87,
	PS_ROGUE88,
	PS_ROGUE89,
	PS_ROGUE90,
	PS_ROGUE91,
	PS_ROGUE92,
	PS_ROGUE93,
	PS_ROGUE94,
	PS_ROGUE95,
	PS_ROGUE96,
	PS_ROGUE97,
	PS_ROGUE98,
	PS_ROGUE99,
	PS_ROGUE100,
	PS_ROGUE101,
	PS_ROGUE102,
	PS_WARR1,
	PS_WARR2,
	PS_WARR3,
	PS_WARR4,
	PS_WARR5,
	PS_WARR6,
	PS_WARR7,
	PS_WARR8,
	PS_WARR9,
	PS_WARR10,
	PS_WARR11,
	PS_WARR12,
	PS_WARR13,
	PS_WARR14,
	PS_WARR14B,
	PS_WARR14C,
	PS_WARR15,
	PS_WARR15B,
	PS_WARR15C,
	PS_WARR16,
	PS_WARR16B,
	PS_WARR16C,
	PS_WARR17,
	PS_WARR18,
	PS_WARR19,
	PS_WARR20,
	PS_WARR21,
	PS_WARR22,
	PS_WARR23,
	PS_WARR24,
	PS_WARR25,
	PS_WARR26,
	PS_WARR27,
	PS_WARR28,
	PS_WARR29,
	PS_WARR30,
	PS_WARR31,
	PS_WARR32,
	PS_WARR33,
	PS_WARR34,
	PS_WARR35,
	PS_WARR36,
	PS_WARR37,
	PS_WARR38,
	PS_WARR39,
	PS_WARR40,
	PS_WARR41,
	PS_WARR42,
	PS_WARR43,
	PS_WARR44,
	PS_WARR45,
	PS_WARR46,
	PS_WARR47,
	PS_WARR48,
	PS_WARR49,
	PS_WARR50,
	PS_WARR51,
	PS_WARR52,
	PS_WARR53,
	PS_WARR54,
	PS_WARR55,
	PS_WARR56,
	PS_WARR57,
	PS_WARR58,
	PS_WARR59,
	PS_WARR60,
	PS_WARR61,
	PS_WARR62,
	PS_WARR63,
	PS_WARR64,
	PS_WARR65,
	PS_WARR66,
	PS_WARR67,
	PS_WARR68,
	PS_WARR69,
	PS_WARR69B,
	PS_WARR70,
	PS_WARR71,
	PS_WARR72,
	PS_WARR73,
	PS_WARR74,
	PS_WARR75,
	PS_WARR76,
	PS_WARR77,
	PS_WARR78,
	PS_WARR79,
	PS_WARR80,
	PS_WARR81,
	PS_WARR82,
	PS_WARR83,
	PS_WARR84,
	PS_WARR85,
	PS_WARR86,
	PS_WARR87,
	PS_WARR88,
	PS_WARR89,
	PS_WARR90,
	PS_WARR91,
	PS_WARR92,
	PS_WARR93,
	PS_WARR94,
	PS_WARR95,
	PS_WARR95B,
	PS_WARR95C,
	PS_WARR95D,
	PS_WARR95E,
	PS_WARR95F,
	PS_WARR96B,
	PS_WARR97,
	PS_WARR98,
	PS_WARR99,
	PS_WARR100,
	PS_WARR101,
	PS_WARR102,
	PS_MONK1,
	PS_MONK2,
	PS_MONK3,
	PS_MONK4,
	PS_MONK5,
	PS_MONK6,
	PS_MONK7,
	PS_MONK8,
	PS_MONK9,
	PS_MONK10,
	PS_MONK11,
	PS_MONK12,
	PS_MONK13,
	PS_MONK14,
	PS_MONK15,
	PS_MONK16,
	PS_MONK17,
	PS_MONK18,
	PS_MONK19,
	PS_MONK20,
	PS_MONK21,
	PS_MONK22,
	PS_MONK23,
	PS_MONK24,
	PS_MONK25,
	PS_MONK26,
	PS_MONK27,
	PS_MONK28,
	PS_MONK29,
	PS_MONK30,
	PS_MONK31,
	PS_MONK32,
	PS_MONK33,
	PS_MONK34,
	PS_MONK35,
	PS_MONK36,
	PS_MONK37,
	PS_MONK38,
	PS_MONK39,
	PS_MONK40,
	PS_MONK41,
	PS_MONK42,
	PS_MONK43,
	PS_MONK44,
	PS_MONK45,
	PS_MONK46,
	PS_MONK47,
	PS_MONK48,
	PS_MONK49,
	PS_MONK50,
	PS_MONK51,
	PS_MONK52,
	PS_MONK53,
	PS_MONK54,
	PS_MONK55,
	PS_MONK56,
	PS_MONK57,
	PS_MONK58,
	PS_MONK59,
	PS_MONK60,
	PS_MONK61,
	PS_MONK62,
	PS_MONK63,
	PS_MONK64,
	PS_MONK65,
	PS_MONK66,
	PS_MONK67,
	PS_MONK68,
	PS_MONK69,
	PS_MONK69B,
	PS_MONK70,
	PS_MONK71,
	PS_MONK72,
	PS_MONK73,
	PS_MONK74,
	PS_MONK75,
	PS_MONK76,
	PS_MONK77,
	PS_MONK78,
	PS_MONK79,
	PS_MONK80,
	PS_MONK81,
	PS_MONK82,
	PS_MONK83,
	PS_MONK84,
	PS_MONK85,
	PS_MONK86,
	PS_MONK87,
	PS_MONK88,
	PS_MONK89,
	PS_MONK90,
	PS_MONK91,
	PS_MONK92,
	PS_MONK93,
	PS_MONK94,
	PS_MONK95,
	PS_MONK96,
	PS_MONK97,
	PS_MONK98,
	PS_MONK99,
	PS_MONK100,
	PS_MONK101,
	PS_MONK102,
	PS_NAR1,
	PS_NAR2,
	PS_NAR3,
	PS_NAR4,
	PS_NAR5,
	PS_NAR6,
	PS_NAR7,
	PS_NAR8,
	PS_NAR9,
	PS_DIABLVLINT,
	USFX_CLEAVER,
	USFX_GARBUD1,
	USFX_GARBUD2,
	USFX_GARBUD3,
	USFX_GARBUD4,
	USFX_IZUAL1,
	USFX_LACH1,
	USFX_LACH2,
	USFX_LACH3,
	USFX_LAZ1,
	USFX_LAZ2,
	USFX_SKING1,
	USFX_SNOT1,
	USFX_SNOT2,
	USFX_SNOT3,
	USFX_WARLRD1,
	USFX_WLOCK1,
	USFX_ZHAR1,
	USFX_ZHAR2,
	USFX_DIABLOD,
	TSFX_FARMER1,
	TSFX_FARMER2,
	TSFX_FARMER2A,
	TSFX_FARMER3,
	TSFX_FARMER4,
	TSFX_FARMER5,
	TSFX_FARMER6,
	TSFX_FARMER7,
	TSFX_FARMER8,
	TSFX_FARMER9,
	TSFX_TEDDYBR1,
	TSFX_TEDDYBR2,
	TSFX_TEDDYBR3,
	TSFX_TEDDYBR4,
	USFX_DEFILER1,
	USFX_DEFILER2,
	USFX_DEFILER3,
	USFX_DEFILER4,
	USFX_DEFILER8,
	USFX_DEFILER6,
	USFX_DEFILER7,
	USFX_NAKRUL1,
	USFX_NAKRUL2,
	USFX_NAKRUL3,
	USFX_NAKRUL4,
	USFX_NAKRUL5,
	USFX_NAKRUL6,
	PS_NARATR3,
	TSFX_COWSUT1,
	TSFX_COWSUT2,
	TSFX_COWSUT3,
	TSFX_COWSUT4,
	TSFX_COWSUT4A,
	TSFX_COWSUT5,
	TSFX_COWSUT6,
	TSFX_COWSUT7,
	TSFX_COWSUT8,
	TSFX_COWSUT9,
	TSFX_COWSUT10,
	TSFX_COWSUT11,
	TSFX_COWSUT12,
	USFX_SKLJRN1,
	PS_NARATR6,
	PS_NARATR7,
	PS_NARATR8,
	PS_NARATR5,
	PS_NARATR9,
	PS_NARATR4,
	TSFX_TRADER1,
	IS_CROPEN,
	IS_CRCLOS,
	SFX_NONE = -1,
};

enum sfx_flag : uint8_t {
	// clang-format off
	sfx_STREAM   = 1 << 0,
	sfx_MISC     = 1 << 1,
	sfx_UI       = 1 << 2,
	sfx_MONK     = 1 << 3,
	sfx_ROGUE    = 1 << 4,
	sfx_WARRIOR  = 1 << 5,
	sfx_SORCERER = 1 << 6,
	sfx_HELLFIRE = 1 << 7,
	// clang-format on
};

struct TSFX {
	uint8_t bFlags;
	const char *pszName;
	TSnd *pSnd;
};

extern int sfxdelay;
extern _sfx_id sfxdnum;

bool effect_is_playing(int nSFX);
void stream_stop();
void InitMonsterSND(int monst);
void FreeMonsterSnd();
bool calc_snd_position(int x, int y, int *plVolume, int *plPan);
void PlayEffect(int i, int mode);
void PlaySFX(_sfx_id psfx);
void PlaySfxLoc(_sfx_id psfx, int x, int y, bool randomizeByCategory = true);
void sound_stop();
void sound_update();
void effects_cleanup_sfx();
void sound_init();
void ui_sound_init();
void effects_play_sound(const char *snd_file);
int GetSFXLength(int nSFX);

} // namespace devilution
