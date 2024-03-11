#include "global.h"
#include "graphics.h"

// // //  D_08C930C4  // // //

// [D_08C92FD0] D_08C930C4 Data
u16 D_08c930c4_data[] = {
	0x0000, 0x0073, 0x0000, 0x0073, 0x0000, 0x0073, 0x00b3, 0x00b1, 0x0073, 0x00b0, 0x00b2, 0x0073, 0x0000, 0x0073, 0x00af, 0x00ae, 0x00ad, 0x0073, 0x00c0, 0x00bf, 0x00c3, 0x00c2, 0x00c1, 0x00be, 0x0000, 0x0073, 0x00b9, 0x00b8, 0x00b7, 0x00ba, 0x0073, 0x00b6, 0x00b5, 0x00b4, 0x00bd, 0x00bc, 0x00bb, 0x0000, 0x0095, 0x0094, 0x0098, 0x0097, 0x0096, 0x009d, 0x0073, 0x009e, 0x009a, 0x0099, 0x0073, 0x009c, 0x009b, 0x0000, 0x0082, 0x0093, 0x0092, 0x008f, 0x008e, 0x008d, 0x0091, 0x0090, 0x0082, 0x0082, 0x00a9, 0x00a8, 0x00ac, 0x00ab, 0x00aa, 0x00a7, 0x0000, 0x0082, 0x0082, 0x00a3, 0x00a2, 0x00a6, 0x00a5, 0x00a4, 0x00a1, 0x00a0, 0x009f, 0x0082, 0x0000, 0x0082, 0x0086, 0x0089, 0x0088, 0x0087, 0x008b, 0x008a, 0x0082, 0x0000, 0x0082, 0x0081, 0x0080, 0x0085, 0x0084, 0x0083, 0x008c, 0x0082, 0x0000
};

// [D_08C93096] D_08C930C4 RLE Data
u8 D_08c930c4_rledata[] = {
	0x1, 0x86, 0x1, 0xf, 0x1, 0xf, 0x1, 0xf, 0x1, 0xf, 0x1, 0x9, 0x7, 0xf, 0x5, 0x5, 0x7, 0xf, 0x6, 0x4, 0x7, 0xf, 0x7, 0x3, 0x7, 0xf, 0x11, 0xf, 0xb, 0x5, 0x1, 0xf, 0x1, 0x3, 0x7, 0x5, 0x1, 0xf, 0x1, 0x3, 0x7, 0x5, 0x1, 0x0, 0x0, 0x4a
};

// [D_08C930C4] D_08C930C4 Graphics
struct CompressedGraphics D_08c930c4 = {
	/* Data */				{.raw = D_08c930c4_data},
	/* RLE Data */			D_08c930c4_rledata,
	/* RLE Size */			0x2c,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};

