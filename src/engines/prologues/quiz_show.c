#include "engines/prologues/quiz_show.h"

#include "src/code_08001360.h"
#include "src/code_08007468.h"
#include "src/code_0800b3c8.h"
#include "src/code_0800b778.h"
#include "src/lib_0804c870.h"

// For readability.
#define gPrologueInfo ((struct PrologueQuizShowInfo *)D_030055d0)


  //  //  //  PROLOGUE: QUIZ SHOW  //  //  //


// [func_08046528] GFX_INIT Func_02
void func_08046528(void) {
    func_0800c604(0);
    func_08017578();
}


// [func_08046538] GFX_INIT Func_01
void func_08046538(void) {
    u32 task;

    func_0800c604(0);
    task = func_08002ee0(func_0800c3b8(), prologue_quiz_show_gfx_table, 0x2000);
    task_run_after(task, func_08046528, 0);
}


// [func_08046568] GFX_INIT Func_00
void func_08046568(void) {
    u32 task;

    func_0800c604(0);
    func_08006d80();
    task = func_080087b4(func_0800c3b8(), prologue_quiz_show_buffered_textures);
    task_run_after(task, func_08046538, 0);
}


// [func_08046598] MAIN - Init
void func_08046598(u32 ver) {
    gPrologueInfo->ver = ver;

    func_08046568();
    func_0800e0ec();
    func_0800e0a0(BG_LAYER_1, TRUE, 0, 0, 0, 29, 1);

    gPrologueInfo->textSprite = func_0804d160(D_03005380, D_088b13c4, 0, 120, 90, 0, 1, 0x7f, 0);
}


// [func_080465f8] ENGINE Func_00
void func_080465f8(void) {
}


// [func_080465fc] MAIN - Update
void func_080465fc(void) {
}


// [func_08046600] MAIN - Close
void func_08046600(void) {
}


// [func_08046604] Event 0 - Set Animation Frame (Text)
void func_08046604(u32 frame) {
    func_0804cebc(D_03005380, gPrologueInfo->textSprite, frame);
}
