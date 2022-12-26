#include "global.h"
#include "graphics.h"

// [D_088b7d08] OBJ Palette
const Palette prologue_tap_trial_2_obj_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0x00C000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x707070),
        /* 03 */ TO_RGB555(0xB8B8B8),
        /* 04 */ TO_RGB555(0xE8E8E8),
        /* 05 */ TO_RGB555(0xF8F8F8),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0xF8F008),
        /* 08 */ TO_RGB555(0x504800),
        /* 09 */ TO_RGB555(0x100080),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    }
};

// [D_088b7d28] BG Palette
const Palette prologue_tap_trial_2_bg_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0x00D048),
        /* 01 */ TO_RGB555(0x401000),
        /* 02 */ TO_RGB555(0x304038),
        /* 03 */ TO_RGB555(0x586058),
        /* 04 */ TO_RGB555(0x584030),
        /* 05 */ TO_RGB555(0x706050),
        /* 06 */ TO_RGB555(0x505048),
        /* 07 */ TO_RGB555(0x706868),
        /* 08 */ TO_RGB555(0x888078),
        /* 09 */ TO_RGB555(0xA08888),
        /* 10 */ TO_RGB555(0xC09098),
        /* 11 */ TO_RGB555(0xC0A8B0),
        /* 12 */ TO_RGB555(0xD8B8C0),
        /* 13 */ TO_RGB555(0xC8B8B0),
        /* 14 */ TO_RGB555(0xD8D8D0),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x880000),
        /* 02 */ TO_RGB555(0xA08030),
        /* 03 */ TO_RGB555(0xD0B800),
        /* 04 */ TO_RGB555(0xF89830),
        /* 05 */ TO_RGB555(0xF8B068),
        /* 06 */ TO_RGB555(0xF8C088),
        /* 07 */ TO_RGB555(0x806078),
        /* 08 */ TO_RGB555(0x987088),
        /* 09 */ TO_RGB555(0xB09098),
        /* 10 */ TO_RGB555(0xB89880),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0xC8A828),
        /* 13 */ TO_RGB555(0xD0B800),
        /* 14 */ TO_RGB555(0xF0D000),
        /* 15 */ TO_RGB555(0xE0C800)
    },
    /* PALETTE 02 */ {
        /* 00 */ TO_RGB555(0x00D048),
        /* 01 */ TO_RGB555(0x203028),
        /* 02 */ TO_RGB555(0x304038),
        /* 03 */ TO_RGB555(0x586058),
        /* 04 */ TO_RGB555(0x584030),
        /* 05 */ TO_RGB555(0x706050),
        /* 06 */ TO_RGB555(0x505048),
        /* 07 */ TO_RGB555(0x706868),
        /* 08 */ TO_RGB555(0x888078),
        /* 09 */ TO_RGB555(0xA08888),
        /* 10 */ TO_RGB555(0xC09098),
        /* 11 */ TO_RGB555(0xC0A8B0),
        /* 12 */ TO_RGB555(0xD8B8C0),
        /* 13 */ TO_RGB555(0xA8A098),
        /* 14 */ TO_RGB555(0xD8D8D0),
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
        /* 00 */ TO_RGB555(0x10E8A8),
        /* 01 */ TO_RGB555(0xF8F8F8),
        /* 02 */ TO_RGB555(0xA8A8A8),
        /* 03 */ TO_RGB555(0xA8A010),
        /* 04 */ TO_RGB555(0x70B0C8),
        /* 05 */ TO_RGB555(0x90E0F8),
        /* 06 */ TO_RGB555(0xF8F8F8),
        /* 07 */ TO_RGB555(0xD0D0D0),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0xF8B810),
        /* 10 */ TO_RGB555(0xB000A8),
        /* 11 */ TO_RGB555(0xF88860),
        /* 12 */ TO_RGB555(0xF81808),
        /* 13 */ TO_RGB555(0x880000),
        /* 14 */ TO_RGB555(0xF8B0B0),
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
        /* 07 */ TO_RGB555(0xB000A8),
        /* 08 */ TO_RGB555(0xC03088),
        /* 09 */ TO_RGB555(0xC86068),
        /* 10 */ TO_RGB555(0xD89048),
        /* 11 */ TO_RGB555(0xE8D028),
        /* 12 */ TO_RGB555(0xF8F808),
        /* 13 */ TO_RGB555(0xD0D008),
        /* 14 */ TO_RGB555(0xA8A810),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 08 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x880000),
        /* 02 */ TO_RGB555(0xA08030),
        /* 03 */ TO_RGB555(0xF8B0B0),
        /* 04 */ TO_RGB555(0xF89830),
        /* 05 */ TO_RGB555(0xF8B068),
        /* 06 */ TO_RGB555(0xF8D0B0),
        /* 07 */ TO_RGB555(0xB000A8),
        /* 08 */ TO_RGB555(0xB88008),
        /* 09 */ TO_RGB555(0xF8F8F8),
        /* 10 */ TO_RGB555(0x888040),
        /* 11 */ TO_RGB555(0x80A080),
        /* 12 */ TO_RGB555(0x78C8C0),
        /* 13 */ TO_RGB555(0x78C8C0),
        /* 14 */ TO_RGB555(0x88C868),
        /* 15 */ TO_RGB555(0xA0D840)
    }
};
