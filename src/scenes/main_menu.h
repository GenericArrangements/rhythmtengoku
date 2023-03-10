#pragma once

#include "global.h"
#include "scenes.h"

// Scene Types:
struct MainMenuSceneInfo {
    struct BitmapFontBG *font2;
    struct BitmapFontOBJ *font1;
    u32 screenReady; // Set to FALSE during screen fade-in/out.
    u16 buttons[5];
    s16 bgX;
    s16 bgY;
    u8 unk1A;
    u8 loadingOptionsMenu;
};


// Scene Static Variables:
extern s8 D_030055d8; // Currently-Selected Button


// Scene Macros/Enums:


// OAM Animations:
extern struct Animation D_0890a3c4[]; // Blank


// Palettes:


// Sound Effects:


// Scene Data:


// Scene Definition Data:
extern const union SceneObject D_089cdc40[]; // Scene Objects Table
extern const struct GraphicsTable D_089cdc44[]; // Graphics Table
extern struct CompressedGraphics *const D_089cdc8c[]; // Buffered Textures List
extern struct Animation *const D_089cdc90[5]; // Button Animations (Highlighted)
extern struct Animation *const D_089cdca4[5]; // Button Animations

extern void func_0801242c(void); // Init. Static Variables
extern void func_08012438(void); // Graphics Init. 3
extern void func_08012464(void); // Graphics Init. 2
extern void func_08012494(void); // Graphics Init. 1
extern void func_080124d0(u32);  // Scene Start
extern void func_080125f8(u32);  // Scene Update Frozen
extern void func_080125fc(u32);  // Scene Update
extern u32  func_080127d0(void); // Scene Can Update
extern void func_080127ec(u32);  // Scene Stop