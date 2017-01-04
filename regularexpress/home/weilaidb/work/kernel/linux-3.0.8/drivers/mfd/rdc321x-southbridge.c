static struct rdc321x_wdt_pdata rdc321x_wdt_pdata;
static struct resource rdc321x_wdt_resource[] = ;
static struct rdc321x_gpio_pdata rdc321x_gpio_pdata = ;
static struct resource rdc321x_gpio_resources[] = ;
static struct mfd_cell rdc321x_sb_cells[] = ;
static int __devinit rdc321x_sb_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit rdc321x_sb_remove(struct pci_dev *pdev)
static DEFINE_PCI_DEVICE_TABLE(rdc321x_sb_table) = ;
MODULE_DEVICE_TABLE(pci, rdc321x_sb_table);
static struct pci_driver rdc321x_sb_driver = ;
static int __init rdc321x_sb_init(void)
static void __exit rdc321x_sb_exit(void)
module_init(rdc321x_sb_init);
module_exit(rdc321x_sb_exit);
MODULE_AUTHOR("Florian Fainelli <florian@openwrt.org>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("RDC R-321x MFD southbridge driver");
