#include "global.h"
#include "graphics.h"

// [D_0890ae54] Reading Scene OBJ Palette
Palette reading_obj_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0x204858),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xF80800),
        /* 03 */ TO_RGB555(0x204858),
        /* 04 */ TO_RGB555(0x0818F8),
        /* 05 */ TO_RGB555(0x204858),
        /* 06 */ TO_RGB555(0x204858),
        /* 07 */ TO_RGB555(0x204858),
        /* 08 */ TO_RGB555(0xF8F8F8),
        /* 09 */ TO_RGB555(0x204858),
        /* 10 */ TO_RGB555(0x204858),
        /* 11 */ TO_RGB555(0x204858),
        /* 12 */ TO_RGB555(0x204858),
        /* 13 */ TO_RGB555(0x204858),
        /* 14 */ TO_RGB555(0x204858),
        /* 15 */ TO_RGB555(0x204858)
    },
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0x286840),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x204858),
        /* 03 */ TO_RGB555(0x204858),
        /* 04 */ TO_RGB555(0x204858),
        /* 05 */ TO_RGB555(0x204858),
        /* 06 */ TO_RGB555(0x204858),
        /* 07 */ TO_RGB555(0x204858),
        /* 08 */ TO_RGB555(0x204858),
        /* 09 */ TO_RGB555(0x204858),
        /* 10 */ TO_RGB555(0x204858),
        /* 11 */ TO_RGB555(0x204858),
        /* 12 */ TO_RGB555(0x204858),
        /* 13 */ TO_RGB555(0x204858),
        /* 14 */ TO_RGB555(0xF0F818),
        /* 15 */ TO_RGB555(0xF8F8F8)
    }
};

// [D_0890ae94] Reading Scene BG Palette (Bulletin)
Palette reading_style_bulletin_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0x204858),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xF80800),
        /* 03 */ TO_RGB555(0x204858),
        /* 04 */ TO_RGB555(0xF0F818),
        /* 05 */ TO_RGB555(0x204858),
        /* 06 */ TO_RGB555(0x204858),
        /* 07 */ TO_RGB555(0x204858),
        /* 08 */ TO_RGB555(0xF8F8F8),
        /* 09 */ TO_RGB555(0x204858),
        /* 10 */ TO_RGB555(0x204858),
        /* 11 */ TO_RGB555(0x204858),
        /* 12 */ TO_RGB555(0x204858),
        /* 13 */ TO_RGB555(0x204858),
        /* 14 */ TO_RGB555(0x204858),
        /* 15 */ TO_RGB555(0x204858)
    },
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0x286840),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x204858),
        /* 03 */ TO_RGB555(0x204858),
        /* 04 */ TO_RGB555(0x204858),
        /* 05 */ TO_RGB555(0x204858),
        /* 06 */ TO_RGB555(0x204858),
        /* 07 */ TO_RGB555(0x204858),
        /* 08 */ TO_RGB555(0x204858),
        /* 09 */ TO_RGB555(0x204858),
        /* 10 */ TO_RGB555(0x204858),
        /* 11 */ TO_RGB555(0x204858),
        /* 12 */ TO_RGB555(0x204858),
        /* 13 */ TO_RGB555(0x204858),
        /* 14 */ TO_RGB555(0xF0F818),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 02 */ {
        /* 00 */ TO_RGB555(0x583060),
        /* 01 */ TO_RGB555(0xD8D8D8),
        /* 02 */ TO_RGB555(0xF8B0A8),
        /* 03 */ TO_RGB555(0x204858),
        /* 04 */ TO_RGB555(0x204858),
        /* 05 */ TO_RGB555(0x204858),
        /* 06 */ TO_RGB555(0x204858),
        /* 07 */ TO_RGB555(0x204858),
        /* 08 */ TO_RGB555(0x204858),
        /* 09 */ TO_RGB555(0x204858),
        /* 10 */ TO_RGB555(0x204858),
        /* 11 */ TO_RGB555(0x204858),
        /* 12 */ TO_RGB555(0x204858),
        /* 13 */ TO_RGB555(0xD8F8D0),
        /* 14 */ TO_RGB555(0xE8E8E8),
        /* 15 */ TO_RGB555(0xF8F8F8)
    }
};

// [D_0890aef4] Reading Scene BG Palette (Manzai)
Palette reading_style_manzai_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0x204858),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xF80800),
        /* 03 */ TO_RGB555(0x204858),
        /* 04 */ TO_RGB555(0xF0F818),
        /* 05 */ TO_RGB555(0x204858),
        /* 06 */ TO_RGB555(0x204858),
        /* 07 */ TO_RGB555(0x204858),
        /* 08 */ TO_RGB555(0xF8F8F8),
        /* 09 */ TO_RGB555(0x204858),
        /* 10 */ TO_RGB555(0x204858),
        /* 11 */ TO_RGB555(0x204858),
        /* 12 */ TO_RGB555(0x204858),
        /* 13 */ TO_RGB555(0x204858),
        /* 14 */ TO_RGB555(0x204858),
        /* 15 */ TO_RGB555(0x204858)
    },
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0x286840),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x204858),
        /* 03 */ TO_RGB555(0x204858),
        /* 04 */ TO_RGB555(0x204858),
        /* 05 */ TO_RGB555(0x204858),
        /* 06 */ TO_RGB555(0x204858),
        /* 07 */ TO_RGB555(0x204858),
        /* 08 */ TO_RGB555(0x204858),
        /* 09 */ TO_RGB555(0x204858),
        /* 10 */ TO_RGB555(0x204858),
        /* 11 */ TO_RGB555(0x204858),
        /* 12 */ TO_RGB555(0x204858),
        /* 13 */ TO_RGB555(0x204858),
        /* 14 */ TO_RGB555(0xD0D8A8),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 02 */ {
        /* 00 */ TO_RGB555(0x583060),
        /* 01 */ TO_RGB555(0xF8E0E0),
        /* 02 */ TO_RGB555(0xF8F0E0),
        /* 03 */ TO_RGB555(0xF0D8C0),
        /* 04 */ TO_RGB555(0xF8F818),
        /* 05 */ TO_RGB555(0xE8D0A8),
        /* 06 */ TO_RGB555(0xF8C8C8),
        /* 07 */ TO_RGB555(0xF8E0D0),
        /* 08 */ TO_RGB555(0xC0B0A0),
        /* 09 */ TO_RGB555(0xD8D810),
        /* 10 */ TO_RGB555(0xD0B898),
        /* 11 */ TO_RGB555(0xE8D8C0),
        /* 12 */ TO_RGB555(0x102830),
        /* 13 */ TO_RGB555(0xE8F8E0),
        /* 14 */ TO_RGB555(0xD8F8D0),
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
        /* 00 */ TO_RGB555(0x583060),
        /* 01 */ TO_RGB555(0xF8D8D8),
        /* 02 */ TO_RGB555(0xF8F0E0),
        /* 03 */ TO_RGB555(0xE0C8B0),
        /* 04 */ TO_RGB555(0xF8F818),
        /* 05 */ TO_RGB555(0xE0C8A0),
        /* 06 */ TO_RGB555(0xE8B8B8),
        /* 07 */ TO_RGB555(0xE0D8D0),
        /* 08 */ TO_RGB555(0xB0A090),
        /* 09 */ TO_RGB555(0xD8D810),
        /* 10 */ TO_RGB555(0xC0A888),
        /* 11 */ TO_RGB555(0xE8D8C0),
        /* 12 */ TO_RGB555(0x102830),
        /* 13 */ TO_RGB555(0xD8F8D0),
        /* 14 */ TO_RGB555(0xC8E8C0),
        /* 15 */ TO_RGB555(0xF8F8F8)
    }
};

// [D_0890af94] Reading Scene BG Palette (Cooking)
Palette reading_style_cooking_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0x204858),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xF80800),
        /* 03 */ TO_RGB555(0x204858),
        /* 04 */ TO_RGB555(0xF0F818),
        /* 05 */ TO_RGB555(0xF8E0E0),
        /* 06 */ TO_RGB555(0xF0D8D8),
        /* 07 */ TO_RGB555(0xD8E8C8),
        /* 08 */ TO_RGB555(0xF8F8F8),
        /* 09 */ TO_RGB555(0xF0F8E0),
        /* 10 */ TO_RGB555(0x204858),
        /* 11 */ TO_RGB555(0x204858),
        /* 12 */ TO_RGB555(0x204858),
        /* 13 */ TO_RGB555(0x204858),
        /* 14 */ TO_RGB555(0x204858),
        /* 15 */ TO_RGB555(0x204858)
    },
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0x286840),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x204858),
        /* 03 */ TO_RGB555(0x204858),
        /* 04 */ TO_RGB555(0x204858),
        /* 05 */ TO_RGB555(0x204858),
        /* 06 */ TO_RGB555(0x204858),
        /* 07 */ TO_RGB555(0x204858),
        /* 08 */ TO_RGB555(0x204858),
        /* 09 */ TO_RGB555(0x204858),
        /* 10 */ TO_RGB555(0x204858),
        /* 11 */ TO_RGB555(0x204858),
        /* 12 */ TO_RGB555(0x204858),
        /* 13 */ TO_RGB555(0x204858),
        /* 14 */ TO_RGB555(0xF0F818),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 02 */ {
        /* 00 */ TO_RGB555(0x583060),
        /* 01 */ TO_RGB555(0xB8B898),
        /* 02 */ TO_RGB555(0x204858),
        /* 03 */ TO_RGB555(0x204858),
        /* 04 */ TO_RGB555(0x204858),
        /* 05 */ TO_RGB555(0x204858),
        /* 06 */ TO_RGB555(0x204858),
        /* 07 */ TO_RGB555(0x204858),
        /* 08 */ TO_RGB555(0x204858),
        /* 09 */ TO_RGB555(0x204858),
        /* 10 */ TO_RGB555(0x204858),
        /* 11 */ TO_RGB555(0x204858),
        /* 12 */ TO_RGB555(0x204858),
        /* 13 */ TO_RGB555(0xD8F8D0),
        /* 14 */ TO_RGB555(0xE0E0C8),
        /* 15 */ TO_RGB555(0xF8F8E0)
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
        /* 00 */ TO_RGB555(0x204858),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xF80800),
        /* 03 */ TO_RGB555(0x204858),
        /* 04 */ TO_RGB555(0xF0F818),
        /* 05 */ TO_RGB555(0x204858),
        /* 06 */ TO_RGB555(0x204858),
        /* 07 */ TO_RGB555(0x204858),
        /* 08 */ TO_RGB555(0xF8F8F8),
        /* 09 */ TO_RGB555(0x204858),
        /* 10 */ TO_RGB555(0x204858),
        /* 11 */ TO_RGB555(0x204858),
        /* 12 */ TO_RGB555(0x204858),
        /* 13 */ TO_RGB555(0x204858),
        /* 14 */ TO_RGB555(0x204858),
        /* 15 */ TO_RGB555(0x204858)
    }
};

// [D_0890b134] Reading Scene BG Palette (Mail)
Palette reading_style_mail_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0x204858),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xE088F8),
        /* 03 */ TO_RGB555(0x204858),
        /* 04 */ TO_RGB555(0xF0F818),
        /* 05 */ TO_RGB555(0x204858),
        /* 06 */ TO_RGB555(0x204858),
        /* 07 */ TO_RGB555(0x204858),
        /* 08 */ TO_RGB555(0x9838F8),
        /* 09 */ TO_RGB555(0x204858),
        /* 10 */ TO_RGB555(0x204858),
        /* 11 */ TO_RGB555(0x204858),
        /* 12 */ TO_RGB555(0x204858),
        /* 13 */ TO_RGB555(0x204858),
        /* 14 */ TO_RGB555(0x204858),
        /* 15 */ TO_RGB555(0x204858)
    },
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0x286840),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x204858),
        /* 03 */ TO_RGB555(0x204858),
        /* 04 */ TO_RGB555(0x204858),
        /* 05 */ TO_RGB555(0x204858),
        /* 06 */ TO_RGB555(0x204858),
        /* 07 */ TO_RGB555(0x204858),
        /* 08 */ TO_RGB555(0x204858),
        /* 09 */ TO_RGB555(0x204858),
        /* 10 */ TO_RGB555(0x204858),
        /* 11 */ TO_RGB555(0x204858),
        /* 12 */ TO_RGB555(0x204858),
        /* 13 */ TO_RGB555(0x204858),
        /* 14 */ TO_RGB555(0xF0F818),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 02 */ {
        /* 00 */ TO_RGB555(0x586018),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x583060),
        /* 03 */ TO_RGB555(0x500000),
        /* 04 */ TO_RGB555(0x900000),
        /* 05 */ TO_RGB555(0xA8D8D8),
        /* 06 */ TO_RGB555(0xA8D8E0),
        /* 07 */ TO_RGB555(0xF8F8F8),
        /* 08 */ TO_RGB555(0xD8F8B0),
        /* 09 */ TO_RGB555(0xF8A088),
        /* 10 */ TO_RGB555(0xA8D8D8),
        /* 11 */ TO_RGB555(0x204858),
        /* 12 */ TO_RGB555(0x204858),
        /* 13 */ TO_RGB555(0xD8F8D0),
        /* 14 */ TO_RGB555(0xC8E8C0),
        /* 15 */ TO_RGB555(0x989898)
    }
};

// [D_0890b194] Reading Scene BG Palette (Haiku)
Palette reading_style_haiku_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0x204858),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xF80800),
        /* 03 */ TO_RGB555(0x204858),
        /* 04 */ TO_RGB555(0xF0F818),
        /* 05 */ TO_RGB555(0xF8E0E0),
        /* 06 */ TO_RGB555(0xF0D8D8),
        /* 07 */ TO_RGB555(0xD8E8C8),
        /* 08 */ TO_RGB555(0xF8F8F8),
        /* 09 */ TO_RGB555(0xF0F8E0),
        /* 10 */ TO_RGB555(0xC8F0F8),
        /* 11 */ TO_RGB555(0xD8F0F8),
        /* 12 */ TO_RGB555(0xE0F8F8),
        /* 13 */ TO_RGB555(0xF8E8E8),
        /* 14 */ TO_RGB555(0x204858),
        /* 15 */ TO_RGB555(0x204858)
    },
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0x286840),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x204858),
        /* 03 */ TO_RGB555(0x204858),
        /* 04 */ TO_RGB555(0x204858),
        /* 05 */ TO_RGB555(0x204858),
        /* 06 */ TO_RGB555(0x204858),
        /* 07 */ TO_RGB555(0x204858),
        /* 08 */ TO_RGB555(0x204858),
        /* 09 */ TO_RGB555(0x204858),
        /* 10 */ TO_RGB555(0x204858),
        /* 11 */ TO_RGB555(0x204858),
        /* 12 */ TO_RGB555(0x204858),
        /* 13 */ TO_RGB555(0x204858),
        /* 14 */ TO_RGB555(0xF0F818),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 02 */ {
        /* 00 */ TO_RGB555(0x583060),
        /* 01 */ TO_RGB555(0xB0B0B0),
        /* 02 */ TO_RGB555(0x204858),
        /* 03 */ TO_RGB555(0x204858),
        /* 04 */ TO_RGB555(0x204858),
        /* 05 */ TO_RGB555(0x204858),
        /* 06 */ TO_RGB555(0x204858),
        /* 07 */ TO_RGB555(0x204858),
        /* 08 */ TO_RGB555(0x204858),
        /* 09 */ TO_RGB555(0x204858),
        /* 10 */ TO_RGB555(0x204858),
        /* 11 */ TO_RGB555(0x204858),
        /* 12 */ TO_RGB555(0x204858),
        /* 13 */ TO_RGB555(0xD8F8D0),
        /* 14 */ TO_RGB555(0xE8E8E8),
        /* 15 */ TO_RGB555(0xF8F8F8)
    }
};

// [D_0890b1f4] Reading Scene BG Palette (Classroom)
Palette reading_style_classroom_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0x204858),
        /* 01 */ TO_RGB555(0xF8F8F8),
        /* 02 */ TO_RGB555(0xF80800),
        /* 03 */ TO_RGB555(0x204858),
        /* 04 */ TO_RGB555(0xF0F818),
        /* 05 */ TO_RGB555(0x204858),
        /* 06 */ TO_RGB555(0x204858),
        /* 07 */ TO_RGB555(0x204858),
        /* 08 */ TO_RGB555(0xB0D0A8),
        /* 09 */ TO_RGB555(0xC0D8B8),
        /* 10 */ TO_RGB555(0xC0D8B8),
        /* 11 */ TO_RGB555(0xC8D8C0),
        /* 12 */ TO_RGB555(0xC8E0C8),
        /* 13 */ TO_RGB555(0xD0E0D0),
        /* 14 */ TO_RGB555(0xD8E8D0),
        /* 15 */ TO_RGB555(0xD8E8D8)
    },
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0x286840),
        /* 01 */ TO_RGB555(0xF8F8F8),
        /* 02 */ TO_RGB555(0x204858),
        /* 03 */ TO_RGB555(0x204858),
        /* 04 */ TO_RGB555(0x204858),
        /* 05 */ TO_RGB555(0x204858),
        /* 06 */ TO_RGB555(0x204858),
        /* 07 */ TO_RGB555(0x204858),
        /* 08 */ TO_RGB555(0x204858),
        /* 09 */ TO_RGB555(0x204858),
        /* 10 */ TO_RGB555(0x204858),
        /* 11 */ TO_RGB555(0x204858),
        /* 12 */ TO_RGB555(0x204858),
        /* 13 */ TO_RGB555(0x204858),
        /* 14 */ TO_RGB555(0xD80008),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 02 */ {
        /* 00 */ TO_RGB555(0x583060),
        /* 01 */ TO_RGB555(0x080808),
        /* 02 */ TO_RGB555(0x685828),
        /* 03 */ TO_RGB555(0x706838),
        /* 04 */ TO_RGB555(0x807850),
        /* 05 */ TO_RGB555(0x908868),
        /* 06 */ TO_RGB555(0xA09878),
        /* 07 */ TO_RGB555(0xB0A890),
        /* 08 */ TO_RGB555(0xC0B8A8),
        /* 09 */ TO_RGB555(0x204858),
        /* 10 */ TO_RGB555(0x204858),
        /* 11 */ TO_RGB555(0x204858),
        /* 12 */ TO_RGB555(0x204858),
        /* 13 */ TO_RGB555(0x282828),
        /* 14 */ TO_RGB555(0x383838),
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
        /* 01 */ TO_RGB555(0x90B088),
        /* 02 */ TO_RGB555(0x98B890),
        /* 03 */ TO_RGB555(0xA0C098),
        /* 04 */ TO_RGB555(0xA8C0A0),
        /* 05 */ TO_RGB555(0xA8C0A0),
        /* 06 */ TO_RGB555(0xB0C8A8),
        /* 07 */ TO_RGB555(0xB0C8B0),
        /* 08 */ TO_RGB555(0xB8D0B8),
        /* 09 */ TO_RGB555(0xC0D0B8),
        /* 10 */ TO_RGB555(0xC8D8C8),
        /* 11 */ TO_RGB555(0xD8E0D0),
        /* 12 */ TO_RGB555(0xE0E8E0),
        /* 13 */ TO_RGB555(0xE8F0E0),
        /* 14 */ TO_RGB555(0xF0F0F0),
        /* 15 */ TO_RGB555(0xF8F8F8)
    }
};

// [D_0890b294] Reading Scene BG Palette (Train)
Palette reading_style_train_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0x204858),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xF80800),
        /* 03 */ TO_RGB555(0x204858),
        /* 04 */ TO_RGB555(0xF0F818),
        /* 05 */ TO_RGB555(0x204858),
        /* 06 */ TO_RGB555(0x204858),
        /* 07 */ TO_RGB555(0x204858),
        /* 08 */ TO_RGB555(0xF8F8F8),
        /* 09 */ TO_RGB555(0x204858),
        /* 10 */ TO_RGB555(0x204858),
        /* 11 */ TO_RGB555(0x204858),
        /* 12 */ TO_RGB555(0x204858),
        /* 13 */ TO_RGB555(0x204858),
        /* 14 */ TO_RGB555(0x204858),
        /* 15 */ TO_RGB555(0x204858)
    },
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0x286840),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x204858),
        /* 03 */ TO_RGB555(0x204858),
        /* 04 */ TO_RGB555(0x204858),
        /* 05 */ TO_RGB555(0x204858),
        /* 06 */ TO_RGB555(0x204858),
        /* 07 */ TO_RGB555(0x204858),
        /* 08 */ TO_RGB555(0x204858),
        /* 09 */ TO_RGB555(0x204858),
        /* 10 */ TO_RGB555(0x204858),
        /* 11 */ TO_RGB555(0x204858),
        /* 12 */ TO_RGB555(0x204858),
        /* 13 */ TO_RGB555(0x204858),
        /* 14 */ TO_RGB555(0xF0F818),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 02 */ {
        /* 00 */ TO_RGB555(0x583060),
        /* 01 */ TO_RGB555(0xE8E8E8),
        /* 02 */ TO_RGB555(0x204858),
        /* 03 */ TO_RGB555(0x204858),
        /* 04 */ TO_RGB555(0x204858),
        /* 05 */ TO_RGB555(0x204858),
        /* 06 */ TO_RGB555(0x204858),
        /* 07 */ TO_RGB555(0x204858),
        /* 08 */ TO_RGB555(0x204858),
        /* 09 */ TO_RGB555(0x204858),
        /* 10 */ TO_RGB555(0x204858),
        /* 11 */ TO_RGB555(0x204858),
        /* 12 */ TO_RGB555(0xE8E8E8),
        /* 13 */ TO_RGB555(0xE8E8E8),
        /* 14 */ TO_RGB555(0xF0F0F0),
        /* 15 */ TO_RGB555(0xF8F8F8)
    }
};
