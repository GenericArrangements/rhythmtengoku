#pragma once

#include "global.h"
#include "sound.h"

  // // // // // // // // // // // // // // // // // // // //

typedef volatile u16 *IOReg;

typedef void (*HandWritten)();
#define AS_THUMB(x) (HandWritten)((u32)&x|1)

#define Q24(x) ((s32)((x) * 256))
#define Q24_TO_INT(x) ((s32)((x) >> 8))
#define Q16(x) ((s32)((x) * 65536))
#define Q16_TO_INT(x) ((s32)((x) >> 16))
#define UQ24(x) ((u32)((x) * 256))
#define UQ24_TO_INT(x) ((u32)((x) / 256))
#define UQ16(x) ((u32)((x) * 65536))
#define UQ16_TO_INT(x) ((u32)((x) / 65536))

#define Clamp(x, min, max)      \
{                               \
    Floor(x, min);              \
    Ceil(x, max);               \
}

#define Floor(x, min)           \
{                               \
    if (x < min) x = min;       \
}

#define Ceil(x, max)            \
{                               \
    if (x > max) x = max;       \
}

  // // // // // // // // // // // // // // // // // // // //

#define DIRECTSOUND_MODE_STEREO 0
#define DIRECTSOUND_MODE_MONO1  1
#define DIRECTSOUND_MODE_MONO2  2

#define MOD_TYPE_VIBRATO    0
#define MOD_TYPE_TREMOLO    1
#define MOD_TYPE_PANNING    2

#define ADSR_STAGE_ATTACK       0
#define ADSR_STAGE_DECAY        1
#define ADSR_STAGE_SUSTAIN      2
#define ADSR_STAGE_RELEASE      3
#define ADSR_STAGE_FORCE_STOP   4

#define LFO_STAGE_DISABLED  0
#define LFO_STAGE_PRE_DELAY 1
#define LFO_STAGE_ATTACK    2
#define LFO_STAGE_SUSTAIN   3

#define LFO_MODE_DISABLED   0
#define LFO_MODE_KEYPRESS   1
#define LFO_MODE_CONSTANT   2

#define VOL_FADE_RESET      0
#define VOL_FADE_IN         1
#define VOL_FADE_OUT_CLEAR  2
#define VOL_FADE_OUT_PAUSE  3

#define SYS_EXC_EVENT_LFO       0
#define SYS_EXC_EVENT_R_SCALE   1

#define META_EVENT_OTHER        0
#define META_EVENT_TRACK_END    1
#define META_EVENT_LOOP_START   2
#define META_EVENT_LOOP_END     3

#define M_TRACK_STREAM_CONTINUE 0
#define M_TRACK_STREAM_STOP     1
#define M_TRACK_STREAM_LOOP     2

#define MSG_NOTE_OFF                    0x80
#define MSG_NOTE_ON                     0x90
#define MSG_POLYPHONIC_KEY_PRESSURE     0xA0
#define MSG_CONTROLLER_CHANGE           0xB0
#define MSG_PROGRAM_CHANGE              0xC0
#define MSG_CHANNEL_PRESSURE            0xD0
#define MSG_PITCH_WHEEL_CHANGE          0xE0

#define META_TEXT_MARKER    0x06
#define META_END_OF_TRACK   0x2F
#define META_SET_TEMPO      0x51

#define M_CONTROLLER_BANK_SELECT_MSB    0x00
#define M_CONTROLLER_MOD_DEPTH          0x01
#define M_CONTROLLER_VOLUME             0x07
#define M_CONTROLLER_PANNING            0x0A
#define M_CONTROLLER_EXPRESSION         0x0B
#define M_CONTROLLER_UNK_0E             0x0E
#define M_CONTROLLER_UNK_10             0x10
#define M_CONTROLLER_MOD_RANGE          0x14
#define M_CONTROLLER_MOD_SPEED          0x15
#define M_CONTROLLER_MOD_TYPE           0x16
#define M_CONTROLLER_MOD_DELAY          0x1A
#define M_CONTROLLER_BANK_SELECT_LSB    0x20
#define M_CONTROLLER_PRIORITY           0x21
#define M_CONTROLLER_DAMPEN             0x48
#define M_CONTROLLER_UNK_49             0x49
#define M_CONTROLLER_UNK_4A             0x4A
#define M_CONTROLLER_STEREO             0x4B
#define M_CONTROLLER_UNK_4C             0x4C
#define M_CONTROLLER_UNK_4D             0x4D
#define M_CONTROLLER_RVB1               0x4E
#define M_CONTROLLER_RVB2               0x4F
#define M_CONTROLLER_RVB3               0x50
#define M_CONTROLLER_RVB4               0x51
#define M_CONTROLLER_RANDOM_PITCH       0x52
#define M_CONTROLLER_RANDOM_53          0x53
#define M_CONTROLLER_RANDOM_54          0x54