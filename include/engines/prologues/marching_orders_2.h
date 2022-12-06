#pragma once

#include "global.h"
#include "engines.h"


  //  //  //  PROLOGUE: MARCHING ORDERS 2  //  //  //


// Types:
struct PrologueMarchingOrders2Info {
    u8  ver;        // Value:  Version
    s16 textSprite; // Sprite: Text
};

// Assets:
extern const struct CompressedGraphics *D_089eb814[]; // Buffered Textures
extern const struct GraphicsTable D_089eb818[]; // Graphics Table
extern const struct Animation D_088b0bf0[]; // Animation: Text (Marching Orders 2)

// Functions:
extern void func_08046330(void);    // [func_08046330] GFX_INIT Func_02
extern void func_08046340(void);    // [func_08046340] GFX_INIT Func_01
extern void func_08046370(void);    // [func_08046370] GFX_INIT Func_00
extern void func_080463a0(u32);     // [func_080463a0] MAIN - Init
extern void func_080463fc(void);    // [func_080463fc] ENGINE Func_00   (STUB)
extern void func_08046400(void);    // [func_08046400] MAIN - Update    (STUB)
extern void func_08046404(void);    // [func_08046404] MAIN - Close     (STUB)
extern void func_08046408(u32);     // [func_08046408] Event 0 - Set Animation Frame (Text)