struct scoop_pcmcia_config *platform_scoop_config;
EXPORT_SYMBOL(platform_scoop_config);
struct  scoop_dev ;
void reset_scoop(struct device *dev)
static void __scoop_gpio_set(struct scoop_dev *sdev,
unsigned offset, int value)
static void scoop_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int scoop_gpio_get(struct gpio_chip *chip, unsigned offset)
static int scoop_gpio_direction_input(struct gpio_chip *chip,
unsigned offset)
static int scoop_gpio_direction_output(struct gpio_chip *chip,
unsigned offset, int value)
unsigned short read_scoop_reg(struct device *dev, unsigned short reg)
void write_scoop_reg(struct device *dev, unsigned short reg, unsigned short data)
EXPORT_SYMBOL(reset_scoop);
EXPORT_SYMBOL(read_scoop_reg);
EXPORT_SYMBOL(write_scoop_reg);
static void check_scoop_reg(struct scoop_dev *sdev)
static int scoop_suspend(struct platform_device *dev, pm_message_t state)
static int scoop_resume(struct platform_device *dev)
#define scoop_suspend	NULL
#define scoop_resume	NULL
static int __devinit scoop_probe(struct platform_device *pdev)
static int __devexit scoop_remove(struct platform_device *pdev)
static struct platform_driver scoop_driver = ;
static int __init scoop_init(void)
subsys_initcall(scoop_init);
