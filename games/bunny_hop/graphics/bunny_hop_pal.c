#include "global.h"
#include "graphics.h"

// [D_088f8fc8] Bunny Hop (BG & OBJ)
Palette bunny_hop_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0x00C8F8),
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
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0x00C8F8),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xA0A0A0),
        /* 03 */ TO_RGB555(0xF8E0C0),
        /* 04 */ TO_RGB555(0xF8F8F8),
        /* 05 */ TO_RGB555(0x085868),
        /* 06 */ TO_RGB555(0x087088),
        /* 07 */ TO_RGB555(0x1090A8),
        /* 08 */ TO_RGB555(0x10A0B8),
        /* 09 */ TO_RGB555(0x10A8C0),
        /* 10 */ TO_RGB555(0x68E0D8),
        /* 11 */ TO_RGB555(0x80E8F8),
        /* 12 */ TO_RGB555(0x40D8F8),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0xF86060)
    },
    /* PALETTE 02 */ {
        /* 00 */ TO_RGB555(0x00C8F8),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x00C8F8),
        /* 05 */ TO_RGB555(0x20D0F8),
        /* 06 */ TO_RGB555(0x40D8F8),
        /* 07 */ TO_RGB555(0x60E0F8),
        /* 08 */ TO_RGB555(0x80E8F8),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x80E8F8),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0xF8F8F8),
        /* 15 */ TO_RGB555(0xF8A0A0)
    },
    /* PALETTE 03 */ {
        /* 00 */ TO_RGB555(0x00C8F8),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xA0A0A0),
        /* 03 */ TO_RGB555(0xF8E0C0),
        /* 04 */ TO_RGB555(0xF8F8F8),
        /* 05 */ TO_RGB555(0x002830),
        /* 06 */ TO_RGB555(0x004050),
        /* 07 */ TO_RGB555(0x086070),
        /* 08 */ TO_RGB555(0x087080),
        /* 09 */ TO_RGB555(0x087888),
        /* 10 */ TO_RGB555(0x50A8A8),
        /* 11 */ TO_RGB555(0x60C0C0),
        /* 12 */ TO_RGB555(0x30A8C0),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0xF86060)
    },
    /* PALETTE 04 */ {
        /* 00 */ TO_RGB555(0x00C8F8),
        /* 01 */ TO_RGB555(0x085868),
        /* 02 */ TO_RGB555(0x086070),
        /* 03 */ TO_RGB555(0x086878),
        /* 04 */ TO_RGB555(0x087080),
        /* 05 */ TO_RGB555(0x087890),
        /* 06 */ TO_RGB555(0x088098),
        /* 07 */ TO_RGB555(0x0888A0),
        /* 08 */ TO_RGB555(0x0090B0),
        /* 09 */ TO_RGB555(0x0098B8),
        /* 10 */ TO_RGB555(0x00A0C0),
        /* 11 */ TO_RGB555(0x00A8C8),
        /* 12 */ TO_RGB555(0x00B0D8),
        /* 13 */ TO_RGB555(0x00B8E0),
        /* 14 */ TO_RGB555(0x00C0E8),
        /* 15 */ TO_RGB555(0x80E8F8)
    },
    /* PALETTE 05 */ {
        /* 00 */ TO_RGB555(0x00C8F8),
        /* 01 */ TO_RGB555(0x10C8F0),
        /* 02 */ TO_RGB555(0x20C8F0),
        /* 03 */ TO_RGB555(0x30D0F0),
        /* 04 */ TO_RGB555(0x40D0F0),
        /* 05 */ TO_RGB555(0x50D8F0),
        /* 06 */ TO_RGB555(0x60D8F0),
        /* 07 */ TO_RGB555(0x70E0F0),
        /* 08 */ TO_RGB555(0x88E0F0),
        /* 09 */ TO_RGB555(0x98E8F8),
        /* 10 */ TO_RGB555(0xA8E8F8),
        /* 11 */ TO_RGB555(0xB8E8F8),
        /* 12 */ TO_RGB555(0xC8F0F8),
        /* 13 */ TO_RGB555(0xD8F0F8),
        /* 14 */ TO_RGB555(0xE8F8F8),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 06 */ {
        /* 00 */ TO_RGB555(0x00C8F8),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000808),
        /* 04 */ TO_RGB555(0x001010),
        /* 05 */ TO_RGB555(0x001818),
        /* 06 */ TO_RGB555(0x001820),
        /* 07 */ TO_RGB555(0x002028),
        /* 08 */ TO_RGB555(0x002830),
        /* 09 */ TO_RGB555(0x003038),
        /* 10 */ TO_RGB555(0x003040),
        /* 11 */ TO_RGB555(0x003840),
        /* 12 */ TO_RGB555(0x004048),
        /* 13 */ TO_RGB555(0x004850),
        /* 14 */ TO_RGB555(0x004858),
        /* 15 */ TO_RGB555(0x005060)
    },
    /* PALETTE 07 */ {
        /* 00 */ TO_RGB555(0x00C8F8),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xB8B000),
        /* 03 */ TO_RGB555(0xD0C800),
        /* 04 */ TO_RGB555(0xE8E000),
        /* 05 */ TO_RGB555(0xF8F800),
        /* 06 */ TO_RGB555(0xF8F898),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0xF8F8F8),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 08 */ {
        /* 00 */ TO_RGB555(0x700000),
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
    /* PALETTE 09 */ {
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
    /* PALETTE 10 */ {
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
    /* PALETTE 11 */ {
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
    /* PALETTE 12 */ {
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
    /* PALETTE 13 */ {
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
    /* PALETTE 14 */ {
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
    /* PALETTE 15 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x086838),
        /* 06 */ TO_RGB555(0x088848),
        /* 07 */ TO_RGB555(0x10A858),
        /* 08 */ TO_RGB555(0x10B860),
        /* 09 */ TO_RGB555(0x10C060),
        /* 10 */ TO_RGB555(0x68E088),
        /* 11 */ TO_RGB555(0x80F8B8),
        /* 12 */ TO_RGB555(0x40F8A0),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    }
};

// [D_088f91c8] Remix 3 (BG & OBJ)
Palette bunny_hop_remix_3_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0xF8D028),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0xF8F8F8),
        /* 05 */ TO_RGB555(0x002830),
        /* 06 */ TO_RGB555(0x004050),
        /* 07 */ TO_RGB555(0x086070),
        /* 08 */ TO_RGB555(0x087080),
        /* 09 */ TO_RGB555(0x087888),
        /* 10 */ TO_RGB555(0x50A8A8),
        /* 11 */ TO_RGB555(0x60C0C0),
        /* 12 */ TO_RGB555(0x30A8C0),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0xF8D028),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x584810),
        /* 11 */ TO_RGB555(0x584810),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 02 */ {
        /* 00 */ TO_RGB555(0xF8D028),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0xF8D028),
        /* 05 */ TO_RGB555(0xF8D858),
        /* 06 */ TO_RGB555(0xF8E878),
        /* 07 */ TO_RGB555(0xF8F098),
        /* 08 */ TO_RGB555(0xF8F8B8),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x80E8F8),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 03 */ {
        /* 00 */ TO_RGB555(0xF8D028),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x584810),
        /* 11 */ TO_RGB555(0x584810),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 04 */ {
        /* 00 */ TO_RGB555(0xF8D028),
        /* 01 */ TO_RGB555(0x400078),
        /* 02 */ TO_RGB555(0x600080),
        /* 03 */ TO_RGB555(0x700090),
        /* 04 */ TO_RGB555(0x8800A8),
        /* 05 */ TO_RGB555(0xA000B8),
        /* 06 */ TO_RGB555(0xB800C0),
        /* 07 */ TO_RGB555(0xD018D8),
        /* 08 */ TO_RGB555(0xE040D8),
        /* 09 */ TO_RGB555(0xE860C8),
        /* 10 */ TO_RGB555(0xF078B8),
        /* 11 */ TO_RGB555(0xF09098),
        /* 12 */ TO_RGB555(0xF8A080),
        /* 13 */ TO_RGB555(0xF8B068),
        /* 14 */ TO_RGB555(0xF8C048),
        /* 15 */ TO_RGB555(0xF8D028)
    },
    /* PALETTE 05 */ {
        /* 00 */ TO_RGB555(0xF8D028),
        /* 01 */ TO_RGB555(0xE000F8),
        /* 02 */ TO_RGB555(0xE808E8),
        /* 03 */ TO_RGB555(0xE818D8),
        /* 04 */ TO_RGB555(0xE828C8),
        /* 05 */ TO_RGB555(0xE838B8),
        /* 06 */ TO_RGB555(0xE848B0),
        /* 07 */ TO_RGB555(0xE85898),
        /* 08 */ TO_RGB555(0xE86890),
        /* 09 */ TO_RGB555(0xF07880),
        /* 10 */ TO_RGB555(0xF08070),
        /* 11 */ TO_RGB555(0xF09068),
        /* 12 */ TO_RGB555(0xF0A058),
        /* 13 */ TO_RGB555(0xF0B048),
        /* 14 */ TO_RGB555(0xF0B840),
        /* 15 */ TO_RGB555(0xF8D028)
    },
    /* PALETTE 06 */ {
        /* 00 */ TO_RGB555(0xF8D028),
        /* 01 */ TO_RGB555(0x080008),
        /* 02 */ TO_RGB555(0x100010),
        /* 03 */ TO_RGB555(0x100018),
        /* 04 */ TO_RGB555(0x180020),
        /* 05 */ TO_RGB555(0x180028),
        /* 06 */ TO_RGB555(0x180030),
        /* 07 */ TO_RGB555(0x200038),
        /* 08 */ TO_RGB555(0x200040),
        /* 09 */ TO_RGB555(0x200048),
        /* 10 */ TO_RGB555(0x200050),
        /* 11 */ TO_RGB555(0x280058),
        /* 12 */ TO_RGB555(0x300060),
        /* 13 */ TO_RGB555(0x380060),
        /* 14 */ TO_RGB555(0x400068),
        /* 15 */ TO_RGB555(0x480070)
    },
    /* PALETTE 07 */ {
        /* 00 */ TO_RGB555(0xF8D028),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xA8E800),
        /* 03 */ TO_RGB555(0xC0F028),
        /* 04 */ TO_RGB555(0xD0F058),
        /* 05 */ TO_RGB555(0xE0F880),
        /* 06 */ TO_RGB555(0xF8F8B8),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0xF8F8F8),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 08 */ {
        /* 00 */ TO_RGB555(0x700000),
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
    }
};