#include "global.h"
#include "text.h"
#include "beatscript_notation.h"
#include "engines/quiz_show.h"

extern const struct QuizShowScriptTable *const D_08068320[];
extern const struct BeatScript D_08068328[];
extern const struct BeatScript D_08068358[];
extern const struct BeatScript D_080687f0[];
extern const struct QuizShowScriptTable *const D_080689b8[];
extern const struct BeatScript D_080689c0[];
extern const struct QuizShowScriptTable *const D_08068b34[];
extern const struct QuizShowScriptTable *const D_08068b3c[];
extern const struct BeatScript D_08068b44[];
extern const struct QuizShowScriptTable *const D_08068c94[];
extern const struct BeatScript D_08068c9c[];
extern const struct QuizShowScriptTable *const D_08068db0[];
extern const struct BeatScript D_08068db8[];
extern const struct QuizShowScriptTable *const D_08068ea8[];
extern const struct BeatScript D_08068eb0[];
extern const struct QuizShowScriptTable *const D_08068f70[];
extern const struct BeatScript D_08068f78[];
extern const struct QuizShowScriptTable *const D_08069014[];
extern const struct BeatScript D_0806901c[];
extern const struct BeatScript D_0806949c[];
extern const struct QuizShowScriptTable *const D_08069610[];
extern const struct BeatScript D_08069618[];
extern const struct QuizShowScriptTable *const D_08069768[];
extern const struct BeatScript D_08069770[];
extern const struct QuizShowScriptTable *const D_08069884[];
extern const struct BeatScript D_0806988c[];
extern const struct QuizShowScriptTable *const D_08069958[];
extern const char D_08069960[];
extern const char D_0806996c[];
extern const char D_08069990[];
extern const char D_080699bc[];
extern const char D_080699e0[];
extern const char D_08069a04[];
extern const char D_08069a14[];
extern const char D_08069a28[];
extern const char D_08069a34[];

extern const struct QuizShowScriptTable D_08a59c58;
extern const struct QuizShowScriptTable D_08a59c64;
extern const struct QuizShowScriptTable D_08a59c70;
extern const struct QuizShowScriptTable D_08a59c7c;
extern const struct QuizShowScriptTable D_08a59c88;
extern const struct QuizShowScriptTable D_08a59c94;
extern const struct QuizShowScriptTable D_08a59ca0;
extern const struct QuizShowScriptTable D_08a59cac;
extern const struct QuizShowScriptTable D_08a59cb8;
extern const struct QuizShowScriptTable D_08a59cc4;
extern const struct QuizShowScriptTable D_08a59cd0;
extern const struct QuizShowScriptTable D_08a59cdc;
extern const struct QuizShowScriptTable D_08a59ce8;
extern const struct QuizShowScriptTable D_08a59cf4;
extern const struct QuizShowScriptTable D_08a59d00;


/* Script Data - Quiz Show EX */


const struct QuizShowScriptTable *const D_08068320[] = {
    &D_08a59c58,
    NULL
};

const struct BeatScript D_08068328[] = {
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x06, 0xC0),
    BSC_REST(0xC0),
    BSC_RETURN
};

const struct BeatScript D_08068358[] = {
    BSC_REST(0x18),
    BSC_REST(0x18),

    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
    BSC_REST(0x0C),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 1),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
    BSC_REST(0x0C),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 1),
    BSC_REST(0x06),

    BSC_RUN_FUNC_1(agb_random, 3),
    BSC_SWITCH_ARG(&D_030053c0.unk24, BEATSCRIPT_ARG_BYTE),
        BSC_CASE(0),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
            BSC_REST(0x08),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
            BSC_REST(0x08),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
            BSC_REST(0x08),
            BSC_CASE_END,
        BSC_CASE(1),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
            BSC_REST(0x06),
            BSC_REST(0x06),
            BSC_REST(0x06),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 1),
            BSC_REST(0x06),
            BSC_CASE_END,
        BSC_CASE(2),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
            BSC_REST(0x06),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 1),
            BSC_REST(0x06),
            BSC_REST(0x06),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 1),
            BSC_REST(0x06),
            BSC_CASE_END,
    BSC_SWITCH_END,

    BSC_RUN_FUNC_1(agb_random, 3),
    BSC_SWITCH_ARG(&D_030053c0.unk24, BEATSCRIPT_ARG_BYTE),
        BSC_CASE(0),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
            BSC_REST(0x0C),
            BSC_REST(0x06),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
            BSC_REST(0x0C),
            BSC_REST(0x06),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
            BSC_REST(0x0C),
            BSC_REST(0x06),
            BSC_CASE_END,
        BSC_CASE(1),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
            BSC_REST(0x06),
            BSC_REST(0x06),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
            BSC_REST(0x06),
            BSC_REST(0x06),
            BSC_CASE_END,
        BSC_CASE(2),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
            BSC_REST(0x0C),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
            BSC_REST(0x06),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 1),
            BSC_REST(0x06),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
            BSC_REST(0x0C),
            BSC_CASE_END,
    BSC_SWITCH_END,

    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x0C, 0x108),
    BSC_RETURN
};

const struct BeatScript D_080687f0[] = {
    BSC_REST(0x18),
    BSC_REST(0x18),

    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
    BSC_REST(0x0C),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 1),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
    BSC_REST(0x0C),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 1),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
    BSC_REST(0x08),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
    BSC_REST(0x08),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
    BSC_REST(0x08),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
    BSC_REST(0x06),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 1),
    BSC_REST(0x06),
    BSC_RETURN
};

const struct QuizShowScriptTable *const D_080689b8[] = {
    &D_08a59c64,
    NULL
};

const struct BeatScript D_080689c0[] = {
    BSC_REST(0x18),
    BSC_REST(0x18),

    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
    BSC_REST(0x0C),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 1),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
    BSC_REST(0x0C),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 1),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
    BSC_REST(0x08),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
    BSC_REST(0x08),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
    BSC_REST(0x08),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0),
    BSC_REST(0x18),
    BSC_RETURN
};

const struct QuizShowScriptTable *const D_08068b34[] = {
    &D_08a59c70,
    NULL
};

const struct QuizShowScriptTable *const D_08068b3c[] = {
    &D_08a59c7c,
    NULL
};

const struct BeatScript D_08068b44[] = {
    BSC_REST(0x18),
    BSC_REST(0x18),

    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x0C),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x1),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x0C),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x1),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x0C),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x0C),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x18),
    BSC_RETURN
};

const struct QuizShowScriptTable *const D_08068c94[] = {
    &D_08a59c88,
    NULL
};

const struct BeatScript D_08068c9c[] = {
    BSC_REST(0x18),
    BSC_REST(0x18),

    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x0C),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x1),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x0C),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x1),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x18),
    BSC_REST(0x18),
    BSC_RETURN
};

const struct QuizShowScriptTable *const D_08068db0[] = {
    &D_08a59c94,
    NULL
};

const struct BeatScript D_08068db8[] = {
    BSC_REST(0x18),
    BSC_REST(0x18),

    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x0C),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x1),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x0C),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x0C),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x18),
    BSC_REST(0x18),
    BSC_RETURN
};

const struct QuizShowScriptTable *const D_08068ea8[] = {
    &D_08a59ca0,
    NULL
};

const struct BeatScript D_08068eb0[] = {
    BSC_REST(0x18),
    BSC_REST(0x18),

    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x18),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x0C),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x0C),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x18),
    BSC_REST(0x18),
    BSC_RETURN
};

const struct QuizShowScriptTable *const D_08068f70[] = {
    &D_08a59cac,
    NULL
};

const struct BeatScript D_08068f78[] = {
    BSC_REST(0x18),
    BSC_REST(0x18),

    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x18),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x18),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x18),
    BSC_REST(0x18),
    BSC_RETURN
};

const struct QuizShowScriptTable *const D_08069014[] = {
    &D_08a59cc4,
    NULL
};

const struct BeatScript D_0806901c[] = {
    BSC_REST(0x18),
    BSC_REST(0x18),

    BSC_RUN_FUNC_1(agb_random, 2),
    BSC_SWITCH_ARG(&D_030053c0.unk24, BEATSCRIPT_ARG_BYTE),
        BSC_CASE(0),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
            BSC_REST(0x18),
            BSC_CASE_END,
        BSC_CASE(1),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
            BSC_REST(0x0C),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
            BSC_REST(0x0C),
            BSC_CASE_END,
    BSC_SWITCH_END,

    BSC_RUN_FUNC_1(agb_random, 3),
    BSC_SWITCH_ARG(&D_030053c0.unk24, BEATSCRIPT_ARG_BYTE),
        BSC_CASE(0),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
            BSC_REST(0x06),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x1),
            BSC_REST(0x06),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
            BSC_REST(0x0C),
            BSC_CASE_END,
        BSC_CASE(1),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
            BSC_REST(0x0C),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
            BSC_REST(0x06),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x1),
            BSC_REST(0x06),
            BSC_CASE_END,
        BSC_CASE(2),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
            BSC_REST(0x06),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x1),
            BSC_REST(0x06),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
            BSC_REST(0x06),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x1),
            BSC_REST(0x06),
            BSC_CASE_END,
    BSC_SWITCH_END,

    BSC_RUN_FUNC_1(agb_random, 3),
    BSC_SWITCH_ARG(&D_030053c0.unk24, BEATSCRIPT_ARG_BYTE),
        BSC_CASE(0),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
            BSC_REST(0x0C),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
            BSC_REST(0x0C),
            BSC_CASE_END,
        BSC_CASE(1),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
            BSC_REST(0x0C),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
            BSC_REST(0x06),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x1),
            BSC_REST(0x06),
            BSC_CASE_END,
        BSC_CASE(2),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
            BSC_REST(0x06),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x1),
            BSC_REST(0x06),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
            BSC_REST(0x06),
            BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x1),
            BSC_REST(0x06),
            BSC_CASE_END,
    BSC_SWITCH_END,

    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x0C, 0x108),
    BSC_RETURN
};

const struct BeatScript D_0806949c[] = {
    BSC_REST(0x18),
    BSC_REST(0x18),

    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x0C),
    BSC_REST(0x0C),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x1),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x1),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x0C),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x1),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x18),
    BSC_RETURN
};

const struct QuizShowScriptTable *const D_08069610[] = {
    &D_08a59cd0,
    NULL
};

const struct BeatScript D_08069618[] = {
    BSC_REST(0x18),
    BSC_REST(0x18),

    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x0C),
    BSC_REST(0x0C),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x1),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x1),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x0C),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x0C),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x18),
    BSC_RETURN
};

const struct QuizShowScriptTable *const D_08069768[] = {
    &D_08a59cdc,
    NULL
};

const struct BeatScript D_08069770[] = {
    BSC_REST(0x18),
    BSC_REST(0x18),

    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x0C),
    BSC_REST(0x0C),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x1),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x1),
    BSC_REST(0x06),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x18),
    BSC_REST(0x18),
    BSC_RETURN
};

const struct QuizShowScriptTable *const D_08069884[] = {
    &D_08a59ce8,
    NULL
};

const struct BeatScript D_0806988c[] = {
    BSC_REST(0x18),
    BSC_REST(0x18),

    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x0C),
    BSC_REST(0x0C),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x0C),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x0C),
    BSC4_GAME_ENGINE_EVENT(&D_089e5ec0, 0x02, 0x0),
    BSC_REST(0x18),
    BSC_REST(0x18),
    BSC_RETURN
};

const struct QuizShowScriptTable *const D_08069958[] = {
    &D_08a59cf4,
    NULL
};

const char D_08069960[] =
    "\n"
    "�c�O�I�I";

const char D_0806996c[] =
    "�܂����킵�ĉ������B\n"
    "���悤�Ȃ�B";

const char D_08069990[] =
    "����΂�́B\n"
    "�N�C�Y�i���_�_�I�H�̎��Ԃł��B";

const char D_080699bc[] =
    "����́A�@�Ȃ��\n"
    "�X�y�V�����ł��I";

const char D_080699e0[] =
    "�ł́@��������\n"
    "�����Ă݂܂��傤�I";

const char D_08069a04[] =
    "\n"
    "�����܂ŁI�I";

const char D_08069a14[] =
    "\n"
    "���āA �����́H";

const char D_08069a28[] =
    "\n"
    "�����I�I";

const char D_08069a34[] =
    "\n"
    "�ł́A�@���ł��B";
