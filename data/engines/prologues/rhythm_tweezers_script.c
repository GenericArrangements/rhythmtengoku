#include "engines/prologues/rhythm_tweezers.h"
#include "beatscript_notation.h"


  /* PROLOGUE (RHYTHM TWEEZERS) - SCRIPT DATA */


extern const struct CompressedGraphics D_08beefac;
extern const struct CompressedGraphics D_08bef2ac;
extern const struct CompressedGraphics D_08bee62c;
extern const Palette D_088af784[];
extern const Palette D_088af6e4[];


  //  //  //  GAME ENGINE DATA  //  //  //


// [D_089ead54] Buffered Textures List
const struct CompressedGraphics *const prologue_rhythm_tweezers_buffered_textures[] = {
    END_OF_BUFFERED_TEXTURES_LIST
};

// [D_089ead58] Graphics Table
const struct GraphicsTable prologue_rhythm_tweezers_gfx_table[] = {
    /* BG Tileset */ {
        /* Src.  */ &D_08beefac,
        /* Dest. */ BG_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &D_08bef2ac,
        /* Dest. */ BG_MAP_BASE(0xE800),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* OBJ Tileset */ {
        /* Src.  */ &D_08bee62c,
        /* Dest. */ OBJ_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Palette */ {
        /* Src.  */ D_088af784,
        /* Dest. */ BG_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    /* OBJ Palette */ {
        /* Src.  */ D_088af6e4,
        /* Dest. */ OBJ_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    END_OF_GRAPHICS_TABLE
};

// [D_089eada0] Engine Events
const EngineEvent prologue_rhythm_tweezers_engine_events[] = {
    /* 0x00 */ (EngineEvent) func_08045cb8
};

// [D_089eada4] Prologue (Rhythm Tweezers) Game Engine
const struct GameEngine D_089eada4 = {
    /* Size in Memory */ sizeof(struct PrologueRhythmTweezersInfo),
    /* Init. Engine   */ func_08045c5c,
    /* Update Engine  */ func_08045cbc,
    /* Stop Engine    */ func_08045cc0,
    /* Cue Index      */ NULL,
    /* Common Events  */ NULL,
    /* Engine Events  */ prologue_rhythm_tweezers_engine_events,
    /* Input Event    */ NULL
};


  //  //  //  SCRIPT  //  //  //


// [D_089eadc4] Prologue (Rhythm Tweezers) BeatScript - Main
const struct BeatScript D_089eadc4[] = {
    BSC_RUN_FUNC_1(gameplay_set_screen_fade_in_time, 0x8),
    BSC4_LOAD_GAME_ENGINE(&D_089eada4, 0),
    BSC_RUN_FUNC_1(stop_all_soundplayers, 0),
    BSC_PLAY_SOUND(&s_jingle_datumo_seqData),
    BSC_REST(0x18),
    BSC_REST(0x18),
    BSC_RUN_FUNC_1(func_08045cc4, 5),
    BSC_REST(0x18),
    BSC_REST(0x18),
    BSC_REST(0x18),
    BSC_REST(0x18),
    BSC_REST(0x18),
    BSC_RUN_FUNC_1(func_08006d80, 0),
    BSC_REST(0x18),
    BSC_RUN_FUNC_1(gameplay_set_screen_fade_in_time, 0x10),
    BSC_RETURN
};