#define _BFIN_IRQ_H_
#define NR_SPARE_IRQS	32
#if ANOMALY_05000244 && defined(CONFIG_BFIN_ICACHE)
# define NOP_PAD_ANOMALY_05000244 "nop; nop;"
# define NOP_PAD_ANOMALY_05000244
#define idle_with_irq_disabled() \
__asm__ __volatile__( \
NOP_PAD_ANOMALY_05000244 \
".align 8;" \
"sti %0;" \
"idle;" \
: \
: "d" (bfin_irq_flags) \
)
# define ARCH_HAS_NMI_WATCHDOG
