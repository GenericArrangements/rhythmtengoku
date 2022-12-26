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
    gameplay_start_screen_fade_in();
}


// [func_08045218] GFX_INIT Func_01
void func_08045218(void) {
    u32 task;

    func_0800c604(0);
    task = func_08002ee0(get_current_mem_id(), prologue_spaceball_gfx_table, 0x2000);
    task_run_after(task, func_08045208, 0);
}


// [func_08045248] GFX_INIT Func_00
void func_08045248(void) {
    u32 task;

    func_0800c604(0);
    func_08006d80();
    task = func_080087b4(get_current_mem_id(), prologue_spaceball_buffered_textures);
    task_run_after(task, func_08045218, 0);
}


// [func_08045278] MAIN - Init
void func_08045278(u32 ver) {
    gPrologueInfo->ver = ver;

    func_08045248();
    scene_show_obj_layer();
    scene_set_bg_layer_display(BG_LAYER_1, TRUE, 0, 0, 0, 29, 1);

    gPrologueInfo->textSprite = func_0804d160(D_03005380, anim_prologue_spaceball_title, 0, 120, 80, 0, 0, 0, 0);
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
    func_0804cebc(D_03005380, gPrologueInfo->textSprite, frame);
}
