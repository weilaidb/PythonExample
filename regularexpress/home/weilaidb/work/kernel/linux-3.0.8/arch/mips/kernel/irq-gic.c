#undef DEBUG
static unsigned long _gic_base;
static unsigned int _irqbase;
static unsigned int gic_irq_flags[GIC_NUM_INTRS];
#define GIC_IRQ_FLAG_EDGE      0x0001
struct gic_pcpu_mask pcpu_masks[NR_CPUS];
static struct gic_pending_regs pending_regs[NR_CPUS];
static struct gic_intrmask_regs intrmask_regs[NR_CPUS];
void gic_send_ipi(unsigned int intr)
static void __init vpe_local_setup(unsigned int numvpes)
unsigned int gic_get_int(void)
static void gic_irq_ack(struct irq_data *d)
static void gic_mask_irq(struct irq_data *d)
static void gic_unmask_irq(struct irq_data *d)
static DEFINE_SPINLOCK(gic_lock);
static int gic_set_affinity(struct irq_data *d, const struct cpumask *cpumask,
bool force)
static struct irq_chip gic_irq_controller = ;
static void __init gic_setup_intr(unsigned int intr, unsigned int cpu,
unsigned int pin, unsigned int polarity, unsigned int trigtype,
unsigned int flags)
static void __init gic_basic_init(int numintrs, int numvpes,
struct gic_intr_map *intrmap, int mapsize)
void __init gic_init(unsigned long gic_base_addr,
unsigned long gic_addrspace_size,
struct gic_intr_map *intr_map, unsigned int intr_map_size,
unsigned int irqbase)
