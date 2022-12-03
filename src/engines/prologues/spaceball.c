#include "engines/prologues/spaceball.h"

#include "src/code_08001360.h"
#include "src/code_08007468.h"
#include "src/code_0800b3c8.h"
#include "src/code_0800b778.h"
#include "src/lib_0804c870.h"

// For readability.
#define gPrologueInfo ((struct PrologueSpaceballInfo *)D_030055d0)


  //  //  //  PROLOGUE: SPACEBALL  //  //  //


// [func_08045208] GFX_INIT Func_02
void func_08045208(void) {
    func_0800c604(0);
    func_08017578();
}


// [func_08045218] GFX_INIT Func_01
void func_08045218(void) {
    u32 task;

    func_0800c604(0);
    task = func_08002ee0(func_0800c3b8(), D_089ea270, 0x2000);
    task_run_after(task, func_08045208, 0);
}


// [func_08045248] GFX_INIT Func_00
void func_08045248(void) {
    u32 task;

    func_0800c604(0);
    func_08006d80();
    task = func_080087b4(func_0800c3b8(), D_089ea26c);
    task_run_after(task, func_08045218, 0);
}


// [func_08045278] MAIN - Init
void func_08045278(u32 ver) {
    gPrologueInfo->ver = ver;

    func_08045248();
    func_0800e0ec();
    func_0800e0a0(BG_LAYER_1, TRUE, 0, 0, 0, 29, 1);

    gPrologueInfo->sprite = func_0804d160(D_03005380, D_088ad3f4, 0, 120, 80, 0, 0, 0, 0);
}


// [func_080452d4] ENGINE Func_00
void func_080452d4(void) {
}


// [func_080452d8] MAIN - Update
void func_080452d8(void) {
}


// [func_080452dc] MAIN - Close
void func_080452dc(void) {
}


// [func_080452e0] Event 0 - Set Animation Frame (Text)
void func_080452e0(u32 frame) {
    func_0804cebc(D_03005380, gPrologueInfo->sprite, frame);
}