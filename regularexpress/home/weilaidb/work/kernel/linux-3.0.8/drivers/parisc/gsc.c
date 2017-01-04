#undef DEBUG
#define DEBPRINTK printk
#define DEBPRINTK(x,...)
int gsc_alloc_irq(struct gsc_irq *i)
int gsc_claim_irq(struct gsc_irq *i, int irq)
EXPORT_SYMBOL(gsc_alloc_irq);
EXPORT_SYMBOL(gsc_claim_irq);
irqreturn_t gsc_asic_intr(int gsc_asic_irq, void *dev)
int gsc_find_local_irq(unsigned int irq, int *global_irqs, int limit)
static void gsc_asic_mask_irq(struct irq_data *d)
static void gsc_asic_unmask_irq(struct irq_data *d)
static struct irq_chip gsc_asic_interrupt_type = ;
int gsc_assign_irq(struct irq_chip *type, void *data)
void gsc_asic_assign_irq(struct gsc_asic *asic, int local_irq, int *irqp)
struct gsc_fixup_struct ;
static int gsc_fixup_irqs_callback(struct device *dev, void *data)
void gsc_fixup_irqs(struct parisc_device *parent, void *ctrl,
void (*choose_irq)(struct parisc_device *, void *))
int gsc_common_setup(struct parisc_device *parent, struct gsc_asic *gsc_asic)
extern struct parisc_driver lasi_driver;
extern struct parisc_driver asp_driver;
extern struct parisc_driver wax_driver;
void __init gsc_init(void)
