#define DRIVER_NAME "orinoco_plx"
#define PFX DRIVER_NAME ": "
#define COR_OFFSET	(0x3e0)
#define COR_VALUE	(COR_LEVEL_REQ | COR_FUNC_ENA)
#define COR_RESET     (0x80)
#define PLX_RESET_TIME	(500)
#define PLX_INTCSR		0x4c
#define PLX_INTCSR_INTEN	(1<<6)
static int orinoco_plx_cor_reset(struct orinoco_private *priv)
static int orinoco_plx_hw_init(struct orinoco_pci_card *card)
static int orinoco_plx_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit orinoco_plx_remove_one(struct pci_dev *pdev)
static DEFINE_PCI_DEVICE_TABLE(orinoco_plx_id_table) = ;
MODULE_DEVICE_TABLE(pci, orinoco_plx_id_table);
static struct pci_driver orinoco_plx_driver = ;
static char version[] __initdata = DRIVER_NAME " " DRIVER_VERSION
" (Pavel Roskin <proski@gnu.org>,"
" David Gibson <hermes@gibson.dropbear.id.au>,"
" Daniel Barlow <dan@telent.net>)";
MODULE_AUTHOR("Daniel Barlow <dan@telent.net>");
MODULE_DESCRIPTION("Driver for wireless LAN cards using the PLX9052 PCI bridge");
MODULE_LICENSE("Dual MPL/GPL");
static int __init orinoco_plx_init(void)
static void __exit orinoco_plx_exit(void)
module_init(orinoco_plx_init);
module_exit(orinoco_plx_exit);
