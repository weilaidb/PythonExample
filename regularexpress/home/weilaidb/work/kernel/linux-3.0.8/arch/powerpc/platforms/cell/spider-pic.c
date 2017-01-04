enum ;
#define SPIDER_CHIP_COUNT	4
#define SPIDER_SRC_COUNT	64
#define SPIDER_IRQ_INVALID	63
struct spider_pic ;
static struct spider_pic spider_pics[SPIDER_CHIP_COUNT];
static struct spider_pic *spider_irq_data_to_pic(struct irq_data *d)
static void __iomem *spider_get_irq_config(struct spider_pic *pic,
unsigned int src)
static void spider_unmask_irq(struct irq_data *d)
static void spider_mask_irq(struct irq_data *d)
static void spider_ack_irq(struct irq_data *d)
static int spider_set_irq_type(struct irq_data *d, unsigned int type)
static struct irq_chip spider_pic = ;
static int spider_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
static int spider_host_xlate(struct irq_host *h, struct device_node *ct,
const u32 *intspec, unsigned int intsize,
irq_hw_number_t *out_hwirq, unsigned int *out_flags)
static struct irq_host_ops spider_host_ops = ;
static void spider_irq_cascade(unsigned int irq, struct irq_desc *desc)
static unsigned int __init spider_find_cascade_and_node(struct spider_pic *pic)
static void __init spider_init_one(struct device_node *of_node, int chip,
unsigned long addr)
void __init spider_init_IRQ(void)
