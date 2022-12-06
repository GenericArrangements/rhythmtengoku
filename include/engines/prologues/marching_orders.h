#pragma once

#include "global.h"
#include "engines.h"


  //  //  //  PROLOGUE: MARCHING ORDERS  //  //  //


// Types:
struct PrologueMarchingOrdersInfo {
    u8  ver;        // Value:  Version
    s16 textSprite; // Sprite: Text
};

// Assets:
extern const struct CompressedGraphics *D_089eb66c[]; // Buffered Textures
extern const struct GraphicsTable D_089eb670[]; // Graphics Table
extern const struct Animation D_088b09b4[]; // Animation: Text (Marching Orders)

// Functions:
extern void func_08046234(void);    // [func_08046234] GFX_INIT Func_02
extern void func_08046244(void);    // [func_08046244] GFX_INIT Func_01
extern void func_08046274(void);    // [func_08046274] GFX_INIT Func_00
extern void func_080462a4(u32);     // [func_080462a4] MAIN - Init
extern void func_08046300(void);    // [func_08046300] ENGINE Func_00   (STUB)
extern void func_08046304(void);    // [func_08046304] MAIN - Update    (STUB)
extern void func_08046308(void);    // [func_08046308] MAIN - Close     (STUB)
extern void func_0804630c(u32);     // [func_0804630c] Event 0 - Set Animation Frame (Text)