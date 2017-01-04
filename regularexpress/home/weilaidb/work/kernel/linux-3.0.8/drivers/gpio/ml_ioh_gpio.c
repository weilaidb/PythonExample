#define PCI_VENDOR_ID_ROHM             0x10DB
struct ioh_reg_comn ;
struct ioh_regs ;
struct ioh_gpio_reg_data ;
struct ioh_gpio ;
static const int num_ports[] = ;
static void ioh_gpio_set(struct gpio_chip *gpio, unsigned nr, int val)
static int ioh_gpio_get(struct gpio_chip *gpio, unsigned nr)
static int ioh_gpio_direction_output(struct gpio_chip *gpio, unsigned nr,
int val)
static int ioh_gpio_direction_input(struct gpio_chip *gpio, unsigned nr)
static void ioh_gpio_save_reg_conf(struct ioh_gpio *chip)
static void ioh_gpio_restore_reg_conf(struct ioh_gpio *chip)
static void ioh_gpio_setup(struct ioh_gpio *chip, int num_port)
static int __devinit ioh_gpio_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit ioh_gpio_remove(struct pci_dev *pdev)
static int ioh_gpio_suspend(struct pci_dev *pdev, pm_message_t state)
static int ioh_gpio_resume(struct pci_dev *pdev)
#define ioh_gpio_suspend NULL
#define ioh_gpio_resume NULL
static DEFINE_PCI_DEVICE_TABLE(ioh_gpio_pcidev_id) = ;
MODULE_DEVICE_TABLE(pci, ioh_gpio_pcidev_id);
static struct pci_driver ioh_gpio_driver = ;
static int __init ioh_gpio_pci_init(void)
module_init(ioh_gpio_pci_init);
static void __exit ioh_gpio_pci_exit(void)
module_exit(ioh_gpio_pci_exit);
MODULE_DESCRIPTION("OKI SEMICONDUCTOR ML-IOH series GPIO Driver");
MODULE_LICENSE("GPL");
