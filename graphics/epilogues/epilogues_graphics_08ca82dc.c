#include "global.h"
#include "graphics.h"

// // //  D_08CA82DC  // // //

// [D_08CA80D0] D_08CA82DC Data
u16 D_08ca82dc_data[] = {
	0x2000, 0x0001, 0x0001, 0x2000, 0x0001, 0x0001, 0x2000, 0x0001, 0x0001, 0x2000, 0x0001, 0x0001, 0x2000, 0x203c, 0x2035, 0x2034, 0x2033, 0x2038, 0x2037, 0x2036, 0x202f, 0x202e, 0x202d, 0x2032, 0x2031, 0x2030, 0x203b, 0x203a, 0x2039, 0x2000, 0x0001, 0x0001, 0x2000, 0x200b, 0x200a, 0x200e, 0x200d, 0x200c, 0x2016, 0x2015, 0x2014, 0x2019, 0x2018, 0x2017, 0x2011, 0x2010, 0x200f, 0x2013, 0x2012, 0x2000, 0x0001, 0x0001, 0x2000, 0x2009, 0x2003, 0x2008, 0x2004, 0x2003, 0x2002, 0x2007, 0x2006, 0x2005, 0x2004, 0x202a, 0x2029, 0x2004, 0x202c, 0x202b, 0x2028, 0x2000, 0x0001, 0x0001, 0x2000, 0x2004, 0x2021, 0x2020, 0x201f, 0x2024, 0x2023, 0x2022, 0x201c, 0x201b, 0x201a, 0x201e, 0x201d, 0x2004, 0x2027, 0x2026, 0x2025, 0x2000, 0x0001, 0x0001, 0x2000, 0x2074, 0x2073, 0x2072, 0x2004, 0x2004, 0x2075, 0x2004, 0x207b, 0x207a, 0x207d, 0x207c, 0x2004, 0x2078, 0x2077, 0x2076, 0x2079, 0x2000, 0x0001, 0x0001, 0x2000, 0x206f, 0x2071, 0x2070, 0x2004, 0x206c, 0x206b, 0x2004, 0x2004, 0x206e, 0x206d, 0x208a, 0x2003, 0x2089, 0x208d, 0x208c, 0x208b, 0x2000, 0x0001, 0x0001, 0x2000, 0x208f, 0x208e, 0x2086, 0x2085, 0x2084, 0x2004, 0x2004, 0x2087, 0x2080, 0x207f, 0x207e, 0x2083, 0x2082, 0x2081, 0x2088, 0x2004, 0x2000, 0x0001, 0x0001, 0x2000, 0x2049, 0x2048, 0x2047, 0x204c, 0x204b, 0x204a, 0x2053, 0x2052, 0x2051, 0x2055, 0x2004, 0x2054, 0x204f, 0x204e, 0x204d, 0x2050, 0x2000, 0x0001, 0x0001, 0x2000, 0x2043, 0x2046, 0x2045, 0x2044, 0x203f, 0x203e, 0x203d, 0x2042, 0x2041, 0x2040, 0x2065, 0x2064, 0x2063, 0x2068, 0x2067, 0x2066, 0x2000, 0x0001, 0x0001, 0x2000, 0x206a, 0x2069, 0x205e, 0x205d, 0x205c, 0x2060, 0x205f, 0x2004, 0x2058, 0x2057, 0x2056, 0x205b, 0x205a, 0x2059, 0x2062, 0x2061, 0x2000, 0x0001, 0x0001, 0x2000, 0x0001, 0x0001, 0x2000, 0x0001, 0x0001, 0x2000, 0x0001, 0x0001, 0x2000, 0x0001, 0x0001, 0x2000, 0x0001, 0x0001, 0x2000, 0x0001
};

// [D_08CA829A] D_08CA82DC RLE Data
u8 D_08ca82dc_rledata[] = {
	0x1, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x1, 0x0, 0x82, 0x0, 0x0, 0x0
};

// [D_08CA82DC] D_08CA82DC Graphics
struct CompressedGraphics D_08ca82dc = {
	/* Data */				{.raw = D_08ca82dc_data},
	/* RLE Data */			D_08ca82dc_rledata,
	/* RLE Size */			0x3e,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};
