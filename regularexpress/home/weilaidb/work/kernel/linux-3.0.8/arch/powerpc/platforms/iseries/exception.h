#define _ASM_POWERPC_ISERIES_EXCEPTION_H
#define EXCEPTION_PROLOG_ISERIES_1					\
mfmsr	r10;							\
ld	r12,PACALPPACAPTR(r13);					\
ld	r11,LPPACASRR0(r12);					\
ld	r12,LPPACASRR1(r12);					\
ori	r10,r10,MSR_RI;						\
mtmsrd	r10,1
#define STD_EXCEPTION_ISERIES(label, area)				\
.globl label##_iSeries;						\
label##_iSeries:							\
HMT_MEDIUM;							\
mtspr	SPRN_SPRG_SCRATCH0,r13;			\
EXCEPTION_PROLOG_1(area);					\
EXCEPTION_PROLOG_ISERIES_1;					\
b	label##_common
#define MASKABLE_EXCEPTION_ISERIES(label)				\
.globl label##_iSeries;						\
label##_iSeries:							\
HMT_MEDIUM;							\
mtspr	SPRN_SPRG_SCRATCH0,r13;			\
EXCEPTION_PROLOG_1(PACA_EXGEN);					\
lbz	r10,PACASOFTIRQEN(r13);					\
cmpwi	0,r10,0;						\
beq-	label##_iSeries_masked;					\
EXCEPTION_PROLOG_ISERIES_1;					\
b	label##_common;						\
