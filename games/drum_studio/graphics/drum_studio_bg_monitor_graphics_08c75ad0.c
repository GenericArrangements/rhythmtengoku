#include "global.h"
#include "graphics.h"

// // //  D_08C75AD0  // // //

// [D_08C759DC] D_08C75AD0 Data
u16 D_08c75ad0_data[] = {
	0x0000, 0x101e, 0x101d, 0x0000, 0x1023, 0x1020, 0x101f, 0x1022, 0x1021, 0x1000, 0x0000, 0x1024, 0x101f, 0x1025, 0x0000, 0x100e, 0x100f, 0x1000, 0x101e, 0x101d, 0x1000, 0x1000, 0x1000, 0x0000, 0x1009, 0x1008, 0x100b, 0x100a, 0x100d, 0x100c, 0x100e, 0x100f, 0x0000, 0x1023, 0x1020, 0x101f, 0x1022, 0x1021, 0x1000, 0x0000, 0x1024, 0x101f, 0x1025, 0x0000, 0x1009, 0x1008, 0x100b, 0x100a, 0x100d, 0x100c, 0x0000, 0x100e, 0x100f, 0x0000, 0x100e, 0x100f, 0x0000, 0x100e, 0x100f, 0x0000, 0x1000, 0x1003, 0x1002, 0x1001, 0x0000, 0x1000, 0x1007, 0x1006, 0x1005, 0x1004, 0x0000, 0x1011, 0x1010, 0x1012, 0x0000, 0x1014, 0x1016, 0x1015, 0x1013, 0x1000, 0x0000, 0x1011, 0x1010, 0x1012, 0x0000, 0x1018, 0x1017, 0x1019, 0x0000, 0x101a, 0x101c, 0x101b, 0x1000, 0x1000, 0x0000, 0x1018, 0x1017, 0x1019, 0x0000
};

// [D_08C75AA2] D_08C75AD0 RLE Data
u8 D_08c75ad0_rledata[] = {
	0x1, 0x53, 0x3, 0x1c, 0x7, 0x19, 0x2, 0x3, 0x2, 0x8, 0x9, 0x8, 0x9, 0x8, 0x7, 0x19, 0x2, 0x3, 0x2, 0x19, 0x7, 0x1a, 0x3, 0x7, 0x3, 0x3, 0x3, 0x12, 0x5, 0x1a, 0x6, 0x11, 0x4, 0x5, 0x6, 0x5, 0x4, 0x8, 0x4, 0x5, 0x6, 0x5, 0x4, 0x0, 0x0, 0x4a
};

// [D_08C75AD0] D_08C75AD0 Graphics
struct CompressedGraphics D_08c75ad0 = {
	/* Data */				{.raw = D_08c75ad0_data},
	/* RLE Data */			D_08c75ad0_rledata,
	/* RLE Size */			0x2c,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};
