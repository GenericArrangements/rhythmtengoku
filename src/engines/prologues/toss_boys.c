#include "engines/prologues/toss_boys.h"

#include "src/code_08001360.h"
#include "src/code_08007468.h"
#include "src/code_0800b3c8.h"
#include "src/code_0800b778.h"
#include "src/lib_0804c870.h"

// For readability.
#define gPrologueInfo ((struct PrologueTossBoysInfo *)D_030055d0)


  //  //  //  PROLOGUE: TOSS BOYS  //  //  //


// [func_080478d8] GFX_INIT Func_02
void func_080478d8(void) {
    func_0800c604(0);
    func_08017578();
}


// [func_080478e8] GFX_INIT Func_01
void func_080478e8(void) {
    u32 task;

    func_0800c604(0);
    task = func_08002ee0(func_0800c3b8(), D_089ed824, 0x2000);
    task_run_after(task, func_080478d8, 0);
}


// [func_08047918] GFX_INIT Func_00
void func_08047918(void) {
    u32 task;

    func_0800c604(0);
    func_08006d80();
    task = func_080087b4(func_0800c3b8(), D_089ed820);
    task_run_after(task, func_080478e8, 0);
}


// [func_08047948] MAIN - Init
void func_08047948(u32 ver) {
    gPrologueInfo->ver = ver;

    func_08047918();
    func_0800e0ec();
    func_0800e0a0(BG_LAYER_1, TRUE, 0, 0, 0, 29, 1);

    gPrologueInfo->textSprite = func_0804d160(D_03005380, D_088b8098, 0, 120, 120, 0, 0, 0, 0);
}


// [func_080479a4] ENGINE Func_00
void func_080479a4(void) {
}


// [func_080479a8] MAIN - Update
void func_080479a8(void) {
}


// [func_080479ac] MAIN - Close
void func_080479ac(void) {
}


// [func_080479b0] Event 0 - Set Animation Frame (Text)
void func_080479b0(u32 frame) {
    func_0804cebc(D_03005380, gPrologueInfo->textSprite, frame);
}