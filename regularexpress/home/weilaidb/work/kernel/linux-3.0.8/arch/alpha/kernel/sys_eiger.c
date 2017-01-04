static unsigned long cached_irq_mask[2] = ;
static inline void
eiger_update_irq_hw(unsigned long irq, unsigned long mask)
static inline void
eiger_enable_irq(struct irq_data *d)
static void
eiger_disable_irq(struct irq_data *d)
static struct irq_chip eiger_irq_type = ;
static void
eiger_device_interrupt(unsigned long vector)
static void
eiger_srm_device_interrupt(unsigned long vector)
static void __init
eiger_init_irq(void)
static int __init
eiger_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static u8 __init
eiger_swizzle(struct pci_dev *dev, u8 *pinp)
struct alpha_machine_vector eiger_mv __initmv = ;
ALIAS_MV(eiger)
