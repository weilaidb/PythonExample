#define LTQ_STP_CON0		0x00
#define LTQ_STP_CON1		0x04
#define LTQ_STP_CPU0		0x08
#define LTQ_STP_CPU1		0x0C
#define LTQ_STP_AR		0x10
#define LTQ_STP_CON_SWU		(1 << 31)
#define LTQ_STP_2HZ		0
#define LTQ_STP_4HZ		(1 << 23)
#define LTQ_STP_8HZ		(2 << 23)
#define LTQ_STP_10HZ		(3 << 23)
#define LTQ_STP_SPEED_MASK	(0xf << 23)
#define LTQ_STP_UPD_FPI		(1 << 31)
#define LTQ_STP_UPD_MASK	(3 << 30)
#define LTQ_STP_ADSL_SRC	(3 << 24)
#define LTQ_STP_GROUP0		(1 << 0)
#define LTQ_STP_RISING		0
#define LTQ_STP_FALLING		(1 << 26)
#define LTQ_STP_EDGE_MASK	(1 << 26)
#define ltq_stp_r32(reg)	__raw_readl(ltq_stp_membase + reg)
#define ltq_stp_w32(val, reg)	__raw_writel(val, ltq_stp_membase + reg)
#define ltq_stp_w32_mask(clear, set, reg) \
ltq_w32((ltq_r32(ltq_stp_membase + reg) & ~(clear)) | (set), \
ltq_stp_membase + (reg))
static int ltq_stp_shadow = 0xffff;
static void __iomem *ltq_stp_membase;
static void ltq_stp_set(struct gpio_chip *chip, unsigned offset, int value)
static int ltq_stp_direction_output(struct gpio_chip *chip, unsigned offset,
int value)
static struct gpio_chip ltq_stp_chip = ;
static int ltq_stp_hw_init(void)
static int __devinit ltq_stp_probe(struct platform_device *pdev)
static struct platform_driver ltq_stp_driver = ;
int __init ltq_stp_init(void)
postcore_initcall(ltq_stp_init);
