#define DRV_MODULE_NAME "hlwd-pic"
#define pr_fmt(fmt) DRV_MODULE_NAME ": " fmt
#define HLWD_NR_IRQS	32
#define HW_BROADWAY_ICR		0x00
#define HW_BROADWAY_IMR		0x04
static void hlwd_pic_mask_and_ack(struct irq_data *d)
static void hlwd_pic_ack(struct irq_data *d)
static void hlwd_pic_mask(struct irq_data *d)
static void hlwd_pic_unmask(struct irq_data *d)
static struct irq_chip hlwd_pic = ;
static struct irq_host *hlwd_irq_host;
static int hlwd_pic_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hwirq)
static struct irq_host_ops hlwd_irq_host_ops = ;
static unsigned int __hlwd_pic_get_irq(struct irq_host *h)
static void hlwd_pic_irq_cascade(unsigned int cascade_virq,
struct irq_desc *desc)
static void __hlwd_quiesce(void __iomem *io_base)
struct irq_host *hlwd_pic_init(struct device_node *np)
unsigned int hlwd_pic_get_irq(void)
void hlwd_pic_probe(void)
void hlwd_quiesce(void)
