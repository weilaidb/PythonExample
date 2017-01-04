enum GPIO_REG ;
struct lnw_gpio ;
static void __iomem *gpio_reg(struct gpio_chip *chip, unsigned offset,
enum GPIO_REG reg_type)
static int lnw_gpio_get(struct gpio_chip *chip, unsigned offset)
static void lnw_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int lnw_gpio_direction_input(struct gpio_chip *chip, unsigned offset)
static int lnw_gpio_direction_output(struct gpio_chip *chip,
unsigned offset, int value)
static int lnw_gpio_to_irq(struct gpio_chip *chip, unsigned offset)
static int lnw_irq_type(struct irq_data *d, unsigned type)
static void lnw_irq_unmask(struct irq_data *d)
static void lnw_irq_mask(struct irq_data *d)
static struct irq_chip lnw_irqchip = ;
static DEFINE_PCI_DEVICE_TABLE(lnw_gpio_ids) = ;
MODULE_DEVICE_TABLE(pci, lnw_gpio_ids);
static void lnw_irq_handler(unsigned irq, struct irq_desc *desc)
static int lnw_gpio_runtime_resume(struct device *dev)
static int lnw_gpio_runtime_suspend(struct device *dev)
static int lnw_gpio_runtime_idle(struct device *dev)
#define lnw_gpio_runtime_suspend	NULL
#define lnw_gpio_runtime_resume		NULL
#define lnw_gpio_runtime_idle		NULL
static const struct dev_pm_ops lnw_gpio_pm_ops = ;
static int __devinit lnw_gpio_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static struct pci_driver lnw_gpio_driver = ;
static int __devinit wp_gpio_probe(struct platform_device *pdev)
static int __devexit wp_gpio_remove(struct platform_device *pdev)
static struct platform_driver wp_gpio_driver = ;
static int __init lnw_gpio_init(void)
device_initcall(lnw_gpio_init);
