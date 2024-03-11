#include "global.h"
#include "graphics.h"

// // //  D_08C73978  // // //

// [D_08C737B4] D_08C73978 Data
u16 D_08c73978_data[] = {
	0x0000, 0x0008, 0x0007, 0x000a, 0x0009, 0x0000, 0x0008, 0x0007, 0x000a, 0x0009, 0x0000, 0x0004, 0x0002, 0x0002, 0x0002, 0x0003, 0x0001, 0x0000, 0x0004, 0x0002, 0x0002, 0x0002, 0x0003, 0x0001, 0x0000, 0x0006, 0x0002, 0x0005, 0x0000, 0x0006, 0x0002, 0x0005, 0x0000, 0x0010, 0x000d, 0x000c, 0x000f, 0x000e, 0x000b, 0x0000, 0x0010, 0x000d, 0x000c, 0x000f, 0x000e, 0x000b, 0x0000, 0x0008, 0x0007, 0x000a, 0x0009, 0x0000, 0x0004, 0x0002, 0x0002, 0x0002, 0x0003, 0x0001, 0x0000, 0x0006, 0x0002, 0x0005, 0x0000, 0x0010, 0x000d, 0x000c, 0x000f, 0x000e, 0x000b, 0x0000, 0x0008, 0x0007, 0x000a, 0x0009, 0x0000, 0x0008, 0x0007, 0x000a, 0x0009, 0x0000, 0x0004, 0x0002, 0x0002, 0x0002, 0x0003, 0x0001, 0x0000, 0x0004, 0x0002, 0x0002, 0x0002, 0x0003, 0x0001, 0x0000, 0x0006, 0x0002, 0x0005, 0x0000, 0x0006, 0x0002, 0x0005, 0x0000, 0x0010, 0x000d, 0x000c, 0x000f, 0x000e, 0x000b, 0x0000, 0x0010, 0x000d, 0x000c, 0x000f, 0x000e, 0x000b, 0x0000, 0x0008, 0x0007, 0x000a, 0x0009, 0x0000, 0x0004, 0x0002, 0x0002, 0x0002, 0x0003, 0x0001, 0x0000, 0x0006, 0x0002, 0x0005, 0x0000, 0x0010, 0x000d, 0x000c, 0x000f, 0x000e, 0x000b, 0x0000, 0x0008, 0x0007, 0x000a, 0x0009, 0x0000, 0x0004, 0x0002, 0x0002, 0x0002, 0x0003, 0x0001, 0x0000, 0x0006, 0x0002, 0x0005, 0x0000, 0x0008, 0x0007, 0x000a, 0x0009, 0x0000, 0x0000, 0x0010, 0x000d, 0x000c, 0x000f, 0x000e, 0x000b, 0x0000, 0x0004, 0x0002, 0x0002, 0x0002, 0x0003, 0x0001, 0x0000, 0x0006, 0x0002, 0x0005, 0x0000, 0x0010, 0x000d, 0x000c, 0x000f, 0x000e, 0x000b, 0x0000
};

// [D_08C73928] D_08C73978 RLE Data
u8 D_08c73978_rledata[] = {
	0x1, 0x62, 0x5, 0xe, 0x5, 0x7, 0x7, 0xc, 0x7, 0x6, 0x2, 0x3, 0x2, 0xc, 0x2, 0x3, 0x2, 0x6, 0x7, 0xc, 0x7, 0x50, 0x5, 0x1a, 0x7, 0x19, 0x2, 0x3, 0x2, 0x19, 0x7, 0x75, 0x5, 0xf, 0x5, 0x6, 0x7, 0xd, 0x7, 0x5, 0x2, 0x3, 0x2, 0xd, 0x2, 0x3, 0x2, 0x5, 0x7, 0xd, 0x7, 0x4e, 0x5, 0x1a, 0x7, 0x19, 0x2, 0x3, 0x2, 0x19, 0x7, 0xc, 0x5, 0x1a, 0x7, 0x19, 0x2, 0x3, 0x2, 0x13, 0xd, 0x12, 0x7, 0x19, 0x2, 0x3, 0x2, 0x19, 0x7, 0x0
};

// [D_08C73978] D_08C73978 Graphics
struct CompressedGraphics D_08c73978 = {
	/* Data */				{.raw = D_08c73978_data},
	/* RLE Data */			D_08c73978_rledata,
	/* RLE Size */			0x4f,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};

