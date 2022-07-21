  //  //  //  //   LOW-FREQUENCY OSCILLATOR OPERATIONS   //  //  //  //


// [func_0804ae1c] LOW-FREQUENCY OSCILLATOR - Initialise
void func_0804ae1c(struct LFO *lfo, u8 preDelay, u8 attack, u8 arg3, u8 offset, u8 duration) {
    lfo->stage = LFO_STAGE_DISABLED;
    lfo->output = 0;
    lfo->ticks = 0;
    lfo->preDelay = preDelay;
    lfo->attack = attack;
    lfo->rate = Q24(0x100) / arg3;
    lfo->offset = offset;
    lfo->duration = duration;
}

// [func_0804ae54] LOW-FREQUENCY OSCILLATOR - Start [Ctrl_49]
void func_0804ae54(struct LFO *lfo) {
    lfo->stage = LFO_STAGE_PRE_DELAY;
    lfo->ticks = 0;
    lfo->output = 0;
}

// [func_0804ae60] LOW-FREQUENCY OSCILLATOR - Stop [Ctrl_49; Ctrl_4A]
void func_0804ae60(struct LFO *lfo) {
    lfo->stage = LFO_STAGE_DISABLED;
    lfo->ticks = 0;
    lfo->output = 0;
}

// [func_0804ae6c] LOW-FREQUENCY OSCILLATOR - Update
void func_0804ae6c(struct LFO *lfo, u32 delta) {
    u32 pos;
    s32 time, result;

    switch (lfo->stage) {
        case LFO_STAGE_DISABLED:
            lfo->output = 0;
            break;
        case LFO_STAGE_PRE_DELAY:
            lfo->ticks += delta;
            lfo->output = 0;
            if (UQ24_TO_INT(lfo->ticks) >= lfo->preDelay) {
                lfo->ticks = 0;
                lfo->stage = LFO_STAGE_ATTACK;
            }
            break;
        case LFO_STAGE_ATTACK:
        case LFO_STAGE_SUSTAIN:
            lfo->ticks += delta;
            time = UQ24_TO_INT(lfo->ticks);
            pos = Q24_TO_INT(time * lfo->rate);
            if (lfo->duration != 0) {
                Ceil(pos, lfo->duration);
            }
            pos += lfo->offset;
            result = gMidiSineTable[pos & 0xff] >> 1;
            Ceil(result, 0x7f);
            Floor(result, -0x80);
            if (lfo->stage == LFO_STAGE_ATTACK) {
                if (time < lfo->attack) {
                    result = result * time / lfo->attack;
                } else {
                    lfo->stage = LFO_STAGE_SUSTAIN;
                }
            }
            lfo->output = result;
            break;
    }
}

// [func_0804af0c] UTIL - Pseudo-Random Number Generator
u32 func_0804af0c(u16 var) {
    D_03001570 = (D_03001570 * 109) + 1021;
    return (u32) (var * D_03001570) >> 0x10;
}
