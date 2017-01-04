#define BT8XXGPIO_NR_GPIOS		24
struct bt8xxgpio ;
#define bgwrite(dat, adr)	writel((dat), bg->mmio+(adr))
#define bgread(adr)		readl(bg->mmio+(adr))
static int modparam_gpiobase = -1;
module_param_named(gpiobase, modparam_gpiobase, int, 0444);
MODULE_PARM_DESC(gpiobase, "The GPIO number base. -1 means dynamic, which is the default.");
static int bt8xxgpio_gpio_direction_input(struct gpio_chip *gpio, unsigned nr)
static int bt8xxgpio_gpio_get(struct gpio_chip *gpio, unsigned nr)
static int bt8xxgpio_gpio_direction_output(struct gpio_chip *gpio,
unsigned nr, int val)
static void bt8xxgpio_gpio_set(struct gpio_chip *gpio,
unsigned nr, int val)
static void bt8xxgpio_gpio_setup(struct bt8xxgpio *bg)
static int bt8xxgpio_probe(struct pci_dev *dev,
const struct pci_device_id *pci_id)
static void bt8xxgpio_remove(struct pci_dev *pdev)
static int bt8xxgpio_suspend(struct pci_dev *pdev, pm_message_t state)
static int bt8xxgpio_resume(struct pci_dev *pdev)
#define bt8xxgpio_suspend NULL
#define bt8xxgpio_resume NULL
static struct pci_device_id bt8xxgpio_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, bt8xxgpio_pci_tbl);
static struct pci_driver bt8xxgpio_pci_driver = ;
static int __init bt8xxgpio_init(void)
module_init(bt8xxgpio_init)
static void __exit bt8xxgpio_exit(void)
module_exit(bt8xxgpio_exit)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Michael Buesch");
MODULE_DESCRIPTION("Abuse a BT8xx framegrabber card as generic GPIO card");
