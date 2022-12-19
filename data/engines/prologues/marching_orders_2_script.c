#include "engines/prologues/marching_orders_2.h"
#include "beatscript_notation.h"


  /* PROLOGUE (MARCHING ORDERS 2) - SCRIPT DATA */


extern const struct CompressedGraphics D_08bff238;
extern const struct CompressedGraphics D_08bff704;
extern const struct CompressedGraphics D_08bfc8f4;
extern const Palette D_088b0c78[];
extern const Palette D_088b0c38[];


  //  //  //  GAME ENGINE DATA  //  //  //


// [D_089eb814] Buffered Textures List
const struct CompressedGraphics *const prologue_marching_orders_2_buffered_textures[] = {
    END_OF_BUFFERED_TEXTURES_LIST
};

// [D_089eb818] Graphics Table
const struct GraphicsTable prologue_marching_orders_2_gfx_table[] = {
    /* BG Tileset */ {
        /* Src.  */ &D_08bff238,
        /* Dest. */ BG_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &D_08bff704,
        /* Dest. */ BG_MAP_BASE(0xE800),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* OBJ Tileset */ {
        /* Src.  */ &D_08bfc8f4,
        /* Dest. */ OBJ_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Palette */ {
        /* Src.  */ D_088b0c78,
        /* Dest. */ BG_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    /* OBJ Palette */ {
        /* Src.  */ D_088b0c38,
        /* Dest. */ OBJ_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    END_OF_GRAPHICS_TABLE
};

// [D_089eb860] Engine Events
const EngineEvent prologue_marching_orders_2_engine_events[] = {
    /* 0x00 */ (EngineEvent) func_080463fc
};

// [D_089eb864] Prologue (Marching Orders 2) Game Engine
const struct GameEngine D_089eb864 = {
    /* Size in Memory */ sizeof(struct PrologueMarchingOrders2Info),
    /* Init. Engine   */ func_080463a0,
    /* Update Engine  */ func_08046400,
    /* Stop Engine    */ func_08046404,
    /* Cue Index      */ NULL,
    /* Common Events  */ NULL,
    /* Engine Events  */ prologue_marching_orders_2_engine_events,
    /* Input Event    */ NULL
};


  //  //  //  SCRIPT  //  //  //


// [D_089eb884] Prologue (Marching Orders 2) BeatScript - Main
const struct BeatScript D_089eb884[] = {
    BSC_RUN_FUNC_1(gameplay_set_screen_fade_in_time, 0x8),
    BSC4_LOAD_GAME_ENGINE(&D_089eb864, 0),
    BSC_RUN_FUNC_1(stop_all_soundplayers, 0),
    BSC_REST(0x18),
    BSC_PLAY_SOUND(&s_jingle_march_seqData),
    BSC_RUN_FUNC_1(func_08046408, 1),
    BSC_REST(0x0C),
    BSC_RUN_FUNC_1(func_08046408, 2),
    BSC_REST(0x0C),
    BSC_RUN_FUNC_1(func_08046408, 3),
    BSC_REST(0x0C),
    BSC_RUN_FUNC_1(func_08046408, 4),
    BSC_REST(0x0C),
    BSC_RUN_FUNC_1(func_08046408, 5),
    BSC_REST(0x0C),
    BSC_RUN_FUNC_1(func_08046408, 6),
    BSC_REST(0x0C),
    BSC_RUN_FUNC_1(func_08046408, 7),
    BSC_REST(0x0C),
    BSC_REST(0x0C),
    BSC_REST(0x18),
    BSC_REST(0x0C),
    BSC_RUN_FUNC_1(func_08006d80, 0),
    BSC_REST(0x0C),
    BSC_RUN_FUNC_1(gameplay_set_screen_fade_in_time, 0x10),
    BSC_RETURN
};