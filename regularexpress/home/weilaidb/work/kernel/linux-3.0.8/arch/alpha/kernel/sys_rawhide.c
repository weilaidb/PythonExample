static unsigned int hose_irq_masks[4] = ;
static unsigned int cached_irq_masks[4];
DEFINE_SPINLOCK(rawhide_irq_lock);
static inline void
rawhide_update_irq_hw(int hose, int mask)
#define hose_exists(h) \
(((h) < MCPCIA_MAX_HOSES) && (cached_irq_masks[(h)] != 0))
static inline void
rawhide_enable_irq(struct irq_data *d)
static void
rawhide_disable_irq(struct irq_data *d)
static void
rawhide_mask_and_ack_irq(struct irq_data *d)
static struct irq_chip rawhide_irq_type = ;
static void
rawhide_srm_device_interrupt(unsigned long vector)
static void __init
rawhide_init_irq(void)
static int __init
rawhide_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
struct alpha_machine_vector rawhide_mv __initmv = ;
ALIAS_MV(rawhide)
