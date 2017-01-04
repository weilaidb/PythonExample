#define __ASM_HARDIRQ_H
#define local_softirq_pending() (S390_lowcore.softirq_pending)
#define __ARCH_IRQ_STAT
#define __ARCH_HAS_DO_SOFTIRQ
#define HARDIRQ_BITS	8
