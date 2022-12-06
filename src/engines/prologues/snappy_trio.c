#include "engines/prologues/snappy_trio.h"

#include "src/code_08001360.h"
#include "src/code_08007468.h"
#include "src/code_0800b3c8.h"
#include "src/code_0800b778.h"
#include "src/lib_0804c870.h"

// For readability.
#define gPrologueInfo ((struct PrologueSnappyTrioInfo *)D_030055d0)


  //  //  //  PROLOGUE: THE SNAPPY TRIO  //  //  //


// [func_08045ee8] GFX_INIT Func_02
void func_08045ee8(void) {
    func_0800c604(0);
    func_08017578();
}


// [func_08045ef8] GFX_INIT Func_01
void func_08045ef8(void) {
    u32 task;

    func_0800c604(0);
    task = func_08002ee0(func_0800c3b8(), D_089eb1cc, 0x2000);
    task_run_after(task, func_08045ee8, 0);
}


// [func_08045f28] GFX_INIT Func_00
void func_08045f28(void) {
    u32 task;

    func_0800c604(0);
    func_08006d80();
    task = func_080087b4(func_0800c3b8(), D_089eb1c8);
    task_run_after(task, func_08045ef8, 0);
}


// [func_08045f58] MAIN - Init
void func_08045f58(u32 ver) {
    gPrologueInfo->ver = ver;

    func_08045f28();
    func_0800e0ec();
    func_0800e0a0(BG_LAYER_1, TRUE, 0, 0, 0, 29, 1);

    gPrologueInfo->textSprite = func_0804d160(D_03005380, D_088afdc4, 0, 120, 100, 0, 0, 0x7f, 0);
}


// [func_08045fb4] ENGINE Func_00
void func_08045fb4(void) {
}


// [func_08045fb8] MAIN - Update
void func_08045fb8(void) {
}


// [func_08045fbc] MAIN - Close
void func_08045fbc(void) {
}


// [func_08045fc0] Event 0 - Set Animation Frame (Text)
void func_08045fc0(u32 frame) {
    func_0804cebc(D_03005380, gPrologueInfo->textSprite, frame);
}