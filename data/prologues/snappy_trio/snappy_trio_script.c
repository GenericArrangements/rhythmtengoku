#include "prologues/snappy_trio.h"
#include "bs_ext.h"


  /* PROLOGUE (THE SNAPPY TRIO) - SCRIPT DATA */


extern const struct CompressedGraphics D_08bf5ce8;
extern const struct CompressedGraphics D_08bf60c8;
extern const struct CompressedGraphics D_08bf374c;
extern const Palette prologue_snappy_trio_pal[];


  //  //  //  GAME ENGINE DATA  //  //  //


// [D_089eb1c8] Buffered Textures List
const struct CompressedGraphics *const prologue_snappy_trio_buffered_textures[] = {
    END_OF_BUFFERED_TEXTURES_LIST
};

// [D_089eb1cc] Graphics Table
const struct GraphicsTable prologue_snappy_trio_gfx_table[] = {
    /* BG Tileset */ {
        /* Src.  */ &D_08bf5ce8,
        /* Dest. */ BG_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &D_08bf60c8,
        /* Dest. */ BG_MAP_BASE(0xE800),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* OBJ Tileset */ {
        /* Src.  */ &D_08bf374c,
        /* Dest. */ OBJ_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Palette */ {
        /* Src.  */ prologue_snappy_trio_pal,
        /* Dest. */ BG_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    /* OBJ Palette */ {
        /* Src.  */ prologue_snappy_trio_pal,
        /* Dest. */ OBJ_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    END_OF_GRAPHICS_TABLE
};

// [D_089eb214] Engine Events
const EngineEvent prologue_snappy_trio_engine_events[] = {
    /* 0x00 */ (EngineEvent) func_08045fb4
};

// [D_089eb218] Prologue (The Snappy Trio) Game Engine
const struct GameEngine D_089eb218 = {
    /* Size in Memory */ sizeof(struct PrologueSnappyTrioInfo),
    /* Start Engine   */ func_08045f58,
    /* Update Engine  */ func_08045fb8,
    /* Stop Engine    */ func_08045fbc,
    /* Cue Index      */ NULL,
    /* Common Events  */ NULL,
    /* Engine Events  */ prologue_snappy_trio_engine_events,
    /* Input Event    */ NULL
};


  //  //  //  SCRIPT  //  //  //


// [D_089eb238] Prologue (The Snappy Trio) BeatScript - Main
const struct BeatScript D_089eb238[] = {
    BS_RIQ_FADE_SCREEN_IN(0x08),
    BS_RIQ_LOAD_GAME_ENGINE(&D_089eb218, 0),
    BS_RUN1(stop_all_soundplayers, 0),
    BS_REST(0x18),
    BS_PLAY_SOUND(&s_jingle_handclap_seqData),
    BS_RUN1(func_08045fc0, 1),
    BS_REST(0x02),
    BS_RUN1(func_08045fc0, 2),
    BS_REST(0x02),
    BS_RUN1(func_08045fc0, 3),
    BS_REST(0x02),
    BS_RUN1(func_08045fc0, 4),
    BS_REST(0x02),
    BS_RUN1(func_08045fc0, 5),
    BS_REST(0x02),
    BS_RUN1(func_08045fc0, 6),
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