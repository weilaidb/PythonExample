static unsigned int cached_irq_mask = 0xffff;
static DEFINE_SPINLOCK(i8259_irq_lock);
static inline void
i8259_update_irq_hw(unsigned int irq, unsigned long mask)
inline void
i8259a_enable_irq(struct irq_data *d)
static inline void
__i8259a_disable_irq(unsigned int irq)
void
i8259a_disable_irq(struct irq_data *d)
void
i8259a_mask_and_ack_irq(struct irq_data *d)
struct irq_chip i8259a_irq_type = ;
void __init
init_i8259a_irqs(void)
#if defined(CONFIG_ALPHA_GENERIC)
# define IACK_SC	alpha_mv.iack_sc
#elif defined(CONFIG_ALPHA_APECS)
# define IACK_SC	APECS_IACK_SC
#elif defined(CONFIG_ALPHA_LCA)
# define IACK_SC	LCA_IACK_SC
#elif defined(CONFIG_ALPHA_CIA)
# define IACK_SC	CIA_IACK_SC
#elif defined(CONFIG_ALPHA_PYXIS)
# define IACK_SC	PYXIS_IACK_SC
#elif defined(CONFIG_ALPHA_TITAN)
# define IACK_SC	TITAN_IACK_SC
#elif defined(CONFIG_ALPHA_TSUNAMI)
# define IACK_SC	TSUNAMI_IACK_SC
#elif defined(CONFIG_ALPHA_IRONGATE)
# define IACK_SC        IRONGATE_IACK_SC
#if defined(IACK_SC)
void
isa_device_interrupt(unsigned long vector)
#if defined(CONFIG_ALPHA_GENERIC) || !defined(IACK_SC)
void
isa_no_iack_sc_device_interrupt(unsigned long vector)
