#pragma once

#include "global.h"
#include "engines.h"


struct SneakySpiritsInfo {
    struct TextObject1 *unk0;  // Pointer: Font? (Related to Tutorial Text)
    u8  version;        // Value:   Version
    u8  rainSlow;       // Flag:    Slow-Motion Rain
    s16 rainDrops[30];      // Sprite:  Raindrops
    u16 rainDropNext;       // Counter: Next Raindrop to Update
    s16 rainSplashes[20];   // Sprite:  Rain Splashes
    u16 rainSplashNext;     // Counter: Next Rain Splash to Update
    s16 tree;           // Sprite:  Tree
    s16 bow;            // Sprite:  Bow
    u8  arrowReady;     // Flag:    Bow Has Arrow
    s16 door;           // Sprite:  Door
    s16 backWall;       // Sprite:  Back Wall
    s16 ghostWalk;      // Sprite:  Sneaky Spirit (Moving)
    u16 maxSteps;       // Const:   7 (total number of horizontal positions the ghost can appear)
    s16 ghostMask;      // Sprite:  Wall Mask (used to hide the Sneaky Spirit when moving low)
    s16 ghostHit;       // Sprite:  Sneaky Spirit (Hit)
    u16 ghostHeight;    // Value:   Sneaky Spirit Height of Next Motion { Default = 0x100 }
    struct SoundPlayer *rainChannel; // Pointer: Audio Channel Playing Wind/Rain SFX
    s16 text;           // Sprite:  Tutorial Text
    u8  slowMotionHit;  // Flag:    Slow-Motion Effect On Hit
    u8  freezeRain;     // Flag:    Freeze Slow-Motion Rain
    s16 tutorialGhost;  // Sprite:  Sneaky Spirit (Tutorial Example)
};


// Engine Macros/Enums:
enum SneakySpiritsVersionsEnum {
    SNEAKY_SPIRITS_VERSION_1,
    SNEAKY_SPIRITS_VERSION_REMIX,
    SNEAKY_SPIRITS_VERSION_2
};

// OAM Animations:
extern const struct Animation sneaky_spirits_anim00[]; // Animation: "bow_draw"
extern const struct Animation sneaky_spirits_anim01[]; // Animation: "ghost_hit"
extern const struct Animation sneaky_spirits_anim02[]; // Animation: "door_back_wall"
extern const struct Animation sneaky_spirits_anim03[]; // Animation: "door_open"
extern const struct Animation sneaky_spirits_anim05[]; // Animation: "ghost_miss_taunt"
extern const struct Animation sneaky_spirits_anim06[]; // Animation: "arrow_miss"
extern const struct Animation sneaky_spirits_anim07[]; // Animation: "ghost_barely_scared"
extern const struct Animation sneaky_spirits_anim08[]; // Animation: "tree"
extern const struct Animation sneaky_spirits_anim10[]; // Animation: "ghost_walk"
extern const struct Animation sneaky_spirits_anim11[]; // Animation: "ghost_miss_dash"
extern const struct Animation sneaky_spirits_anim12[]; // Animation: "rain_fall"
extern const struct Animation sneaky_spirits_anim13[]; // Animation: "rain_splash"
extern const struct Animation sneaky_spirits_anim14[]; // Animation: "rain_fall_slow"
extern const struct Animation sneaky_spirits_anim15[]; // Animation: "bow_shoot"
extern const struct Animation sneaky_spirits_anim16[]; // Animation: "ghost_mask" (might be masking)
extern const struct Animation sneaky_spirits_anim17[]; // Animation: "ghost_barely_run"
extern const struct Animation sneaky_spirits_anim18[]; // Animation: "arrow_hit"
extern const struct Animation sneaky_spirits_anim19[]; // Animation: "ghost_dash_tutorial"

// Palettes:

// Sound Effects:
extern const struct SequenceData s_ghost_rain_seqData;           // Sound: Wind/Rain
extern const struct SequenceData s_ghost_gosha_seqData;          // Sound: Arrow Missed
extern const struct SequenceData s_ghost_walk_seqData;           // Sound: Ghost Moving
extern const struct SequenceData s_f_aim_just_hit_seqData;       // Sound: Ghost Hit
extern const struct SequenceData s_f_aim_just_hit_voice_seqData; // Sound: Ghost Hit Voice
extern const struct SequenceData s_ghost_miss_hit_seqData;       // Sound: Ghost Barely
extern const struct SequenceData s_ghost_dash_seqData;           // Sound: Ghost Miss
extern const struct SequenceData s_ghost_warai_seqData;          // Sound: Ghost Miss Voice

// Engine Data:
extern char D_08059f90[];   // Empty Default Text

// Engine Definition Data:
extern const struct CompressedGraphics *const sneaky_spirits_buffered_textures[]; // Buffered Textures List
extern const struct GraphicsTable *const sneaky_spirits_gfx_tables[]; // Graphics Table

// Functions:
extern void func_0801ee98(u32);     // [func_0801ee98] ENGINE Func_00 - Appear At Position
extern void func_0801ef70(void);    // [func_0801ef70] Initialise Rain
extern void func_0801f040(void);    // [func_0801f040] Update Rain
extern void func_0801f17c(void);    // [func_0801f17c] Update Rain If Not In Slow-Motion
extern void func_0801f194(u32);     // [func_0801f194] Set Rain Speed
extern void func_0801f30c(u32);     // [func_0801f30c] ENGINE Func_06 - Set Rain Speed (Tutorial)
extern void func_0801f318(u32);     // [func_0801f318] ENGINE Func_07 - Freeze Slow-Motion Rain (Tutorial)
extern void func_0801f328(void);    // [func_0801f328] GFX_INIT Func_02
extern void func_0801f338(void);    // [func_0801f338] GFX_INIT Func_01
extern void func_0801f378(void);    // [func_0801f378] GFX_INIT Func_00
extern void func_0801f3a4(u32);     // [func_0801f3a4] MAIN - Init
extern void func_0801f5bc(void);    // [func_0801f5bc] ENGINE Func_0A - STUB
extern void func_0801f5c0(u32);     // [func_0801f5c0] ENGINE Func_01 - Next Vertical Position
extern void func_0801f5f4(void);    // [func_0801f5f4] ENGINE Func_02 - Bow Appear
extern void func_0801f638(void);    // [func_0801f638] ENGINE Func_03 - Draw Bow
extern void func_0801f684(u32);     // [func_0801f684] ENGINE Func_04 - Play Wind/Rain SFX
extern void func_0801f6d0(void);    // [func_0801f6d0] Cross-Fade Music and Wind/Rain SFX
extern void func_0801f71c(char *);  // [func_0801f71c] ENGINE Func_05 - Display Text (Tutorial)
extern void func_0801f76c(u32);     // [func_0801f76c] ENGINE Func_08 - Display Dashing Sneaky Spirit (Tutorial)
extern void func_0801f794(u32);     // [func_0801f794] ENGINE Func_09 - Animate Dashing Sneaky Spirit (Tutorial)
extern void func_0801f7bc(void);    // [func_0801f7bc] MAIN - Update
extern void func_0801f7cc(void);    // [func_0801f7cc] MAIN - Close
extern void func_0801f7e8(struct Cue *, struct SneakySpiritsCue *, u32); // [func_0801f7e8] CUE - Spawn
extern u32  func_0801f7f0(struct Cue *, struct SneakySpiritsCue *, u32, u32); // [func_0801f7f0] CUE - Update
extern void func_0801f80c(struct Cue *, struct SneakySpiritsCue *); // [func_0801f80c] CUE - Despawn (STUB)
extern void func_0801f810(void);    // [func_0801f810] Revert Slow-Motion Effects
extern void func_0801f8d0(struct Cue *, struct SneakySpiritsCue *, u32, u32); // [func_0801f8d0] CUE - Hit
extern void func_0801fa4c(struct Cue *, struct SneakySpiritsCue *, u32, u32); // [func_0801fa4c] CUE - Barely
extern void func_0801fb14(struct Cue *, struct SneakySpiritsCue *, u32, u32); // [func_0801fb14] CUE - Miss
extern void func_0801fbb0(u32, u32); // [func_0801fbb0] MAIN - Input Event
extern void func_0801fc3c(void);    // [func_0801fc3c] COMMON Func_00 - STUB
extern void func_0801fc40(void);    // [func_0801fc40] COMMON Func_01 - STUB
