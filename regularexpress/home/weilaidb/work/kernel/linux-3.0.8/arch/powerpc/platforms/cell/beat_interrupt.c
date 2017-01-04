#define	MAX_IRQS	NR_IRQS
static DEFINE_RAW_SPINLOCK(beatic_irq_mask_lock);
static uint64_t	beatic_irq_mask_enable[(MAX_IRQS+255)/64];
static uint64_t	beatic_irq_mask_ack[(MAX_IRQS+255)/64];
static struct irq_host *beatic_host;
static inline void beatic_update_irq_mask(unsigned int irq_plug)
static void beatic_mask_irq(struct irq_data *d)
static void beatic_unmask_irq(struct irq_data *d)
static void beatic_ack_irq(struct irq_data *d)
static void beatic_end_irq(struct irq_data *d)
static struct irq_chip beatic_pic = ;
static void beatic_pic_host_unmap(struct irq_host *h, unsigned int virq)
static int beatic_pic_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
static int beatic_pic_host_xlate(struct irq_host *h, struct device_node *ct,
const u32 *intspec, unsigned int intsize,
irq_hw_number_t *out_hwirq,
unsigned int *out_flags)
static int beatic_pic_host_match(struct irq_host *h, struct device_node *np)
static struct irq_host_ops beatic_pic_host_ops = ;
static inline unsigned int beatic_get_irq_plug(void)
unsigned int beatic_get_irq(void)
void __init beatic_init_IRQ(void)
void beatic_deinit_IRQ(void)
