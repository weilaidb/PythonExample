#define AMD8131_EDAC_REVISION	" Ver: 1.0.0"
#define AMD8131_EDAC_MOD_STR	"amd8131_edac"
static void edac_pci_read_dword(struct pci_dev *dev, int reg, u32 *val32)
static void edac_pci_write_dword(struct pci_dev *dev, int reg, u32 val32)
static char * const bridge_str[] = ;
static struct amd8131_dev_info amd8131_devices[] = ;
static void amd8131_pcix_init(struct amd8131_dev_info *dev_info)
static void amd8131_pcix_exit(struct amd8131_dev_info *dev_info)
static void amd8131_pcix_check(struct edac_pci_ctl_info *edac_dev)
static struct amd8131_info amd8131_chipset = ;
static int amd8131_probe(struct pci_dev *dev, const struct pci_device_id *id)
static void amd8131_remove(struct pci_dev *dev)
static const struct pci_device_id amd8131_edac_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, amd8131_edac_pci_tbl);
static struct pci_driver amd8131_edac_driver = ;
static int __init amd8131_edac_init(void)
static void __exit amd8131_edac_exit(void)
module_init(amd8131_edac_init);
module_exit(amd8131_edac_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Cao Qingtao <qingtao.cao@windriver.com>\n");
MODULE_DESCRIPTION("AMD8131 HyperTransport PCI-X Tunnel EDAC kernel module");
