#define _ASM_TILE_HARDIRQ_H
typedef struct  ____cacheline_aligned irq_cpustat_t;
DECLARE_PER_CPU(irq_cpustat_t, irq_stat);
#define __ARCH_IRQ_STAT
#define __IRQ_STAT(cpu, member) (per_cpu(irq_stat, cpu).member)
#define HARDIRQ_BITS	8
