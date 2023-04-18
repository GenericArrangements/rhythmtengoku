#pragma once

#include "global.h"
#include "scenes.h"

// Scene Types:
struct TitleSceneInfo {
    u32 scriptIsReady;
    u32 timeUntilDemo;
    struct TextPrinter *textPrinter;
    s16 directiveText;
    s16 stars;
    u8 titleIsDisplayed;
    struct LogoBubble {
        u8 active;
        s16 inner;
        s16 outer;
        s16 letter;
        s16 centerX;
        s16 centerY;
        s16 riseDistance;
        s8_8 riseSpeed;
        s8_8 riseAngle;
        s8_8 riseTurnSpeed;
        s8_8 bounceAngle;
        s8_8 bounceBaseAngle;
        s8_8 bounceDistance;
    } logoBubbles[5];
    s32 nextLogoBubble;
};

struct TitleLogoCharData {
    struct Animation *anim;
    s16 x, y;
    s16 bounceAngle;
};


// Scene Macros/Enums:
#define TOTAL_TITLE_LOGO_BUBBLES 5


// Scene Data:
extern struct TitleLogoCharData title_logo_char_data[];
extern struct GraphicsTable title_gfx_table[];
extern struct CompressedGraphics *title_buffered_textures[];


// Functions:
extern void title_logo_set_bubble_pos(s32 id);
extern void title_logo_init(void);
extern void title_logo_appear(void); // (Script Function)
extern void title_logo_update(void);
extern void title_logo_bounce_all(void);
extern void title_logo_bounce_bubble(s32 id); // (Script Function)
extern void title_scene_init_static_var(void); // Init. Static Variables
extern void title_scene_init_gfx3(void); // Graphics Init. 3
extern void title_scene_init_gfx2(void); // Graphics Init. 2
extern void title_scene_init_gfx1(void); // Graphics Init. 1
extern void title_scene_start(void *sceneVar, s32 dataArg); // Scene Start
extern void title_scene_complete_intro(void); // (Script Function)
extern void title_scene_beat_anim(void); // (Script Function)
extern void title_scene_paused(void *sceneVar, s32 dataArg); // Scene Update (Paused)
extern void title_scene_update_inputs(void);
extern void title_scene_update(void *sceneVar, s32 dataArg); // Scene Update (Active)
extern u32 title_scene_script_is_ready(void); // Communicate with Script
extern void title_scene_stop(void *sceneVar, s32 dataArg); // Scene Stop
