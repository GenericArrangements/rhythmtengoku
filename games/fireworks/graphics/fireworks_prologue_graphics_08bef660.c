#include "global.h"
#include "graphics.h"

// // //  D_08BEF660  // // //

// [D_08BEF2BC] D_08BEF660 Huffman Data
u16 D_08bef660_huffmandata[] = {
	0xfff0, 0xe0c0, 0xe0e0, 0xe0e0, 0x00e0, 0x0301, 0x0303, 0x0303, 0x0403, 0x0e0e, 0x0e0e, 0x0e0e, 0x0702, 0x0707, 0x0707, 0x0807, 0x0c0c, 0x0c0c, 0x0c0c, 0x3010, 0x3030, 0x3030, 0x8030, 0xc7c3, 0xc7c7, 0xc7c7, 0x1c07, 0x3e3e, 0x3e3e, 0x3e3e, 0xc03e, 0xe010, 0xe0e0, 0xe0e0, 0xe0e0, 0x03e0, 0x0303, 0x0303, 0x0303, 0x0c03, 0x0e01, 0x0f0f, 0xe0ee, 0xe0e0, 0x70f0, 0x7070, 0x0f70, 0x0f07, 0x070f, 0xc018, 0xc0c0, 0xc0c0, 0xc0c0, 0x03c0, 0x0303, 0x0303, 0x0303, 0x1803, 0xefc0, 0xefef, 0xcfcf, 0xc7c7, 0xf0f7, 0x3ef0, 0x3e3e, 0x3f0f, 0x7f7f, 0x3f7f, 0xe0e0, 0xc0e0, 0x3080, 0xf070, 0xf1f0, 0xe7f3, 0x0fcf, 0xe001, 0xe0e0, 0xe0e0, 0xe0e0, 0x03e0, 0x0303, 0x0303, 0x0303, 0x0803, 0x0e0c, 0xcf8f, 0xffef, 0xf3f7, 0x3031, 0x1030, 0xe0e0, 0xe0e0, 0x40e0, 0x7070, 0x7070, 0x2070, 0xc1c0, 0x8383, 0x0707, 0x0e0f, 0x0c0e, 0x0c0c, 0x0c0c, 0x1c0c, 0x303c, 0x3030, 0x3030, 0x3030, 0xc388, 0xe1c3, 0xf0e1, 0x7070, 0xc7c0, 0xc7c7, 0x87c7, 0x3e03, 0x3e3e, 0x3e3e, 0x801c, 0x0f0f, 0x0c0e, 0x0308, 0x0f07, 0x3f1f, 0x7e7f, 0xe07c, 0xe0e0, 0xe0e0, 0xe0e0, 0x03e0, 0x0303, 0x0303, 0x0303, 0xe003, 0xf8f0, 0xfefc, 0x3f7f, 0x0f1f, 0x0307, 0x8101, 0xc383, 0xe1c3, 0xf0e1, 0xc080, 0xc1c1, 0xc1c1, 0xc1c1, 0x8001, 0xc181, 0xe1c1, 0xf0e1, 0x0c00, 0x080c, 0xc108, 0xc3c3, 0xc7c7, 0xcecf, 0x83ce, 0xc3c3, 0xe3e3, 0x73f3, 0x0373, 0x0103, 0x0801, 0x0e0c, 0xcf8f, 0xffef, 0x7037, 0x7070, 0x1030, 0xf0e0, 0xf0f0, 0xf0f0, 0xf0f0, 0x0100, 0x0101, 0x0101, 0x0101, 0xcf87, 0xffef, 0x3807, 0xe0e0, 0xe0e0, 0xe0e0, 0xe0e0, 0x0303, 0x0303, 0x0303, 0x0303, 0x080e, 0x0c08, 0x0e0c, 0x7f0e, 0x7070, 0x7070, 0x7070, 0xc070, 0xc9c1, 0xcdc9, 0xcfcd, 0x7fcf, 0x3070, 0x1030, 0x4010, 0x0c0c, 0x0c0c, 0x0c0c, 0x3c0c, 0x3032, 0x3030, 0x3030, 0x8030, 0xe0c0, 0xf8f0, 0xfefc, 0xf1f3, 0xf0f0, 0xf0f0, 0xf0f0, 0xf0f0, 0xf0f0, 0xf0f0, 0x81f0, 0xe1c1, 0xf9f1, 0xf7fd, 0xf1f3, 0x3070, 0x8010, 0xe0e0, 0xf8f0, 0xfefc, 0x3033, 0xf070, 0xf1f0, 0xe7f3, 0x870f, 0xc387, 0x81c3, 0x0701, 0x0707, 0x0707, 0x0707, 0x7c07, 0x3c7c, 0x1c1c, 0x1c1c, 0xc01c, 0xc0c0, 0xe0c0, 0xf0e0, 0x0370, 0x0303, 0x0703, 0x0f07, 0x080e, 0x0e0c, 0x6af0, 0x0e0e, 0xbf0c, 0x8f9f, 0x8387, 0x8081, 0x0f80, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0xf3ff, 0x10f1, 0x1010, 0x1010, 0xc080, 0xf0e0, 0xfcf8, 0x7ffe, 0x1f3f, 0x070f, 0x0103, 0xf8fc, 0xe0f0, 0x80c0, 0x3010, 0xf070, 0xf1f0, 0xe7f3, 0x070f, 0x0707, 0x0707, 0x0707, 0x1c07, 0x1c1c, 0x3c1c, 0x7838, 0x8070, 0xc387, 0xe1c3, 0xf0e1, 0xe070, 0xc1c1, 0x8383, 0x0707, 0x0e0f, 0x0808, 0x0808, 0x0808, 0xf808, 0xf0f0, 0xf0f0, 0xf0f0, 0xf0f0, 0xf0f0, 0xf0f0, 0xc0e0, 0x0180, 0x0101, 0x0703, 0x1f0f, 0xf03f, 0xf8f8, 0xf0f8, 0x7fc0, 0xf1f0, 0x3070, 0xc010, 0x0f8f, 0x0e0f, 0x010c, 0x0f0f, 0x1f1f, 0x0f1f, 0x0707, 0x0707, 0x0207, 0x0e0f, 0x0c0e, 0x080c, 0x1f01, 0x3f3f, 0x801f, 0xf8c0, 0xfcfc, 0x70f8, 0x3030, 0x1010, 0xc0e0, 0x80c0, 0x1080, 0xf030, 0xf7f3, 0x03f7, 0x0808, 0x0808, 0x0f08, 0x0f0f, 0x0f0f, 0x7f07, 0xfcfe, 0xf0f8, 0xf0e0, 0xf070, 0xf0f0, 0xfff0, 0x0000, 0x0015
};

// [D_08BEF59C] D_08BEF660 Huffman Window 1
u32 D_08bef660_window1[] = {
	0x0047515f
};

// [D_08BEF5A0] D_08BEF660 Huffman Window 2
u32 D_08bef660_window2[] = {
	0x0047515c
};

// [D_08BEF5A4] D_08BEF660 Huffman
struct Huffman D_08bef660_huffman[] = {
	/* Data */			D_08bef660_huffmandata,
	/* Size */			0x5af,
	/* Count */			0x3,
	/* Window 1 */		D_08bef660_window1,
	/* Window 2 */		D_08bef660_window2,
};

// [D_08BEF5B4] D_08BEF660 RLE Data
u8 D_08bef660_rledata[] = {
	0x1, 0x32, 0x1d, 0x42, 0xe, 0x3, 0xe, 0x22, 0x1d, 0x32, 0xf, 0x1f, 0x11, 0xae, 0x2, 0xd, 0x2, 0x11, 0x1f, 0x1f, 0x2, 0xd, 0x2, 0x9, 0x10, 0x7, 0x9, 0x7, 0x1, 0x7, 0x8, 0xe, 0x22, 0xe, 0x3, 0x15, 0x11, 0x9, 0x1, 0x5, 0x1, 0x9, 0x1, 0x5, 0x1, 0x9, 0x7, 0x9, 0x1, 0x5, 0xb, 0x90, 0xa, 0x5, 0x11, 0xd, 0x22, 0xd, 0x1b, 0x18, 0xc, 0x5, 0xc, 0x13, 0x40, 0x20, 0xd, 0x23, 0xd, 0xb3, 0xb, 0x5, 0x48, 0x29, 0x38, 0x7, 0x28, 0x29, 0x1b, 0x5, 0x1f, 0x7, 0xa, 0xaf, 0x3, 0xe, 0x21, 0x31, 0x39, 0x14, 0x20, 0x21, 0xd, 0x3, 0xf, 0x11, 0x1b, 0x3, 0xd, 0xc3, 0xd, 0x3, 0x12, 0x30, 0xc, 0x3, 0x21, 0x20, 0x1f, 0x11, 0xc, 0x3, 0x20, 0x11, 0x1f, 0xbf, 0x1b, 0x6, 0xd, 0x3, 0x11, 0x2f, 0x21, 0x1f, 0x21, 0x20, 0x1f, 0x11, 0x20, 0xa2, 0xa, 0x4, 0x2, 0x8, 0x2, 0x3, 0xa, 0x26, 0xb, 0x5, 0x3, 0x9, 0x1, 0x5, 0xa, 0x14, 0xc, 0x5, 0xc, 0x5, 0xb, 0x4, 0xc, 0x3, 0xa, 0x7, 0xa, 0x5, 0xd, 0x14, 0xa, 0x5, 0xc, 0x24, 0xd, 0x5, 0x1, 0x9, 0x1, 0x5, 0xa, 0x84
};

// [D_08BEF660] D_08BEF660 Graphics
struct CompressedGraphics D_08bef660 = {
	/* Huffman Data */		D_08bef660_huffman,
	/* RLE Data */			D_08bef660_rledata,
	/* RLE Size */			0xac,
	/* RLE Offset */		0x1000,
	/* Double Compressed */	TRUE,
};
