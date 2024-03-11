#include "global.h"
#include "graphics.h"

// // //  D_08C78A04  // // //

// [D_08C781FC] D_08C78A04 Data
u16 D_08c78a04_data[] = {
	0x0119, 0x011a, 0x011b, 0x0118, 0x0124, 0x0125, 0x0122, 0x0123, 0x0126, 0x0127, 0x011b, 0x0118, 0x0124, 0x0125, 0x0122, 0x0123, 0x0126, 0x0127, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011b, 0x0118, 0x011b, 0x0118, 0x0124, 0x0125, 0x0122, 0x0123, 0x0126, 0x0127, 0x011b, 0x0118, 0x0124, 0x0125, 0x0122, 0x0123, 0x0126, 0x0127, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x0119, 0x011a, 0x0124, 0x0125, 0x0122, 0x0123, 0x0126, 0x0127, 0x011b, 0x0118, 0x0124, 0x0125, 0x0122, 0x0123, 0x0126, 0x0127, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0122, 0x0123, 0x0126, 0x0127, 0x011b, 0x0118, 0x0124, 0x0125, 0x0122, 0x0123, 0x0126, 0x0127, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x0126, 0x0127, 0x011b, 0x0118, 0x0124, 0x0125, 0x0122, 0x0123, 0x0126, 0x0127, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x011b, 0x0118, 0x0124, 0x0125, 0x0122, 0x0123, 0x0126, 0x0127, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x0124, 0x0125, 0x0122, 0x0123, 0x0126, 0x0127, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011b, 0x0118, 0x0122, 0x0123, 0x0126, 0x0127, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x0119, 0x011a, 0x0126, 0x0127, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0124, 0x0125, 0x011b, 0x0118, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0124, 0x0125, 0x0122, 0x0123, 0x0119, 0x011a, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0124, 0x0125, 0x0122, 0x0123, 0x0126, 0x0127, 0x011b, 0x0118, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0124, 0x0125, 0x0122, 0x0123, 0x0126, 0x0127, 0x011b, 0x0118, 0x0119, 0x011a, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0124, 0x0125, 0x0122, 0x0123, 0x0126, 0x0127, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0124, 0x0125, 0x0122, 0x0123, 0x0126, 0x0127, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x0119, 0x011a, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0124, 0x0125, 0x0122, 0x0123, 0x0126, 0x0127, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x011b, 0x0118, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0124, 0x0125, 0x0122, 0x0123, 0x0126, 0x0127, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x0120, 0x0121, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x011e, 0x011f, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011c, 0x011d, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a, 0x011b, 0x0118, 0x0119, 0x011a
};

// [D_08C789FC] D_08C78A04 RLE Data
u8 D_08c78a04_rledata[] = {
	0x0, 0x0, 0x0, 0x0, 0x4, 0x0, 0x0, 0x0
};

// [D_08C78A04] D_08C78A04 Graphics
struct CompressedGraphics D_08c78a04 = {
	/* Data */				{.raw = D_08c78a04_data},
	/* RLE Data */			D_08c78a04_rledata,
	/* RLE Size */			0x1,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};

