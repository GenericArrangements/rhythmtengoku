#include "global.h"
#include "text.h"
#include "reading_text.h"


/* Reading Material */


#include "reading_material.inc.c"


/* Reading */


extern const struct CompressedGraphics D_08cd29ac;
extern const struct CompressedGraphics D_08cd2cec;
extern const Palette D_0890b330[];

// [D_08058f00] Reading - Graphics Table ?
const struct GraphicsTable D_08058f00[] = {
    /* BG Tileset */ {
        /* Src.  */ &D_08cd29ac,
        /* Dest. */ BG_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &D_08cd2cec,
        /* Dest. */ BG_MAP_BASE(0xE800),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Palette */ {
        /* Src.  */ D_0890b330,
        /* Dest. */ BG_PALETTE_BUFFER(0),
        /* Size  */ 0x200
    },
    END_OF_GRAPHICS_TABLE
};

// Invalid Data
const char D_08058f30[] =
    "\x01\x43" "\x03\x32" "\x01\x6c" "\n"
    "\n"
    "\n"
    "\n"
    "�����f�[�^";

// Error
const char D_08058f48[] = "\x02\x33" "\x01\x33" "\x01\x43" "�G���[";
