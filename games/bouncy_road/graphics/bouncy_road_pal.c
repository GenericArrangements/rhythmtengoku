#include "global.h"
#include "graphics.h"

// [D_088cbe48] <description>
Palette bouncy_road_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xC060B0),
        /* 03 */ TO_RGB555(0xC060B0),
        /* 04 */ TO_RGB555(0xC060B0),
        /* 05 */ TO_RGB555(0xC060B0),
        /* 06 */ TO_RGB555(0xC060B0),
        /* 07 */ TO_RGB555(0x006080),
        /* 08 */ TO_RGB555(0x0080A8),
        /* 09 */ TO_RGB555(0x00A8E0),
        /* 10 */ TO_RGB555(0x28D8F8),
        /* 11 */ TO_RGB555(0x80E0F8),
        /* 12 */ TO_RGB555(0xC060B0),
        /* 13 */ TO_RGB555(0x606860),
        /* 14 */ TO_RGB555(0xD0D8D0),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0x0000F8),
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
        /* 13 */ TO_RGB555(0x08B810),
        /* 14 */ TO_RGB555(0x60F868),
        /* 15 */ TO_RGB555(0xC0F8B0)
    },
    /* PALETTE 02 */ {
        /* 00 */ TO_RGB555(0x000000),
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
        /* 13 */ TO_RGB555(0x9000C8),
        /* 14 */ TO_RGB555(0xE868F8),
        /* 15 */ TO_RGB555(0xE8A8F8)
    },
    /* PALETTE 03 */ {
        /* 00 */ TO_RGB555(0x000000),
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
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 04 */ {
        /* 00 */ TO_RGB555(0x000000),
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
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 05 */ {
        /* 00 */ TO_RGB555(0x000000),
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
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 06 */ {
        /* 00 */ TO_RGB555(0x000000),
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
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 07 */ {
        /* 00 */ TO_RGB555(0x000000),
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
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 08 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x505800),
        /* 08 */ TO_RGB555(0x888808),
        /* 09 */ TO_RGB555(0xB8C008),
        /* 10 */ TO_RGB555(0xF8F818),
        /* 11 */ TO_RGB555(0xF8F8A0),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 09 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x500000),
        /* 08 */ TO_RGB555(0x880000),
        /* 09 */ TO_RGB555(0xC80008),
        /* 10 */ TO_RGB555(0xF80800),
        /* 11 */ TO_RGB555(0xF85048),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    }
};

// [D_088cbf88] <description>
Palette bouncy_road_remix_5_obj_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xC060B0),
        /* 03 */ TO_RGB555(0xC060B0),
        /* 04 */ TO_RGB555(0xC060B0),
        /* 05 */ TO_RGB555(0xC060B0),
        /* 06 */ TO_RGB555(0xC060B0),
        /* 07 */ TO_RGB555(0x582020),
        /* 08 */ TO_RGB555(0x885838),
        /* 09 */ TO_RGB555(0xC0A068),
        /* 10 */ TO_RGB555(0xD8C0A0),
        /* 11 */ TO_RGB555(0xF8F8F8),
        /* 12 */ TO_RGB555(0xC060B0),
        /* 13 */ TO_RGB555(0x606860),
        /* 14 */ TO_RGB555(0xD0D8D0),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0x885838),
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
        /* 13 */ TO_RGB555(0x885838),
        /* 14 */ TO_RGB555(0x401818),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 02 */ {
        /* 00 */ TO_RGB555(0x000000),
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
        /* 13 */ TO_RGB555(0x987038),
        /* 14 */ TO_RGB555(0xD8C0A0),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 03 */ {
        /* 00 */ TO_RGB555(0x000000),
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
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 04 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0xF8F8F8),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0xF8F8F8),
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
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 05 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0xD8C0A0),
        /* 07 */ TO_RGB555(0xC8B080),
        /* 08 */ TO_RGB555(0xC0A068),
        /* 09 */ TO_RGB555(0xB08848),
        /* 10 */ TO_RGB555(0x987038),
        /* 11 */ TO_RGB555(0x885838),
        /* 12 */ TO_RGB555(0x704028),
        /* 13 */ TO_RGB555(0x582020),
        /* 14 */ TO_RGB555(0x401818),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 06 */ {
        /* 00 */ TO_RGB555(0x000000),
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
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 07 */ {
        /* 00 */ TO_RGB555(0x000000),
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
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 08 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x582020),
        /* 08 */ TO_RGB555(0x885838),
        /* 09 */ TO_RGB555(0xC0A068),
        /* 10 */ TO_RGB555(0xD8C0A0),
        /* 11 */ TO_RGB555(0xF8F8F8),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 09 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x582020),
        /* 08 */ TO_RGB555(0x885838),
        /* 09 */ TO_RGB555(0xC0A068),
        /* 10 */ TO_RGB555(0xD8C0A0),
        /* 11 */ TO_RGB555(0xF8F8F8),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    }
};

// [D_088cc0c8] <description>
Palette bouncy_road_2_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0x9000C8),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xC060B0),
        /* 03 */ TO_RGB555(0xC060B0),
        /* 04 */ TO_RGB555(0xC060B0),
        /* 05 */ TO_RGB555(0xC060B0),
        /* 06 */ TO_RGB555(0xC060B0),
        /* 07 */ TO_RGB555(0x006080),
        /* 08 */ TO_RGB555(0x0080A8),
        /* 09 */ TO_RGB555(0x00A8E0),
        /* 10 */ TO_RGB555(0x28D8F8),
        /* 11 */ TO_RGB555(0x80E0F8),
        /* 12 */ TO_RGB555(0xC060B0),
        /* 13 */ TO_RGB555(0x606860),
        /* 14 */ TO_RGB555(0xD0D8D0),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0x000060),
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
        /* 13 */ TO_RGB555(0x08B810),
        /* 14 */ TO_RGB555(0x60F868),
        /* 15 */ TO_RGB555(0xC0F8B0)
    },
    /* PALETTE 02 */ {
        /* 00 */ TO_RGB555(0x000000),
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
        /* 13 */ TO_RGB555(0x9000C8),
        /* 14 */ TO_RGB555(0xE868F8),
        /* 15 */ TO_RGB555(0xE8A8F8)
    },
    /* PALETTE 03 */ {
        /* 00 */ TO_RGB555(0x000000),
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
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 04 */ {
        /* 00 */ TO_RGB555(0x000000),
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
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 05 */ {
        /* 00 */ TO_RGB555(0x000000),
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
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 06 */ {
        /* 00 */ TO_RGB555(0x000000),
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
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 07 */ {
        /* 00 */ TO_RGB555(0x000000),
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
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 08 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x505800),
        /* 08 */ TO_RGB555(0x888808),
        /* 09 */ TO_RGB555(0xB8C008),
        /* 10 */ TO_RGB555(0xF8F818),
        /* 11 */ TO_RGB555(0xF8F8A0),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 09 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x500000),
        /* 08 */ TO_RGB555(0x880000),
        /* 09 */ TO_RGB555(0xC80008),
        /* 10 */ TO_RGB555(0xF80800),
        /* 11 */ TO_RGB555(0xF85048),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    }
};

// [D_088cc208] <description>
Palette bouncy_road_remix_5_bg_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0xB89050),
        /* 05 */ TO_RGB555(0xB08848),
        /* 06 */ TO_RGB555(0xF8E0C0),
        /* 07 */ TO_RGB555(0xC8B080),
        /* 08 */ TO_RGB555(0xC0A068),
        /* 09 */ TO_RGB555(0xB08848),
        /* 10 */ TO_RGB555(0x987038),
        /* 11 */ TO_RGB555(0x885838),
        /* 12 */ TO_RGB555(0x704028),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0xC0C0C0),
        /* 02 */ TO_RGB555(0xA8A8A8),
        /* 03 */ TO_RGB555(0x989898),
        /* 04 */ TO_RGB555(0x808080),
        /* 05 */ TO_RGB555(0x686868),
        /* 06 */ TO_RGB555(0x505050),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 02 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x905800),
        /* 02 */ TO_RGB555(0x784000),
        /* 03 */ TO_RGB555(0x683000),
        /* 04 */ TO_RGB555(0x501800),
        /* 05 */ TO_RGB555(0x380000),
        /* 06 */ TO_RGB555(0x200000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 03 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x202020),
        /* 02 */ TO_RGB555(0xC0A068),
        /* 03 */ TO_RGB555(0xB89058),
        /* 04 */ TO_RGB555(0xB08848),
        /* 05 */ TO_RGB555(0xB08040),
        /* 06 */ TO_RGB555(0xD8C0A0),
        /* 07 */ TO_RGB555(0xC8B080),
        /* 08 */ TO_RGB555(0xC0A068),
        /* 09 */ TO_RGB555(0xB08848),
        /* 10 */ TO_RGB555(0x987038),
        /* 11 */ TO_RGB555(0x885838),
        /* 12 */ TO_RGB555(0x704028),
        /* 13 */ TO_RGB555(0x582020),
        /* 14 */ TO_RGB555(0x401818),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 04 */ {
        /* 00 */ TO_RGB555(0x000000),
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
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 05 */ {
        /* 00 */ TO_RGB555(0x000000),
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
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 06 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0xD0A870),
        /* 06 */ TO_RGB555(0xC8A068),
        /* 07 */ TO_RGB555(0xC09860),
        /* 08 */ TO_RGB555(0xB89050),
        /* 09 */ TO_RGB555(0xB08848),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    }
};