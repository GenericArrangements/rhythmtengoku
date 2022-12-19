#include "engines/prologues/remix5.h"
#include "beatscript_notation.h"


  /* PROLOGUE (REMIX 5) - SCRIPT DATA */


extern const struct CompressedGraphics D_08c127e4;
extern const struct CompressedGraphics D_08c12cfc;
extern const struct CompressedGraphics D_08c0e864;
extern const Palette D_088b2834[];


  //  //  //  GAME ENGINE DATA  //  //  //


// [D_089ec3e8] Buffered Textures List
const struct CompressedGraphics *const prologue_remix5_buffered_textures[] = {
    END_OF_BUFFERED_TEXTURES_LIST
};

// [D_089ec3ec] Graphics Table
const struct GraphicsTable prologue_remix5_gfx_table[] = {
    /* BG Tileset */ {
        /* Src.  */ &D_08c127e4,
        /* Dest. */ BG_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &D_08c12cfc,
        /* Dest. */ BG_MAP_BASE(0xE800),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* OBJ Tileset */ {
        /* Src.  */ &D_08c0e864,
        /* Dest. */ OBJ_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Palette */ {
        /* Src.  */ D_088b2834,
        /* Dest. */ BG_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    /* OBJ Palette */ {
        /* Src.  */ D_088b2834,
        /* Dest. */ OBJ_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    END_OF_GRAPHICS_TABLE
};

// [D_089ec434] Engine Events
const EngineEvent prologue_remix5_engine_events[] = {
    /* 0x00 */ (EngineEvent) func_08046ae4
};

// [D_089ec438] Prologue (Remix 5) Game Engine
const struct GameEngine D_089ec438 = {
    /* Size in Memory */ sizeof(struct PrologueRemix5Info),
    /* Init. Engine   */ func_08046a88,
    /* Update Engine  */ func_08046ae8,
    /* Stop Engine    */ func_08046aec,
    /* Cue Index      */ NULL,
    /* Common Events  */ NULL,
    /* Engine Events  */ prologue_remix5_engine_events,
    /* Input Event    */ NULL
};


  //  //  //  SCRIPT  //  //  //


// [D_089ec458] Prologue (Remix 5) BeatScript - Main
const struct BeatScript D_089ec458[] = {
    BSC_RUN_FUNC_1(gameplay_set_screen_fade_in_time, 0x8),
    BSC4_LOAD_GAME_ENGINE(&D_089ec438, 0),
    BSC_RUN_FUNC_1(stop_all_soundplayers, 0),
    BSC_REST(0x18),
    BSC_PLAY_SOUND(&s_jingle_remix_seqData),
    BSC_REST(0x18),
    BSC_REST(0x18),
    BSC_RUN_FUNC_1(func_08046af0, 1),
    BSC_REST(0x02),
    BSC_RUN_FUNC_1(func_08046af0, 2),
    BSC_REST(0x02),
    BSC_RUN_FUNC_1(func_08046af0, 3),
    BSC_REST(0x02),
    BSC_RUN_FUNC_1(func_08046af0, 4),
    BSC_REST(0x02),
    BSC_RUN_FUNC_1(func_08046af0, 5),
    BSC_REST(0x02),
    BSC_RUN_FUNC_1(func_08046af0, 6),
    BSC_REST(0x06),
    BSC_REST(0x06),
    BSC_REST(0x18),
    BSC_REST(0x18),
    BSC_REST(0x0C),
    BSC_PLAY_SOUND(&s_f_scratch_seqData),
    BSC_REST(0x06),
    BSC_RUN_FUNC_1(func_08006d80, 0),
    BSC_REST(0x12),
    BSC_REST(0x18),
    BSC_RUN_FUNC_1(gameplay_set_screen_fade_in_time, 0x10),
    BSC_RETURN
};