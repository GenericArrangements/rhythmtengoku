#include "global.h"
#include "graphics.h"

// // //  D_08C24804  // // //

// [D_08C24618] D_08C24804 Data
u16 D_08c24804_data[] = {
	0x0000, 0x0034, 0x0035, 0x0033, 0x0028, 0x0028, 0x0038, 0x0036, 0x0037, 0x0000, 0x003b, 0x003c, 0x0028, 0x003d, 0x003e, 0x0000, 0x0039, 0x002c, 0x0028, 0x002d, 0x003a, 0x0000, 0x002b, 0x002c, 0x0028, 0x002d, 0x002e, 0x0000, 0x0029, 0x0028, 0x002a, 0x0000, 0x0031, 0x0028, 0x0032, 0x0000, 0x002f, 0x0028, 0x0030, 0x0000, 0x005d, 0x0028, 0x005e, 0x0000, 0x0028, 0x0000, 0x0028, 0x0000, 0x005f, 0x0028, 0x0060, 0x0000, 0x0046, 0x0028, 0x0049, 0x004a, 0x0048, 0x0028, 0x0047, 0x0000, 0x003f, 0x0028, 0x0044, 0x0045, 0x0042, 0x0043, 0x0040, 0x0041, 0x0000, 0x0055, 0x0028, 0x005b, 0x005c, 0x0059, 0x005a, 0x0057, 0x0058, 0x0056, 0x0000, 0x004b, 0x004c, 0x0028, 0x0050, 0x0053, 0x0054, 0x0051, 0x0052, 0x004e, 0x004f, 0x004d, 0x0000, 0x000d, 0x000e, 0x000d, 0x000d, 0x000e, 0x000d, 0x000d, 0x000e, 0x000f, 0x000b, 0x000c, 0x000a, 0x000a, 0x000c, 0x000a, 0x000a, 0x000c, 0x0014, 0x0014, 0x0012, 0x0013, 0x0017, 0x0018, 0x0015, 0x0016, 0x0003, 0x0011, 0x000f, 0x0010, 0x000f, 0x000f, 0x0010, 0x0001, 0x0002, 0x0001, 0x0001, 0x0002, 0x0001, 0x0001, 0x0002, 0x0001, 0x0001, 0x0002, 0x0001, 0x0001, 0x0002, 0x0001, 0x0001, 0x0002, 0x0008, 0x0009, 0x0006, 0x0007, 0x0003, 0x0004, 0x0001, 0x0002, 0x0001, 0x0001, 0x0002, 0x0005, 0x0024, 0x0005, 0x0005, 0x0024, 0x0005, 0x0005, 0x0024, 0x0005, 0x0005, 0x0024, 0x0005, 0x0005, 0x0024, 0x0005, 0x0005, 0x0024, 0x0027, 0x0003, 0x0003, 0x0026, 0x0003, 0x0025, 0x0005, 0x0024, 0x0005, 0x0005, 0x0024, 0x0000, 0x0019, 0x0000, 0x0000, 0x0019, 0x0000, 0x0000, 0x0019, 0x0000, 0x0000, 0x0019, 0x0000, 0x0000, 0x0019, 0x0000, 0x0000, 0x0019, 0x001e, 0x001f, 0x001c, 0x001d, 0x0022, 0x0023, 0x0020, 0x0021, 0x001a, 0x001b, 0x0000, 0x0019, 0x0000, 0x0000, 0x0019, 0x0000
};

// [D_08C247C0] D_08C24804 RLE Data
u8 D_08c24804_rledata[] = {
	0x1, 0x2b, 0x9, 0x15, 0x3, 0x7, 0x3, 0x12, 0x3, 0x9, 0x3, 0x10, 0x3, 0xb, 0x3, 0xf, 0x2, 0xd, 0x2, 0xe, 0x2, 0xf, 0x2, 0xd, 0x2, 0xf, 0x2, 0xd, 0x2, 0xf, 0x2, 0xd, 0x1, 0x11, 0x1, 0xd, 0x1, 0x11, 0x1, 0xd, 0x2, 0xf, 0x2, 0xd, 0x2, 0xb, 0x6, 0xd, 0x2, 0xb, 0x7, 0xd, 0x2, 0xa, 0x8, 0xc, 0x3, 0x8, 0x9, 0x4, 0x36, 0x4, 0x1c, 0x4, 0x27, 0x0, 0x80, 0x0
};

// [D_08C24804] D_08C24804 Graphics
struct CompressedGraphics D_08c24804 = {
	/* Data */				{.raw = D_08c24804_data},
	/* RLE Data */			D_08c24804_rledata,
	/* RLE Size */			0x42,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};

