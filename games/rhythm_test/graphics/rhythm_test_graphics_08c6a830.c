#include "global.h"
#include "graphics.h"

// // //  D_08C6A830  // // //

// [D_08C6A670] D_08C6A830 Data
u16 D_08c6a830_data[] = {
	0x0000, 0x0036, 0x0035, 0x0035, 0x0035, 0x0039, 0x003a, 0x0037, 0x0038, 0x003c, 0x003d, 0x003b, 0x0035, 0x0035, 0x0436, 0x0000, 0x0017, 0x0034, 0x0033, 0x0034, 0x0033, 0x0019, 0x0000, 0x0017, 0x0018, 0x0016, 0x0018, 0x0016, 0x0019, 0x0000, 0x0017, 0x0018, 0x0016, 0x0018, 0x0016, 0x0019, 0x0000, 0x0017, 0x0018, 0x0016, 0x0018, 0x0016, 0x0019, 0x0000, 0x0017, 0x0018, 0x0016, 0x0018, 0x0016, 0x0019, 0x0000, 0x0017, 0x0018, 0x0016, 0x0018, 0x0016, 0x0019, 0x0000, 0x0017, 0x0018, 0x0016, 0x0018, 0x0016, 0x0019, 0x0000, 0x0017, 0x0018, 0x0016, 0x0018, 0x0016, 0x0019, 0x0000, 0x0017, 0x0018, 0x0016, 0x0018, 0x0016, 0x0019, 0x0000, 0x0017, 0x0018, 0x0016, 0x0018, 0x0016, 0x0019, 0x0000, 0x0017, 0x0018, 0x0016, 0x0018, 0x0016, 0x0019, 0x0000, 0x0017, 0x0018, 0x0016, 0x0018, 0x0016, 0x0019, 0x0000, 0x0017, 0x0018, 0x0016, 0x0018, 0x0016, 0x0019, 0x0000, 0x0017, 0x0018, 0x0016, 0x0018, 0x0016, 0x0019, 0x0000, 0x0017, 0x0018, 0x0016, 0x0018, 0x0016, 0x0019, 0x0000, 0x0017, 0x0018, 0x0016, 0x0018, 0x0016, 0x0019, 0x0000, 0x0017, 0x0018, 0x0016, 0x0018, 0x0016, 0x0019, 0x0000, 0x0017, 0x0028, 0x0026, 0x0027, 0x002b, 0x002c, 0x0029, 0x002a, 0x002f, 0x0030, 0x002d, 0x002e, 0x0031, 0x0032, 0x0000, 0x001c, 0x001d, 0x001a, 0x001b, 0x0020, 0x0021, 0x001e, 0x001f, 0x0023, 0x0024, 0x0022, 0x0021, 0x0025, 0x041c, 0x0000
};

// [D_08C6A7BA] D_08C6A830 RLE Data
u8 D_08c6a830_rledata[] = {
	0x1, 0x7, 0xf, 0x11, 0x3, 0x4, 0x2, 0x4, 0x2, 0x11, 0x3, 0x4, 0x2, 0x4, 0x2, 0x11, 0x3, 0x4, 0x2, 0x4, 0x2, 0x11, 0x3, 0x4, 0x2, 0x4, 0x2, 0x11, 0x3, 0x4, 0x2, 0x4, 0x2, 0x11, 0x3, 0x4, 0x2, 0x4, 0x2, 0x11, 0x3, 0x4, 0x2, 0x4, 0x2, 0x11, 0x3, 0x4, 0x2, 0x4, 0x2, 0x11, 0x3, 0x4, 0x2, 0x4, 0x2, 0x11, 0x3, 0x4, 0x2, 0x4, 0x2, 0x11, 0x3, 0x4, 0x2, 0x4, 0x2, 0x11, 0x3, 0x4, 0x2, 0x4, 0x2, 0x11, 0x3, 0x4, 0x2, 0x4, 0x2, 0x11, 0x3, 0x4, 0x2, 0x4, 0x2, 0x11, 0x3, 0x4, 0x2, 0x4, 0x2, 0x11, 0x3, 0x4, 0x2, 0x4, 0x2, 0x11, 0x3, 0x4, 0x2, 0x4, 0x2, 0x11, 0xf, 0x11, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8e, 0x0, 0x0, 0x0
};

// [D_08C6A830] D_08C6A830 Graphics
struct CompressedGraphics D_08c6a830 = {
	/* Data */				{.raw = D_08c6a830_data},
	/* RLE Data */			D_08c6a830_rledata,
	/* RLE Size */			0x6e,
	/* RLE Offset */		0x800,
	/* Double Compressed */	FALSE,
};
