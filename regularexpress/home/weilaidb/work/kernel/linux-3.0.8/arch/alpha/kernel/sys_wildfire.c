static unsigned long cached_irq_mask[WILDFIRE_NR_IRQS/(sizeof(long)*8)];
DEFINE_SPINLOCK(wildfire_irq_lock);
static int doing_init_irq_hw = 0;
static void
wildfire_update_irq_hw(unsigned int irq)
static void __init
wildfire_init_irq_hw(void)
static void
wildfire_enable_irq(struct irq_data *d)
static void
wildfire_disable_irq(struct irq_data *d)
static void
wildfire_mask_and_ack_irq(struct irq_data *d)
static struct irq_chip wildfire_irq_type = ;
static void __init
wildfire_init_irq_per_pca(int qbbno, int pcano)
static void __init
wildfire_init_irq(void)
static void
wildfire_device_interrupt(unsigned long vector)
static int __init
wildfire_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
struct alpha_machine_vector wildfire_mv __initmv = ;
ALIAS_MV(wildfire)
