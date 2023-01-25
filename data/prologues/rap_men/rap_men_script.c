#include "prologues/rap_men.h"
#include "bs_ext.h"


  /* PROLOGUE (RAP MEN) - SCRIPT DATA */


extern const struct CompressedGraphics D_08c2052c;
extern const struct CompressedGraphics D_08c207cc;
extern const struct CompressedGraphics D_08c1f4b4;
extern const Palette prologue_rap_men_pal[];


  //  //  //  GAME ENGINE DATA  //  //  //


// [D_089ecd44] Buffered Textures List
const struct CompressedGraphics *const prologue_rap_men_buffered_textures[] = {
    END_OF_BUFFERED_TEXTURES_LIST
};

// [D_089ecd48] Graphics Table
const struct GraphicsTable prologue_rap_men_gfx_table[] = {
    /* BG Tileset */ {
        /* Src.  */ &D_08c2052c,
        /* Dest. */ BG_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &D_08c207cc,
        /* Dest. */ BG_MAP_BASE(0xE800),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* OBJ Tileset */ {
        /* Src.  */ &D_08c1f4b4,
        /* Dest. */ OBJ_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Palette */ {
        /* Src.  */ prologue_rap_men_pal,
        /* Dest. */ BG_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    /* OBJ Palette */ {
        /* Src.  */ prologue_rap_men_pal,
        /* Dest. */ OBJ_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    END_OF_GRAPHICS_TABLE
};

// [D_089ecd90] Engine Events
const EngineEvent prologue_rap_men_engine_events[] = {
    /* 0x00 */ (EngineEvent) func_08047028
};

// [D_089ecd94] Prologue (Rap Men) Game Engine
const struct GameEngine D_089ecd94 = {
    /* Size in Memory */ sizeof(struct PrologueRapMenInfo),
    /* Init. Engine   */ func_08046fcc,
    /* Update Engine  */ func_0804702c,
    /* Stop Engine    */ func_08047030,
    /* Cue Index      */ NULL,
    /* Common Events  */ NULL,
    /* Engine Events  */ prologue_rap_men_engine_events,
    /* Input Event    */ NULL
};


  //  //  //  SCRIPT  //  //  //


// [D_089ecdb4] Prologue (Rap Men) BeatScript - Main
const struct BeatScript D_089ecdb4[] = {
    BS_RIQ_FADE_SCREEN_IN(0x08),
    BS_RIQ_LOAD_GAME_ENGINE(&D_089ecd94, 0),
    BS_RUN1(stop_all_soundplayers, 0),
    BS_PLAY_SOUND(&s_jingle_rap_seqData),
    BS_REST(0x18),
    BS_REST(0x18),
    BS_RUN1(func_08047034, 0),
    BS_REST(0x18),
    BS_REST(0x18),
    BS_REST(0x18),
    BS_REST(0x18),
    BS_REST(0x18),
    BS_REST(0x18),
    BS_RUN1(func_08006d80, 0),
    BS_REST(0x18),
    BS_RIQ_FADE_SCREEN_IN(0x10),
    BS_RETURN
};
