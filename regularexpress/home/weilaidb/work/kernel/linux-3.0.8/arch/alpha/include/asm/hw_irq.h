#define _ALPHA_HW_IRQ_H
extern volatile unsigned long irq_err_count;
DECLARE_PER_CPU(unsigned long, irq_pmi_count);
#define ACTUAL_NR_IRQS	alpha_mv.nr_irqs
#define ACTUAL_NR_IRQS	NR_IRQS
