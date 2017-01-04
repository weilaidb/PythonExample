static unsigned long cached_irq_mask;
static unsigned long cpu_irq_affinity[4] = ;
DEFINE_SPINLOCK(dp264_irq_lock);
static void
tsunami_update_irq_hw(unsigned long mask)
static void
dp264_enable_irq(struct irq_data *d)
static void
dp264_disable_irq(struct irq_data *d)
static void
clipper_enable_irq(struct irq_data *d)
static void
clipper_disable_irq(struct irq_data *d)
static void
cpu_set_irq_affinity(unsigned int irq, cpumask_t affinity)
static int
dp264_set_affinity(struct irq_data *d, const struct cpumask *affinity,
bool force)
static int
clipper_set_affinity(struct irq_data *d, const struct cpumask *affinity,
bool force)
static struct irq_chip dp264_irq_type = ;
static struct irq_chip clipper_irq_type = ;
static void
dp264_device_interrupt(unsigned long vector)
static void
dp264_srm_device_interrupt(unsigned long vector)
static void
clipper_srm_device_interrupt(unsigned long vector)
static void __init
init_tsunami_irqs(struct irq_chip * ops, int imin, int imax)
static void __init
dp264_init_irq(void)
static void __init
clipper_init_irq(void)
static int __init
isa_irq_fixup(struct pci_dev *dev, int irq)
static int __init
dp264_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static int __init
monet_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static u8 __init
monet_swizzle(struct pci_dev *dev, u8 *pinp)
static int __init
webbrick_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static int __init
clipper_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static void __init
dp264_init_pci(void)
static void __init
monet_init_pci(void)
static void __init
clipper_init_pci(void)
static void __init
webbrick_init_arch(void)
struct alpha_machine_vector dp264_mv __initmv = ;
ALIAS_MV(dp264)
struct alpha_machine_vector monet_mv __initmv = ;
struct alpha_machine_vector webbrick_mv __initmv = ;
struct alpha_machine_vector clipper_mv __initmv = ;
struct alpha_machine_vector shark_mv __initmv = ;
