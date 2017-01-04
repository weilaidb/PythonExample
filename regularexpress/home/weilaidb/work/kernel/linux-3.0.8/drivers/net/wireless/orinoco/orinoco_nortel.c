#define DRIVER_NAME "orinoco_nortel"
#define PFX DRIVER_NAME ": "
#define COR_OFFSET    (0xe0)
#define COR_VALUE     (COR_LEVEL_REQ | COR_FUNC_ENA)
static int orinoco_nortel_cor_reset(struct orinoco_private *priv)
static int orinoco_nortel_hw_init(struct orinoco_pci_card *card)
static int orinoco_nortel_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit orinoco_nortel_remove_one(struct pci_dev *pdev)
static DEFINE_PCI_DEVICE_TABLE(orinoco_nortel_id_table) = ;
MODULE_DEVICE_TABLE(pci, orinoco_nortel_id_table);
static struct pci_driver orinoco_nortel_driver = ;
static char version[] __initdata = DRIVER_NAME " " DRIVER_VERSION
" (Tobias Hoffmann & Christoph Jungegger <disdos@traum404.de>)";
MODULE_AUTHOR("Christoph Jungegger <disdos@traum404.de>");
MODULE_DESCRIPTION
("Driver for wireless LAN cards using the Nortel PCI bridge");
MODULE_LICENSE("Dual MPL/GPL");
static int __init orinoco_nortel_init(void)
static void __exit orinoco_nortel_exit(void)
module_init(orinoco_nortel_init);
module_exit(orinoco_nortel_exit);
