#define DRV_NAME "cs5535-mfd"
enum cs5535_mfd_bars ;
static int cs5535_mfd_res_enable(struct platform_device *pdev)
static int cs5535_mfd_res_disable(struct platform_device *pdev)
static __devinitdata struct resource cs5535_mfd_resources[NR_BARS];
static __devinitdata struct mfd_cell cs5535_mfd_cells[] = ;
static void __devinit cs5535_clone_olpc_cells(void)
static void cs5535_clone_olpc_cells(void)
static int __devinit cs5535_mfd_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit cs5535_mfd_remove(struct pci_dev *pdev)
static struct pci_device_id cs5535_mfd_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, cs5535_mfd_pci_tbl);
static struct pci_driver cs5535_mfd_drv = ;
static int __init cs5535_mfd_init(void)
static void __exit cs5535_mfd_exit(void)
module_init(cs5535_mfd_init);
module_exit(cs5535_mfd_exit);
MODULE_AUTHOR("Andres Salomon <dilinger@queued.net>");
MODULE_DESCRIPTION("MFD driver for CS5535/CS5536 southbridge's ISA PCI device");
MODULE_LICENSE("GPL");
