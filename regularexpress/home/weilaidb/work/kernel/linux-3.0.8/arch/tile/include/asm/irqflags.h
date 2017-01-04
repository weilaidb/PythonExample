#define _ASM_TILE_IRQFLAGS_H
#if !defined(__tilegx__) && defined(__ASSEMBLY__)
#if CHIP_HAS_AUX_PERF_COUNTERS()
#define LINUX_MASKABLE_INTERRUPTS_HI \
(~(INT_MASK_HI(INT_PERF_COUNT) | INT_MASK_HI(INT_AUX_PERF_COUNT)))
#define LINUX_MASKABLE_INTERRUPTS_HI \
(~(INT_MASK_HI(INT_PERF_COUNT)))
#if CHIP_HAS_AUX_PERF_COUNTERS()
#define LINUX_MASKABLE_INTERRUPTS \
(~(INT_MASK(INT_PERF_COUNT) | INT_MASK(INT_AUX_PERF_COUNT)))
#define LINUX_MASKABLE_INTERRUPTS \
(~(INT_MASK(INT_PERF_COUNT)))
#if CHIP_HAS_SPLIT_INTR_MASK()
#if INT_PERF_COUNT < 32 || INT_AUX_PERF_COUNT < 32 || INT_MEM_ERROR >= 32
# error Fix assumptions about which word various interrupts are in
#define interrupt_mask_set(n) do  while (0)
#define interrupt_mask_reset(n) do  while (0)
#define interrupt_mask_check(n) ()
#define interrupt_mask_set_mask(mask) do  while (0)
#define interrupt_mask_reset_mask(mask) do  while (0)
#define interrupt_mask_set(n) \
__insn_mtspr(SPR_INTERRUPT_MASK_SET_K, (1UL << (n)))
#define interrupt_mask_reset(n) \
__insn_mtspr(SPR_INTERRUPT_MASK_RESET_K, (1UL << (n)))
#define interrupt_mask_check(n) \
((__insn_mfspr(SPR_INTERRUPT_MASK_K) >> (n)) & 1)
#define interrupt_mask_set_mask(mask) \
__insn_mtspr(SPR_INTERRUPT_MASK_SET_K, (mask))
#define interrupt_mask_reset_mask(mask) \
__insn_mtspr(SPR_INTERRUPT_MASK_RESET_K, (mask))
DECLARE_PER_CPU(unsigned long long, interrupts_enabled_mask);
#define INITIAL_INTERRUPTS_ENABLED INT_MASK(INT_MEM_ERROR)
#define arch_local_irq_disable() \
interrupt_mask_set_mask(LINUX_MASKABLE_INTERRUPTS)
#define arch_local_irq_disable_all() \
interrupt_mask_set_mask(-1UL)
#define arch_local_irq_enable() \
interrupt_mask_reset_mask(__get_cpu_var(interrupts_enabled_mask))
#define arch_local_irq_restore(disabled) do  while (0)
#define arch_irqs_disabled_flags(flags) ((flags) != 0)
#define arch_irqs_disabled() interrupt_mask_check(INT_MEM_ERROR)
#define arch_local_save_flags() arch_irqs_disabled()
#define arch_local_irq_save() ()
#define arch_local_irq_mask(interrupt) \
(__get_cpu_var(interrupts_enabled_mask) &= ~INT_MASK(interrupt))
#define arch_local_irq_mask_now(interrupt) do  while (0)
#define arch_local_irq_unmask(interrupt) \
(__get_cpu_var(interrupts_enabled_mask) |= INT_MASK(interrupt))
#define arch_local_irq_unmask_now(interrupt) do  while (0)
#if INT_MEM_ERROR != 0
# error Fix IRQ_DISABLED() macro
#define IRQS_DISABLED(tmp)					\
mfspr   tmp, SPR_INTERRUPT_MASK_K;			\
andi    tmp, tmp, 1
#define GET_INTERRUPTS_ENABLED_MASK_PTR(reg)			\
moveli reg, hw2_last(interrupts_enabled_mask);		\
shl16insli reg, reg, hw1(interrupts_enabled_mask);	\
shl16insli reg, reg, hw0(interrupts_enabled_mask);	\
add     reg, reg, tp
#define IRQ_DISABLE(tmp0, tmp1)					\
moveli  tmp0, hw2_last(LINUX_MASKABLE_INTERRUPTS);	\
shl16insli tmp0, tmp0, hw1(LINUX_MASKABLE_INTERRUPTS);	\
shl16insli tmp0, tmp0, hw0(LINUX_MASKABLE_INTERRUPTS);	\
mtspr   SPR_INTERRUPT_MASK_SET_K, tmp0
#define IRQ_DISABLE_ALL(tmp)					\
movei   tmp, -1;					\
mtspr   SPR_INTERRUPT_MASK_SET_K, tmp
#define IRQ_ENABLE(tmp0, tmp1)					\
GET_INTERRUPTS_ENABLED_MASK_PTR(tmp0);			\
ld      tmp0, tmp0;					\
mtspr   SPR_INTERRUPT_MASK_RESET_K, tmp0
#define IRQS_DISABLED(tmp)					\
mfspr   tmp, SPR_INTERRUPT_MASK_K_0;			\
shri    tmp, tmp, INT_MEM_ERROR;			\
andi    tmp, tmp, 1
#define GET_INTERRUPTS_ENABLED_MASK_PTR(reg)			\
moveli  reg, lo16(interrupts_enabled_mask);		\
auli    reg, reg, ha16(interrupts_enabled_mask);	\
add     reg, reg, tp
#define IRQ_DISABLE(tmp0, tmp1)					\
;							\
;							\
mtspr   SPR_INTERRUPT_MASK_SET_K_1, tmp1
#define IRQ_DISABLE_ALL(tmp)					\
movei   tmp, -1;					\
mtspr   SPR_INTERRUPT_MASK_SET_K_0, tmp;		\
mtspr   SPR_INTERRUPT_MASK_SET_K_1, tmp
#define IRQ_ENABLE(tmp0, tmp1)					\
GET_INTERRUPTS_ENABLED_MASK_PTR(tmp0);			\
;							\
lw      tmp1, tmp1;					\
mtspr   SPR_INTERRUPT_MASK_RESET_K_0, tmp0;		\
mtspr   SPR_INTERRUPT_MASK_RESET_K_1, tmp1
# define TRACE_IRQS_ON  jal trace_hardirqs_on
# define TRACE_IRQS_OFF jal trace_hardirqs_off
# define TRACE_IRQS_ON
# define TRACE_IRQS_OFF
