#define DRV_NAME "opti621"
#define READ_REG 0
#define WRITE_REG 1
#define CNTRL_REG 3
#define STRAP_REG 5
#define MISC_REG 6
static int reg_base;
static DEFINE_SPINLOCK(opti621_lock);
static void write_reg(u8 value, int reg)
static u8 read_reg(int reg)
static void opti621_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static const struct ide_port_ops opti621_port_ops = ;
static const struct ide_port_info opti621_chipset __devinitdata = ;
static int __devinit opti621_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id opti621_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, opti621_pci_tbl);
static struct pci_driver opti621_pci_driver = ;
static int __init opti621_ide_init(void)
static void __exit opti621_ide_exit(void)
module_init(opti621_ide_init);
module_exit(opti621_ide_exit);
MODULE_AUTHOR("Jaromir Koutek, Jan Harkes, Mark Lord");
MODULE_DESCRIPTION("PCI driver module for Opti621 IDE");
MODULE_LICENSE("GPL");
