// Serial Communication Registers

// Do not care enough to label these atm

#define REG_SCD0       	*(volatile u16*)(IORAMBase + 0x120)
#define REG_SCD1       	*(volatile u16*)(IORAMBase + 0x122)
#define REG_SCD2       	*(volatile u16*)(IORAMBase + 0x124)
#define REG_SCD3       	*(volatile u16*)(IORAMBase + 0x126)
#define REG_SCCNT      	*(volatile u32*)(IORAMBase + 0x128)
#define REG_SCCNT_L    	*(volatile u16*)(IORAMBase + 0x128)
#define REG_SCCNT_H    	*(volatile u16*)(IORAMBase + 0x12A)
