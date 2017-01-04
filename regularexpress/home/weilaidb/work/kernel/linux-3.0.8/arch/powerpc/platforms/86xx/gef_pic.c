#define DEBUG
#undef DEBUG
#define DBG(fmt...) do  while (0)
#define DBG(fmt...) do  while (0)
#define GEF_PIC_NUM_IRQS	32
#define GEF_PIC_INTR_STATUS	0x0000
#define GEF_PIC_INTR_MASK(cpu)	(0x0010 + (0x4 * cpu))
#define GEF_PIC_CPU0_INTR_MASK	GEF_PIC_INTR_MASK(0)
#define GEF_PIC_CPU1_INTR_MASK	GEF_PIC_INTR_MASK(1)
#define GEF_PIC_MCP_MASK(cpu)	(0x0018 + (0x4 * cpu))
#define GEF_PIC_CPU0_MCP_MASK	GEF_PIC_MCP_MASK(0)
#define GEF_PIC_CPU1_MCP_MASK	GEF_PIC_MCP_MASK(1)
static DEFINE_RAW_SPINLOCK(gef_pic_lock);
static void __iomem *gef_pic_irq_reg_base;
static struct irq_host *gef_pic_irq_host;
static int gef_pic_cascade_irq;
void gef_pic_cascade(unsigned int irq, struct irq_desc *desc)
static void gef_pic_mask(struct irq_data *d)
static void gef_pic_mask_ack(struct irq_data *d)
static void gef_pic_unmask(struct irq_data *d)
static struct irq_chip gef_pic_chip = ;
static int gef_pic_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hwirq)
static int gef_pic_host_xlate(struct irq_host *h, struct device_node *ct,
const u32 *intspec, unsigned int intsize,
irq_hw_number_t *out_hwirq, unsigned int *out_flags)
static struct irq_host_ops gef_pic_host_ops = ;
void __init gef_pic_init(struct device_node *np)
unsigned int gef_pic_get_irq(void)
