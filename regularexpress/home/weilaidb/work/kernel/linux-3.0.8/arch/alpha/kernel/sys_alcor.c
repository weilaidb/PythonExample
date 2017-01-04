static unsigned long cached_irq_mask;
static inline void
alcor_update_irq_hw(unsigned long mask)
static inline void
alcor_enable_irq(struct irq_data *d)
static void
alcor_disable_irq(struct irq_data *d)
static void
alcor_mask_and_ack_irq(struct irq_data *d)
static void
alcor_isa_mask_and_ack_irq(struct irq_data *d)
static struct irq_chip alcor_irq_type = ;
static void
alcor_device_interrupt(unsigned long vector)
static void __init
alcor_init_irq(void)
static int __init
alcor_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static void
alcor_kill_arch(int mode)
static void __init
alcor_init_pci(void)
struct alpha_machine_vector alcor_mv __initmv = ;
ALIAS_MV(alcor)
struct alpha_machine_vector xlt_mv __initmv = ;
