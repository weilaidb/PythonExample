#define LTQ_EBU_BUSCON	0x1e7ff
#define LTQ_EBU_WP	0x80000000
static int ltq_ebu_gpio_shadow = 0x0;
static void __iomem *ltq_ebu_gpio_membase;
static void ltq_ebu_apply(void)
static void ltq_ebu_set(struct gpio_chip *chip, unsigned offset, int value)
static int ltq_ebu_direction_output(struct gpio_chip *chip, unsigned offset,
int value)
static struct gpio_chip ltq_ebu_chip = ;
static int ltq_ebu_probe(struct platform_device *pdev)
static struct platform_driver ltq_ebu_driver = ;
static int __init ltq_ebu_init(void)
postcore_initcall(ltq_ebu_init);
