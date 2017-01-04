#undef DEBUG
static struct device_node *cpld_pic_node;
static struct irq_host *cpld_pic_host;
#define MISC_IGNORE 0x12
#define PCI_IGNORE 0x00
struct cpld_pic ;
static struct cpld_pic __iomem *cpld_regs;
static void __iomem *
irq_to_pic_mask(unsigned int irq)
static unsigned int
irq_to_pic_bit(unsigned int irq)
static void
cpld_mask_irq(struct irq_data *d)
static void
cpld_unmask_irq(struct irq_data *d)
static struct irq_chip cpld_pic = ;
static int
cpld_pic_get_irq(int offset, u8 ignore, u8 __iomem *statusp,
u8 __iomem *maskp)
static void
cpld_pic_cascade(unsigned int irq, struct irq_desc *desc)
static int
cpld_pic_host_match(struct irq_host *h, struct device_node *node)
static int
cpld_pic_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
static struct
irq_host_ops cpld_pic_host_ops = ;
void __init
mpc5121_ads_cpld_map(void)
void __init
mpc5121_ads_cpld_pic_init(void)
