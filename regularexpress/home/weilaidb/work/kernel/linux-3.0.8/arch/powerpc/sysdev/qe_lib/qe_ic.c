static DEFINE_RAW_SPINLOCK(qe_ic_lock);
static struct qe_ic_info qe_ic_info[] = ;
static inline u32 qe_ic_read(volatile __be32  __iomem * base, unsigned int reg)
static inline void qe_ic_write(volatile __be32  __iomem * base, unsigned int reg,
u32 value)
static inline struct qe_ic *qe_ic_from_irq(unsigned int virq)
static inline struct qe_ic *qe_ic_from_irq_data(struct irq_data *d)
static void qe_ic_unmask_irq(struct irq_data *d)
static void qe_ic_mask_irq(struct irq_data *d)
static struct irq_chip qe_ic_irq_chip = ;
static int qe_ic_host_match(struct irq_host *h, struct device_node *node)
static int qe_ic_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
static int qe_ic_host_xlate(struct irq_host *h, struct device_node *ct,
const u32 * intspec, unsigned int intsize,
irq_hw_number_t * out_hwirq,
unsigned int *out_flags)
static struct irq_host_ops qe_ic_host_ops = ;
unsigned int qe_ic_get_low_irq(struct qe_ic *qe_ic)
unsigned int qe_ic_get_high_irq(struct qe_ic *qe_ic)
void __init qe_ic_init(struct device_node *node, unsigned int flags,
void (*low_handler)(unsigned int irq, struct irq_desc *desc),
void (*high_handler)(unsigned int irq, struct irq_desc *desc))
void qe_ic_set_highest_priority(unsigned int virq, int high)
int qe_ic_set_priority(unsigned int virq, unsigned int priority)
int qe_ic_set_high_priority(unsigned int virq, unsigned int priority, int high)
static struct sysdev_class qe_ic_sysclass = ;
static struct sys_device device_qe_ic = ;
static int __init init_qe_ic_sysfs(void)
subsys_initcall(init_qe_ic_sysfs);
