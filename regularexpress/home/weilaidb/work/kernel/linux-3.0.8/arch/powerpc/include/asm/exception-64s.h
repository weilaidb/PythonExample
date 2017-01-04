#define _ASM_POWERPC_EXCEPTION_H
#define EX_R9		0
#define EX_R10		8
#define EX_R11		16
#define EX_R12		24
#define EX_R13		32
#define EX_SRR0		40
#define EX_DAR		48
#define EX_DSISR	56
#define EX_CCR		60
#define EX_R3		64
#define EX_LR		72
#define EX_CFAR		80
#define LOAD_HANDLER(reg, label)					\
addi	reg,reg,(label)-_stext;
#define EXC_HV	H
#define EXC_STD
#define EXCEPTION_PROLOG_1(area)					\
GET_PACA(r13);							\
std	r9,area+EX_R9(r13);		\
std	r10,area+EX_R10(r13);					\
std	r11,area+EX_R11(r13);					\
std	r12,area+EX_R12(r13);					\
BEGIN_FTR_SECTION_NESTED(66);					\
mfspr	r10,SPRN_CFAR;						\
std	r10,area+EX_CFAR(r13);					\
END_FTR_SECTION_NESTED(CPU_FTR_CFAR, CPU_FTR_CFAR, 66);		\
GET_SCRATCH0(r9);						\
std	r9,area+EX_R13(r13);					\
mfcr	r9
#define __EXCEPTION_PROLOG_PSERIES_1(label, h)				\
ld	r12,PACAKBASE(r13);	\
ld	r10,PACAKMSR(r13);	\
mfspr	r11,SPRN_##h##SRR0;			\
LOAD_HANDLER(r12,label)						\
mtspr	SPRN_##h##SRR0,r12;					\
mfspr	r12,SPRN_##h##SRR1;			\
mtspr	SPRN_##h##SRR1,r10;					\
h##rfid;							\
b	.
#define EXCEPTION_PROLOG_PSERIES_1(label, h) \
__EXCEPTION_PROLOG_PSERIES_1(label, h)
#define EXCEPTION_PROLOG_PSERIES(area, label, h)			\
EXCEPTION_PROLOG_1(area);					\
EXCEPTION_PROLOG_PSERIES_1(label, h);
#define EXCEPTION_PROLOG_COMMON(n, area)				   \
andi.	r10,r12,MSR_PR; \
mr	r10,r1; \
subi	r1,r1,INT_FRAME_SIZE; \
beq-	1f;							   \
ld	r1,PACAKSAVE(r13); \
1:	cmpdi	cr1,r1,0; \
blt+	cr1,3f; \
li	r1,(n); \
sth	r1,PACA_TRAP_SAVE(r13);					   \
std	r3,area+EX_R3(r13);					   \
addi	r3,r13,area;	   \
b	bad_stack;						   \
3:	std	r9,_CCR(r1); \
std	r11,_NIP(r1); \
std	r12,_MSR(r1); \
std	r10,0(r1); \
std	r0,GPR0(r1); \
std	r10,GPR1(r1); \
ACCOUNT_CPU_USER_ENTRY(r9, r10);				   \
std	r2,GPR2(r1); \
SAVE_4GPRS(3, r1); \
SAVE_2GPRS(7, r1); \
ld	r9,area+EX_R9(r13); \
ld	r10,area+EX_R10(r13);					   \
std	r9,GPR9(r1);						   \
std	r10,GPR10(r1);						   \
ld	r9,area+EX_R11(r13); \
ld	r10,area+EX_R12(r13);					   \
ld	r11,area+EX_R13(r13);					   \
std	r9,GPR11(r1);						   \
std	r10,GPR12(r1);						   \
std	r11,GPR13(r1);						   \
BEGIN_FTR_SECTION_NESTED(66);					   \
ld	r10,area+EX_CFAR(r13);					   \
std	r10,ORIG_GPR3(r1);					   \
END_FTR_SECTION_NESTED(CPU_FTR_CFAR, CPU_FTR_CFAR, 66);		   \
ld	r2,PACATOC(r13); \
mflr	r9; \
std	r9,_LINK(r1);						   \
mfctr	r10; \
std	r10,_CTR(r1);						   \
lbz	r10,PACASOFTIRQEN(r13);				   \
mfspr	r11,SPRN_XER; \
std	r10,SOFTE(r1);						   \
std	r11,_XER(r1);						   \
li	r9,(n)+1;						   \
std	r9,_TRAP(r1); \
li	r10,0;							   \
ld	r11,exception_marker@toc(r2);				   \
std	r10,RESULT(r1); \
std	r11,STACK_FRAME_OVERHEAD-16(r1); \
ACCOUNT_STOLEN_TIME
#define STD_EXCEPTION_PSERIES(loc, vec, label)		\
. = loc;					\
.globl label##_pSeries;				\
label##_pSeries:					\
HMT_MEDIUM;					\
DO_KVM	vec;					\
SET_SCRATCH0(r13);		\
EXCEPTION_PROLOG_PSERIES(PACA_EXGEN, label##_common, EXC_STD)
#define STD_EXCEPTION_HV(loc, vec, label)		\
. = loc;					\
.globl label##_hv;				\
label##_hv:						\
HMT_MEDIUM;					\
DO_KVM	vec;					\
SET_SCRATCH0(r13);		\
EXCEPTION_PROLOG_PSERIES(PACA_EXGEN, label##_common, EXC_HV)
#define __MASKABLE_EXCEPTION_PSERIES(vec, label, h)			\
HMT_MEDIUM;							\
DO_KVM	vec;							\
SET_SCRATCH0(r13);				\
GET_PACA(r13);							\
std	r9,PACA_EXGEN+EX_R9(r13);	\
std	r10,PACA_EXGEN+EX_R10(r13);				\
lbz	r10,PACASOFTIRQEN(r13);					\
mfcr	r9;							\
cmpwi	r10,0;							\
beq	masked_##h##interrupt;					\
GET_SCRATCH0(r10);						\
std	r10,PACA_EXGEN+EX_R13(r13);				\
std	r11,PACA_EXGEN+EX_R11(r13);				\
std	r12,PACA_EXGEN+EX_R12(r13);				\
ld	r12,PACAKBASE(r13);	\
ld	r10,PACAKMSR(r13);	\
mfspr	r11,SPRN_##h##SRR0;			\
LOAD_HANDLER(r12,label##_common)				\
mtspr	SPRN_##h##SRR0,r12;					\
mfspr	r12,SPRN_##h##SRR1;			\
mtspr	SPRN_##h##SRR1,r10;					\
h##rfid;							\
b	.
#define _MASKABLE_EXCEPTION_PSERIES(vec, label, h)			\
__MASKABLE_EXCEPTION_PSERIES(vec, label, h)
#define MASKABLE_EXCEPTION_PSERIES(loc, vec, label)			\
. = loc;							\
.globl label##_pSeries;						\
label##_pSeries:							\
_MASKABLE_EXCEPTION_PSERIES(vec, label, EXC_STD)
#define MASKABLE_EXCEPTION_HV(loc, vec, label)				\
. = loc;							\
.globl label##_hv;						\
label##_hv:								\
_MASKABLE_EXCEPTION_PSERIES(vec, label, EXC_HV)
#define DISABLE_INTS				\
li	r11,0;				\
stb	r11,PACASOFTIRQEN(r13);		\
BEGIN_FW_FTR_SECTION;				\
stb	r11,PACAHARDIRQEN(r13);		\
END_FW_FTR_SECTION_IFCLR(FW_FEATURE_ISERIES);	\
TRACE_DISABLE_INTS;			\
BEGIN_FW_FTR_SECTION;				\
mfmsr	r10;				\
ori	r10,r10,MSR_EE;			\
mtmsrd	r10,1;				\
END_FW_FTR_SECTION_IFSET(FW_FEATURE_ISERIES)
#define DISABLE_INTS				\
li	r11,0;				\
stb	r11,PACASOFTIRQEN(r13);		\
stb	r11,PACAHARDIRQEN(r13);		\
TRACE_DISABLE_INTS
#define ENABLE_INTS				\
ld	r12,_MSR(r1);			\
mfmsr	r11;				\
rlwimi	r11,r12,0,MSR_EE;		\
mtmsrd	r11,1
#define STD_EXCEPTION_COMMON(trap, label, hdlr)		\
.align	7;					\
.globl label##_common;				\
label##_common:						\
EXCEPTION_PROLOG_COMMON(trap, PACA_EXGEN);	\
DISABLE_INTS;					\
bl	.save_nvgprs;				\
addi	r3,r1,STACK_FRAME_OVERHEAD;		\
bl	hdlr;					\
b	.ret_from_except
#define STD_EXCEPTION_COMMON_IDLE(trap, label, hdlr)	\
.align	7;					\
.globl label##_common;				\
label##_common:						\
EXCEPTION_PROLOG_COMMON(trap, PACA_EXGEN);	\
FINISH_NAP;					\
DISABLE_INTS;					\
bl	.save_nvgprs;				\
addi	r3,r1,STACK_FRAME_OVERHEAD;		\
bl	hdlr;					\
b	.ret_from_except
#define STD_EXCEPTION_COMMON_LITE(trap, label, hdlr)	\
.align	7;					\
.globl label##_common;				\
label##_common:						\
EXCEPTION_PROLOG_COMMON(trap, PACA_EXGEN);	\
FINISH_NAP;					\
DISABLE_INTS;					\
BEGIN_FTR_SECTION					\
bl	.ppc64_runlatch_on;			\
END_FTR_SECTION_IFSET(CPU_FTR_CTRL)			\
addi	r3,r1,STACK_FRAME_OVERHEAD;		\
bl	hdlr;					\
b	.ret_from_except_lite
#define FINISH_NAP				\
BEGIN_FTR_SECTION				\
clrrdi	r11,r1,THREAD_SHIFT;		\
ld	r9,TI_LOCAL_FLAGS(r11);		\
andi.	r10,r9,_TLF_NAPPING;		\
bnel	power4_fixup_nap;		\
END_FTR_SECTION_IFSET(CPU_FTR_CAN_NAP)
#define FINISH_NAP
