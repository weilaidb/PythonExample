static unsigned long titan_cpu_irq_affinity[4] = ;
static unsigned long titan_cached_irq_mask;
DEFINE_SPINLOCK(titan_irq_lock);
static void
titan_update_irq_hw(unsigned long mask)
static inline void
titan_enable_irq(struct irq_data *d)
static inline void
titan_disable_irq(struct irq_data *d)
static void
titan_cpu_set_irq_affinity(unsigned int irq, cpumask_t affinity)
static int
titan_set_irq_affinity(struct irq_data *d, const struct cpumask *affinity,
bool force)
static void
titan_device_interrupt(unsigned long vector)
static void
titan_srm_device_interrupt(unsigned long vector)
static void __init
init_titan_irqs(struct irq_chip * ops, int imin, int imax)
static struct irq_chip titan_irq_type = ;
static irqreturn_t
titan_intr_nop(int irq, void *dev_id)
static void __init
titan_init_irq(void)
static void __init
titan_legacy_init_irq(void)
void
titan_dispatch_irqs(u64 mask)
static void __init
titan_request_irq(unsigned int irq, irq_handler_t handler,
unsigned long irqflags, const char *devname,
void *dev_id)
static void __init
titan_late_init(void)
static int __devinit
titan_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static void __init
titan_init_pci(void)
static void __init
privateer_init_pci(void)
struct alpha_machine_vector titan_mv __initmv = ;
ALIAS_MV(titan)
struct alpha_machine_vector privateer_mv __initmv = ;
