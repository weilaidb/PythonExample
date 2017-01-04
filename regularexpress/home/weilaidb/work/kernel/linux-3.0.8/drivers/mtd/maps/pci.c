struct map_pci_info;
struct mtd_pci_info ;
struct map_pci_info ;
static map_word mtd_pci_read8(struct map_info *_map, unsigned long ofs)
static map_word mtd_pci_read32(struct map_info *_map, unsigned long ofs)
static void mtd_pci_copyfrom(struct map_info *_map, void *to, unsigned long from, ssize_t len)
static void mtd_pci_write8(struct map_info *_map, map_word val, unsigned long ofs)
static void mtd_pci_write32(struct map_info *_map, map_word val, unsigned long ofs)
static void mtd_pci_copyto(struct map_info *_map, unsigned long to, const void *from, ssize_t len)
static const struct map_info mtd_pci_map = ;
static int
intel_iq80310_init(struct pci_dev *dev, struct map_pci_info *map)
static void
intel_iq80310_exit(struct pci_dev *dev, struct map_pci_info *map)
static unsigned long
intel_iq80310_translate(struct map_pci_info *map, unsigned long ofs)
static struct mtd_pci_info intel_iq80310_info = ;
static int
intel_dc21285_init(struct pci_dev *dev, struct map_pci_info *map)
static void
intel_dc21285_exit(struct pci_dev *dev, struct map_pci_info *map)
static unsigned long
intel_dc21285_translate(struct map_pci_info *map, unsigned long ofs)
static struct mtd_pci_info intel_dc21285_info = ;
static struct pci_device_id mtd_pci_ids[] = ;
static int __devinit
mtd_pci_probe(struct pci_dev *dev, const struct pci_device_id *id)
static void __devexit
mtd_pci_remove(struct pci_dev *dev)
static struct pci_driver mtd_pci_driver = ;
static int __init mtd_pci_maps_init(void)
static void __exit mtd_pci_maps_exit(void)
module_init(mtd_pci_maps_init);
module_exit(mtd_pci_maps_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Russell King <rmk@arm.linux.org.uk>");
MODULE_DESCRIPTION("Generic PCI map driver");
MODULE_DEVICE_TABLE(pci, mtd_pci_ids);
