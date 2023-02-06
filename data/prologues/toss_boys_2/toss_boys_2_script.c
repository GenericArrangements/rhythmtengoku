#include "prologues/toss_boys_2.h"
#include "bs_ext.h"


  /* PROLOGUE (TOSS BOYS 2) - SCRIPT DATA */


extern const struct CompressedGraphics D_08c2fc5c;
extern const struct CompressedGraphics D_08c30048;
extern const struct CompressedGraphics D_08c2de80;
extern const Palette prologue_toss_boys_2_bg_pal[];
extern const Palette prologue_toss_boys_2_obj_pal[];


  //  //  //  GAME ENGINE DATA  //  //  //


// [D_089ed9ec] Buffered Textures List
const struct CompressedGraphics *const prologue_toss_boys_2_buffered_textures[] = {
    END_OF_BUFFERED_TEXTURES_LIST
};

// [D_089ed9f0] Graphics Table
const struct GraphicsTable prologue_toss_boys_2_gfx_table[] = {
    /* BG Tileset */ {
        /* Src.  */ &D_08c2fc5c,
        /* Dest. */ BG_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &D_08c30048,
        /* Dest. */ BG_MAP_BASE(0xE800),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* OBJ Tileset */ {
        /* Src.  */ &D_08c2de80,
        /* Dest. */ OBJ_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Palette */ {
        /* Src.  */ prologue_toss_boys_2_bg_pal,
        /* Dest. */ BG_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    /* OBJ Palette */ {
        /* Src.  */ prologue_toss_boys_2_obj_pal,
        /* Dest. */ OBJ_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    END_OF_GRAPHICS_TABLE
};

// [D_089eda38] Engine Events
const EngineEvent prologue_toss_boys_2_engine_events[] = {
    /* 0x00 */ (EngineEvent) func_08047aa0
};

// [D_089eda3c] Prologue (Toss Boys 2) Game Engine
const struct GameEngine D_089eda3c = {
    /* Size in Memory */ sizeof(struct PrologueTossBoys2Info),
    /* Start Engine   */ func_08047a44,
    /* Update Engine  */ func_08047aa4,
    /* Stop Engine    */ func_08047aa8,
    /* Cue Index      */ NULL,
    /* Common Events  */ NULL,
    /* Engine Events  */ prologue_toss_boys_2_engine_events,
    /* Input Event    */ NULL
};


  //  //  //  SCRIPT  //  //  //


// [D_089eda5c] Prologue (Toss Boys 2) BeatScript - Main
const struct BeatScript D_089eda5c[] = {
    BS_RIQ_FADE_SCREEN_IN(0x08),
    BS_RIQ_LOAD_GAME_ENGINE(&D_089eda3c, 0),
    BS_RUN1(stop_all_soundplayers, 0),
    BS_PLAY_SOUND(&s_jingle_toss_seqData),
    BS_REST(0x18),
    BS_REST(0x18),
    BS_RUN1(func_08047aac, 1),
    BS_REST(0x06),
    BS_RUN1(func_08047aac, 2),
    BS_REST(0x06),
    BS_RUN1(func_08047aac, 3),
    BS_REST(0x06),
    BS_RUN1(func_08047aac, 4),
    BS_REST(0x06),
    BS_RUN1(func_08047aac, 5),
    BS_REST(0x06),
    BS_RUN1(func_08047aac, 6),
    BS_REST(0x06),
    BS_REST(0x06),
    BS_REST(0x0C),
    BS_REST(0x06),
    BS_REST(0x06),
    BS_REST(0x18),
    BS_REST(0x18),
    BS_REST(0x0C),
    BS_RUN1(func_08006d80, 0),
    BS_REST(0x18),
    BS_RIQ_FADE_SCREEN_IN(0x10),
    BS_RETURN
};