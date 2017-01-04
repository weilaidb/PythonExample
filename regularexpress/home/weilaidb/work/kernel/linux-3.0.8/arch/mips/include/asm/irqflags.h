#define _ASM_IRQFLAGS_H
__asm__(
"	.macro	arch_local_irq_enable				\n"
"	.set	push						\n"
"	.set	reorder						\n"
"	.set	noat						\n"
"	mfc0	$1, $2, 1	# SMTC - clear TCStatus.IXMT	\n"
"	ori	$1, 0x400					\n"
"	xori	$1, 0x400					\n"
"	mtc0	$1, $2, 1					\n"
#elif defined(CONFIG_CPU_MIPSR2)
"	ei							\n"
"	mfc0	$1,$12						\n"
"	ori	$1,0x1f						\n"
"	xori	$1,0x1e						\n"
"	mtc0	$1,$12						\n"
"	irq_enable_hazard					\n"
"	.set	pop						\n"
"	.endm");
extern void smtc_ipi_replay(void);
static inline void arch_local_irq_enable(void)
__asm__(
"	.macro	arch_local_irq_disable\n"
"	.set	push						\n"
"	.set	noat						\n"
"	mfc0	$1, $2, 1					\n"
"	ori	$1, 0x400					\n"
"	.set	noreorder					\n"
"	mtc0	$1, $2, 1					\n"
#elif defined(CONFIG_CPU_MIPSR2)
"	di							\n"
"	mfc0	$1,$12						\n"
"	ori	$1,0x1f						\n"
"	xori	$1,0x1f						\n"
"	.set	noreorder					\n"
"	mtc0	$1,$12						\n"
"	irq_disable_hazard					\n"
"	.set	pop						\n"
"	.endm							\n");
static inline void arch_local_irq_disable(void)
__asm__(
"	.macro	arch_local_save_flags flags			\n"
"	.set	push						\n"
"	.set	reorder						\n"
"	mfc0	\\flags, $2, 1					\n"
"	mfc0	\\flags, $12					\n"
"	.set	pop						\n"
"	.endm							\n");
static inline unsigned long arch_local_save_flags(void)
__asm__(
"	.macro	arch_local_irq_save result			\n"
"	.set	push						\n"
"	.set	reorder						\n"
"	.set	noat						\n"
"	mfc0	\\result, $2, 1					\n"
"	ori	$1, \\result, 0x400				\n"
"	.set	noreorder					\n"
"	mtc0	$1, $2, 1					\n"
"	andi	\\result, \\result, 0x400			\n"
#elif defined(CONFIG_CPU_MIPSR2)
"	di	\\result					\n"
"	andi	\\result, 1					\n"
"	mfc0	\\result, $12					\n"
"	ori	$1, \\result, 0x1f				\n"
"	xori	$1, 0x1f					\n"
"	.set	noreorder					\n"
"	mtc0	$1, $12						\n"
"	irq_disable_hazard					\n"
"	.set	pop						\n"
"	.endm							\n");
static inline unsigned long arch_local_irq_save(void)
__asm__(
"	.macro	arch_local_irq_restore flags			\n"
"	.set	push						\n"
"	.set	noreorder					\n"
"	.set	noat						\n"
"mfc0	$1, $2, 1						\n"
"andi	\\flags, 0x400						\n"
"ori	$1, 0x400						\n"
"xori	$1, 0x400						\n"
"or	\\flags, $1						\n"
"mtc0	\\flags, $2, 1						\n"
#elif defined(CONFIG_CPU_MIPSR2) && defined(CONFIG_IRQ_CPU)
"	beqz	\\flags, 1f					\n"
"	 di							\n"
"	ei							\n"
"1:								\n"
#elif defined(CONFIG_CPU_MIPSR2)
"	mfc0	$1, $12						\n"
"	ins	$1, \\flags, 0, 1				\n"
"	mtc0	$1, $12						\n"
"	mfc0	$1, $12						\n"
"	andi	\\flags, 1					\n"
"	ori	$1, 0x1f					\n"
"	xori	$1, 0x1f					\n"
"	or	\\flags, $1					\n"
"	mtc0	\\flags, $12					\n"
"	irq_disable_hazard					\n"
"	.set	pop						\n"
"	.endm							\n");
static inline void arch_local_irq_restore(unsigned long flags)
static inline void __arch_local_irq_restore(unsigned long flags)
static inline int arch_irqs_disabled_flags(unsigned long flags)
# define TRACE_IRQS_RELOAD_REGS						\
LONG_L	$11, PT_R11(sp);					\
LONG_L	$10, PT_R10(sp);					\
LONG_L	$9, PT_R9(sp);						\
LONG_L	$8, PT_R8(sp);						\
LONG_L	$7, PT_R7(sp);						\
LONG_L	$6, PT_R6(sp);						\
LONG_L	$5, PT_R5(sp);						\
LONG_L	$4, PT_R4(sp);						\
LONG_L	$2, PT_R2(sp)
# define TRACE_IRQS_RELOAD_REGS						\
LONG_L	$7, PT_R7(sp);						\
LONG_L	$6, PT_R6(sp);						\
LONG_L	$5, PT_R5(sp);						\
LONG_L	$4, PT_R4(sp);						\
LONG_L	$2, PT_R2(sp)
# define TRACE_IRQS_ON							\
CLI; \
jal	trace_hardirqs_on
# define TRACE_IRQS_ON_RELOAD						\
TRACE_IRQS_ON;							\
TRACE_IRQS_RELOAD_REGS
# define TRACE_IRQS_OFF							\
jal	trace_hardirqs_off
# define TRACE_IRQS_ON
# define TRACE_IRQS_ON_RELOAD
# define TRACE_IRQS_OFF
