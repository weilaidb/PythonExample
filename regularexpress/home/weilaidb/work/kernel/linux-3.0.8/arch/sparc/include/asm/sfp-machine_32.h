#define _SFP_MACHINE_H
#define _FP_W_TYPE_SIZE		32
#define _FP_W_TYPE		unsigned long
#define _FP_WS_TYPE		signed long
#define _FP_I_TYPE		long
#define _FP_MUL_MEAT_S(R,X,Y)					\
_FP_MUL_MEAT_1_wide(_FP_WFRACBITS_S,R,X,Y,umul_ppmm)
#define _FP_MUL_MEAT_D(R,X,Y)					\
_FP_MUL_MEAT_2_wide(_FP_WFRACBITS_D,R,X,Y,umul_ppmm)
#define _FP_MUL_MEAT_Q(R,X,Y)					\
_FP_MUL_MEAT_4_wide(_FP_WFRACBITS_Q,R,X,Y,umul_ppmm)
#define _FP_DIV_MEAT_S(R,X,Y)	_FP_DIV_MEAT_1_udiv(S,R,X,Y)
#define _FP_DIV_MEAT_D(R,X,Y)	_FP_DIV_MEAT_2_udiv(D,R,X,Y)
#define _FP_DIV_MEAT_Q(R,X,Y)	_FP_DIV_MEAT_4_udiv(Q,R,X,Y)
#define _FP_NANFRAC_S		((_FP_QNANBIT_S << 1) - 1)
#define _FP_NANFRAC_D		((_FP_QNANBIT_D << 1) - 1), -1
#define _FP_NANFRAC_Q		((_FP_QNANBIT_Q << 1) - 1), -1, -1, -1
#define _FP_NANSIGN_S		0
#define _FP_NANSIGN_D		0
#define _FP_NANSIGN_Q		0
#define _FP_KEEPNANFRACP 1
#define _FP_CHOOSENAN(fs, wc, R, X, Y, OP)			\
do  while (0)
#define __FP_FRAC_ADD_3(r2,r1,r0,x2,x1,x0,y2,y1,y0)			\
__asm__ ("addcc %r7,%8,%2\n\t"					\
"addxcc %r5,%6,%1\n\t"					\
"addx %r3,%4,%0\n"						\
: "=r" ((USItype)(r2)),					\
"=&r" ((USItype)(r1)),					\
"=&r" ((USItype)(r0))					\
: "%rJ" ((USItype)(x2)),					\
"rI" ((USItype)(y2)),					\
"%rJ" ((USItype)(x1)),					\
"rI" ((USItype)(y1)),					\
"%rJ" ((USItype)(x0)),					\
"rI" ((USItype)(y0))					\
: "cc")
#define __FP_FRAC_SUB_3(r2,r1,r0,x2,x1,x0,y2,y1,y0)			\
__asm__ ("subcc %r7,%8,%2\n\t"					\
"subxcc %r5,%6,%1\n\t"					\
"subx %r3,%4,%0\n"						\
: "=r" ((USItype)(r2)),					\
"=&r" ((USItype)(r1)),					\
"=&r" ((USItype)(r0))					\
: "%rJ" ((USItype)(x2)),					\
"rI" ((USItype)(y2)),					\
"%rJ" ((USItype)(x1)),					\
"rI" ((USItype)(y1)),					\
"%rJ" ((USItype)(x0)),					\
"rI" ((USItype)(y0))					\
: "cc")
#define __FP_FRAC_ADD_4(r3,r2,r1,r0,x3,x2,x1,x0,y3,y2,y1,y0)		\
do  while (0)
#define __FP_FRAC_SUB_4(r3,r2,r1,r0,x3,x2,x1,x0,y3,y2,y1,y0)		\
do  while (0)
#define __FP_FRAC_DEC_3(x2,x1,x0,y2,y1,y0) __FP_FRAC_SUB_3(x2,x1,x0,x2,x1,x0,y2,y1,y0)
#define __FP_FRAC_DEC_4(x3,x2,x1,x0,y3,y2,y1,y0) __FP_FRAC_SUB_4(x3,x2,x1,x0,x3,x2,x1,x0,y3,y2,y1,y0)
#define __FP_FRAC_ADDI_4(x3,x2,x1,x0,i)					\
__asm__ ("addcc %3,%4,%3\n\t"						\
"addxcc %2,%%g0,%2\n\t"					\
"addxcc %1,%%g0,%1\n\t"					\
"addx %0,%%g0,%0\n\t"					\
: "=&r" ((USItype)(x3)),					\
"=&r" ((USItype)(x2)),					\
"=&r" ((USItype)(x1)),					\
"=&r" ((USItype)(x0))					\
: "rI" ((USItype)(i)),					\
"0" ((USItype)(x3)),					\
"1" ((USItype)(x2)),					\
"2" ((USItype)(x1)),					\
"3" ((USItype)(x0))					\
: "cc")
extern struct task_struct *last_task_used_math;
#define FP_ROUNDMODE	((current->thread.fsr >> 30) & 0x3)
#define FP_ROUNDMODE	((last_task_used_math->thread.fsr >> 30) & 0x3)
#define FP_EX_INVALID		(1 << 4)
#define FP_EX_OVERFLOW		(1 << 3)
#define FP_EX_UNDERFLOW		(1 << 2)
#define FP_EX_DIVZERO		(1 << 1)
#define FP_EX_INEXACT		(1 << 0)
#define FP_HANDLE_EXCEPTIONS return _fex
#define FP_INHIBIT_RESULTS ((current->thread.fsr >> 23) & _fex)
#define FP_INHIBIT_RESULTS ((last_task_used_math->thread.fsr >> 23) & _fex)
#define FP_TRAPPING_EXCEPTIONS ((current->thread.fsr >> 23) & 0x1f)
#define FP_TRAPPING_EXCEPTIONS ((last_task_used_math->thread.fsr >> 23) & 0x1f)
