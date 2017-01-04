struct ce4100_info ;
static DEFINE_MUTEX(ssp_lock);
static LIST_HEAD(ssp_list);
struct ssp_device *pxa_ssp_request(int port, const char *label)
EXPORT_SYMBOL_GPL(pxa_ssp_request);
void pxa_ssp_free(struct ssp_device *ssp)
EXPORT_SYMBOL_GPL(pxa_ssp_free);
static int __devinit ce4100_spi_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit ce4100_spi_remove(struct pci_dev *dev)
static struct pci_device_id ce4100_spi_devices[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, ce4100_spi_devices);
static struct pci_driver ce4100_spi_driver = ;
static int __init ce4100_spi_init(void)
module_init(ce4100_spi_init);
static void __exit ce4100_spi_exit(void)
module_exit(ce4100_spi_exit);
MODULE_DESCRIPTION("CE4100 PCI-SPI glue code for PXA's driver");
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Sebastian Andrzej Siewior <bigeasy@linutronix.de>");
