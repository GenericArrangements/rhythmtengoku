#include "global.h"
#include "graphics.h"

// // //  D_08C60410  // // //

// [D_08C60054] D_08C60410 Data
u16 D_08c60410_data[] = {
	0x7000, 0x7000, 0x7000, 0x7080, 0x7082, 0x7083, 0x7081, 0x7078, 0x7078, 0x707e, 0x707c, 0x707d, 0x707f, 0x7000, 0x7086, 0x7084, 0x7085, 0x7000, 0x7075, 0x7074, 0x700a, 0x7070, 0x7071, 0x7072, 0x7073, 0x7000, 0x7079, 0x707b, 0x700a, 0x700a, 0x707a, 0x7077, 0x7078, 0x7076, 0x7000, 0x7098, 0x700a, 0x7095, 0x7093, 0x7094, 0x7096, 0x7097, 0x7000, 0x709b, 0x700a, 0x7099, 0x709a, 0x7000, 0x708c, 0x700a, 0x708f, 0x708d, 0x708e, 0x7089, 0x708a, 0x7087, 0x7088, 0x708b, 0x7000, 0x7092, 0x700a, 0x7091, 0x700a, 0x704d, 0x7090, 0x7000, 0x7000, 0x7000, 0x700a, 0x7056, 0x7018, 0x7018, 0x7054, 0x7055, 0x7052, 0x7053, 0x7000, 0x705a, 0x7058, 0x7059, 0x700a, 0x7057, 0x7000, 0x7000, 0x7000, 0x704a, 0x700a, 0x700a, 0x7049, 0x704c, 0x700a, 0x704b, 0x7018, 0x7018, 0x7018, 0x7048, 0x7000, 0x7051, 0x704f, 0x7050, 0x700a, 0x704d, 0x704e, 0x7000, 0x7000, 0x7069, 0x700a, 0x700a, 0x7068, 0x7018, 0x706b, 0x706a, 0x7018, 0x7018, 0x7018, 0x7067, 0x7000, 0x706f, 0x706d, 0x706e, 0x700a, 0x706c, 0x7000, 0x7000, 0x705e, 0x700a, 0x700a, 0x705d, 0x7018, 0x7060, 0x705f, 0x7018, 0x7018, 0x7018, 0x705b, 0x705c, 0x7000, 0x7063, 0x7064, 0x7066, 0x700a, 0x700a, 0x7065, 0x7061, 0x700a, 0x7062, 0x7000, 0x7000, 0x70e0, 0x700a, 0x700a, 0x70df, 0x70e3, 0x70e4, 0x70e1, 0x70e2, 0x7018, 0x7018, 0x7018, 0x70de, 0x7000, 0x70e7, 0x70e8, 0x70ea, 0x70eb, 0x700a, 0x70e9, 0x70e5, 0x700a, 0x70e6, 0x7000, 0x7000, 0x7000, 0x70d4, 0x700a, 0x700a, 0x70d7, 0x70d8, 0x70d5, 0x70d6, 0x70d3, 0x7018, 0x70d1, 0x70d2, 0x7000, 0x70db, 0x7018, 0x7018, 0x70dd, 0x700a, 0x70dc, 0x70d9, 0x700a, 0x70da, 0x7000, 0x7000, 0x7000, 0x70fc, 0x70fb, 0x700a, 0x70ff, 0x7100, 0x70fd, 0x70fe, 0x7018, 0x7018, 0x70fa, 0x7000, 0x7102, 0x7103, 0x7018, 0x7106, 0x7104, 0x7105, 0x700a, 0x7101, 0x7000, 0x7000, 0x7000, 0x70f0, 0x70f1, 0x70f2, 0x7018, 0x70ec, 0x7000, 0x7000, 0x70ef, 0x70ed, 0x70ee, 0x7000, 0x70f6, 0x70f4, 0x70f5, 0x70f8, 0x70f9, 0x70f7, 0x700a, 0x70f3, 0x7000, 0x7000, 0x70ad, 0x70ac, 0x7018, 0x70ae, 0x70a7, 0x70a8, 0x70a6, 0x7000, 0x7000, 0x70ab, 0x70a9, 0x70aa, 0x70b1, 0x70b2, 0x700a, 0x70b0, 0x70b3, 0x70b4, 0x700a, 0x70af, 0x7000, 0x709e, 0x709f, 0x7018, 0x70a0, 0x7000, 0x709d, 0x709c, 0x700a, 0x70a2, 0x70a4, 0x70a5, 0x70a3, 0x700a, 0x70a1, 0x7000, 0x70c8, 0x70c9, 0x7018, 0x70ca, 0x70c4, 0x7000, 0x70c7, 0x70c5, 0x70c6, 0x700a, 0x700a, 0x70cd, 0x70ce, 0x7002, 0x7002, 0x70cf, 0x70d0, 0x700a, 0x70cc, 0x70cb, 0x7000, 0x7002, 0x7017, 0x70bb, 0x7018, 0x70b5, 0x70b6, 0x7010, 0x7000, 0x70b9, 0x70ba, 0x70b7, 0x70b8, 0x70c1, 0x700a, 0x70c0, 0x7002, 0x7002, 0x7002, 0x70c2, 0x70c3, 0x700a, 0x70be, 0x70bf, 0x70bc, 0x70bd, 0x7002, 0x7002, 0x7017, 0x7015, 0x7016, 0x7018, 0x7011, 0x7012, 0x7010, 0x7000, 0x7000, 0x7000, 0x7013, 0x7014, 0x701b, 0x701c, 0x7002, 0x701d, 0x700a, 0x7019, 0x7002, 0x7002, 0x701a, 0x7002, 0x7003, 0x7006, 0x7007, 0x7004, 0x7005, 0x7002, 0x7002, 0x7001, 0x7000, 0x700d, 0x7002, 0x700e, 0x700f, 0x700a, 0x700b, 0x7008, 0x7009, 0x7002, 0x7002, 0x7002, 0x700c, 0x703b, 0x703c, 0x7039, 0x703a, 0x703f, 0x7040, 0x703d, 0x703e, 0x7034, 0x7035, 0x7032, 0x7033, 0x7037, 0x7038, 0x7036, 0x700c, 0x7044, 0x7045, 0x700c, 0x7044, 0x7045, 0x700c, 0x7046, 0x7047, 0x7042, 0x7043, 0x7002, 0x7041, 0x7002, 0x7002, 0x7002, 0x7031, 0x7026, 0x7000, 0x7000, 0x7000, 0x7029, 0x702a, 0x7027, 0x7028, 0x7020, 0x7021, 0x701e, 0x701f, 0x7024, 0x7025, 0x7022, 0x7023, 0x702e, 0x702f, 0x7023, 0x702e, 0x702f, 0x7031, 0x7030, 0x7002, 0x702c, 0x702d, 0x702b, 0x7002, 0x7000
};

// [D_08C603AC] D_08C60410 RLE Data
u8 D_08c60410_rledata[] = {
	0xe, 0x7, 0x4, 0x8, 0x3, 0x6, 0x5, 0x4, 0x9, 0x4, 0x2, 0x7, 0x6, 0x3, 0x2, 0x6, 0x3, 0x3, 0x2, 0x3, 0x9, 0x3, 0x4, 0x6, 0x6, 0x4, 0x8, 0x4, 0x4, 0x7, 0x10, 0x5, 0x4, 0x7, 0x10, 0x5, 0x4, 0x8, 0x10, 0x5, 0x8, 0x3, 0x10, 0x5, 0x8, 0x3, 0x10, 0x5, 0x8, 0x3, 0xf, 0x6, 0x7, 0x5, 0x8, 0x4, 0xe, 0x6, 0x6, 0x3, 0x10, 0x7, 0x5, 0x4, 0x2, 0x4, 0x3, 0x3, 0x5, 0x6, 0x5, 0x4, 0x3, 0x3, 0xc, 0x4, 0x7, 0x4, 0x11, 0x3, 0xa, 0x3, 0xb, 0x3, 0x2, 0x3, 0x5, 0x3, 0x9, 0x4, 0x2, 0x4, 0x46, 0x3, 0x1, 0x0, 0x80, 0x0, 0x0, 0x0
};

// [D_08C60410] D_08C60410 Graphics
struct CompressedGraphics D_08c60410 = {
	/* Data */				{.raw = D_08c60410_data},
	/* RLE Data */			D_08c60410_rledata,
	/* RLE Size */			0x60,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};

