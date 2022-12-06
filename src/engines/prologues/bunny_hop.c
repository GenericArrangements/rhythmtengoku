#include "engines/prologues/bunny_hop.h"

#include "src/code_08001360.h"
#include "src/code_08007468.h"
#include "src/code_0800b3c8.h"
#include "src/code_0800b778.h"
#include "src/lib_0804c870.h"

// For readability.
#define gPrologueInfo ((struct PrologueBunnyHopInfo *)D_030055d0)


  //  //  //  PROLOGUE: BUNNY HOP  //  //  //


// [func_08046e08] GFX_INIT Func_02
void func_08046e08(void) {
    func_0800c604(0);
    func_08017578();
}


// [func_08046e18] GFX_INIT Func_01
void func_08046e18(void) {
    u32 task;

    func_0800c604(0);
    task = func_08002ee0(func_0800c3b8(), D_089ecb64, 0x2000);
    task_run_after(task, func_08046e08, 0);
}


// [func_08046e48] GFX_INIT Func_00
void func_08046e48(void) {
    u32 task;

    func_0800c604(0);
    func_08006d80();
    task = func_080087b4(func_0800c3b8(), D_089ecb60);
    task_run_after(task, func_08046e18, 0);
}


// [func_08046e78] MAIN - Init
void func_08046e78(u32 ver) {
    gPrologueInfo->ver = ver;

    func_08046e48();
    func_0800e0ec();
    func_0800e0a0(BG_LAYER_1, TRUE, 0, 0, 0, 29, 1);

    gPrologueInfo->textSprite = func_0804d160(D_03005380, D_088b35dc, 0, 22, 162, 0, 0, 0x7f, 0);
    gPrologueInfo->rabbitsSprite = func_0804d160(D_03005380, D_088b35a4, 0, 114, 120, 0, 0, 0x7f, 0);
}


// [func_08046f00] ENGINE Func_00
void func_08046f00(void) {
}


// [func_08046f04] MAIN - Update
void func_08046f04(void) {
}


// [func_08046f08] MAIN - Close
void func_08046f08(void) {
}


// [func_08046f0c] Event 0 - Set Animation Frame (Text)
void func_08046f0c(u32 frame) {
    func_0804cebc(D_03005380, gPrologueInfo->textSprite, frame);
}


// [func_08046f30] Event 1 - Play Animation (Rabbits)
void func_08046f30(void) {
    func_0804dae0(D_03005380, gPrologueInfo->rabbitsSprite, 1, 0x7f, 0);
}