#define DRV_NAME "vr_nor"
struct vr_nor_mtd ;
#define EXP_CSR_MBAR 0
#define EXP_WIN_MBAR 1
#define CS0_SIZE 0x04000000
#define CS0_START 0x0
#define EXP_TIMING_CS0 0x00
#define TIMING_CS_EN		(1 << 31)
#define TIMING_BOOT_ACCEL_DIS	(1 <<  8)
#define TIMING_WR_EN		(1 <<  1)
#define TIMING_BYTE_EN		(1 <<  0)
#define TIMING_MASK		0x3FFF0000
static void __devexit vr_nor_destroy_partitions(struct vr_nor_mtd *p)
static int __devinit vr_nor_init_partitions(struct vr_nor_mtd *p)
static void __devexit vr_nor_destroy_mtd_setup(struct vr_nor_mtd *p)
static int __devinit vr_nor_mtd_setup(struct vr_nor_mtd *p)
static void __devexit vr_nor_destroy_maps(struct vr_nor_mtd *p)
static int __devinit vr_nor_init_maps(struct vr_nor_mtd *p)
static struct pci_device_id vr_nor_pci_ids[] = ;
static void __devexit vr_nor_pci_remove(struct pci_dev *dev)
static int __devinit
vr_nor_pci_probe(struct pci_dev *dev, const struct pci_device_id *id)
static struct pci_driver vr_nor_pci_driver = ;
static int __init vr_nor_mtd_init(void)
static void __exit vr_nor_mtd_exit(void)
module_init(vr_nor_mtd_init);
module_exit(vr_nor_mtd_exit);
MODULE_AUTHOR("Andy Lowe");
MODULE_DESCRIPTION("MTD map driver for NOR flash on Intel Vermilion Range");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, vr_nor_pci_ids);
