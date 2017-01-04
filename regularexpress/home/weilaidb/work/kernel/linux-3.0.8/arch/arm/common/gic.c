static DEFINE_SPINLOCK(irq_controller_lock);
void __iomem *gic_cpu_base_addr __read_mostly;
struct gic_chip_data ;
struct irq_chip gic_arch_extn = ;
#define MAX_GIC_NR	1
static struct gic_chip_data gic_data[MAX_GIC_NR] __read_mostly;
static inline void __iomem *gic_dist_base(struct irq_data *d)
static inline void __iomem *gic_cpu_base(struct irq_data *d)
static inline unsigned int gic_irq(struct irq_data *d)
static void gic_mask_irq(struct irq_data *d)
static void gic_unmask_irq(struct irq_data *d)
static void gic_eoi_irq(struct irq_data *d)
static int gic_set_type(struct irq_data *d, unsigned int type)
static int gic_retrigger(struct irq_data *d)
static int gic_set_affinity(struct irq_data *d, const struct cpumask *mask_val,
bool force)
static int gic_set_wake(struct irq_data *d, unsigned int on)
#define gic_set_wake	NULL
static void gic_handle_cascade_irq(unsigned int irq, struct irq_desc *desc)
static struct irq_chip gic_chip = ;
void __init gic_cascade_irq(unsigned int gic_nr, unsigned int irq)
static void __init gic_dist_init(struct gic_chip_data *gic,
unsigned int irq_start)
static void __cpuinit gic_cpu_init(struct gic_chip_data *gic)
void __init gic_init(unsigned int gic_nr, unsigned int irq_start,
void __iomem *dist_base, void __iomem *cpu_base)
void __cpuinit gic_secondary_init(unsigned int gic_nr)
void __cpuinit gic_enable_ppi(unsigned int irq)
void gic_raise_softirq(const struct cpumask *mask, unsigned int irq)
