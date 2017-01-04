DEFINE_SPINLOCK(sable_lynx_irq_lock);
typedef struct irq_swizzle_struct
irq_swizzle_t;
static irq_swizzle_t *sable_lynx_irq_swizzle;
static void sable_lynx_init_irq(int nr_of_irqs);
#if defined(CONFIG_ALPHA_GENERIC) || defined(CONFIG_ALPHA_SABLE)
static void
sable_update_irq_hw(unsigned long bit, unsigned long mask)
static void
sable_ack_irq_hw(unsigned long bit)
static irq_swizzle_t sable_irq_swizzle = ;
static void __init
sable_init_irq(void)
static int __init
sable_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
#if defined(CONFIG_ALPHA_GENERIC) || defined(CONFIG_ALPHA_LYNX)
static void
lynx_update_irq_hw(unsigned long bit, unsigned long mask)
static void
lynx_ack_irq_hw(unsigned long bit)
static irq_swizzle_t lynx_irq_swizzle = ;
static void __init
lynx_init_irq(void)
static int __init
lynx_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static u8 __init
lynx_swizzle(struct pci_dev *dev, u8 *pinp)
static inline void
sable_lynx_enable_irq(struct irq_data *d)
static void
sable_lynx_disable_irq(struct irq_data *d)
static void
sable_lynx_mask_and_ack_irq(struct irq_data *d)
static struct irq_chip sable_lynx_irq_type = ;
static void
sable_lynx_srm_device_interrupt(unsigned long vector)
static void __init
sable_lynx_init_irq(int nr_of_irqs)
static void __init
sable_lynx_init_pci(void)
#if defined(CONFIG_ALPHA_GENERIC) || \
(defined(CONFIG_ALPHA_SABLE) && !defined(CONFIG_ALPHA_GAMMA))
#undef GAMMA_BIAS
#define GAMMA_BIAS 0
struct alpha_machine_vector sable_mv __initmv = ;
ALIAS_MV(sable)
#if defined(CONFIG_ALPHA_GENERIC) || \
(defined(CONFIG_ALPHA_SABLE) && defined(CONFIG_ALPHA_GAMMA))
#undef GAMMA_BIAS
#define GAMMA_BIAS _GAMMA_BIAS
struct alpha_machine_vector sable_gamma_mv __initmv = ;
ALIAS_MV(sable_gamma)
#if defined(CONFIG_ALPHA_GENERIC) || defined(CONFIG_ALPHA_LYNX)
#undef GAMMA_BIAS
#define GAMMA_BIAS _GAMMA_BIAS
struct alpha_machine_vector lynx_mv __initmv = ;
ALIAS_MV(lynx)
