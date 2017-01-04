#define PCI_HEADER_TYPE_INVALID		0x7f
#define MV64X60_VAL_LEN_MAX		11
#define MV64X60_PCICFG_CPCI_HOTSWAP	0x68
static ssize_t mv64x60_hs_reg_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t mv64x60_hs_reg_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static struct bin_attribute mv64x60_hs_reg_attr = ;
static int __init mv64x60_sysfs_init(void)
subsys_initcall(mv64x60_sysfs_init);
static void __init mv64x60_pci_fixup_early(struct pci_dev *dev)
DECLARE_PCI_FIXUP_EARLY(PCI_VENDOR_ID_MARVELL, PCI_DEVICE_ID_MARVELL_MV64360,
mv64x60_pci_fixup_early);
DECLARE_PCI_FIXUP_EARLY(PCI_VENDOR_ID_MARVELL, PCI_DEVICE_ID_MARVELL_MV64460,
mv64x60_pci_fixup_early);
static int __init mv64x60_add_bridge(struct device_node *dev)
void __init mv64x60_pci_init(void)
