#define AMD8111_EDAC_REVISION	" Ver: 1.0.0"
#define AMD8111_EDAC_MOD_STR	"amd8111_edac"
#define PCI_DEVICE_ID_AMD_8111_PCI	0x7460
enum amd8111_edac_devs ;
enum amd8111_edac_pcis ;
static int edac_pci_read_dword(struct pci_dev *dev, int reg, u32 *val32)
static void edac_pci_read_byte(struct pci_dev *dev, int reg, u8 *val8)
static void edac_pci_write_dword(struct pci_dev *dev, int reg, u32 val32)
static void edac_pci_write_byte(struct pci_dev *dev, int reg, u8 val8)
static void amd8111_pci_bridge_init(struct amd8111_pci_info *pci_info)
static void amd8111_pci_bridge_exit(struct amd8111_pci_info *pci_info)
static void amd8111_pci_bridge_check(struct edac_pci_ctl_info *edac_dev)
static struct resource *legacy_io_res;
static int at_compat_reg_broken;
#define LEGACY_NR_PORTS	1
static void amd8111_lpc_bridge_init(struct amd8111_dev_info *dev_info)
static void amd8111_lpc_bridge_exit(struct amd8111_dev_info *dev_info)
static void amd8111_lpc_bridge_check(struct edac_device_ctl_info *edac_dev)
static struct amd8111_dev_info amd8111_devices[] = ;
static struct amd8111_pci_info amd8111_pcis[] = ;
static int amd8111_dev_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void amd8111_dev_remove(struct pci_dev *dev)
static int amd8111_pci_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void amd8111_pci_remove(struct pci_dev *dev)
static const struct pci_device_id amd8111_edac_dev_tbl[] = ;
MODULE_DEVICE_TABLE(pci, amd8111_edac_dev_tbl);
static struct pci_driver amd8111_edac_dev_driver = ;
static const struct pci_device_id amd8111_edac_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, amd8111_edac_pci_tbl);
static struct pci_driver amd8111_edac_pci_driver = ;
static int __init amd8111_edac_init(void)
static void __exit amd8111_edac_exit(void)
module_init(amd8111_edac_init);
module_exit(amd8111_edac_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Cao Qingtao <qingtao.cao@windriver.com>\n");
MODULE_DESCRIPTION("AMD8111 HyperTransport I/O Hub EDAC kernel module");
