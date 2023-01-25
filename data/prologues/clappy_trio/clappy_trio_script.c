#include "prologues/clappy_trio.h"
#include "bs_ext.h"


  /* PROLOGUE (THE CLAPPY TRIO) - SCRIPT DATA */


extern const struct CompressedGraphics D_08bf2f64;
extern const struct CompressedGraphics D_08bf33cc;
extern const struct CompressedGraphics D_08bf16b4;
extern const Palette prologue_clappy_trio_bg_pal[];
extern const Palette prologue_clappy_trio_obj_pal[];


  //  //  //  GAME ENGINE DATA  //  //  //


// [D_089eb014] Buffered Textures List
const struct CompressedGraphics *const prologue_clappy_trio_buffered_textures[] = {
    END_OF_BUFFERED_TEXTURES_LIST
};

// [D_089eb018] Graphics Table
const struct GraphicsTable prologue_clappy_trio_gfx_table[] = {
    /* BG Tileset */ {
        /* Src.  */ &D_08bf2f64,
        /* Dest. */ BG_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &D_08bf33cc,
        /* Dest. */ BG_MAP_BASE(0xE800),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* OBJ Tileset */ {
        /* Src.  */ &D_08bf16b4,
        /* Dest. */ OBJ_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Palette */ {
        /* Src.  */ prologue_clappy_trio_bg_pal,
        /* Dest. */ BG_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    /* OBJ Palette */ {
        /* Src.  */ prologue_clappy_trio_obj_pal,
        /* Dest. */ OBJ_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    END_OF_GRAPHICS_TABLE
};

// [D_089eb060] Engine Events
const EngineEvent prologue_clappy_trio_engine_events[] = {
    /* 0x00 */ (EngineEvent) func_08045eb8
};

// [D_089eb064] Prologue (The Clappy Trio) Game Engine
const struct GameEngine D_089eb064 = {
    /* Size in Memory */ sizeof(struct PrologueClappyTrioInfo),
    /* Init. Engine   */ func_08045e5c,
    /* Update Engine  */ func_08045ebc,
    /* Stop Engine    */ func_08045ec0,
    /* Cue Index      */ NULL,
    /* Common Events  */ NULL,
    /* Engine Events  */ prologue_clappy_trio_engine_events,
    /* Input Event    */ NULL
};


  //  //  //  SCRIPT  //  //  //


// [D_089eb084] Prologue (The Clappy Trio) BeatScript - Main
const struct BeatScript D_089eb084[] = {
    BS_RIQ_FADE_SCREEN_IN(0x08),
    BS_RIQ_LOAD_GAME_ENGINE(&D_089eb064, 0),
    BS_RUN1(stop_all_soundplayers, 0),
    BS_REST(0x18),
    BS_PLAY_SOUND(&s_jingle_handclap_seqData),
    BS_RUN1(func_08045ec4, 1),
    BS_REST(0x02),
    BS_RUN1(func_08045ec4, 2),
    BS_REST(0x02),
    BS_RUN1(func_08045ec4, 3),
    BS_REST(0x02),
    BS_RUN1(func_08045ec4, 4),
    BS_REST(0x02),
    BS_RUN1(func_08045ec4, 5),
    BS_REST(0x02),
    BS_RUN1(func_08045ec4, 6),
    BS_REST(0x06),
    BS_REST(0x06),
    BS_REST(0x18),
    BS_REST(0x18),
    BS_REST(0x18),
    BS_REST(0x0C),
    BS_REST(0x0C),
    BS_RUN1(func_08006d80, 0),
    BS_REST(0x0C),
    BS_RIQ_FADE_SCREEN_IN(0x10),
    BS_RETURN
};
