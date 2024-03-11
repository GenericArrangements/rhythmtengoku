#include "global.h"
#include "graphics.h"

// // //  D_08BDC4F0  // // //

// [D_08BDC3BC] D_08BDC4F0 Data
u16 D_08bdc4f0_data[] = {
	0x0000, 0x4000, 0x400f, 0x4000, 0x0000, 0x4400, 0x440f, 0x4400, 0x0000, 0x4000, 0x400f, 0x4000, 0x4012, 0x0000, 0x4011, 0x0000, 0x4010, 0x4006, 0x4007, 0x4008, 0x0000, 0x4408, 0x4407, 0x4406, 0x4410, 0x0000, 0x4411, 0x0000, 0x4412, 0x4400, 0x440f, 0x4400, 0x0000, 0x0000, 0x4006, 0x4007, 0x4008, 0x4009, 0x0000, 0x4001, 0x4002, 0x4004, 0x4005, 0x4003, 0x0000, 0x4403, 0x4405, 0x4404, 0x4402, 0x4401, 0x0000, 0x4409, 0x4408, 0x4407, 0x4406, 0x0000, 0x0000, 0x4001, 0x4002, 0x4004, 0x0000, 0x0000, 0x0000, 0x4005, 0x4003, 0x400a, 0x400b, 0x400d, 0x400e, 0x400c, 0x0000, 0x440c, 0x440e, 0x440d, 0x440b, 0x440a, 0x4403, 0x4405, 0x0000, 0x0000, 0x0000, 0x4404, 0x4402, 0x4401, 0x0000, 0x0000, 0x400a, 0x400b, 0x400d, 0x4012, 0x4005, 0x4003, 0x400e, 0x400c, 0x4015, 0x4016, 0x4017, 0x4013, 0x4014, 0x0000, 0x4414, 0x4413, 0x4417, 0x4416, 0x4415, 0x440c, 0x440e, 0x4403, 0x4405, 0x4412, 0x440d, 0x440b, 0x440a, 0x0000, 0x0000, 0x4015, 0x4016, 0x4415, 0x4009, 0x400e, 0x400c, 0x4013, 0x4014, 0x0000, 0x4414, 0x4413, 0x440c, 0x440e, 0x4409, 0x4015, 0x4416, 0x4415, 0x0000, 0x4013, 0x4014, 0x0000, 0x4414, 0x4413, 0x0000
};

// [D_08BDC4D2] D_08BDC4F0 RLE Data
u8 D_08bdc4f0_rledata[] = {
	0x1, 0x7, 0x4, 0x7, 0x4, 0x9, 0xc, 0x7, 0x12, 0x3, 0x6, 0x3, 0x6, 0x3, 0x14, 0x3, 0x1d, 0x3, 0x18, 0xd, 0x9, 0x5, 0x3, 0x11, 0x3, 0x0, 0x0, 0x0, 0x28, 0x0
};

// [D_08BDC4F0] D_08BDC4F0 Graphics
struct CompressedGraphics D_08bdc4f0 = {
	/* Data */				{.raw = D_08bdc4f0_data},
	/* RLE Data */			D_08bdc4f0_rledata,
	/* RLE Size */			0x1a,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};

