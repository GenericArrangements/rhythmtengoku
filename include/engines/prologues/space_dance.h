#pragma once

#include "global.h"
#include "engines.h"


  //  //  //  PROLOGUE: SPACE DANCE  //  //  //


// Types:
struct PrologueSpaceDanceInfo {
    u8  ver;         // Value:  Version
    s16 textSprite;  // Sprite: Text
    s16 facesSprite; // Sprite: Faces
    s16 starSprite;  // Sprite: Star
};

// Assets:
extern const struct CompressedGraphics *D_089ed400[]; // Buffered Textures
extern const struct GraphicsTable D_089ed404[]; // Graphics Table
extern const struct Animation D_088b7338[]; // Animation: Text (Space Dance)
extern const struct Animation D_088b7690[]; // Animation: Faces
extern const struct Animation D_088b7660[]; // Animation: Star

// Functions:
extern void func_080474dc(void);    // [func_080474dc] GFX_INIT Func_02
extern void func_080474ec(void);    // [func_080474ec] GFX_INIT Func_01
extern void func_0804751c(void);    // [func_0804751c] GFX_INIT Func_00
extern void func_0804754c(u32);     // [func_0804754c] MAIN - Init
extern void func_08047624(void);    // [func_08047624] ENGINE Func_00   (STUB)
extern void func_08047628(void);    // [func_08047628] MAIN - Update    (STUB)
extern void func_0804762c(void);    // [func_0804762c] MAIN - Close     (STUB)
extern void func_08047630(u32);     // [func_08047630] Event 0 - Animate Sprite { 0 = Text; 1 = Faces; 2 = Star }