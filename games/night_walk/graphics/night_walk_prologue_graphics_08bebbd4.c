#include "global.h"
#include "graphics.h"

// // //  D_08BEBBD4  // // //

// [D_08BEBAC0] D_08BEBBD4 Data
u16 D_08bebbd4_data[] = {
	0x0001, 0x0000, 0x0000, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 0x0003, 0x0001, 0x0000, 0x0000, 0x0001, 0x0002, 0x0001, 0x0801, 0x0001, 0x0001, 0x0000, 0x0000, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 0x0801, 0x0001, 0x0001, 0x0000, 0x0000, 0x0001, 0x0003, 0x0001, 0x0001, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 0x0801, 0x0801, 0x0801, 0x0002, 0x0001, 0x0801, 0x0801, 0x0801, 0x0001, 0x0001, 0x0000, 0x0000, 0x0001, 0x0801, 0x0801, 0x0801, 0x0001, 0x0001, 0x0801, 0x0801, 0x0801, 0x0002, 0x0001, 0x0000, 0x0000, 0x0001, 0x0001, 0x0002, 0x0001, 0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 0x0001, 0x0000
};

// [D_08BEBB98] D_08BEBBD4 RLE Data
u8 D_08bebbd4_rledata[] = {
	0x1, 0x1d, 0x5, 0x4, 0x2, 0x10, 0x2, 0x3, 0x3, 0xd, 0x2, 0x3, 0x1, 0x8, 0x7, 0xa, 0x2, 0x4, 0x1, 0x8, 0x5, 0x3, 0x6, 0x8, 0xf, 0x13, 0x10, 0x1a, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x1, 0x0, 0x82, 0x0, 0x0, 0x0
};

// [D_08BEBBD4] D_08BEBBD4 Graphics
struct CompressedGraphics D_08bebbd4 = {
	/* Data */				{.raw = D_08bebbd4_data},
	/* RLE Data */			D_08bebbd4_rledata,
	/* RLE Size */			0x38,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};
