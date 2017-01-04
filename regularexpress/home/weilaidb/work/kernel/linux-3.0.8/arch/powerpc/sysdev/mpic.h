#define _POWERPC_SYSDEV_MPIC_H
extern void mpic_msi_reserve_hwirq(struct mpic *mpic, irq_hw_number_t hwirq);
extern int mpic_msi_init_allocator(struct mpic *mpic);
extern int mpic_u3msi_init(struct mpic *mpic);
extern int mpic_pasemi_msi_init(struct mpic *mpic);
static inline void mpic_msi_reserve_hwirq(struct mpic *mpic,
irq_hw_number_t hwirq)
static inline int mpic_u3msi_init(struct mpic *mpic)
static inline int mpic_pasemi_msi_init(struct mpic *mpic)
extern int mpic_set_irq_type(struct irq_data *d, unsigned int flow_type);
extern void mpic_set_vector(unsigned int virq, unsigned int vector);
extern int mpic_set_affinity(struct irq_data *d,
const struct cpumask *cpumask, bool force);
extern void mpic_reset_core(int cpu);
