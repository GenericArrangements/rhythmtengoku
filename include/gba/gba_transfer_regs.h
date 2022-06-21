// Data transfer registers, still do not care to label

#define REG_RCNT       *(volatile u16*)(IORAMBase + 0x134)
#define REG_JOYCNT     *(volatile u16*)(IORAMBase + 0x140)
#define REG_JOYRE      *(volatile u32*)(IORAMBase + 0x150)
#define REG_JOYRE_L    *(volatile u16*)(IORAMBase + 0x150)
#define REG_JOYRE_H    *(volatile u16*)(IORAMBase + 0x152)
#define REG_JOYTR      *(volatile u32*)(IORAMBase + 0x154)
#define REG_JOYTR_L    *(volatile u16*)(IORAMBase + 0x154)
#define REG_JOYTR_H    *(volatile u16*)(IORAMBase + 0x156)
#define REG_JSTAT      *(volatile u32*)(IORAMBase + 0x158)
#define REG_JSTAT_L    *(volatile u16*)(IORAMBase + 0x158)
#define REG_JSTAT_H    *(volatile u16*)(IORAMBase + 0x15A)
