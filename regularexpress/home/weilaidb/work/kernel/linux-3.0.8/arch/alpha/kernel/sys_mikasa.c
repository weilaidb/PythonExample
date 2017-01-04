static int cached_irq_mask;
static inline void
mikasa_update_irq_hw(int mask)
static inline void
mikasa_enable_irq(struct irq_data *d)
static void
mikasa_disable_irq(struct irq_data *d)
static struct irq_chip mikasa_irq_type = ;
static void
mikasa_device_interrupt(unsigned long vector)
static void __init
mikasa_init_irq(void)
static int __init
mikasa_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
#if defined(CONFIG_ALPHA_GENERIC) || !defined(CONFIG_ALPHA_PRIMO)
static void
mikasa_apecs_machine_check(unsigned long vector, unsigned long la_ptr)
#if defined(CONFIG_ALPHA_GENERIC) || !defined(CONFIG_ALPHA_PRIMO)
struct alpha_machine_vector mikasa_mv __initmv = ;
ALIAS_MV(mikasa)
#if defined(CONFIG_ALPHA_GENERIC) || defined(CONFIG_ALPHA_PRIMO)
struct alpha_machine_vector mikasa_primo_mv __initmv = ;
ALIAS_MV(mikasa_primo)
