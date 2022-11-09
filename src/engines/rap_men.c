#include "engines/rap_men.h"

#include "src/code_08001360.h"
#include "src/code_08003980.h"
#include "src/code_08007468.h"
#include "src/code_0800b778.h"
#include "src/lib_0804c870.h"

// For readability.
#define gRapMenInfo ((struct RapMenInfo *)D_030055d0)


/* RAP MEN */


const struct Animation *func_080398b4(u32 anim) {
    return D_089e63f8[anim][gRapMenInfo->unk0];
}

void func_080398d4(void) {
	func_0800c604(0);
	func_08017578();
}

void func_080398e4(void) {
	u32 temp;

	func_0800c604(0);
	temp = func_08002ee0(func_0800c3b8(), D_089e6518[gRapMenInfo->unk0], 0x2000);
	task_run_after(temp, func_080398d4, 0);
}

void func_08039924(void) {
	u32 temp;

	func_0800c604(0);
	temp = func_080087b4(func_0800c3b8(), D_089e6424);
	task_run_after(temp, func_080398e4, 0);
}

void func_08039950(u32 arg0) {
    gRapMenInfo->unk0 = arg0;
    func_08039924();
    func_0800e0ec();
    func_0800e0a0(1, 1, 0, 0, 0, 29, 1);
    gRapMenInfo->unk4 = func_0800c660(0x340, 2);
    gRapMenInfo->unkC = func_0804d160(D_03005380, func_08004c0c(gRapMenInfo->unk4, D_0805a8b0, 1, 14), 0, 0x78, 0x94, 0, 0, 0, 0);
    gRapMenInfo->unk8 = func_0804d160(D_03005380, func_080398b4(RAP_MEN_ANIM_10), 0, 0x46, 0x82, 0x4800, 1, 0x7f, 0);
    gRapMenInfo->unkA = func_0804d160(D_03005380, func_080398b4(RAP_MEN_ANIM_09), 0, 0xa0, 0x82, 0x4800, 1, 0x7f, 0);
    gRapMenInfo->unkE = 0;
    gRapMenInfo->unk10 = 0;
    gRapMenInfo->unk12 = 0;
    gRapMenInfo->unk14 = 0;
    func_08017338(A_BUTTON, 0);
}

void func_08039a40(void) {
}

void func_08039a44(u32 arg0) {
    func_0804d8f8(D_03005380, gRapMenInfo->unk8, func_080398b4((&D_089e6520)[arg0]), 0, 1, 0x7f, 0);
    gRapMenInfo->unkE = func_0800c3a4((&D_089e6525)[arg0]);
}

void func_08039a98(u32 arg0) {
    gRapMenInfo->unk14 = arg0;
}

void func_08039aa4(void) {
    if (gRapMenInfo->unkE) {
        gRapMenInfo->unkE--;
    }
    if (gRapMenInfo->unk10) {
        gRapMenInfo->unk10--;
    }
    if (gRapMenInfo->unk12) {
        gRapMenInfo->unk12--;
    }
}

void func_08039ad4(void) {
}

void func_08039ad8(u32 arg0, struct RapMenCue *cue, u32 anim) {
    func_0804d8f8(D_03005380, gRapMenInfo->unkA, func_080398b4(RAP_MEN_ANIM_03), 0, 1, 0x7f, 0);
    gRapMenInfo->unk10 = func_0800c3a4(0x24);
    gRapMenInfo->unk12 = func_0800c3a4(0x24);
    cue->anim = anim;
}

u32 func_08039b2c(u32 arg0, struct RapMenCue *cue, u32 runningTime) {
    if (runningTime > func_0800c3a4(0x30)) {
        return TRUE;
    } else {
        return FALSE;
    }
}

void func_08039b48(u32 arg0, struct RapMenCue *cue) {
}

void func_08039b4c(u32 arg0, struct RapMenCue *cue) {
    func_0804d8f8(D_03005380, gRapMenInfo->unkA, func_080398b4(RAP_MEN_ANIM_02), 0, 1, 0x7f, 0);
    gRapMenInfo->unk10 = func_0800c3a4(0x24);
    func_0804d160(D_03005380, func_080398b4(RAP_MEN_ANIM_07), 0, 0xa0, 0x82, 0x47f6, 1, 0, 3);
    func_08039a44(3);
    func_08002634(D_089e652c[gRapMenInfo->unk0][cue->anim]);
    func_08002634(&s_SD1_seqData);
    func_08002634(&s_CC4_seqData);
}

void func_08039c00(u32 arg0, struct RapMenCue *cue) {
    func_0804d8f8(D_03005380, gRapMenInfo->unkA, func_080398b4(RAP_MEN_ANIM_01), 0, 1, 0x7f, 0);
    gRapMenInfo->unk10 = func_0800c3a4(0x24);
    func_08002634(D_089e652c[gRapMenInfo->unk0][0]);
    func_08002634(&s_tom_M_seqData);
}

void func_08039c60(u32 arg0, struct RapMenCue *cue) {
    if (!gRapMenInfo->unk14) {
        func_0804d8f8(D_03005380, gRapMenInfo->unkA, func_080398b4(RAP_MEN_ANIM_08), 0, 1, 0x7f, 0);
        gRapMenInfo->unk10 = func_0800c3a4(0x3c);
        func_08002634(&s_RC_seqData);
    }
    func_0800bc40();
}

void func_08039cb8(void) {
    func_0804d8f8(D_03005380, gRapMenInfo->unkA, func_080398b4(RAP_MEN_ANIM_09), 0, 1, 0x7f, 0);
    gRapMenInfo->unk10 = func_0800c3a4(0x24);
    func_08002634(D_089e65f0[gRapMenInfo->unk0]);
    func_0800bc40();
}

void func_08039d10(void) {
    if (!gRapMenInfo->unkE) {
        func_0804d8f8(D_03005380, gRapMenInfo->unk8, func_080398b4(RAP_MEN_ANIM_10), 0, 1, 0x7f, 0);
    }
    if (!gRapMenInfo->unk10) {
        func_0804d8f8(D_03005380, gRapMenInfo->unkA, func_080398b4(RAP_MEN_ANIM_09), 0, 1, 0x7f, 0);
    }
}

void func_08039d7c(char *text) {
    struct Animation *anim;

    if (text == NULL) {
        func_0804d770(D_03005380, gRapMenInfo->unkC, 0);
        return;
    }
    anim = func_08004b98(gRapMenInfo->unk4, text, 1, 8);
    func_08007b04(gRapMenInfo->unk4, gRapMenInfo->unkC);
    func_0804d8f8(D_03005380, gRapMenInfo->unkC, anim, 0, 0, 0, 0);
    func_0804d770(D_03005380, gRapMenInfo->unkC, 1);
}

void func_08039df8(void) {
}
