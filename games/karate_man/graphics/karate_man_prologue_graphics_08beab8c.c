#include "global.h"
#include "graphics.h"

// // //  D_08BEAB8C  // // //

// [D_08BEA94C] D_08BEAB8C Data
u16 D_08beab8c_data[] = {
	0x1000, 0x1001, 0x1001, 0x1000, 0x1001, 0x1001, 0x1000, 0x1001, 0x1001, 0x1000, 0x1001, 0x1001, 0x1000, 0x1001, 0x1001, 0x1000, 0x1001, 0x1001, 0x1000, 0x1001, 0x1001, 0x1000, 0x1001, 0x1001, 0x1000, 0x1001, 0x1001, 0x1000, 0x1001, 0x1001, 0x1000, 0x1001, 0x1001, 0x1000, 0x106e, 0x106c, 0x106d, 0x1000, 0x106b, 0x1000, 0x1001, 0x1001, 0x105b, 0x105c, 0x1059, 0x105a, 0x1000, 0x105e, 0x105d, 0x1043, 0x1000, 0x1000, 0x103f, 0x1057, 0x1058, 0x1000, 0x1001, 0x1001, 0x1052, 0x1053, 0x1050, 0x1051, 0x1055, 0x1056, 0x1054, 0x103b, 0x103c, 0x1035, 0x1036, 0x1033, 0x1034, 0x1000, 0x1001, 0x1001, 0x1000, 0x1067, 0x1065, 0x1066, 0x1069, 0x106a, 0x1068, 0x104d, 0x104e, 0x104b, 0x104c, 0x100f, 0x104a, 0x1000, 0x1001, 0x1001, 0x1000, 0x1061, 0x105f, 0x1060, 0x1063, 0x1064, 0x1062, 0x1048, 0x1049, 0x1046, 0x1047, 0x1044, 0x1045, 0x1000, 0x1001, 0x1001, 0x104f, 0x101a, 0x101b, 0x1018, 0x1019, 0x101e, 0x101f, 0x101c, 0x101d, 0x1016, 0x1017, 0x1000, 0x1001, 0x1001, 0x1020, 0x1010, 0x1011, 0x100e, 0x100f, 0x100f, 0x1014, 0x1012, 0x1013, 0x100c, 0x100d, 0x1000, 0x1001, 0x1001, 0x1015, 0x102c, 0x102d, 0x102a, 0x102b, 0x1030, 0x1031, 0x102e, 0x102f, 0x1029, 0x1000, 0x1001, 0x1001, 0x1032, 0x1024, 0x1000, 0x1022, 0x1023, 0x1027, 0x1028, 0x1025, 0x1026, 0x1021, 0x1000, 0x1001, 0x1001, 0x0000, 0x1001, 0x0000, 0x1001, 0x1000, 0x100a, 0x1008, 0x1009, 0x100b, 0x1000, 0x1001, 0x1000, 0x1002, 0x1005, 0x1006, 0x1003, 0x1004, 0x1007, 0x1000, 0x1001, 0x1043, 0x1000, 0x1000, 0x103f, 0x103d, 0x103e, 0x1041, 0x1042, 0x1040, 0x1000, 0x1001, 0x103b, 0x103c, 0x1035, 0x1036, 0x1033, 0x1034, 0x1039, 0x103a, 0x1037, 0x1038, 0x1000, 0x1001, 0x104d, 0x104e, 0x104b, 0x104c, 0x100f, 0x104a, 0x1000, 0x1001, 0x1048, 0x1049, 0x1046, 0x1047, 0x1044, 0x1045, 0x1000, 0x1001, 0x101c, 0x101d, 0x1016, 0x1017, 0x1000, 0x1001, 0x1012, 0x1013, 0x100c, 0x100d, 0x1000, 0x1001, 0x102e, 0x102f, 0x1029, 0x1000, 0x1001, 0x1025, 0x1026, 0x1021, 0x1000, 0x1001
};

// [D_08BEAB2E] D_08BEAB8C RLE Data
u8 D_08beab8c_rledata[] = {
	0x1, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x7, 0x7, 0x2, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xe, 0x12, 0xe, 0x12, 0xd, 0x13, 0xd, 0x13, 0x3, 0x1b, 0x1, 0x3, 0x1, 0x1b, 0x1, 0xa, 0x1, 0x6, 0x5, 0x5, 0x1, 0xe, 0x1, 0x4, 0x7, 0x5, 0x1, 0xe, 0xa, 0x7, 0x1, 0xe, 0xb, 0x6, 0x1, 0xe, 0x7, 0xa, 0x1, 0xe, 0x7, 0xa, 0x1, 0xe, 0x5, 0xc, 0x1, 0xe, 0x5, 0xc, 0x1, 0xe, 0x4, 0xd, 0x1, 0xe, 0x4, 0xd, 0x1, 0x7
};

// [D_08BEAB8C] D_08BEAB8C Graphics
struct CompressedGraphics D_08beab8c = {
	/* Data */				{.raw = D_08beab8c_data},
	/* RLE Data */			D_08beab8c_rledata,
	/* RLE Size */			0x5e,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};
