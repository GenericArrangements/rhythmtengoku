  //  //  //  //   SYSTEM-EXCLUSIVE MESSAGE OPERATIONS   //  //  //  //


// [func_0804ae1c] SYSTEM-EXCLUSIVE MESSAGE HANDLER - Initialise
void func_0804ae1c(struct SysExcMsgHandler* SysExcMsgHandler, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5) {
    SysExcMsgHandler->unk6 = 0;
    SysExcMsgHandler->unk7 = 0;
    SysExcMsgHandler->unk8 = 0;
    SysExcMsgHandler->unk0 = arg1;
    SysExcMsgHandler->unk1 = arg2;
    SysExcMsgHandler->unk2 = 0x10000 / arg3;
    SysExcMsgHandler->unk4 = arg4;
    SysExcMsgHandler->unk5 = arg5;
}

// [func_0804ae54] Set ?? [Ctrl_49]
void func_0804ae54(struct SysExcMsgHandler *arg0) {
    arg0->unk6 = 1;
    arg0->unk8 = 0;
    arg0->unk7 = 0;
}

// [func_0804ae60] Set ?? [Ctrl_49; Ctrl_4A]
void func_0804ae60(struct SysExcMsgHandler *arg0) {
    arg0->unk6 = 0;
    arg0->unk8 = 0;
    arg0->unk7 = 0;
}

// [func_0804ae6c] SYSTEM-EXCLUSIVE MESSAGE HANDLER - Update
void func_0804ae6c(struct SysExcMsgHandler *SysExcMsgHandler, u32 speed) {
    s32 temp;
    s32 temp2;

    switch (SysExcMsgHandler->unk6) {
        case 0:
            SysExcMsgHandler->unk7 = 0;
            break;
        case 1:
            SysExcMsgHandler->unk8 += speed;
            SysExcMsgHandler->unk7 = 0;
            if ((SysExcMsgHandler->unk8 >> 8) >= SysExcMsgHandler->unk0) {
                SysExcMsgHandler->unk8 = 0;
                SysExcMsgHandler->unk6 = 2;
            }
            break;
        case 2:
        case 3:
            SysExcMsgHandler->unk8 += speed;
            temp2 = SysExcMsgHandler->unk8 >> 8;
            temp = (temp2 * SysExcMsgHandler->unk2) >> 8;
            if ((SysExcMsgHandler->unk5 != 0) && ((u32) temp > SysExcMsgHandler->unk5)) {
                temp = SysExcMsgHandler->unk5;
            }
            temp += SysExcMsgHandler->unk4;
            temp = D_08a86140[temp & 0xff] >> 1;
            if (temp > 0x7f) temp = 0x7f;
            if (temp < -0x80) temp = -0x80;
            if (SysExcMsgHandler->unk6 == 2) {
                if (temp2 < SysExcMsgHandler->unk1) {
                    temp = (temp * temp2) / SysExcMsgHandler->unk1;
                } else {
                    SysExcMsgHandler->unk6 = 3;
                }
            }
            SysExcMsgHandler->unk7 = temp;
            break;
    }
}

// [func_0804af0c] UTIL - Pseudo-Random Number Generator
u32 func_0804af0c(u16 var) {
    D_03001570 = (D_03001570 * 109) + 1021;
    return (u32) (var * D_03001570) >> 0x10;
}
