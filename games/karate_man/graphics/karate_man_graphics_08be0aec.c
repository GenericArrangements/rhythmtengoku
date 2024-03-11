#include "global.h"
#include "graphics.h"

// // //  D_08BE0AEC  // // //

// [D_08BE08F0] D_08BE0AEC Data
u16 D_08be0aec_data[] = {
	0x4000, 0x0000, 0x0000, 0x4000, 0x0000, 0x0000, 0x4000, 0x0000, 0x0000, 0x4000, 0x4027, 0x4025, 0x4026, 0x4028, 0x4029, 0x4000, 0x0000, 0x0000, 0x4005, 0x4004, 0x4000, 0x4010, 0x4011, 0x4009, 0x400f, 0x4012, 0x4013, 0x4000, 0x0000, 0x0000, 0x4001, 0x4001, 0x4005, 0x4004, 0x4000, 0x400b, 0x400c, 0x4009, 0x400a, 0x400d, 0x400e, 0x4000, 0x0000, 0x0000, 0x4001, 0x4005, 0x4004, 0x4000, 0x401e, 0x4020, 0x4021, 0x4009, 0x401f, 0x4023, 0x4024, 0x4022, 0x4000, 0x0000, 0x0000, 0x4001, 0x4005, 0x4004, 0x4000, 0x4000, 0x4000, 0x4014, 0x4017, 0x4018, 0x4015, 0x4016, 0x401b, 0x401c, 0x4019, 0x401a, 0x401d, 0x4000, 0x0000, 0x0000, 0x4001, 0x4005, 0x4004, 0x4000, 0x4049, 0x404c, 0x404d, 0x404a, 0x404b, 0x4050, 0x4051, 0x404e, 0x404f, 0x4000, 0x0000, 0x0000, 0x4001, 0x4005, 0x403f, 0x4042, 0x4043, 0x4040, 0x4041, 0x4046, 0x4047, 0x4044, 0x4045, 0x4048, 0x4000, 0x0000, 0x0000, 0x4001, 0x405a, 0x405d, 0x405e, 0x405b, 0x405c, 0x4061, 0x4062, 0x405f, 0x4060, 0x4064, 0x4065, 0x4063, 0x4000, 0x0000, 0x0000, 0x4001, 0x4052, 0x4055, 0x4056, 0x4053, 0x4054, 0x4058, 0x4059, 0x4057, 0x4000, 0x0000, 0x0000, 0x4001, 0x4030, 0x4001, 0x4033, 0x4031, 0x4032, 0x4036, 0x4037, 0x4034, 0x4035, 0x4000, 0x0000, 0x0000, 0x4001, 0x402c, 0x402d, 0x402a, 0x402b, 0x402e, 0x402f, 0x4005, 0x4004, 0x4000, 0x0000, 0x0000, 0x4001, 0x403d, 0x4001, 0x403c, 0x403e, 0x4001, 0x4001, 0x4001, 0x4005, 0x4004, 0x4000, 0x0000, 0x0000, 0x4001, 0x403a, 0x4038, 0x4039, 0x403b, 0x4001, 0x4005, 0x4004, 0x4000, 0x0000, 0x0000, 0x4001, 0x4008, 0x4006, 0x4007, 0x4001, 0x4005, 0x4004, 0x4000, 0x0000, 0x0000, 0x4001, 0x4002, 0x4003, 0x4001, 0x4005, 0x4004, 0x4000, 0x4000, 0x0000, 0x0000, 0x4001, 0x4005, 0x4004, 0x0000, 0x0000, 0x4001, 0x0000
};

// [D_08BE0A9A] D_08BE0AEC RLE Data
u8 D_08be0aec_rledata[] = {
	0x1, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0xc, 0x6, 0xb, 0x5, 0x9, 0x7, 0xb, 0x7, 0x7, 0x7, 0xb, 0x3, 0x3, 0x3, 0x4, 0x9, 0xa, 0x3, 0x5, 0x10, 0x8, 0x3, 0x7, 0xd, 0x9, 0x3, 0x9, 0xc, 0x8, 0x3, 0xa, 0xd, 0x6, 0x3, 0xa, 0x9, 0xa, 0x3, 0xa, 0xa, 0x9, 0x3, 0xb, 0x9, 0x9, 0x3, 0xc, 0xa, 0x7, 0x3, 0xc, 0x5, 0x4, 0x3, 0x5, 0x3, 0xd, 0x4, 0x6, 0x3, 0x3, 0x3, 0xe, 0x3, 0x8, 0x7, 0x1b, 0x5, 0x1d, 0x1, 0x0, 0x82, 0x0, 0x0, 0x0
};

// [D_08BE0AEC] D_08BE0AEC Graphics
struct CompressedGraphics D_08be0aec = {
	/* Data */				{.raw = D_08be0aec_data},
	/* RLE Data */			D_08be0aec_rledata,
	/* RLE Size */			0x4e,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};

