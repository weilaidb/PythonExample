static unsigned long cached_irq_mask[2] = ;
static inline void
takara_update_irq_hw(unsigned long irq, unsigned long mask)
static inline void
takara_enable_irq(struct irq_data *d)
static void
takara_disable_irq(struct irq_data *d)
static struct irq_chip takara_irq_type = ;
static void
takara_device_interrupt(unsigned long vector)
static void
takara_srm_device_interrupt(unsigned long vector)
static void __init
takara_init_irq(void)
static int __init
takara_map_irq_srm(struct pci_dev *dev, u8 slot, u8 pin)
static int __init
takara_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static u8 __init
takara_swizzle(struct pci_dev *dev, u8 *pinp)
static void __init
takara_init_pci(void)
struct alpha_machine_vector takara_mv __initmv = ;
ALIAS_MV(takara)
