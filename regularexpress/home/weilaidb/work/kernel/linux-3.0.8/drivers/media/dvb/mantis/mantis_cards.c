static unsigned int verbose;
module_param(verbose, int, 0644);
MODULE_PARM_DESC(verbose, "verbose startup messages, default is 0 (no)");
static int devs;
#define DRIVER_NAME	"Mantis"
static char *label[10] = ;
static irqreturn_t mantis_irq_handler(int irq, void *dev_id)
static int __devinit mantis_pci_probe(struct pci_dev *pdev, const struct pci_device_id *pci_id)
static void __devexit mantis_pci_remove(struct pci_dev *pdev)
static struct pci_device_id mantis_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, mantis_pci_table);
static struct pci_driver mantis_pci_driver = ;
static int __devinit mantis_init(void)
static void __devexit mantis_exit(void)
module_init(mantis_init);
module_exit(mantis_exit);
MODULE_DESCRIPTION("MANTIS driver");
MODULE_AUTHOR("Manu Abraham");
MODULE_LICENSE("GPL");
