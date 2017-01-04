#define DRV_MODULE_NAME "flipper-pic"
#define pr_fmt(fmt) DRV_MODULE_NAME ": " fmt
#define FLIPPER_NR_IRQS		32
#define FLIPPER_ICR		0x00
#define FLIPPER_ICR_RSS		(1<<16)
#define FLIPPER_IMR		0x04
#define FLIPPER_RESET		0x24
static void flipper_pic_mask_and_ack(struct irq_data *d)
static void flipper_pic_ack(struct irq_data *d)
static void flipper_pic_mask(struct irq_data *d)
static void flipper_pic_unmask(struct irq_data *d)
static struct irq_chip flipper_pic = ;
static struct irq_host *flipper_irq_host;
static int flipper_pic_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hwirq)
static int flipper_pic_match(struct irq_host *h, struct device_node *np)
static struct irq_host_ops flipper_irq_host_ops = ;
static void __flipper_quiesce(void __iomem *io_base)
struct irq_host * __init flipper_pic_init(struct device_node *np)
unsigned int flipper_pic_get_irq(void)
void __init flipper_pic_probe(void)
void flipper_quiesce(void)
void flipper_platform_reset(void)
int flipper_is_reset_button_pressed(void)
