asm(".syntax unified \n\
\n\
.balign 4, 0 \n\
\n\
thumb_func_start drum_intro_engine_stop \n\
/* 08024d44 */ BX LR \n\
.balign 4, 0 \n\
.syntax divided");
