#include "engines/prologues/spaceball.h"
#include "beatscript_notation.h"


  /* PROLOGUE (SPACEBALL) - SCRIPT DATA */


extern const struct CompressedGraphics D_08be2fd8;
extern const struct CompressedGraphics D_08be3398;
extern const struct CompressedGraphics D_08be2298;
extern const Palette D_088ad464[];
extern const Palette D_088ad424[];


  //  //  //  GAME ENGINE DATA  //  //  //


// [D_089ea26c] Buffered Textures List
const struct CompressedGraphics *const prologue_spaceball_buffered_textures[] = {
    END_OF_BUFFERED_TEXTURES_LIST
};

// [D_089ea270] Graphics Table
const struct GraphicsTable prologue_spaceball_gfx_table[] = {
    /* BG Tileset */ {
        /* Src.  */ &D_08be2fd8,
        /* Dest. */ BG_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &D_08be3398,
        /* Dest. */ BG_MAP_BASE(0xE800),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* OBJ Tileset */ {
        /* Src.  */ &D_08be2298,
        /* Dest. */ OBJ_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Palette */ {
        /* Src.  */ D_088ad464,
        /* Dest. */ BG_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    /* OBJ Palette */ {
        /* Src.  */ D_088ad424,
        /* Dest. */ OBJ_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    END_OF_GRAPHICS_TABLE
};

// [D_089ea2b8] Engine Events
const EngineEvent prologue_spaceball_engine_events[] = {
    /* 0x00 */ (EngineEvent) func_080452d4
};

// [D_089ea2bc] Prologue (Spaceball) Game Engine
const struct GameEngine D_089ea2bc = {
    /* Size in Memory */ sizeof(struct PrologueSpaceballInfo),
    /* Init. Engine   */ func_08045278,
    /* Update Engine  */ func_080452d8,
    /* Stop Engine    */ func_080452dc,
    /* Cue Index      */ NULL,
    /* Common Events  */ NULL,
    /* Engine Events  */ prologue_spaceball_engine_events,
    /* Input Event    */ NULL
};


  //  //  //  SCRIPT  //  //  //


// [D_089ea2dc] Prologue (Spaceball) BeatScript - Main
const struct BeatScript D_089ea2dc[] = {
    BSC_RUN_FUNC_1(func_08017568, 0x8),
    BSC4_LOAD_GAME_ENGINE(&D_089ea2bc, 0),
    BSC_RUN_FUNC_1(func_08002838, 0),
    BSC_PLAY_SOUND(&s_jingle_baseball_seqData),
    BSC_REST(0x18),
    BSC_REST(0x18),
    BSC_RUN_FUNC_1(func_080452e0, 1),
    BSC_REST(0x02),
    BSC_RUN_FUNC_1(func_080452e0, 2),
    BSC_REST(0x02),
    BSC_RUN_FUNC_1(func_080452e0, 3),
    BSC_REST(0x02),
    BSC_RUN_FUNC_1(func_080452e0, 4),
    BSC_REST(0x06),
    BSC_REST(0x06),
    BSC_REST(0x18),
    BSC_REST(0x18),
    BSC_REST(0x0C),
    BSC_RUN_FUNC_1(func_08006d80, 0),
    BSC_REST(0x18),
    BSC_RUN_FUNC_1(func_08017568, 0x10),
    BSC_RETURN
};