#define EIC_IER					0x0000
#define EIC_IDR					0x0004
#define EIC_IMR					0x0008
#define EIC_ISR					0x000c
#define EIC_ICR					0x0010
#define EIC_MODE				0x0014
#define EIC_EDGE				0x0018
#define EIC_LEVEL				0x001c
#define EIC_NMIC				0x0024
#define EIC_NMIC_ENABLE				(1 << 0)
#define EIC_BIT(name)					\
(1 << EIC_##name##_OFFSET)
#define EIC_BF(name,value)				\
(((value) & ((1 << EIC_##name##_SIZE) - 1))	\
<< EIC_##name##_OFFSET)
#define EIC_BFEXT(name,value)				\
(((value) >> EIC_##name##_OFFSET)		\
& ((1 << EIC_##name##_SIZE) - 1))
#define EIC_BFINS(name,value,old)			\
(((old) & ~(((1 << EIC_##name##_SIZE) - 1)	\
<< EIC_##name##_OFFSET))		\
| EIC_BF(name,value))
#define eic_readl(port,reg)				\
__raw_readl((port)->regs + EIC_##reg)
#define eic_writel(port,reg,value)			\
__raw_writel((value), (port)->regs + EIC_##reg)
struct eic ;
static struct eic *nmi_eic;
static bool nmi_enabled;
static void eic_ack_irq(struct irq_data *d)
static void eic_mask_irq(struct irq_data *d)
static void eic_mask_ack_irq(struct irq_data *d)
static void eic_unmask_irq(struct irq_data *d)
static int eic_set_irq_type(struct irq_data *d, unsigned int flow_type)
static struct irq_chip eic_chip = ;
static void demux_eic_irq(unsigned int irq, struct irq_desc *desc)
int nmi_enable(void)
void nmi_disable(void)
static int __init eic_probe(struct platform_device *pdev)
static struct platform_driver eic_driver = ;
static int __init eic_init(void)
arch_initcall(eic_init);
