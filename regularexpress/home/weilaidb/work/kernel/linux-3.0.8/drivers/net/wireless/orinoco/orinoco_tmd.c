#define DRIVER_NAME "orinoco_tmd"
#define PFX DRIVER_NAME ": "
#define COR_VALUE	(COR_LEVEL_REQ | COR_FUNC_ENA)
#define COR_RESET     (0x80)
#define TMD_RESET_TIME	(500)
static int orinoco_tmd_cor_reset(struct orinoco_private *priv)
static int orinoco_tmd_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit orinoco_tmd_remove_one(struct pci_dev *pdev)
static DEFINE_PCI_DEVICE_TABLE(orinoco_tmd_id_table) = ;
MODULE_DEVICE_TABLE(pci, orinoco_tmd_id_table);
static struct pci_driver orinoco_tmd_driver = ;
static char version[] __initdata = DRIVER_NAME " " DRIVER_VERSION
" (Joerg Dorchain <joerg@dorchain.net>)";
MODULE_AUTHOR("Joerg Dorchain <joerg@dorchain.net>");
MODULE_DESCRIPTION("Driver for wireless LAN cards using the TMD7160 PCI bridge");
MODULE_LICENSE("Dual MPL/GPL");
static int __init orinoco_tmd_init(void)
static void __exit orinoco_tmd_exit(void)
module_init(orinoco_tmd_init);
module_exit(orinoco_tmd_exit);
