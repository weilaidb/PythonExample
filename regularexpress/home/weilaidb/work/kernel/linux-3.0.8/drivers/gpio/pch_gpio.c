#define PCH_GPIO_ALL_PINS	0xfff
#define GPIO_NUM_PINS	12
struct pch_regs ;
struct pch_gpio_reg_data ;
struct pch_gpio ;
static void pch_gpio_set(struct gpio_chip *gpio, unsigned nr, int val)
static int pch_gpio_get(struct gpio_chip *gpio, unsigned nr)
static int pch_gpio_direction_output(struct gpio_chip *gpio, unsigned nr,
int val)
static int pch_gpio_direction_input(struct gpio_chip *gpio, unsigned nr)
static void pch_gpio_save_reg_conf(struct pch_gpio *chip)
static void pch_gpio_restore_reg_conf(struct pch_gpio *chip)
static void pch_gpio_setup(struct pch_gpio *chip)
static int __devinit pch_gpio_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit pch_gpio_remove(struct pci_dev *pdev)
static int pch_gpio_suspend(struct pci_dev *pdev, pm_message_t state)
static int pch_gpio_resume(struct pci_dev *pdev)
#define pch_gpio_suspend NULL
#define pch_gpio_resume NULL
#define PCI_VENDOR_ID_ROHM             0x10DB
static DEFINE_PCI_DEVICE_TABLE(pch_gpio_pcidev_id) = ;
MODULE_DEVICE_TABLE(pci, pch_gpio_pcidev_id);
static struct pci_driver pch_gpio_driver = ;
static int __init pch_gpio_pci_init(void)
module_init(pch_gpio_pci_init);
static void __exit pch_gpio_pci_exit(void)
module_exit(pch_gpio_pci_exit);
MODULE_DESCRIPTION("PCH GPIO PCI Driver");
MODULE_LICENSE("GPL");
