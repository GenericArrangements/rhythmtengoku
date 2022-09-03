#include "global.h"
#include "graphics.h"

// [D_089056e0] <description>
const Palette game_select_bg_icon_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0x384050),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xB07838),
        /* 03 */ TO_RGB555(0x504848),
        /* 04 */ TO_RGB555(0xD8D0D0),
        /* 05 */ TO_RGB555(0xF83028),
        /* 06 */ TO_RGB555(0x2030A8),
        /* 07 */ TO_RGB555(0xF888D0),
        /* 08 */ TO_RGB555(0x6890F8),
        /* 09 */ TO_RGB555(0xF8F810),
        /* 10 */ TO_RGB555(0x00A808),
        /* 11 */ TO_RGB555(0x00F818),
        /* 12 */ TO_RGB555(0x00E8F8),
        /* 13 */ TO_RGB555(0xF80000),
        /* 14 */ TO_RGB555(0x989090),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0x38B078),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xB80068),
        /* 03 */ TO_RGB555(0x989090),
        /* 04 */ TO_RGB555(0xD8D0D0),
        /* 05 */ TO_RGB555(0xF8F810),
        /* 06 */ TO_RGB555(0x004080),
        /* 07 */ TO_RGB555(0x00C8F8),
        /* 08 */ TO_RGB555(0x08A0F8),
        /* 09 */ TO_RGB555(0xF0A028),
        /* 10 */ TO_RGB555(0x307000),
        /* 11 */ TO_RGB555(0xF86038),
        /* 12 */ TO_RGB555(0xF8C878),
        /* 13 */ TO_RGB555(0xF048F8),
        /* 14 */ TO_RGB555(0xF8B0B0),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 02 */ {
        /* 00 */ TO_RGB555(0x485068),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x9010D0),
        /* 03 */ TO_RGB555(0xD00850),
        /* 04 */ TO_RGB555(0xF80000),
        /* 05 */ TO_RGB555(0xF86800),
        /* 06 */ TO_RGB555(0xF8A028),
        /* 07 */ TO_RGB555(0xF8D000),
        /* 08 */ TO_RGB555(0x00D8A8),
        /* 09 */ TO_RGB555(0x0898A8),
        /* 10 */ TO_RGB555(0x2040A0),
        /* 11 */ TO_RGB555(0x108860),
        /* 12 */ TO_RGB555(0x00E820),
        /* 13 */ TO_RGB555(0x08C8E8),
        /* 14 */ TO_RGB555(0xE800E0),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 03 */ {
        /* 00 */ TO_RGB555(0x485028),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x901810),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x2030A8),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0xF80000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 04 */ {
        /* 00 */ TO_RGB555(0x105030),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0xF86800),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0xF8D000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 05 */ {
        /* 00 */ TO_RGB555(0x384050),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 06 */ {
        /* 00 */ TO_RGB555(0x384050),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 07 */ {
        /* 00 */ TO_RGB555(0x5018E0),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xB07838),
        /* 03 */ TO_RGB555(0x989090),
        /* 04 */ TO_RGB555(0x989090),
        /* 05 */ TO_RGB555(0xF83028),
        /* 06 */ TO_RGB555(0x989090),
        /* 07 */ TO_RGB555(0x989090),
        /* 08 */ TO_RGB555(0x6890F8),
        /* 09 */ TO_RGB555(0xF8F810),
        /* 10 */ TO_RGB555(0x808008),
        /* 11 */ TO_RGB555(0x989090),
        /* 12 */ TO_RGB555(0x989090),
        /* 13 */ TO_RGB555(0x989090),
        /* 14 */ TO_RGB555(0x989090),
        /* 15 */ TO_RGB555(0xF8F8F8)
    }
};