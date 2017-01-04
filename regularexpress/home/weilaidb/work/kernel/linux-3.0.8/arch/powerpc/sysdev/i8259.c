#undef DEBUG
static volatile void __iomem *pci_intack;
static unsigned char cached_8259[2] = ;
#define cached_A1 (cached_8259[0])
#define cached_21 (cached_8259[1])
static DEFINE_RAW_SPINLOCK(i8259_lock);
static struct irq_host *i8259_host;
unsigned int i8259_irq(void)
static void i8259_mask_and_ack_irq(struct irq_data *d)
static void i8259_set_irq_mask(int irq_nr)
static void i8259_mask_irq(struct irq_data *d)
static void i8259_unmask_irq(struct irq_data *d)
static struct irq_chip i8259_pic = ;
static struct resource pic1_iores = ;
static struct resource pic2_iores = ;
static struct resource pic_edgectrl_iores = ;
static int i8259_host_match(struct irq_host *h, struct device_node *node)
static int i8259_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
static int i8259_host_xlate(struct irq_host *h, struct device_node *ct,
const u32 *intspec, unsigned int intsize,
irq_hw_number_t *out_hwirq, unsigned int *out_flags)
static struct irq_host_ops i8259_host_ops = ;
struct irq_host *i8259_get_host(void)
void i8259_init(struct device_node *node, unsigned long intack_addr)
