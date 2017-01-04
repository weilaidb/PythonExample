#define P(f) if (desc->status_use_accessors & f) printk("%14s set\n", #f)
#define PS(f) if (desc->istate & f) printk("%14s set\n", #f)
#define PD(f) do  while (0)
static inline void print_irq_desc(unsigned int irq, struct irq_desc *desc)
#undef P
#undef PS
#undef PD
