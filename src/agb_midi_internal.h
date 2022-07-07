#pragma once

#include "global.h"
#include "sound.h"

  // // // // // // // // // // // // // // // // // // // //

#define Q24(x) ((s32)((x) * 256))
#define Q24_TO_INT(x) ((s32)((x) >> 8))
#define Q16(x) ((s32)((x) * 65536))
#define Q16_TO_INT(x) ((s32)((x) >> 16))
#define UQ24(x) ((u32)((x) * 256))
#define UQ24_TO_INT(x) ((u32)((x) / 256))

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

#define MOD_TYPE_VIBRATO 0
#define MOD_TYPE_TREMOLO 1
#define MOD_TYPE_PANNING 2

#define ADSR_STAGE_ATTACK 0
#define ADSR_STAGE_DECAY 1
#define ADSR_STAGE_SUSTAIN 2
#define ADSR_STAGE_RELEASE 3
#define ADSR_STAGE_FORCE_STOP 4

#define VOL_FADE_RESET 0
#define VOL_FADE_IN 1
#define VOL_FADE_OUT_CLEAR 2
#define VOL_FADE_OUT_PAUSE 3

#define META_EVENT_OTHER 0
#define META_EVENT_TRACK_END 1
#define META_EVENT_LOOP_START 2
#define META_EVENT_LOOP_END 3

#define M_TRACK_STREAM_CONTINUE 0
#define M_TRACK_STREAM_STOP 1
#define M_TRACK_STREAM_LOOP 2

  // // // // // // // // // // // // // // // // // // // //

#define MSG_NOTE_OFF 0x80
#define MSG_NOTE_ON 0x90
#define MSG_POLYPHONIC_KEY_PRESSURE 0xA0
#define MSG_CONTROLLER_CHANGE 0xB0
#define MSG_PROGRAM_CHANGE 0xC0
#define MSG_CHANNEL_PRESSURE 0xD0
#define MSG_PITCH_WHEEL_CHANGE 0xE0

#define META_TEXT_MARKER 0x06
#define META_END_OF_TRACK 0x2F
#define META_SET_TEMPO 0x51