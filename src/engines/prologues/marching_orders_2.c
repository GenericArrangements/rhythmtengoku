#include "engines/prologues/marching_orders_2.h"

#include "src/code_08001360.h"
#include "src/code_08007468.h"
#include "src/code_0800b3c8.h"
#include "src/code_0800b778.h"
#include "src/lib_0804c870.h"

// For readability.
#define gPrologueInfo ((struct PrologueMarchingOrders2Info *)D_030055d0)


  //  //  //  PROLOGUE: MARCHING ORDERS 2  //  //  //


// [func_08046330] GFX_INIT Func_02
void func_08046330(void) {
    func_0800c604(0);
    func_08017578();
}


// [func_08046340] GFX_INIT Func_01
void func_08046340(void) {
    u32 task;

    func_0800c604(0);
    task = func_08002ee0(func_0800c3b8(), D_089eb818, 0x2000);
    task_run_after(task, func_08046330, 0);
}


// [func_08046370] GFX_INIT Func_00
void func_08046370(void) {
    u32 task;

    func_0800c604(0);
    func_08006d80();
    task = func_080087b4(func_0800c3b8(), D_089eb814);
    task_run_after(task, func_08046340, 0);
}


// [func_080463a0] MAIN - Init
void func_080463a0(u32 ver) {
    gPrologueInfo->ver = ver;

    func_08046370();
    func_0800e0ec();
    func_0800e0a0(BG_LAYER_1, TRUE, 0, 0, 0, 29, 1);

    gPrologueInfo->textSprite = func_0804d160(D_03005380, D_088b0bf0, 0, 112, 140, 0, 0, 0x7f, 0);
}


// [func_080463fc] ENGINE Func_00
void func_080463fc(void) {
}


// [func_08046400] MAIN - Update
void func_08046400(void) {
}


// [func_08046404] MAIN - Close
void func_08046404(void) {
}


// [func_08046408] Event 0 - Set Animation Frame (Text)
void func_08046408(u32 frame) {
    func_0804cebc(D_03005380, gPrologueInfo->textSprite, frame);
}