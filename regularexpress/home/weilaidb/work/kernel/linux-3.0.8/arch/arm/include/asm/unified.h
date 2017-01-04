#define __ASM_UNIFIED_H
#if defined(__ASSEMBLY__) && defined(CONFIG_ARM_ASM_UNIFIED)
.syntax unified
#if __GNUC__ < 4
#error Thumb-2 kernel requires gcc >= 4
#define PSR_ISETSTATE	PSR_T_BIT
#define ARM(x...)
#define THUMB(x...)	x
#define W(instr)	instr.w
#define BSYM(sym)	sym + 1
#define PSR_ISETSTATE	0
#define ARM(x...)	x
#define THUMB(x...)
#define W(instr)	instr
#define BSYM(sym)	sym
.macro	it, cond
.endm
.macro	itt, cond
.endm
.macro	ite, cond
.endm
.macro	ittt, cond
.endm
.macro	itte, cond
.endm
.macro	itet, cond
.endm
.macro	itee, cond
.endm
.macro	itttt, cond
.endm
.macro	ittte, cond
.endm
.macro	ittet, cond
.endm
.macro	ittee, cond
.endm
.macro	itett, cond
.endm
.macro	itete, cond
.endm
.macro	iteet, cond
.endm
.macro	iteee, cond
.endm
__asm__(
"	.macro	it, cond\n"
"	.endm\n"
"	.macro	itt, cond\n"
"	.endm\n"
"	.macro	ite, cond\n"
"	.endm\n"
"	.macro	ittt, cond\n"
"	.endm\n"
"	.macro	itte, cond\n"
"	.endm\n"
"	.macro	itet, cond\n"
"	.endm\n"
"	.macro	itee, cond\n"
"	.endm\n"
"	.macro	itttt, cond\n"
"	.endm\n"
"	.macro	ittte, cond\n"
"	.endm\n"
"	.macro	ittet, cond\n"
"	.endm\n"
"	.macro	ittee, cond\n"
"	.endm\n"
"	.macro	itett, cond\n"
"	.endm\n"
"	.macro	itete, cond\n"
"	.endm\n"
"	.macro	iteet, cond\n"
"	.endm\n"
"	.macro	iteee, cond\n"
"	.endm\n");
