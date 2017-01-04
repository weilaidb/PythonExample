#define MODNAME		"scb2_flash"
#define SCB2_ADDR	0xfff00000
#define SCB2_WINDOW	0x00100000
static void __iomem *scb2_ioaddr;
static struct mtd_info *scb2_mtd;
static struct map_info scb2_map = ;
static int region_fail;
static int __devinit
scb2_fixup_mtd(struct mtd_info *mtd)
#define CSB5_FCR	0x41
#define CSB5_FCR_DECODE_ALL 0x0e
static int __devinit
scb2_flash_probe(struct pci_dev *dev, const struct pci_device_id *ent)
static void __devexit
scb2_flash_remove(struct pci_dev *dev)
static struct pci_device_id scb2_flash_pci_ids[] = ;
static struct pci_driver scb2_flash_driver = ;
static int __init
scb2_flash_init(void)
static void __exit
scb2_flash_exit(void)
module_init(scb2_flash_init);
module_exit(scb2_flash_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Tim Hockin <thockin@sun.com>");
MODULE_DESCRIPTION("MTD map driver for Intel SCB2 BIOS Flash");
MODULE_DEVICE_TABLE(pci, scb2_flash_pci_ids);
