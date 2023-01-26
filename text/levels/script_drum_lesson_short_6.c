#include "global.h"
#include "text.h"
#include "bs_ext.h"

extern const char D_08060fa0[];
extern const struct BeatScript D_08060ff8[];
extern const struct BeatScript D_0806104c[];
extern const char D_08061070[];
extern const struct BeatScript D_080610b0[];
extern const char D_08061110[];
extern const struct BeatScript D_08061154[];
extern const char D_080611c0[];
extern const struct BeatScript D_08061204[];
extern const char D_08061288[];
extern const struct BeatScript D_080612c4[];
extern const char D_08061300[];
extern const struct BeatScript D_08061330[];


/* Script Data - Drum Lesson (Short 6) */


const char D_08060fa0[] =
    "�悭�����ă}�l���ĂˁB\n"
    "�D���ȃ^�C�~���O�łǂ����B\n"
    "���t���~�߂�ƁA\n"
    "����{�������郈�I";

const struct BeatScript D_08060ff8[] = {
    BS_RIQ_SPAWN_CUE(1),
    BS_REST(0x18),
    BS_RIQ_SPAWN_CUE(1),
    BS_REST(0x18),
    BS_RIQ_SPAWN_CUE(1),
    BS_REST(0x18),
    BS_RETURN
};

const struct BeatScript D_0806104c[] = {
    BS_RIQ_SPAWN_CUE(1),
    BS_REST(0x15),
    BS_RETURN
};

const char D_08061070[] =
    "\n"
    "�P�J���A�����ӂ��郈�I\n"
    "�킩�邩�ȁH\n"
    "�q���g�F�L�b�N�͑O�Ɠ���";

const struct BeatScript D_080610b0[] = {
    BS_RIQ_SPAWN_CUE(1),
    BS_REST(0x18),
    BS_RIQ_SPAWN_CUE(1),
    BS_REST(0x18),
    BS_RIQ_SPAWN_CUE(2),
    BS_RIQ_SPAWN_CUE(1),
    BS_REST(0x18),
    BS_RETURN
};

const char D_08061110[] =
    "����ɂP�J���A\n"
    "�����ӂ��郈�I\n"
    "�킩�邩�ȁH\n"
    "�q���g�F�L�b�N�͑O�Ɠ���";

const struct BeatScript D_08061154[] = {
    BS_RIQ_SPAWN_CUE(2),
    BS_RIQ_SPAWN_CUE(1),
    BS_REST(0x18),
    BS_RIQ_SPAWN_CUE(1),
    BS_REST(0x18),
    BS_RIQ_SPAWN_CUE(2),
    BS_RIQ_SPAWN_CUE(1),
    BS_REST(0x18),
    BS_RETURN
};

const char D_080611c0[] =
    "�܂��܂��P�J���A\n"
    "�����ӂ��郈�I\n"
    "�킩�邩�ȁH\n"
    "�q���g�F" SHIFT_JIS_KANJI_JUU "���{�^����";

const struct BeatScript D_08061204[] = {
    BS_RIQ_SPAWN_CUE(2),
    BS_RIQ_SPAWN_CUE(1),
    BS_REST(0x18),
    BS_RIQ_SPAWN_CUE(1),
    BS_REST(0x0C),
    BS_RIQ_SPAWN_CUE(4),
    BS_REST(0x0C),
    BS_RIQ_SPAWN_CUE(2),
    BS_RIQ_SPAWN_CUE(1),
    BS_REST(0x18),
    BS_RETURN
};

const char D_08061288[] =
    "\n"
    "�����Ă܂��Ȃ�ƁI\n"
    "�P�J���A�����ӂ��郈�I\n"
    "�킩�邩�ȁH\n";

const struct BeatScript D_080612c4[] = {
    BS_RIQ_SPAWN_CUE(1),
    BS_REST(0x0C),
    BS_RIQ_SPAWN_CUE(4),
    BS_REST(0x09),
    BS_RETURN
};


const char D_08061300[] =
    "\n"
    "����܂��Ȃ�ƁI\n"
    "�m���m�������I\n"
    "�ł��邩�ȁH\n";

const struct BeatScript D_08061330[] = {
    BS_RIQ_SPAWN_CUE(2),
    BS_RIQ_SPAWN_CUE(1),
    BS_REST(0x0C),
    BS_RIQ_SPAWN_CUE(4),
    BS_REST(0x0C),
    BS_RIQ_SPAWN_CUE(1),
    BS_REST(0x0C),
    BS_RIQ_SPAWN_CUE(4),
    BS_REST(0x0C),
    BS_RIQ_SPAWN_CUE(2),
    BS_RIQ_SPAWN_CUE(1),
    BS_REST(0x0C),
    BS_RIQ_SPAWN_CUE(4),
    BS_REST(0x0C),
    BS_RETURN
};
