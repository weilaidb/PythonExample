static int cached_irq_mask;
static inline void
noritake_update_irq_hw(int irq, int mask)
static void
noritake_enable_irq(struct irq_data *d)
static void
noritake_disable_irq(struct irq_data *d)
static struct irq_chip noritake_irq_type = ;
static void
noritake_device_interrupt(unsigned long vector)
static void
noritake_srm_device_interrupt(unsigned long vector)
static void __init
noritake_init_irq(void)
static int __init
noritake_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static u8 __init
noritake_swizzle(struct pci_dev *dev, u8 *pinp)
#if defined(CONFIG_ALPHA_GENERIC) || !defined(CONFIG_ALPHA_PRIMO)
static void
noritake_apecs_machine_check(unsigned long vector, unsigned long la_ptr)
#if defined(CONFIG_ALPHA_GENERIC) || !defined(CONFIG_ALPHA_PRIMO)
struct alpha_machine_vector noritake_mv __initmv = ;
ALIAS_MV(noritake)
#if defined(CONFIG_ALPHA_GENERIC) || defined(CONFIG_ALPHA_PRIMO)
struct alpha_machine_vector noritake_primo_mv __initmv = ;
ALIAS_MV(noritake_primo)
