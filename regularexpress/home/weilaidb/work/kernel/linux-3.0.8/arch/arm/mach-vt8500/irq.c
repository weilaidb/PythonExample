#define VT8500_IC_DCTR		0x40
#define VT8500_INT_ENABLE	(1 << 3)
#define VT8500_TRIGGER_HIGH	(0 << 4)
#define VT8500_TRIGGER_RISING	(1 << 4)
#define VT8500_TRIGGER_FALLING	(2 << 4)
#define VT8500_EDGE		( VT8500_TRIGGER_RISING \
| VT8500_TRIGGER_FALLING)
#define VT8500_IC_STATUS	0x80
static void __iomem *ic_regbase;
static void __iomem *sic_regbase;
static void vt8500_irq_mask(struct irq_data *d)
static void vt8500_irq_unmask(struct irq_data *d)
static int vt8500_irq_set_type(struct irq_data *d, unsigned int flow_type)
static struct irq_chip vt8500_irq_chip = ;
void __init vt8500_init_irq(void)
void __init wm8505_init_irq(void)
