#include "global.h"
#include "graphics.h"

// // //  D_08CA4A00  // // //

// [D_08CA48EC] D_08CA4A00 Data
u16 D_08ca4a00_data[] = {
	0x0000, 0x0073, 0x0000, 0x0073, 0x00ad, 0x00ac, 0x0073, 0x0000, 0x0073, 0x00b1, 0x00b0, 0x0073, 0x0000, 0x0073, 0x00af, 0x00ae, 0x0073, 0x0000, 0x0073, 0x0096, 0x009b, 0x009a, 0x0099, 0x0073, 0x009d, 0x009c, 0x0098, 0x0097, 0x0073, 0x0073, 0x0073, 0x0000, 0x0073, 0x0095, 0x0094, 0x0090, 0x008f, 0x008e, 0x0093, 0x0092, 0x0091, 0x00aa, 0x00a9, 0x00a8, 0x00ab, 0x0073, 0x0073, 0x0073, 0x0000, 0x0073, 0x0073, 0x00a4, 0x00a3, 0x00a7, 0x00a6, 0x00a5, 0x009f, 0x0073, 0x009e, 0x00a2, 0x00a1, 0x00a0, 0x0073, 0x0073, 0x0073, 0x0000, 0x0073, 0x0074, 0x0077, 0x0076, 0x0075, 0x007c, 0x007b, 0x007a, 0x007f, 0x007e, 0x007d, 0x0079, 0x0078, 0x0073, 0x0073, 0x0073, 0x0000, 0x0073, 0x0072, 0x0071, 0x006d, 0x006c, 0x006b, 0x0070, 0x006f, 0x006e, 0x008c, 0x008b, 0x008a, 0x008d, 0x0073, 0x0073, 0x0073, 0x0000, 0x0073, 0x0073, 0x0086, 0x0085, 0x0089, 0x0088, 0x0087, 0x0081, 0x0073, 0x0080, 0x0084, 0x0083, 0x0082, 0x0073, 0x0073, 0x0073, 0x0000
};

// [D_08CA49D6] D_08CA4A00 RLE Data
u8 D_08ca4a00_rledata[] = {
	0x1, 0xa6, 0x1, 0xf, 0x1, 0xf, 0x1, 0x9, 0x3, 0x3, 0x1, 0xf, 0x1, 0x9, 0x3, 0x3, 0x1, 0xf, 0x1, 0x9, 0x3, 0x3, 0x1, 0xf, 0x1, 0x3, 0xd, 0xf, 0x11, 0xf, 0x11, 0xf, 0x11, 0xf, 0x11, 0xf, 0x11, 0x0, 0x0, 0x2a, 0x0, 0x0
};

// [D_08CA4A00] D_08CA4A00 Graphics
struct CompressedGraphics D_08ca4a00 = {
	/* Data */				{.raw = D_08ca4a00_data},
	/* RLE Data */			D_08ca4a00_rledata,
	/* RLE Size */			0x26,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};
