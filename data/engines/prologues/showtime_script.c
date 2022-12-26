#include "engines/prologues/showtime.h"
#include "beatscript_notation.h"


  /* PROLOGUE (SHOWTIME) - SCRIPT DATA */


extern const struct CompressedGraphics D_08bed0ec;
extern const struct CompressedGraphics D_08bed4e4;
extern const struct CompressedGraphics D_08bec134;
extern const Palette prologue_showtime_pal[];


  //  //  //  GAME ENGINE DATA  //  //  //


// [D_089eaadc] Buffered Textures List
const struct CompressedGraphics *const prologue_showtime_buffered_textures[] = {
    END_OF_BUFFERED_TEXTURES_LIST
};

// [D_089eaae0] Graphics Table
const struct GraphicsTable prologue_showtime_gfx_table[] = {
    /* BG Tileset */ {
        /* Src.  */ &D_08bed0ec,
        /* Dest. */ BG_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &D_08bed4e4,
        /* Dest. */ BG_MAP_BASE(0xE800),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* OBJ Tileset */ {
        /* Src.  */ &D_08bec134,
        /* Dest. */ OBJ_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Palette */ {
        /* Src.  */ prologue_showtime_pal,
        /* Dest. */ BG_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    /* OBJ Palette */ {
        /* Src.  */ prologue_showtime_pal,
        /* Dest. */ OBJ_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    END_OF_GRAPHICS_TABLE
};

// [D_089eab28] Engine Events
const EngineEvent prologue_showtime_engine_events[] = {
    /* 0x00 */ (EngineEvent) func_08045a44
};

// [D_089eab2c] Prologue (Showtime) Game Engine
const struct GameEngine D_089eab2c = {
    /* Size in Memory */ sizeof(struct PrologueShowtimeInfo),
    /* Init. Engine   */ func_080459b4,
    /* Update Engine  */ func_08045a48,
    /* Stop Engine    */ func_08045a4c,
    /* Cue Index      */ NULL,
    /* Common Events  */ NULL,
    /* Engine Events  */ prologue_showtime_engine_events,
    /* Input Event    */ NULL
};


  //  //  //  SCRIPT  //  //  //


// [D_089eab4c] Prologue (Showtime) BeatScript - Main
const struct BeatScript D_089eab4c[] = {
    BSC_RUN_FUNC_1(gameplay_set_screen_fade_in_time, 0x8),
    BSC4_LOAD_GAME_ENGINE(&D_089eab2c, 0),
    BSC_RUN_FUNC_1(stop_all_soundplayers, 0),
    BSC_REST(0x18),
    BSC_PLAY_SOUND(&s_jingle_quiz_seqData),
    BSC_REST(0x18),
    BSC_REST(0x18),
    BSC_RUN_FUNC_1(func_08045a50, 5),
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
