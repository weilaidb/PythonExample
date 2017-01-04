#define _ASM_MATH_EMU_H
#define FPSR_AEXC_INEX	3
#define FPSR_AEXC_DZ	4
#define FPSR_AEXC_UNFL	5
#define FPSR_AEXC_OVFL	6
#define FPSR_AEXC_IOP	7
#define FPSR_EXC_INEX1	8
#define FPSR_EXC_INEX2	9
#define FPSR_EXC_DZ	10
#define FPSR_EXC_UNFL	11
#define FPSR_EXC_OVFL	12
#define FPSR_EXC_OPERR	13
#define FPSR_EXC_SNAN	14
#define FPSR_EXC_BSUN	15
#define FPSR_QUOTIENT(fpsr) (*((signed char *) &(fpsr) + 1))
#define FPSR_CC_NAN	24
#define FPSR_CC_INF	25
#define FPSR_CC_Z	26
#define FPSR_CC_NEG	27
#define	FPCR_ROUND_RN	0
#define FPCR_ROUND_RZ	1
#define FPCR_ROUND_RM	2
#define FPCR_ROUND_RP	3
#define FPCR_PRECISION_X	0
#define FPCR_PRECISION_S	1
#define FPCR_PRECISION_D	2
#define PDECODE		0
#define PEXECUTE	1
#define PCONV		2
#define PNORM		3
#define PREGISTER	4
#define PINSTR		5
#define PUNIMPL		6
#define PMOVEM		7
#define PMDECODE	(1<<PDECODE)
#define PMEXECUTE	(1<<PEXECUTE)
#define PMCONV		(1<<PCONV)
#define PMNORM		(1<<PNORM)
#define PMREGISTER	(1<<PREGISTER)
#define PMINSTR		(1<<PINSTR)
#define PMUNIMPL	(1<<PUNIMPL)
#define PMMOVEM		(1<<PMOVEM)
union fp_mant64 ;
union fp_mant128 ;
struct fp_ext ;
struct fp_data ;
#if FPU_EMU_DEBUG
extern unsigned int fp_debugprint;
#define dprint(bit, fmt, args...) ()
#define dprint(bit, fmt, args...)
#define uprint(str) ()
#define FPDATA		((struct fp_data *)current->thread.fp)
#define FPDATA		%a2
#define FPD_FPREG	(TASK_THREAD+THREAD_FPREG+0)
#define FPD_FPCR	(TASK_THREAD+THREAD_FPREG+96)
#define FPD_FPSR	(TASK_THREAD+THREAD_FPREG+100)
#define FPD_FPIAR	(TASK_THREAD+THREAD_FPREG+104)
#define FPD_PREC	(TASK_THREAD+THREAD_FPREG+108)
#define FPD_RND		(TASK_THREAD+THREAD_FPREG+110)
#define FPD_TEMPFP1	(TASK_THREAD+THREAD_FPREG+112)
#define FPD_TEMPFP2	(TASK_THREAD+THREAD_FPREG+124)
#define FPD_SIZEOF	(TASK_THREAD+THREAD_FPREG+136)
#define FPS_DO		(PT_D0)
#define FPS_D1		(PT_D1)
#define FPS_D2		(PT_D2)
#define FPS_A0		(PT_A0)
#define FPS_A1		(PT_A1)
#define FPS_A2		(PT_A2)
#define FPS_SR		(PT_SR)
#define FPS_PC		(PT_PC)
#define FPS_EA		(PT_PC+6)
#define FPS_PC2		(PT_PC+10)
.macro	fp_get_fp_reg
lea	(FPD_FPREG,FPDATA,%d0.w*4),%a0
lea	(%a0,%d0.w*8),%a0
.endm
.macro	fp_get_pc dest
move.l	(FPS_PC+4,%sp),\dest
.endm
.macro	fp_put_pc src,jump=0
move.l	\src,(FPS_PC+4,%sp)
.endm
.macro	fp_get_instr_data	f,s,dest,label
getuser	\f,%sp@(FPS_PC+4)@(0),\dest,\label,%sp@(FPS_PC+4)
addq.l	#\s,%sp@(FPS_PC+4)
.endm
.macro	fp_get_instr_word	dest,label,addr
fp_get_instr_data	w,2,\dest,\label,\addr
.endm
.macro	fp_get_instr_long	dest,label,addr
fp_get_instr_data	l,4,\dest,\label,\addr
.endm
.macro	getuser	size,src,dest,label,addr
|	printf	,"[\size<%08x]",1,\addr
.Lu1\@:	moves\size	\src,\dest
.section .fixup,"ax"
.even
.Lu2\@:	move.l	\addr,%a0
jra	\label
.previous
.section __ex_table,"a"
.align	4
.long	.Lu1\@,.Lu2\@
.previous
.endm
.macro	putuser	size,src,dest,label,addr
|	printf	,"[\size>%08x]",1,\addr
.Lu1\@:	moves\size	\src,\dest
.Lu2\@:
.section .fixup,"ax"
.even
.Lu3\@:	move.l	\addr,%a0
jra	\label
.previous
.section __ex_table,"a"
.align	4
.long	.Lu1\@,.Lu3\@
.long	.Lu2\@,.Lu3\@
.previous
.endm
.macro	movestack	nr,arg1,arg2,arg3,arg4,arg5
.if	\nr
movestack	(\nr-1),\arg2,\arg3,\arg4,\arg5
move.l	\arg1,-(%sp)
.endif
.endm
.macro	printf	bit=-1,string,nr=0,arg1,arg2,arg3,arg4,arg5
.data
.Lpdata\@:
.string	"\string"
.previous
movem.l	%d0/%d1/%a0/%a1,-(%sp)
.if	\bit+1
jeq	.Lpskip\@
.endif
movestack	\nr,\arg1,\arg2,\arg3,\arg4,\arg5
pea	.Lpdata\@
jsr	printk
lea	((\nr+1)*4,%sp),%sp
.Lpskip\@:
movem.l	(%sp)+,%d0/%d1/%a0/%a1
.endm
.macro	printx	bit,fp
movem.l	%d0/%a0,-(%sp)
lea	\fp,%a0
movem.l	(%sp)+,%d0/%a0
.endm
.macro	debug	instr,args
\instr	\args
.endm
