#include "global.h"
#include "graphics.h"

// // //  D_08CB60F0  // // //

// [D_08CB5FEC] D_08CB60F0 Data
u16 D_08cb60f0_data[] = {
	0x0000, 0x0060, 0x006c, 0x006b, 0x006f, 0x0060, 0x0000, 0x0060, 0x006e, 0x006b, 0x006b, 0x006d, 0x0060, 0x0000, 0x0060, 0x008b, 0x006b, 0x006b, 0x008d, 0x008c, 0x0060, 0x0000, 0x0060, 0x008a, 0x006b, 0x0089, 0x0095, 0x0094, 0x0060, 0x0000, 0x0060, 0x0093, 0x0092, 0x0090, 0x008f, 0x008e, 0x0091, 0x0060, 0x0000, 0x0060, 0x0077, 0x0076, 0x0075, 0x007a, 0x0079, 0x0078, 0x0074, 0x0060, 0x0000, 0x0060, 0x0070, 0x0073, 0x0072, 0x0071, 0x0087, 0x006b, 0x0086, 0x0060, 0x0000, 0x0088, 0x0082, 0x0081, 0x0080, 0x0085, 0x0084, 0x0083, 0x007d, 0x007c, 0x007b, 0x007f, 0x007e, 0x0060, 0x0000, 0x005c, 0x005b, 0x005f, 0x005e, 0x005d, 0x0064, 0x0063, 0x0062, 0x0067, 0x0066, 0x0065, 0x0061, 0x0060, 0x0000, 0x005a, 0x0059, 0x0058, 0x0054, 0x0053, 0x0052, 0x0057, 0x0056, 0x0055, 0x006a, 0x0069, 0x0068, 0x0060, 0x0000
};

// [D_08CB60B6] D_08CB60F0 RLE Data
u8 D_08cb60f0_rledata[] = {
	0x1, 0x86, 0x1, 0x6, 0x4, 0x5, 0x1, 0xf, 0x1, 0x5, 0x5, 0x5, 0x1, 0xf, 0x1, 0x5, 0x6, 0x4, 0x1, 0xf, 0x1, 0x5, 0x6, 0x4, 0x1, 0xf, 0x1, 0x4, 0x7, 0x4, 0x1, 0xf, 0x1, 0x4, 0x8, 0x3, 0x1, 0xf, 0x1, 0x4, 0x8, 0x3, 0x1, 0xf, 0xd, 0x3, 0x1, 0xf, 0xd, 0x3, 0x1, 0xf, 0xd, 0x3, 0x1, 0x0, 0x0, 0x4a
};

// [D_08CB60F0] D_08CB60F0 Graphics
struct CompressedGraphics D_08cb60f0 = {
	/* Data */				{.raw = D_08cb60f0_data},
	/* RLE Data */			D_08cb60f0_rledata,
	/* RLE Size */			0x38,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};

