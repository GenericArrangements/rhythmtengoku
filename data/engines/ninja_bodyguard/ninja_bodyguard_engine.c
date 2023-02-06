#include "engines/ninja_bodyguard.h"


  /* NINJA BODYGUARD - GAME ENGINE DATA */


extern const struct Animation anim_feudal_lord_blink[];
extern const struct Animation anim_girlfriend_blink[];
extern const struct Animation anim_feudal_lord_scared[];
extern const struct Animation anim_girlfriend_scared[];
extern const struct Animation anim_feudal_lord_shaking[];
extern const struct Animation anim_girlfriend_shaking[];
extern const struct Animation anim_feudal_lord_walk[];
extern const struct Animation anim_girlfriend_walk[];
extern const struct Animation anim_ninja1_heart_eyes[];
extern const struct Animation anim_ninja2_heart_eyes[];
extern const struct Animation anim_archer_draw_bow[];
extern const struct Animation anim_bad_guy_draw_slingshot[];
extern const struct Animation anim_ninja1_arrow_to_wall[];
extern const struct Animation anim_ninja2_rock_to_wall[];
extern const struct Animation anim_ninja1_arrow_in_wall1[];
extern const struct Animation anim_ninja2_rock_in_wall1[];
extern const struct Animation anim_ninja1_arrow_in_wall2[];
extern const struct Animation anim_ninja2_rock_in_wall2[];
extern const struct Animation anim_ninja1_arrow_in_wall3[];
extern const struct Animation anim_ninja2_rock_in_wall3[];
extern const struct Animation anim_ninja1_arrow_deflect_l[];
extern const struct Animation anim_ninja2_rock_deflect_l[];
extern const struct Animation anim_ninja1_arrow_deflect_r[];
extern const struct Animation anim_ninja2_rock_deflect_r[];
extern const struct Animation anim_archer_release_bow[];
extern const struct Animation anim_bad_guy_release_slingshot[];
extern const struct Animation anim_ninja1_arrow_pieces[];
extern const struct Animation anim_ninja2_rock_pieces[];
extern const struct Animation anim_ninja1_arrow_to_ninja[];
extern const struct Animation anim_ninja2_rock_to_tanaka[];
extern const struct Animation anim_ninja_swing_r[];
extern const struct Animation anim_tanaka_swing_r[];
extern const struct Animation anim_ninja_swing_l[];
extern const struct Animation anim_tanaka_swing_l[];
extern const struct Animation anim_ninja_slice_r[];
extern const struct Animation anim_tanaka_slice_r[];
extern const struct Animation anim_ninja_slice_l[];
extern const struct Animation anim_tanaka_slice_l[];
extern const struct Animation anim_ninja_appear[];
extern const struct Animation anim_tanaka_appear[];
extern const struct Animation anim_ninja_raise_sword[];
extern const struct Animation anim_tanaka_raise_stick[];
extern const struct Animation anim_ninja1_button_indicators[];
extern const struct Animation anim_ninja2_button_indicators[];
extern const struct Animation anim_ninja1_cutscene_arrow[];
extern const struct Animation anim_ninja2_cutscene_rock[];

extern const struct CompressedGraphics D_08cde4e0;
extern const struct CompressedGraphics D_08ce015c;
extern const struct CompressedGraphics D_08cdd9d4;
extern const struct CompressedGraphics D_08cdfc38;
extern const struct CompressedGraphics D_08cdfd48;
extern const struct CompressedGraphics D_08cdfaa4;
extern const struct CompressedGraphics D_08d1e358;
extern const struct CompressedGraphics D_08d1fab0;
extern const struct CompressedGraphics D_08d1fb70;
extern const struct CompressedGraphics D_08d1f700;

extern const Palette ninja_bg_pal[];
extern const Palette ninja_obj_pal[];
extern const Palette ninja2_bg_pal[];
extern const Palette ninja2_obj_pal[];


  //  //  //  GRAPHICS DATA  //  //  //


// [D_089e68b8] All Animations
const struct Animation *const ninja_anim[][2] = {
    /* 0x00 */ { anim_feudal_lord_blink, anim_girlfriend_blink },
    /* 0x01 */ { anim_feudal_lord_scared, anim_girlfriend_scared },
    /* 0x02 */ { anim_feudal_lord_shaking, anim_girlfriend_shaking },
    /* 0x03 */ { anim_feudal_lord_walk, anim_girlfriend_walk },
    /* 0x04 */ { anim_ninja1_heart_eyes, anim_ninja2_heart_eyes },
    /* 0x05 */ { anim_archer_draw_bow, anim_bad_guy_draw_slingshot },
    /* 0x06 */ { anim_ninja1_arrow_to_wall, anim_ninja2_rock_to_wall },
    /* 0x07 */ { anim_ninja1_arrow_in_wall1, anim_ninja2_rock_in_wall1 },
    /* 0x08 */ { anim_ninja1_arrow_in_wall2, anim_ninja2_rock_in_wall2 },
    /* 0x09 */ { anim_ninja1_arrow_in_wall3, anim_ninja2_rock_in_wall3 },
    /* 0x0A */ { anim_ninja1_arrow_deflect_l, anim_ninja2_rock_deflect_l },
    /* 0x0B */ { anim_ninja1_arrow_deflect_r, anim_ninja2_rock_deflect_r },
    /* 0x0C */ { anim_archer_release_bow, anim_bad_guy_release_slingshot },
    /* 0x0D */ { anim_ninja1_arrow_pieces, anim_ninja2_rock_pieces },
    /* 0x0E */ { anim_ninja1_arrow_to_ninja, anim_ninja2_rock_to_tanaka },
    /* 0x0F */ { anim_ninja_swing_r, anim_tanaka_swing_r },
    /* 0x10 */ { anim_ninja_swing_l, anim_tanaka_swing_l },
    /* 0x11 */ { anim_ninja_slice_r, anim_tanaka_slice_r },
    /* 0x12 */ { anim_ninja_slice_l, anim_tanaka_slice_l },
    /* 0x13 */ { anim_ninja_appear, anim_tanaka_appear },
    /* 0x14 */ { anim_ninja_raise_sword, anim_tanaka_raise_stick },
    /* 0x15 */ { anim_ninja1_button_indicators, anim_ninja2_button_indicators },
    /* 0x16 */ { anim_ninja1_cutscene_arrow, anim_ninja2_cutscene_rock }
};

// [D_089e6970] Animation Table
const struct Animation *const *const ninja_anim_table[] = {
    /* 0x00 */ ninja_anim[0],
    /* 0x01 */ ninja_anim[1],
    /* 0x02 */ ninja_anim[2],
    /* 0x03 */ ninja_anim[3],
    /* 0x04 */ ninja_anim[4],
    /* 0x05 */ ninja_anim[5],
    /* 0x06 */ ninja_anim[6],
    /* 0x07 */ ninja_anim[7],
    /* 0x08 */ ninja_anim[8],
    /* 0x09 */ ninja_anim[9],
    /* 0x0A */ ninja_anim[10],
    /* 0x0B */ ninja_anim[11],
    /* 0x0C */ ninja_anim[12],
    /* 0x0D */ ninja_anim[13],
    /* 0x0E */ ninja_anim[14],
    /* 0x0F */ ninja_anim[15],
    /* 0x10 */ ninja_anim[16],
    /* 0x11 */ ninja_anim[17],
    /* 0x12 */ ninja_anim[18],
    /* 0x13 */ ninja_anim[19],
    /* 0x14 */ ninja_anim[20],
    /* 0x15 */ ninja_anim[21],
    /* 0x16 */ ninja_anim[22]
};

// [D_089e69cc] ?
const struct SpriteVector3 D_089e69cc[] = {
    /* 0x00 */ { 118, 70, 0x486e },
    /* 0x01 */ { 149, 68, 0x485a },
    /* 0x02 */ { 150, 96, 0x485a },
    /* 0x03 */ { 120, 91, 0x486e }
};

// [D_089e69ec] Buffered Textures List
const struct CompressedGraphics *const ninja_buffered_textures[] = {
    END_OF_BUFFERED_TEXTURES_LIST
};

// [D_089e69f0] Graphics Table (Ninja Bodyguard)
const struct GraphicsTable ninja1_gfx_table[] = {
    /* BG Tileset */ {
        /* Src.  */ &D_08cde4e0,
        /* Dest. */ BG_TILESET_BASE(0x8000),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &D_08ce015c,
        /* Dest. */ BG_MAP_BASE(0xE000),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Tileset */ {
        /* Src.  */ &D_08cdd9d4,
        /* Dest. */ BG_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &D_08cdfc38,
        /* Dest. */ BG_MAP_BASE(0xE800),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &D_08cdfd48,
        /* Dest. */ BG_MAP_BASE(0xF000),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* OBJ Tileset */ {
        /* Src.  */ &D_08cdfaa4,
        /* Dest. */ OBJ_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Palette */ {
        /* Src.  */ ninja_bg_pal,
        /* Dest. */ BG_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    /* OBJ Palette */ {
        /* Src.  */ ninja_obj_pal,
        /* Dest. */ OBJ_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    END_OF_GRAPHICS_TABLE
};

// [D_089e6a5c] Graphics Table (Ninja Bodyguard 2)
const struct GraphicsTable ninja2_gfx_table[] = {
    /* BG Tileset */ {
        /* Src.  */ &D_08d1e358,
        /* Dest. */ BG_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &D_08d1fab0,
        /* Dest. */ BG_MAP_BASE(0xE800),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &D_08d1fb70,
        /* Dest. */ BG_MAP_BASE(0xF000),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* OBJ Tileset */ {
        /* Src.  */ &D_08d1f700,
        /* Dest. */ OBJ_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Palette */ {
        /* Src.  */ ninja2_bg_pal,
        /* Dest. */ BG_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    /* OBJ Palette */ {
        /* Src.  */ ninja2_obj_pal,
        /* Dest. */ OBJ_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    END_OF_GRAPHICS_TABLE
};

// [D_089e6ab0] Graphics Table Index
const struct GraphicsTable *const ninja_gfx_tables[] = {
    /* 0x00 */ ninja1_gfx_table,
    /* 0x01 */ ninja2_gfx_table
};


  //  //  //  CUE DATA  //  //  //


// [D_089e6ab8] Cue 00 (Default)
const struct CueDefinition ninja_cue_default = {
    /* Unknown Param.  */ 0,
    /* Input Buttons   */ PRESS_BUTTON(A_BUTTON | DPAD_RIGHT | DPAD_LEFT | DPAD_UP | DPAD_DOWN),
    /* Total Duration  */ 0x18,
    /* Hit Window      */ -0x03, 0x03,
    /* Barely Window   */ -0x08, 0x05,
    /* Tempo-Dependent */ FALSE,
    /* Force-Delete    */ FALSE,
    /* Size in Memory  */ 0x4,
    /* Func. Spawn     */ ninja_cue_spawn,
    /* Spawn Parameter */ 0,
    /* Func. Update    */ ninja_cue_update,
    /* Func. Despawn   */ ninja_cue_despawn,
    /* Func. Hit       */ ninja_cue_hit,
    /* Func. Barely    */ ninja_cue_barely,
    /* Func. Miss      */ ninja_cue_miss,
    /* SFX Spawn       */ NULL,
    /* SFX Hit         */ NULL,
    /* SFX Barely      */ NULL,
    /* SFX Miss        */ NULL,
    /* Miss Condition  */ NULL
};

// [D_089e6af8] Cue Definition Index
const struct CueDefinition *const ninja_cue_index[] = {
    /* 0x00 */ &ninja_cue_default,
    /* 0x01 */ NULL,
    /* 0x02 */ NULL,
    /* 0x03 */ NULL,
    /* 0x04 */ NULL,
    /* 0x05 */ NULL,
    /* 0x06 */ NULL,
    /* 0x07 */ NULL,
    /* 0x08 */ NULL,
    /* 0x09 */ NULL,
    /* 0x0A */ NULL,
    /* 0x0B */ NULL,
    END_OF_CUE_INDEX
};


  //  //  //  GAME ENGINE DATA  //  //  //


// [D_089e6b2c] Common Events
const EngineEvent ninja_common_events[] = {
    /* BEAT_ANIMATION */ (EngineEvent) ninja_common_beat_animation,
    /* DISPLAY_TEXT   */ (EngineEvent) ninja_common_display_text,
    /* INIT_TUTORIAL  */ // None
    END_OF_COMMON_EVENT_LIST
};

// [D_089e6b38] Engine Events
const EngineEvent ninja_engine_events[] = {
    /* 0x00 */ (EngineEvent) func_0803c9f8,
    /* 0x01 */ (EngineEvent) func_0803ca8c,
    /* 0x02 */ (EngineEvent) func_0803cad0,
    /* 0x03 */ (EngineEvent) func_0803c5cc,
    /* 0x04 */ (EngineEvent) func_0803c5f8,
    /* 0x05 */ (EngineEvent) func_0803c638,
    /* 0x06 */ (EngineEvent) func_0803c960,
    /* 0x07 */ (EngineEvent) func_0803bf74,
    /* 0x08 */ (EngineEvent) func_0803c034,
    /* 0x09 */ (EngineEvent) func_0803c08c,
    /* 0x0A */ (EngineEvent) func_0803cb0c,
    /* 0x0B */ (EngineEvent) func_0803c2b8,
    /* 0x0C */ (EngineEvent) func_0803c400,
    /* 0x0D */ (EngineEvent) func_0803c6fc,
    /* 0x0E */ (EngineEvent) func_0803ccb4,
    /* 0x0F */ (EngineEvent) func_0803cce0,
    /* 0x10 */ (EngineEvent) func_0803be04,
    /* 0x11 */ (EngineEvent) func_0803be88,
    /* 0x12 */ (EngineEvent) ninja_engine_event_stub
};

// [D_089e6b84] Ninja Bodyguard Game Engine
const struct GameEngine D_089e6b84 = {
    /* Size in Memory */ 0x300,
    /* Start Engine   */ ninja_engine_start,
    /* Update Engine  */ ninja_engine_update,
    /* Stop Engine    */ ninja_engine_stop,
    /* Cue Index      */ ninja_cue_index,
    /* Common Events  */ ninja_common_events,
    /* Engine Events  */ ninja_engine_events,
    /* Input Event    */ ninja_input_event
};