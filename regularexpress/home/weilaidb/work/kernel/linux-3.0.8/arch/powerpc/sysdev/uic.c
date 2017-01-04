#define NR_UIC_INTS	32
#define UIC_SR		0x0
#define UIC_ER		0x2
#define UIC_CR		0x3
#define UIC_PR		0x4
#define UIC_TR		0x5
#define UIC_MSR		0x6
#define UIC_VR		0x7
#define UIC_VCR		0x8
struct uic *primary_uic;
struct uic ;
static void uic_unmask_irq(struct irq_data *d)
static void uic_mask_irq(struct irq_data *d)
static void uic_ack_irq(struct irq_data *d)
static void uic_mask_ack_irq(struct irq_data *d)
static int uic_set_irq_type(struct irq_data *d, unsigned int flow_type)
static struct irq_chip uic_irq_chip = ;
static int uic_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
static int uic_host_xlate(struct irq_host *h, struct device_node *ct,
const u32 *intspec, unsigned int intsize,
irq_hw_number_t *out_hwirq, unsigned int *out_type)
static struct irq_host_ops uic_host_ops = ;
void uic_irq_cascade(unsigned int virq, struct irq_desc *desc)
static struct uic * __init uic_init_one(struct device_node *node)
void __init uic_init_tree(void)
unsigned int uic_get_irq(void)
