#include "global.h"
#include "text.h"
#include "text_printer_data.h"


/* Text Printer Data */


// [D_089380ac]
const struct struct_089380ac D_089380ac[] = {
    /* Small Text */ {
        /* Glyph Data      */ text_small_glyphs_bin,
        /* Glyph Widths    */ text_small_glyph_sizes_bin,
        /* Glyph Data Size */ 0x18,
        /* Glyph Spacing   */ 1,
        /* unkA            */ 11,
        /* unkB            */ 10
    },
    /* Medium Text */ {
        /* Glyph Data      */ text_medium_glyphs_bin,
        /* Glyph Widths    */ text_medium_glyph_sizes_bin,
        /* Glyph Data Size */ 0x18,
        /* Glyph Spacing   */ 2,
        /* unkA            */ 11,
        /* unkB            */ 12
    },
    /* Large Text */ {
        /* Glyph Data      */ text_large_glyphs_bin,
        /* Glyph Widths    */ text_large_glyph_sizes_bin,
        /* Glyph Data Size */ 0x20,
        /* Glyph Spacing   */ 2,
        /* unkA            */ 11,
        /* unkB            */ 16
    },
};

// [D_089380d0]
const char D_089380d0[] = "�c";

// [D_089380d4]
const char D_089380d4[] = "�i�k�m�o�u�w�y";

// [D_089380e4]
const char D_089380e4[] = "([{";

// [D_089380e8]
const char D_089380e8[] = "�A�B�C�D�H�I�[�`�@�B�D�F�H�b�����������������������������c�d�j�l�n�p�v�x�z";

// [D_08938138]
const char D_08938138[] = "!?,.)]}";

// [D_08938140]
const u16 D_08938140[] = {
    0x0000, 0x00bc, 0x0178, 0x0234, 0xffff, 0xffff, 0x02f0, 0x02f0,
    0x03ac, 0x0468, 0x0524, 0x05e0, 0x069c, 0x0758, 0x0814, 0x08d0,
    0x098c, 0x0a48, 0x0b04, 0x0bc0, 0x0c7c, 0x0d38, 0x0df4, 0x0eb0,
    0x0f6c, 0x1028, 0x10e4, 0x11a0, 0x125c, 0x1318, 0x13d4
};

// [D_0893817e]
const u16 D_0893817e[] = {
    0x1490, 0x154c, 0x1608, 0x16c4, 0x1780, 0x183c, 0x18f8, 0x19b4,
    0x1a70, 0x1b2c, 0x1be8
};

// [D_08938194]
const char D_08938194[] =
    "\x81\x40" "�I�h���������f�i�j���{�A�|�D�^�O�P�Q�R�S�T�U�V�W�X�F�G�������H���`�a�b�c�d�e�f�g�h�i�j�k�l�m�n�o�p�q�r�s�t�u�v�w�x�y�m���n�O�Q"
    "\x81\x40" "�����������������������������������������������������o�b�p�P"
    "\x81\x40"
    "\x0\x0\x0";

// [D_08938258]
const u8 D_08938258[] = { 32, 16, 10, 8, 4 };

// [D_0893825d]
const u8 D_0893825d[] = { 1, 2, 3, 4, 8 };
