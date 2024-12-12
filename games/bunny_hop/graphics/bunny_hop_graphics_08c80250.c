#include "global.h"
#include "graphics.h"

// // //  D_08C80250  // // //

// [D_08C7FF0C] D_08C80250 Data
u16 D_08c80250_data[] = {
	0x0010, 0x0023, 0x0c10, 0x0c10, 0x0010, 0x0023, 0x0010, 0x0010, 0x0010, 0x0023, 0x0010, 0x0010, 0x0010, 0x0023, 0x0010, 0x0010, 0x0010, 0x0023, 0x0010, 0x0010, 0x0010, 0x0023, 0x0010, 0x0010, 0x0025, 0x0010, 0x0010, 0x0021, 0x0025, 0x0010, 0x0024, 0x0022, 0x0010, 0x0010, 0x0c10, 0x0c10, 0x0010, 0x0026, 0x0010, 0x0024, 0x0022, 0x0010, 0x0026, 0x0024, 0x0022, 0x0010, 0x0026, 0x0024, 0x0022, 0x0010, 0x0026, 0x0024, 0x0022, 0x0010, 0x0023, 0x0010, 0x0010, 0x0010, 0x0023, 0x0010, 0x0010, 0x0825, 0x0810, 0x0c10, 0x0c25, 0x0c21, 0x0010, 0x0810, 0x0810, 0x0810, 0x0821, 0x0825, 0x0810, 0x0810, 0x0810, 0x0010, 0x0026, 0x0024, 0x0022, 0x0010, 0x0026, 0x0010, 0x0021, 0x0810, 0x0810, 0x0410, 0x0410, 0x0c10, 0x0010, 0x0010, 0x0010, 0x0021, 0x0810, 0x0421, 0x0424, 0x0c23, 0x0c10, 0x0422, 0x0424, 0x0010, 0x0810, 0x0826, 0x0410, 0x0410, 0x0c24, 0x0c26, 0x0c10, 0x0c22, 0x0010, 0x0810, 0x0826, 0x0824, 0x0822, 0x0810, 0x0826, 0x0410, 0x0410, 0x0c10, 0x0c25, 0x0410, 0x0410, 0x0025, 0x0010, 0x0010, 0x0021, 0x0025, 0x0010, 0x0024, 0x0022, 0x0810, 0x0810, 0x0410, 0x0410, 0x0c10, 0x0c23, 0x0c10, 0x0c10, 0x0010, 0x0026, 0x0024, 0x0022, 0x0810, 0x0823, 0x0810, 0x0810, 0x0810, 0x0823, 0x0422, 0x0410, 0x0c10, 0x0c10, 0x0421, 0x0410, 0x0010, 0x0023, 0x0010, 0x0010, 0x0010, 0x0023, 0x0010, 0x0010, 0x0825, 0x0810, 0x0422, 0x0424, 0x0c10, 0x0010, 0x0825, 0x0810, 0x0410, 0x0410, 0x0c26, 0x0c10, 0x0410, 0x0410, 0x0010, 0x0026, 0x0410, 0x0426, 0x0410, 0x0422, 0x0424, 0x0021, 0x0810, 0x0810, 0x0410, 0x0410, 0x0c10, 0x0010, 0x0010, 0x0010, 0x0021, 0x0810, 0x0421, 0x0022, 0x0c23, 0x0c10, 0x0024, 0x0022, 0x0010, 0x0010, 0x0410, 0x0010, 0x0010, 0x0023, 0x0410, 0x0410, 0x0410, 0x0423, 0x0410, 0x0410, 0x0010, 0x0810, 0x0826, 0x0810, 0x0410, 0x0010, 0x0c10, 0x0c25, 0x0010, 0x0424, 0x0410, 0x0022, 0x0010, 0x0026, 0x0810, 0x0810, 0x0410, 0x0426, 0x0410, 0x0422, 0x0010, 0x0010, 0x0024, 0x0022, 0x0810, 0x0823, 0x0810, 0x0024, 0x0810, 0x0010, 0x0010, 0x0010, 0x0021, 0x0010, 0x0410, 0x0010, 0x0825, 0x0810, 0x0810, 0x0821, 0x0825, 0x0810, 0x0010, 0x0021, 0x0025, 0x0010, 0x0810, 0x0010, 0x0023, 0x0010, 0x0023, 0x0010, 0x0026, 0x0024, 0x0010, 0x0024, 0x0022, 0x0010, 0x0026, 0x0024, 0x0022, 0x3010, 0x6010, 0x602a, 0x6028, 0x6029, 0x602d, 0x602b, 0x602c, 0x6027, 0x6015, 0x6013, 0x6012, 0x4010, 0x4011, 0x4017, 0x4016, 0x4018, 0x401a, 0x4019, 0x4015, 0x4014, 0x4013, 0x4000, 0x0000, 0x200d, 0x2005, 0x2006, 0x2007, 0x200e, 0x200f, 0x200c, 0x200d, 0x2005, 0x2006, 0x2007, 0x200e, 0x200f, 0x200c, 0x200d, 0x2005, 0x2006, 0x2007, 0x200e, 0x200f, 0x200c, 0x200d, 0x2005, 0x2006, 0x2007, 0x200e, 0x200f, 0x200c, 0x200d, 0x2005, 0x2006, 0x2007, 0x2002, 0x2003, 0x2004, 0x2009, 0x200a, 0x200b, 0x2008, 0x2002, 0x2003, 0x2004, 0x2009, 0x200a, 0x200b, 0x2008, 0x2002, 0x2003, 0x2004, 0x2009, 0x200a, 0x200b, 0x2008, 0x2002, 0x2003, 0x2004, 0x2009, 0x200a, 0x200b, 0x2008, 0x2002, 0x2003, 0x2004, 0x2009, 0x2001
};

// [D_08C801DE] D_08C80250 RLE Data
u8 D_08c80250_rledata[] = {
	0x1, 0x8, 0x26, 0x3, 0x19, 0x3, 0x3, 0x3, 0x9, 0x4, 0xc, 0x3, 0x5, 0x5, 0x7, 0x7, 0x9, 0x3, 0x39, 0x3, 0x1, 0x3, 0x2, 0x4, 0x13, 0x3, 0x5, 0x5, 0x9, 0x4, 0xa, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2, 0x3, 0x10, 0x3, 0x7, 0xa, 0x1, 0x4, 0x1, 0x3, 0x7, 0xc, 0x3, 0xa, 0x1, 0x6, 0x1, 0xd, 0x2, 0x12, 0x2, 0xa, 0x3, 0xa, 0x3, 0x4, 0x4, 0x5f, 0x1, 0x5f, 0x1, 0x1f, 0x1, 0x1f, 0x1, 0x1f, 0x1, 0x1f, 0x1, 0x1f, 0x1, 0x1f, 0x1, 0x1f, 0x1, 0x1f, 0x1, 0x3f, 0x1, 0x5f, 0x1, 0x0, 0x60, 0x1, 0x1f, 0x1, 0x1f, 0x1, 0x1f, 0x1, 0x1f, 0x1, 0x1f, 0x1, 0x1f, 0x1, 0x1f, 0x1, 0x1f, 0x1, 0x3f, 0x1, 0x3f, 0x1, 0x7f, 0x41, 0x3f, 0x0
};

// [D_08C80250] D_08C80250 Graphics
struct CompressedGraphics D_08c80250 = {
	/* Data */				{.raw = D_08c80250_data},
	/* RLE Data */			D_08c80250_rledata,
	/* RLE Size */			0x70,
	/* RLE Offset */		0x800,
	/* Double Compressed */	FALSE,
};