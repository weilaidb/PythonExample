#define DRIVER_NAME "dw_spi_pci"
struct dw_spi_pci ;
static int __devinit spi_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit spi_pci_remove(struct pci_dev *pdev)
static int spi_suspend(struct pci_dev *pdev, pm_message_t state)
static int spi_resume(struct pci_dev *pdev)
#define spi_suspend	NULL
#define spi_resume	NULL
static const struct pci_device_id pci_ids[] __devinitdata = ;
static struct pci_driver dw_spi_driver = ;
static int __init mrst_spi_init(void)
static void __exit mrst_spi_exit(void)
module_init(mrst_spi_init);
module_exit(mrst_spi_exit);
MODULE_AUTHOR("Feng Tang <feng.tang@intel.com>");
MODULE_DESCRIPTION("PCI interface driver for DW SPI Core");
MODULE_LICENSE("GPL v2");
