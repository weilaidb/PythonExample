static void __iomem *power_reg;
static irqreturn_t power_handler(int irq, void *dev_id)
static int __devinit has_button_interrupt(unsigned int irq, struct device_node *dp)
static int __devinit power_probe(struct platform_device *op)
static const struct of_device_id power_match[] = ;
static struct platform_driver power_driver = ;
static int __init power_init(void)
device_initcall(power_init);
