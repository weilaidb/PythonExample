struct class *ide_port_class;
int ide_device_get(ide_drive_t *drive)
EXPORT_SYMBOL_GPL(ide_device_get);
void ide_device_put(ide_drive_t *drive)
EXPORT_SYMBOL_GPL(ide_device_put);
static int ide_bus_match(struct device *dev, struct device_driver *drv)
static int ide_uevent(struct device *dev, struct kobj_uevent_env *env)
static int generic_ide_probe(struct device *dev)
static int generic_ide_remove(struct device *dev)
static void generic_ide_shutdown(struct device *dev)
struct bus_type ide_bus_type = ;
EXPORT_SYMBOL_GPL(ide_bus_type);
int ide_vlb_clk;
EXPORT_SYMBOL_GPL(ide_vlb_clk);
module_param_named(vlb_clock, ide_vlb_clk, int, 0);
MODULE_PARM_DESC(vlb_clock, "VLB clock frequency (in MHz)");
int ide_pci_clk;
EXPORT_SYMBOL_GPL(ide_pci_clk);
module_param_named(pci_clock, ide_pci_clk, int, 0);
MODULE_PARM_DESC(pci_clock, "PCI bus clock frequency (in MHz)");
static int ide_set_dev_param_mask(const char *s, const struct kernel_param *kp)
static struct kernel_param_ops param_ops_ide_dev_mask = ;
#define param_check_ide_dev_mask(name, p) param_check_uint(name, p)
static unsigned int ide_nodma;
module_param_named(nodma, ide_nodma, ide_dev_mask, 0);
MODULE_PARM_DESC(nodma, "disallow DMA for a device");
static unsigned int ide_noflush;
module_param_named(noflush, ide_noflush, ide_dev_mask, 0);
MODULE_PARM_DESC(noflush, "disable flush requests for a device");
static unsigned int ide_nohpa;
module_param_named(nohpa, ide_nohpa, ide_dev_mask, 0);
MODULE_PARM_DESC(nohpa, "disable Host Protected Area for a device");
static unsigned int ide_noprobe;
module_param_named(noprobe, ide_noprobe, ide_dev_mask, 0);
MODULE_PARM_DESC(noprobe, "skip probing for a device");
static unsigned int ide_nowerr;
module_param_named(nowerr, ide_nowerr, ide_dev_mask, 0);
MODULE_PARM_DESC(nowerr, "ignore the ATA_DF bit for a device");
static unsigned int ide_cdroms;
module_param_named(cdrom, ide_cdroms, ide_dev_mask, 0);
MODULE_PARM_DESC(cdrom, "force device as a CD-ROM");
struct chs_geom ;
static unsigned int ide_disks;
static struct chs_geom ide_disks_chs[MAX_HWIFS * MAX_DRIVES];
static int ide_set_disk_chs(const char *str, struct kernel_param *kp)
module_param_call(chs, ide_set_disk_chs, NULL, NULL, 0);
MODULE_PARM_DESC(chs, "force device as a disk (using CHS)");
static void ide_dev_apply_params(ide_drive_t *drive, u8 unit)
static unsigned int ide_ignore_cable;
static int ide_set_ignore_cable(const char *s, struct kernel_param *kp)
module_param_call(ignore_cable, ide_set_ignore_cable, NULL, NULL, 0);
MODULE_PARM_DESC(ignore_cable, "ignore cable detection");
void ide_port_apply_params(ide_hwif_t *hwif)
static int __init ide_init(void)
static void __exit ide_exit(void)
module_init(ide_init);
module_exit(ide_exit);
MODULE_LICENSE("GPL");
