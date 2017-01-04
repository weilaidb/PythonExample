#define INT_SYS_NR	(INT_GPIO_BASE - INT_PRI_BASE)
#define INT_SYS_SZ	(INT_SEC_BASE - INT_PRI_BASE)
#define PPI_NR		((INT_SYS_NR+INT_SYS_SZ-1)/INT_SYS_SZ)
#define ICTLR_CPU_IEP_VFIQ	0x08
#define ICTLR_CPU_IEP_FIR	0x14
#define ICTLR_CPU_IEP_FIR_SET	0x18
#define ICTLR_CPU_IEP_FIR_CLR	0x1c
#define ICTLR_CPU_IER		0x20
#define ICTLR_CPU_IER_SET	0x24
#define ICTLR_CPU_IER_CLR	0x28
#define ICTLR_CPU_IEP_CLASS	0x2C
#define ICTLR_COP_IER		0x30
#define ICTLR_COP_IER_SET	0x34
#define ICTLR_COP_IER_CLR	0x38
#define ICTLR_COP_IEP_CLASS	0x3c
#define NUM_ICTLRS 4
#define FIRST_LEGACY_IRQ 32
static void __iomem *ictlr_reg_base[] = ;
static inline void tegra_irq_write_mask(unsigned int irq, unsigned long reg)
static void tegra_mask(struct irq_data *d)
static void tegra_unmask(struct irq_data *d)
static void tegra_ack(struct irq_data *d)
static void tegra_eoi(struct irq_data *d)
static int tegra_retrigger(struct irq_data *d)
void __init tegra_init_irq(void)
