asm(".syntax unified \n\
\n\
.balign 4, 0 \n\
\n\
thumb_func_start func_080472bc \n\
/* 080472bc */ PUSH {LR} \n\
/* 080472be */ MOVS R0, 0x0 @ Set R0 to 0x0 \n\
/* 080472c0 */ BL func_0800c604 \n\
/* 080472c4 */ BL func_08017578 \n\
/* 080472c8 */ POP {R0} \n\
/* 080472ca */ BX R0 \n\
.balign 4, 0 \n\
.syntax divided");