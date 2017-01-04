static int sysfs_initialized;
#define pci_config_attr(field, format_string)				\
static ssize_t								\
field##_show(struct device *dev, struct device_attribute *attr, char *buf)				\
pci_config_attr(vendor, "0x%04x\n");
pci_config_attr(device, "0x%04x\n");
pci_config_attr(subsystem_vendor, "0x%04x\n");
pci_config_attr(subsystem_device, "0x%04x\n");
pci_config_attr(class, "0x%06x\n");
pci_config_attr(irq, "%u\n");
static ssize_t broken_parity_status_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t broken_parity_status_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t local_cpus_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t local_cpulist_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t pci_bus_show_cpuaffinity(struct device *dev,
int type,
struct device_attribute *attr,
char *buf)
static inline ssize_t pci_bus_show_cpumaskaffinity(struct device *dev,
struct device_attribute *attr,
char *buf)
static inline ssize_t pci_bus_show_cpulistaffinity(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t
resource_show(struct device * dev, struct device_attribute *attr, char * buf)
static ssize_t modalias_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t is_enabled_store(struct device *dev,
struct device_attribute *attr, const char *buf,
size_t count)
static ssize_t is_enabled_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
numa_node_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
dma_mask_bits_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
consistent_dma_mask_bits_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
msi_bus_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
msi_bus_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEFINE_MUTEX(pci_remove_rescan_mutex);
static ssize_t bus_rescan_store(struct bus_type *bus, const char *buf,
size_t count)
struct bus_attribute pci_bus_attrs[] = ;
static ssize_t
dev_rescan_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static void remove_callback(struct device *dev)
static ssize_t
remove_store(struct device *dev, struct device_attribute *dummy,
const char *buf, size_t count)
static ssize_t
dev_bus_rescan_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
struct device_attribute pci_dev_attrs[] = ;
struct device_attribute pcibus_dev_attrs[] = ;
static ssize_t
boot_vga_show(struct device *dev, struct device_attribute *attr, char *buf)
struct device_attribute vga_attr = __ATTR_RO(boot_vga);
static ssize_t
pci_read_config(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t
pci_write_config(struct file* filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t
read_vpd_attr(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t
write_vpd_attr(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t
pci_read_legacy_io(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t
pci_write_legacy_io(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static int
pci_mmap_legacy_mem(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
struct vm_area_struct *vma)
static int
pci_mmap_legacy_io(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
struct vm_area_struct *vma)
void __weak
pci_adjust_legacy_attr(struct pci_bus *b, enum pci_mmap_state mmap_type)
void pci_create_legacy_files(struct pci_bus *b)
void pci_remove_legacy_files(struct pci_bus *b)
int pci_mmap_fits(struct pci_dev *pdev, int resno, struct vm_area_struct *vma,
enum pci_mmap_api mmap_api)
static int
pci_mmap_resource(struct kobject *kobj, struct bin_attribute *attr,
struct vm_area_struct *vma, int write_combine)
static int
pci_mmap_resource_uc(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
struct vm_area_struct *vma)
static int
pci_mmap_resource_wc(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
struct vm_area_struct *vma)
static ssize_t
pci_resource_io(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr, char *buf,
loff_t off, size_t count, bool write)
static ssize_t
pci_read_resource_io(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t
pci_write_resource_io(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static void
pci_remove_resource_files(struct pci_dev *pdev)
static int pci_create_attr(struct pci_dev *pdev, int num, int write_combine)
static int pci_create_resource_files(struct pci_dev *pdev)
int __weak pci_create_resource_files(struct pci_dev *dev)
void __weak pci_remove_resource_files(struct pci_dev *dev)
static ssize_t
pci_write_rom(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t
pci_read_rom(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute pci_config_attr = ;
static struct bin_attribute pcie_config_attr = ;
int __attribute__ ((weak)) pcibios_add_platform_entries(struct pci_dev *dev)
static ssize_t reset_store(struct device *dev,
struct device_attribute *attr, const char *buf,
size_t count)
static struct device_attribute reset_attr = __ATTR(reset, 0200, NULL, reset_store);
static int pci_create_capabilities_sysfs(struct pci_dev *dev)
int __must_check pci_create_sysfs_dev_files (struct pci_dev *pdev)
static void pci_remove_capabilities_sysfs(struct pci_dev *dev)
void pci_remove_sysfs_dev_files(struct pci_dev *pdev)
static int __init pci_sysfs_init(void)
late_initcall(pci_sysfs_init);
