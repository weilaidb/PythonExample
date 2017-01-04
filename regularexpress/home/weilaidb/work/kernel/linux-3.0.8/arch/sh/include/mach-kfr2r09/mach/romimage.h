mov.l	1f, r0
icbi	@r0
mova	2f, r0
jmp	@r0
nop
.align 2
1:	.long 0xa8000000
2:
static inline void mmcif_update_progress(int nr)
