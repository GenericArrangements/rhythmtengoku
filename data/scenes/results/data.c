#include "global.h"
#include "graphics.h"
#include "src/bitmap_font.h"
#include "src/scenes/results.h"
#include "graphics/results/results_graphics.h"

extern struct ScoreHandler D_03001338;


  /* RESULTS - MISC. DATA */


// [D_089d7980] Main Score Handler
struct ScoreHandler *D_089d7980 = &D_03001338;


// [D_089d7984] Letter Ranks
const char *results_letter_ranks[] = {
    ":1.1" "�c",
    ":1.5" "�b",
    ":1.4" "�a",
    ":1.6" "�`",
    ":1.2" "�r"
};


// [D_089d7998] ?
const char *D_089d7998[] = {
    "�v������@�݂��@�s�b�^�V��",
    "���Y������@�o�b�`�V��",
    "�Ȃ��Ƃ��́@����������",
    NULL
};


// [D_089d79a8] ?
    // Technique Level
    // Adaptability
    // Reflexes
const char *D_089d79a8[] = {
    "�e�N�j�b�N�@���x��",
    "�Ă������@�̂���傭",
    "�����܂́@�����Ă�@�X�s�[�h",
    NULL
};


// [D_089d79b8] ?
    // Responsibility
    //
    // Steadiness
const char *D_089d79b8[] = {
    "�����ɂ񂩂�",
    "�����@�C�b�p�c",
    "�Ă������@����",
    NULL
};


// [D_089d79c8] ?
const char *D_089d79c8[] = {
    "�V���[�g�߂́@�s�b�^�V��",
    "�����ς�Ă��@�o�b�`�V��",
    "�قǂقǂ́@����������",
    NULL
};


// [D_089d79d8] ?
const char *D_089d79d8[] = {
    "���₭�@�̂���傭",
    "������Ă��@�����̂�",
    "������",
    NULL
};


// [D_089d79e8] ?
const char *D_089d79e8[] = {
    "����Ă��́@�ق�",
    "���Y���́@����",
    "�������񂹂��@�݂����Ȃ���",
    NULL
};


// [D_089d79f8] ?
const char *D_089d79f8[] = {
    "��邫",
    "�ǂ������@����傭",
    "�܂��ނ��ȁ@������",
    NULL
};


// [D_089d7a08] ?
const char *D_089d7a08[] = {
    "��񂫂����ւ�",
    "���イ�Ȃ񂹂�",
    "���イ���Ԃ���",
    NULL
};


// [D_089d7a18] ?
const char *D_089d7a18[] = {
    "�炢�˂�́@��񂠂��@����",
    "���Ƃ��́@���񂹂�@����",
    "�������́@�Ă�",
    "���̂��́@�₵�傭",
    "�����������i���������j",
    "�������́@�悳",
    "�ɂ񂰂񂹂�",
    NULL
};


// [D_089d7a38]
struct ResultsSkillData D_089d7a38[] = {
    /* 0x00 */ {
        /* Weight */ 8,
        /* Desc.  */ D_089d7998,
        /* Calc.  */ func_08019698
    },
    /* 0x01 */ {
        /* Weight */ 5,
        /* Desc.  */ D_089d79c8,
        /* Calc.  */ func_080197a4
    },
    /* 0x02 */ {
        /* Weight */ 10,
        /* Desc.  */ D_089d79a8,
        /* Calc.  */ func_080196fc
    },
    /* 0x03 */ {
        /* Weight */ 7,
        /* Desc.  */ D_089d79b8,
        /* Calc.  */ func_08019750
    },
    /* 0x04 */ {
        /* Weight */ 0,
        /* Desc.  */ D_089d79d8,
        /* Calc.  */ func_080197ec
    },
    /* 0x05 */ {
        /* Weight */ 0,
        /* Desc.  */ D_089d7a18,
        /* Calc.  */ func_080198e8
    },
    END_OF_RESULTS_TEXT_EVENT_LIST
};


// [D_089d7a8c]
struct ResultsSkillData D_089d7a8c[] = {
    /* 0x00 */ {
        /* Weight */ 8,
        /* Desc.  */ D_089d79c8,
        /* Calc.  */ func_080197a4
    },
    /* 0x01 */ {
        /* Weight */ 9,
        /* Desc.  */ D_089d79e8,
        /* Calc.  */ func_08019820
    },
    /* 0x02 */ {
        /* Weight */ 7,
        /* Desc.  */ D_089d79a8,
        /* Calc.  */ func_080196fc
    },
    /* 0x03 */ {
        /* Weight */ 6,
        /* Desc.  */ D_089d79b8,
        /* Calc.  */ func_08019750
    },
    /* 0x04 */ {
        /* Weight */ 0,
        /* Desc.  */ D_089d79d8,
        /* Calc.  */ func_080197ec
    },
    /* 0x05 */ {
        /* Weight */ 0,
        /* Desc.  */ D_089d7a18,
        /* Calc.  */ func_080198e8
    },
    END_OF_RESULTS_TEXT_EVENT_LIST
};


// [D_089d7ae0]
struct ResultsSkillData D_089d7ae0[] = {
    /* 0x00 */ {
        /* Weight */ 9,
        /* Desc.  */ D_089d79f8,
        /* Calc.  */ func_08019878
    },
    /* 0x01 */ {
        /* Weight */ 6,
        /* Desc.  */ D_089d79e8,
        /* Calc.  */ func_08019820
    },
    /* 0x02 */ {
        /* Weight */ 9,
        /* Desc.  */ D_089d7a08,
        /* Calc.  */ func_080198b0
    },
    /* 0x03 */ {
        /* Weight */ 6,
        /* Desc.  */ D_089d79b8,
        /* Calc.  */ func_08019750
    },
    /* 0x04 */ {
        /* Weight */ 0,
        /* Desc.  */ D_089d79d8,
        /* Calc.  */ func_080197ec
    },
    /* 0x05 */ {
        /* Weight */ 0,
        /* Desc.  */ D_089d7a18,
        /* Calc.  */ func_080198e8
    },
    END_OF_RESULTS_TEXT_EVENT_LIST
};
