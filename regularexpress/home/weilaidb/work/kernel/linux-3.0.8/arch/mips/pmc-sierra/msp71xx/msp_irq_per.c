#define get_current_vpe()	\
((read_c0_tcbind() >> TCBIND_CURVPE_SHIFT) & TCBIND_CURVPE)
static DEFINE_SPINLOCK(per_lock);
static inline void per_wmb(void)
static inline void unmask_per_irq(struct irq_data *d)
static inline void mask_per_irq(struct irq_data *d)
static inline void msp_per_irq_ack(struct irq_data *d)
static int msp_per_irq_set_affinity(struct irq_data *d,
const struct cpumask *affinity, bool force)
static struct irq_chip msp_per_irq_controller = ;
void __init msp_per_irq_init(void)
void msp_per_irq_dispatch(void)
