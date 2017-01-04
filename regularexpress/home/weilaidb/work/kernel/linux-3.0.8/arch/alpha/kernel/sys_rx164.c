static unsigned long cached_irq_mask;
static inline void
rx164_update_irq_hw(unsigned long mask)
static inline void
rx164_enable_irq(struct irq_data *d)
static void
rx164_disable_irq(struct irq_data *d)
static struct irq_chip rx164_irq_type = ;
static void
rx164_device_interrupt(unsigned long vector)
static void __init
rx164_init_irq(void)
static int __init
rx164_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
struct alpha_machine_vector rx164_mv __initmv = ;
ALIAS_MV(rx164)
