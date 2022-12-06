#include "engines/prologues/night_walk.h"

#include "src/code_08001360.h"
#include "src/code_08007468.h"
#include "src/code_0800b3c8.h"
#include "src/code_0800b778.h"
#include "src/lib_0804c870.h"

// For readability.
#define gPrologueInfo ((struct PrologueNightWalkInfo *)D_030055d0)


  //  //  //  PROLOGUE: NIGHT WALK  //  //  //


// [func_080457b4] GFX_INIT Func_02
void func_080457b4(void) {
    func_0800c604(0);
    func_08017578();
}


// [func_080457c4] GFX_INIT Func_01
void func_080457c4(void) {
    u32 task;

    func_0800c604(0);
    task = func_08002ee0(func_0800c3b8(), D_089ea98c, 0x2000);
    task_run_after(task, func_080457b4, 0);
}


// [func_080457f4] GFX_INIT Func_00
void func_080457f4(void) {
    u32 task;

    func_0800c604(0);
    func_08006d80();
    task = func_080087b4(func_0800c3b8(), D_089ea988);
    task_run_after(task, func_080457c4, 0);
}


// [func_08045824] MAIN - Init
void func_08045824(u32 ver) {
    gPrologueInfo->ver = ver;

    func_080457f4();
    func_0800e0ec();
    func_0800e0a0(BG_LAYER_1, TRUE, 0, 0, 0, 29, 1);

    gPrologueInfo->textSprite = func_0804d160(D_03005380, D_088ae2a8, 0, 110, 120, 0, 0, 0x7f, 0);
    gPrologueInfo->playYanSprite = func_0804d160(D_03005380, D_088ae048, 0, 60, 120, 0, 0, 0x7f, 0);
    gPrologueInfo->balloonsSprite = func_0804d160(D_03005380, D_088ae160, 0, 60, 120, 0, 1, 0, 0);
}


// [func_080458e0] ENGINE Func_00
void func_080458e0(void) {
}


// [func_080458e4] MAIN - Update
void func_080458e4(void) {
}


// [func_080458e8] MAIN - Close
void func_080458e8(void) {
}


// [func_080458ec] Event 0 - Play Animation (Play-yan); Event 1 - Play Animation (Text)
void func_080458ec(u32 event) {
    switch (event) {
        case 0: // Event 0 - Play Animation (Play-yan)
            func_0804dae0(D_03005380, gPrologueInfo->playYanSprite, 1, 0x7f, 0);
            break;
        case 1: // Event 1 - Play Animation (Text)
            func_0804dae0(D_03005380, gPrologueInfo->textSprite, 1, 0x7f, 0);
            break;
    }
}