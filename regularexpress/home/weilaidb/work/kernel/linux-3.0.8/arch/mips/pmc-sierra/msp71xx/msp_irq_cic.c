extern void msp_per_irq_init(void);
extern void msp_per_irq_dispatch(void);
#define get_current_vpe()   \
((read_c0_tcbind() >> TCBIND_CURVPE_SHIFT) & TCBIND_CURVPE)
#define LOCK_VPE(flags, mtflags) \
do  while (0)
#define UNLOCK_VPE(flags, mtflags) \
do  while (0)
#define LOCK_CORE(flags, mtflags) \
do  while (0)
#define UNLOCK_CORE(flags, mtflags)		\
do  while (0)
#define LOCK_VPE(flags, mtflags)
#define UNLOCK_VPE(flags, mtflags)
static inline void cic_wmb(void)
static void unmask_cic_irq(struct irq_data *d)
static void mask_cic_irq(struct irq_data *d)
static void msp_cic_irq_ack(struct irq_data *d)
static int msp_cic_irq_set_affinity(struct irq_data *d,
const struct cpumask *cpumask, bool force)
static struct irq_chip msp_cic_irq_controller = ;
void __init msp_cic_irq_init(void)
void msp_cic_irq_dispatch(void)
