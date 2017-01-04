static unsigned int cached_irq_mask = -1;
static inline void
eb64p_update_irq_hw(unsigned int irq, unsigned long mask)
static inline void
eb64p_enable_irq(struct irq_data *d)
static void
eb64p_disable_irq(struct irq_data *d)
static struct irq_chip eb64p_irq_type = ;
static void
eb64p_device_interrupt(unsigned long vector)
static void __init
eb64p_init_irq(void)
static int __init
eb64p_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
#if defined(CONFIG_ALPHA_GENERIC) || defined(CONFIG_ALPHA_EB64P)
struct alpha_machine_vector eb64p_mv __initmv = ;
ALIAS_MV(eb64p)
#if defined(CONFIG_ALPHA_GENERIC) || defined(CONFIG_ALPHA_EB66)
struct alpha_machine_vector eb66_mv __initmv = ;
ALIAS_MV(eb66)
