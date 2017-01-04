static unsigned int verbose;
module_param(verbose, int, 0644);
MODULE_PARM_DESC(verbose, "verbose startup messages, default is 0 (no)");
#define DRIVER_NAME	"Hopper"
static char *label[10] = ;
static int devs;
static irqreturn_t hopper_irq_handler(int irq, void *dev_id)
static int __devinit hopper_pci_probe(struct pci_dev *pdev, const struct pci_device_id *pci_id)
static void __devexit hopper_pci_remove(struct pci_dev *pdev)
static struct pci_device_id hopper_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, hopper_pci_table);
static struct pci_driver hopper_pci_driver = ;
static int __devinit hopper_init(void)
static void __devexit hopper_exit(void)
module_init(hopper_init);
module_exit(hopper_exit);
MODULE_DESCRIPTION("HOPPER driver");
MODULE_AUTHOR("Manu Abraham");
MODULE_LICENSE("GPL");
