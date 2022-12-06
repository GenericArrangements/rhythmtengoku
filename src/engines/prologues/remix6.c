#include "engines/prologues/remix6.h"

#include "src/code_08001360.h"
#include "src/code_08007468.h"
#include "src/code_0800b3c8.h"
#include "src/code_0800b778.h"
#include "src/lib_0804c870.h"

// For readability.
#define gPrologueInfo ((struct PrologueRemix6Info *)D_030055d0)


  //  //  //  PROLOGUE: REMIX 6  //  //  //


// [func_08046b14] GFX_INIT Func_02
void func_08046b14(void) {
    func_0800c604(0);
    func_08017578();
}


// [func_08046b24] GFX_INIT Func_01
void func_08046b24(void) {
    u32 data;

    func_0800c604(0);
    data = func_08002ee0(func_0800c3b8(), D_089ec5c4, 0x2000);
    task_run_after(data, func_08046b14, 0);
}


// [func_08046b54] GFX_INIT Func_00
void func_08046b54(void) {
    u32 data;

    func_0800c604(0);
    func_08006d80();
    data = func_080087b4(func_0800c3b8(), D_089ec5c0);
    task_run_after(data, func_08046b24, 0);
}


// [func_08046b84] MAIN - Init
void func_08046b84(u32 ver) {
    gPrologueInfo->ver = ver;

    func_08046b54();
    func_0800e0ec();
    func_0800e0a0(BG_LAYER_1, TRUE, 0, 0, 0, 29, 1);

    gPrologueInfo->textSprite = func_0804d160(D_03005380, D_088b2b9c, 0, 112, 128, 0, 0, 0x7f, 0);
}


// [func_08046be0] ENGINE Func_00
void func_08046be0(void) {
}


// [func_08046be4] MAIN - Update
void func_08046be4(void) {
}


// [func_08046be8] MAIN - Close
void func_08046be8(void) {
}


// [func_08046bec] Event 0 - Set Animation Frame (Text)
void func_08046bec(u32 frame) {
    func_0804cebc(D_03005380, gPrologueInfo->textSprite, frame);
}