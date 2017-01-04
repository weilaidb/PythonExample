#define DRIVER_NAME "orinoco_pci"
#define PFX DRIVER_NAME ": "
#define HERMES_PCI_COR		(0x26)
#define HERMES_PCI_COR_MASK	(0x0080)
#define HERMES_PCI_COR_ONT	(250)
#define HERMES_PCI_COR_OFFT	(500)
#define HERMES_PCI_COR_BUSYT	(500)
static int orinoco_pci_cor_reset(struct orinoco_private *priv)
static int orinoco_pci_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit orinoco_pci_remove_one(struct pci_dev *pdev)
static DEFINE_PCI_DEVICE_TABLE(orinoco_pci_id_table) = ;
MODULE_DEVICE_TABLE(pci, orinoco_pci_id_table);
static struct pci_driver orinoco_pci_driver = ;
static char version[] __initdata = DRIVER_NAME " " DRIVER_VERSION
" (Pavel Roskin <proski@gnu.org>,"
" David Gibson <hermes@gibson.dropbear.id.au> &"
" Jean Tourrilhes <jt@hpl.hp.com>)";
MODULE_AUTHOR("Pavel Roskin <proski@gnu.org> &"
" David Gibson <hermes@gibson.dropbear.id.au>");
MODULE_DESCRIPTION("Driver for wireless LAN cards using direct PCI interface");
MODULE_LICENSE("Dual MPL/GPL");
static int __init orinoco_pci_init(void)
static void __exit orinoco_pci_exit(void)
module_init(orinoco_pci_init);
module_exit(orinoco_pci_exit);
