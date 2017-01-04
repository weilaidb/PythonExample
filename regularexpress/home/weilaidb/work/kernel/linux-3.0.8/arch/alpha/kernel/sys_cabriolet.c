static unsigned long cached_irq_mask = ~0UL;
static inline void
cabriolet_update_irq_hw(unsigned int irq, unsigned long mask)
static inline void
cabriolet_enable_irq(struct irq_data *d)
static void
cabriolet_disable_irq(struct irq_data *d)
static struct irq_chip cabriolet_irq_type = ;
static void
cabriolet_device_interrupt(unsigned long v)
static void __init
common_init_irq(void (*srm_dev_int)(unsigned long v))
static void __init
cabriolet_init_irq(void)
#if defined(CONFIG_ALPHA_GENERIC) || defined(CONFIG_ALPHA_PC164)
static void
pc164_srm_device_interrupt(unsigned long v)
static void
pc164_device_interrupt(unsigned long v)
static void __init
pc164_init_irq(void)
static inline int __init
eb66p_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static inline int __init
cabriolet_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static inline void __init
cabriolet_enable_ide(void)
static inline void __init
cabriolet_init_pci(void)
static inline void __init
cia_cab_init_pci(void)
static inline int __init
alphapc164_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static inline void __init
alphapc164_init_pci(void)
#if defined(CONFIG_ALPHA_GENERIC) || defined(CONFIG_ALPHA_CABRIOLET)
struct alpha_machine_vector cabriolet_mv __initmv = ;
ALIAS_MV(cabriolet)
#if defined(CONFIG_ALPHA_GENERIC) || defined(CONFIG_ALPHA_EB164)
struct alpha_machine_vector eb164_mv __initmv = ;
ALIAS_MV(eb164)
#if defined(CONFIG_ALPHA_GENERIC) || defined(CONFIG_ALPHA_EB66P)
struct alpha_machine_vector eb66p_mv __initmv = ;
ALIAS_MV(eb66p)
#if defined(CONFIG_ALPHA_GENERIC) || defined(CONFIG_ALPHA_LX164)
struct alpha_machine_vector lx164_mv __initmv = ;
ALIAS_MV(lx164)
#if defined(CONFIG_ALPHA_GENERIC) || defined(CONFIG_ALPHA_PC164)
struct alpha_machine_vector pc164_mv __initmv = ;
ALIAS_MV(pc164)
