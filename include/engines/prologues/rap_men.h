#pragma once

#include "global.h"
#include "engines.h"


  //  //  //  PROLOGUE: RAP MEN  //  //  //


// Types:
struct PrologueRapMenInfo {
    u8  ver;        // Value:  Version
    s16 textSprite; // Sprite: Text
};

// Assets:
extern const struct CompressedGraphics *D_089ecd44[]; // Buffered Textures
extern const struct GraphicsTable D_089ecd48[]; // Graphics Table
extern const struct Animation D_088b37d8[]; // Animation: Text (Rap Men)

// Functions:
extern void func_08046f5c(void);    // [func_08046f5c] GFX_INIT Func_02
extern void func_08046f6c(void);    // [func_08046f6c] GFX_INIT Func_01
extern void func_08046f9c(void);    // [func_08046f9c] GFX_INIT Func_00
extern void func_08046fcc(u32);     // [func_08046fcc] MAIN - Init
extern void func_08047028(void);    // [func_08047028] ENGINE Func_00   (STUB)
extern void func_0804702c(void);    // [func_0804702c] MAIN - Update    (STUB)
extern void func_08047030(void);    // [func_08047030] MAIN - Close     (STUB)
extern void func_08047034(void);    // [func_08047034] Event 0 - Play Animation (Text)