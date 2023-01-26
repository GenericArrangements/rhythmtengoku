#include "global.h"
#include "graphics.h"

#include "tap_trial_remix5_anim_cells.inc.c"

// [D_0891e840] Girl - Tap Left
const struct Animation anim_tap_remix5_girl_1step[] = {
    /* 000 */ { tap_trial_remix5_cel065, 2 },
    /* 001 */ { tap_trial_remix5_cel066, 2 },
    /* 002 */ { tap_trial_remix5_cel067, 3 },
    /* 003 */ { tap_trial_remix5_cel068, 3 },
    /* 004 */ { tap_trial_remix5_cel069, 4 },
    /* 005 */ { tap_trial_remix5_cel070, 4 },
    /* 006 */ { tap_trial_remix5_cel071, 4 },
    /* 007 */ { tap_trial_remix5_cel072, 4 },
    /* 008 */ { tap_trial_remix5_cel073, 20 },
    /* End */ END_ANIMATION
};

// [D_0891e890] Girl - Tap Right
const struct Animation anim_tap_remix5_girl_2step[] = {
    /* 000 */ { tap_trial_remix5_cel076, 2 },
    /* 001 */ { tap_trial_remix5_cel077, 2 },
    /* 002 */ { tap_trial_remix5_cel078, 3 },
    /* 003 */ { tap_trial_remix5_cel079, 3 },
    /* 004 */ { tap_trial_remix5_cel080, 4 },
    /* 005 */ { tap_trial_remix5_cel081, 4 },
    /* 006 */ { tap_trial_remix5_cel082, 4 },
    /* 007 */ { tap_trial_remix5_cel083, 4 },
    /* 008 */ { tap_trial_remix5_cel073, 20 },
    /* End */ END_ANIMATION
};

// [D_0891e8e0] Girl - Beat
const struct Animation anim_tap_remix5_girl_beat[] = {
    /* 000 */ { tap_trial_remix5_cel075, 3 },
    /* 001 */ { tap_trial_remix5_cel074, 3 },
    /* 002 */ { tap_trial_remix5_cel073, 24 },
    /* End */ END_ANIMATION
};

// [D_0891e900] Monkey - Tap Left
const struct Animation anim_tap_remix5_monkey_1step[] = {
    /* 000 */ { tap_trial_remix5_cel000, 2 },
    /* 001 */ { tap_trial_remix5_cel003, 2 },
    /* 002 */ { tap_trial_remix5_cel005, 2 },
    /* 003 */ { tap_trial_remix5_cel007, 2 },
    /* 004 */ { tap_trial_remix5_cel008, 2 },
    /* 005 */ { tap_trial_remix5_cel009, 3 },
    /* 006 */ { tap_trial_remix5_cel010, 4 },
    /* 007 */ { tap_trial_remix5_cel011, 30 },
    /* End */ END_ANIMATION
};

// [D_0891e948] Monkey - Tap Right
const struct Animation anim_tap_remix5_monkey_2step[] = {
    /* 000 */ { tap_trial_remix5_cel016, 2 },
    /* 001 */ { tap_trial_remix5_cel017, 2 },
    /* 002 */ { tap_trial_remix5_cel019, 2 },
    /* 003 */ { tap_trial_remix5_cel021, 2 },
    /* 004 */ { tap_trial_remix5_cel022, 2 },
    /* 005 */ { tap_trial_remix5_cel099, 3 },
    /* 006 */ { tap_trial_remix5_cel100, 4 },
    /* 007 */ { tap_trial_remix5_cel011, 30 },
    /* End */ END_ANIMATION
};

// [D_0891e990] Monkey - Tap Left (Arms Raised)
const struct Animation anim_tap_remix5_monkey_3step_l[] = {
    /* 000 */ { tap_trial_remix5_cel046, 2 },
    /* 001 */ { tap_trial_remix5_cel047, 2 },
    /* 002 */ { tap_trial_remix5_cel048, 2 },
    /* 003 */ { tap_trial_remix5_cel049, 2 },
    /* 004 */ { tap_trial_remix5_cel050, 2 },
    /* 005 */ { tap_trial_remix5_cel025, 20 },
    /* End */ END_ANIMATION
};

// [D_0891e9c8] Monkey - Tap Right (Arms Raised)
const struct Animation anim_tap_remix5_monkey_3step_r[] = {
    /* 000 */ { tap_trial_remix5_cel053, 2 },
    /* 001 */ { tap_trial_remix5_cel054, 2 },
    /* 002 */ { tap_trial_remix5_cel055, 2 },
    /* 003 */ { tap_trial_remix5_cel056, 2 },
    /* 004 */ { tap_trial_remix5_cel057, 2 },
    /* 005 */ { tap_trial_remix5_cel025, 20 },
    /* End */ END_ANIMATION
};

// [D_0891ea00] Monkey - Call Single Tap
const struct Animation anim_tap_remix5_monkey_1cue[] = {
    /* 000 */ { tap_trial_remix5_cel002, 2 },
    /* 001 */ { tap_trial_remix5_cel004, 2 },
    /* 002 */ { tap_trial_remix5_cel006, 2 },
    /* 003 */ { tap_trial_remix5_cel007, 2 },
    /* 004 */ { tap_trial_remix5_cel008, 20 },
    /* End */ END_ANIMATION
};

// [D_0891ea30] Monkey - Call Double Tap
const struct Animation anim_tap_remix5_monkey_2cue[] = {
    /* 000 */ { tap_trial_remix5_cel015, 2 },
    /* 001 */ { tap_trial_remix5_cel018, 2 },
    /* 002 */ { tap_trial_remix5_cel020, 2 },
    /* 003 */ { tap_trial_remix5_cel021, 2 },
    /* 004 */ { tap_trial_remix5_cel022, 6 },
    /* 005 */ { tap_trial_remix5_cel023, 6 },
    /* 006 */ { tap_trial_remix5_cel022, 20 },
    /* End */ END_ANIMATION
};

// [D_0891ea70] Monkey - Step Test
const struct Animation anim_tap_remix5_monkey_shimmy[] = {
    /* 000 */ { tap_trial_remix5_cel008, 20 },
    /* 001 */ { tap_trial_remix5_cel010, 2 },
    /* 002 */ { tap_trial_remix5_cel011, 2 },
    /* 003 */ { tap_trial_remix5_cel022, 20 },
    /* 004 */ { tap_trial_remix5_cel011, 2 },
    /* 005 */ { tap_trial_remix5_cel010, 2 },
    /* End */ END_ANIMATION
};

// [D_0891eaa8] Monkey - Call Triple Tap
const struct Animation anim_tap_remix5_monkey_3cue[] = {
    /* 000 */ { tap_trial_remix5_cel024, 20 },
    /* 001 */ { tap_trial_remix5_cel025, 4 },
    /* 002 */ { tap_trial_remix5_cel026, 4 },
    /* 003 */ { tap_trial_remix5_cel027, 4 },
    /* 004 */ { tap_trial_remix5_cel028, 4 },
    /* 005 */ { tap_trial_remix5_cel029, 20 },
    /* End */ END_ANIMATION
};

// [D_0891eae0] Monkey - Crouch
const struct Animation anim_tap_remix5_monkey_crouch[] = {
    /* 000 */ { tap_trial_remix5_cel011, 20 },
    /* 001 */ { tap_trial_remix5_cel030, 2 },
    /* 002 */ { tap_trial_remix5_cel031, 2 },
    /* 003 */ { tap_trial_remix5_cel032, 2 },
    /* 004 */ { tap_trial_remix5_cel033, 2 },
    /* 005 */ { tap_trial_remix5_cel034, 2 },
    /* 006 */ { tap_trial_remix5_cel035, 20 },
    /* End */ END_ANIMATION
};

// [D_0891eb20] Monkey - Jump
const struct Animation anim_tap_remix5_monkey_jump[] = {
    /* 000 */ { tap_trial_remix5_cel039, 2 },
    /* End */ END_ANIMATION
};

// [D_0891eb30] Monkey - Final Jump Tap
const struct Animation anim_tap_remix5_monkey_pose_step[] = {
    /* 000 */ { tap_trial_remix5_cel060, 2 },
    /* 001 */ { tap_trial_remix5_cel095, 2 },
    /* 002 */ { tap_trial_remix5_cel096, 2 },
    /* 003 */ { tap_trial_remix5_cel097, 2 },
    /* 004 */ { tap_trial_remix5_cel098, 30 },
    /* End */ END_ANIMATION
};

// [D_0891eb60] Monkey - Beat
const struct Animation anim_tap_remix5_monkey_beat[] = {
    /* 000 */ { tap_trial_remix5_cel013, 3 },
    /* 001 */ { tap_trial_remix5_cel012, 3 },
    /* 002 */ { tap_trial_remix5_cel011, 24 },
    /* End */ END_ANIMATION
};

// [D_0891eb80] (Giraffe) - Bedazzled
const struct Animation anim_tap_remix5_giraffe_bedazzled[] = {
    /* 000 */ { tap_trial_remix5_cel085, 8 },
    /* 001 */ { tap_trial_remix5_cel084, 8 },
    /* 002 */ { tap_trial_remix5_cel085, 8 },
    /* 003 */ { tap_trial_remix5_cel084, 20 },
    /* End */ END_ANIMATION
};

// [D_0891eba8] (Giraffe) - Neutral
const struct Animation anim_tap_remix5_giraffe_neutral[] = {
    /* 000 */ { tap_trial_remix5_cel086, 20 },
    /* End */ END_ANIMATION
};

// [D_0891ebb8] (Giraffe) - Disappointed
const struct Animation anim_tap_remix5_giraffe_sad[] = {
    /* 000 */ { tap_trial_remix5_cel087, 4 },
    /* 001 */ { tap_trial_remix5_cel088, 4 },
    /* 002 */ { tap_trial_remix5_cel089, 4 },
    /* 003 */ { tap_trial_remix5_cel090, 4 },
    /* 004 */ { tap_trial_remix5_cel091, 4 },
    /* 005 */ { tap_trial_remix5_cel092, 4 },
    /* 006 */ { tap_trial_remix5_cel093, 20 },
    /* End */ END_ANIMATION
};

// [D_0891ebf8] Monkey - Fall to Crouch
const struct Animation anim_tap_remix5_monkey_fall[] = {
    /* 000 */ { tap_trial_remix5_cel038, 2 },
    /* 001 */ { tap_trial_remix5_cel037, 2 },
    /* 002 */ { tap_trial_remix5_cel036, 2 },
    /* 003 */ { tap_trial_remix5_cel035, 2 },
    /* 004 */ { tap_trial_remix5_cel034, 2 },
    /* End */ END_ANIMATION
};

// [D_0891ec28] Monkey - Crouching Jump Tap
const struct Animation anim_tap_remix5_monkey_crouch_step[] = {
    /* 000 */ { tap_trial_remix5_cel094, 2 },
    /* 001 */ { tap_trial_remix5_cel035, 2 },
    /* 002 */ { tap_trial_remix5_cel034, 2 },
    /* End */ END_ANIMATION
};

// [D_0891ec48] Shadow
const struct Animation anim_tap_remix5_shadow[] = {
    /* 000 */ { tap_trial_remix5_cel102, 4 },
    /* End */ END_ANIMATION
};

// [D_0891ec58] "Start to Skip" Tutorial Text
const struct Animation anim_tap_remix5_text_skip_tutorial[] = {
    /* 000 */ { tap_trial_remix5_cel105, 4 },
    /* End */ END_ANIMATION
};

// [D_0891ec68] Girl - Cue Triple Tap
const struct Animation anim_tap_remix5_girl_3cue[] = {
    /* 000 */ { tap_trial_remix5_cel106, 20 },
    /* 001 */ { tap_trial_remix5_cel107, 4 },
    /* 002 */ { tap_trial_remix5_cel108, 4 },
    /* 003 */ { tap_trial_remix5_cel109, 4 },
    /* 004 */ { tap_trial_remix5_cel110, 4 },
    /* 005 */ { tap_trial_remix5_cel111, 20 },
    /* End */ END_ANIMATION
};

// [D_0891eca0] Girl - Tap Left (Arms Raised)
const struct Animation anim_tap_remix5_girl_3step_l[] = {
    /* 000 */ { tap_trial_remix5_cel112, 2 },
    /* 001 */ { tap_trial_remix5_cel113, 2 },
    /* 002 */ { tap_trial_remix5_cel114, 2 },
    /* 003 */ { tap_trial_remix5_cel115, 2 },
    /* 004 */ { tap_trial_remix5_cel116, 2 },
    /* 005 */ { tap_trial_remix5_cel107, 20 },
    /* End */ END_ANIMATION
};

// [D_0891ecd8] Girl - Tap Right (Arms Raised)
const struct Animation anim_tap_remix5_girl_3step_r[] = {
    /* 000 */ { tap_trial_remix5_cel117, 2 },
    /* 001 */ { tap_trial_remix5_cel118, 2 },
    /* 002 */ { tap_trial_remix5_cel119, 2 },
    /* 003 */ { tap_trial_remix5_cel120, 2 },
    /* 004 */ { tap_trial_remix5_cel121, 2 },
    /* 005 */ { tap_trial_remix5_cel107, 20 },
    /* End */ END_ANIMATION
};

// [D_0891ed10] Girl - Cue Left Tap
const struct Animation anim_tap_remix5_girl_1cue[] = {
    /* 000 */ { tap_trial_remix5_cel122, 2 },
    /* 001 */ { tap_trial_remix5_cel066, 2 },
    /* 002 */ { tap_trial_remix5_cel067, 2 },
    /* 003 */ { tap_trial_remix5_cel068, 2 },
    /* 004 */ { tap_trial_remix5_cel069, 20 },
    /* End */ END_ANIMATION
};

// [D_0891ed40] Girl - Cue Right Tap
const struct Animation anim_tap_remix5_girl_2cue[] = {
    /* 000 */ { tap_trial_remix5_cel123, 2 },
    /* 001 */ { tap_trial_remix5_cel077, 2 },
    /* 002 */ { tap_trial_remix5_cel078, 2 },
    /* 003 */ { tap_trial_remix5_cel079, 2 },
    /* 004 */ { tap_trial_remix5_cel080, 20 },
    /* End */ END_ANIMATION
};

// [D_0891ed70] Girl - Crouch
const struct Animation anim_tap_remix5_girl_crouch[] = {
    /* 000 */ { tap_trial_remix5_cel073, 20 },
    /* 001 */ { tap_trial_remix5_cel124, 2 },
    /* 002 */ { tap_trial_remix5_cel125, 2 },
    /* 003 */ { tap_trial_remix5_cel126, 2 },
    /* 004 */ { tap_trial_remix5_cel127, 2 },
    /* 005 */ { tap_trial_remix5_cel128, 2 },
    /* 006 */ { tap_trial_remix5_cel129, 20 },
    /* End */ END_ANIMATION
};

// [D_0891edb0] Girl - Jump
const struct Animation anim_tap_remix5_girl_jump[] = {
    /* 000 */ { tap_trial_remix5_cel130, 2 },
    /* End */ END_ANIMATION
};

// [D_0891edc0] Girl - Final Jump Tap
const struct Animation anim_tap_remix5_girl_pose_step[] = {
    /* 000 */ { tap_trial_remix5_cel131, 2 },
    /* 001 */ { tap_trial_remix5_cel132, 2 },
    /* 002 */ { tap_trial_remix5_cel133, 2 },
    /* 003 */ { tap_trial_remix5_cel134, 2 },
    /* 004 */ { tap_trial_remix5_cel135, 30 },
    /* End */ END_ANIMATION
};

// [D_0891edf0] Girl - Fall to Crouch
const struct Animation anim_tap_remix5_girl_fall[] = {
    /* 000 */ { tap_trial_remix5_cel136, 2 },
    /* 001 */ { tap_trial_remix5_cel124, 2 },
    /* 002 */ { tap_trial_remix5_cel125, 2 },
    /* 003 */ { tap_trial_remix5_cel126, 2 },
    /* 004 */ { tap_trial_remix5_cel128, 2 },
    /* End */ END_ANIMATION
};

// [D_0891ee20] Girl - Crouching Jump Tap
const struct Animation anim_tap_remix5_girl_crouch_step[] = {
    /* 000 */ { tap_trial_remix5_cel137, 2 },
    /* 001 */ { tap_trial_remix5_cel129, 2 },
    /* 002 */ { tap_trial_remix5_cel138, 2 },
    /* End */ END_ANIMATION
};

// [D_0891ee40] Girl - Miss Crouching Jump Tap
const struct Animation anim_tap_remix5_girl_miss_crouch[] = {
    /* 000 */ { tap_trial_remix5_cel138, 2 },
    /* 001 */ { tap_trial_remix5_cel139, 2 },
    /* 002 */ { tap_trial_remix5_cel140, 3 },
    /* 003 */ { tap_trial_remix5_cel141, 3 },
    /* 004 */ { tap_trial_remix5_cel142, 30 },
    /* End */ END_ANIMATION
};

// [D_0891ee70] Girl - Miss Final Jump Tap
const struct Animation anim_tap_remix5_girl_miss_pose[] = {
    /* 000 */ { tap_trial_remix5_cel143, 2 },
    /* 001 */ { tap_trial_remix5_cel144, 2 },
    /* 002 */ { tap_trial_remix5_cel145, 3 },
    /* 003 */ { tap_trial_remix5_cel146, 3 },
    /* 004 */ { tap_trial_remix5_cel147, 30 },
    /* End */ END_ANIMATION
};
