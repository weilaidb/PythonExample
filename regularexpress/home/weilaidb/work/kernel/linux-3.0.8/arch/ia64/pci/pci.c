#define PCI_SAL_ADDRESS(seg, bus, devfn, reg)		\
(((u64) seg << 24) | (bus << 16) | (devfn << 8) | (reg))
#define PCI_SAL_EXT_ADDRESS(seg, bus, devfn, reg)	\
(((u64) seg << 28) | (bus << 20) | (devfn << 12) | (reg))
int raw_pci_read(unsigned int seg, unsigned int bus, unsigned int devfn,
int reg, int len, u32 *value)
int raw_pci_write(unsigned int seg, unsigned int bus, unsigned int devfn,
int reg, int len, u32 value)
static int pci_read(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *value)
static int pci_write(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 value)
struct pci_ops pci_root_ops = ;
static struct pci_controller * __devinit
alloc_pci_controller (int seg)
struct pci_root_info ;
static unsigned int
new_space (u64 phys_base, int sparse)
static u64 __devinit
add_io_space (struct pci_root_info *info, struct acpi_resource_address64 *addr)
static acpi_status __devinit resource_to_window(struct acpi_resource *resource,
struct acpi_resource_address64 *addr)
static acpi_status __devinit
count_window (struct acpi_resource *resource, void *data)
static __devinit acpi_status add_window(struct acpi_resource *res, void *data)
static void __devinit
pcibios_setup_root_windows(struct pci_bus *bus, struct pci_controller *ctrl)
struct pci_bus * __devinit
pci_acpi_scan_root(struct acpi_pci_root *root)
void pcibios_resource_to_bus(struct pci_dev *dev,
struct pci_bus_region *region, struct resource *res)
EXPORT_SYMBOL(pcibios_resource_to_bus);
void pcibios_bus_to_resource(struct pci_dev *dev,
struct resource *res, struct pci_bus_region *region)
EXPORT_SYMBOL(pcibios_bus_to_resource);
static int __devinit is_valid_resource(struct pci_dev *dev, int idx)
static void __devinit
pcibios_fixup_resources(struct pci_dev *dev, int start, int limit)
void __devinit pcibios_fixup_device_resources(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(pcibios_fixup_device_resources);
static void __devinit pcibios_fixup_bridge_resources(struct pci_dev *dev)
void __devinit
pcibios_fixup_bus (struct pci_bus *b)
void __devinit
pcibios_update_irq (struct pci_dev *dev, int irq)
int
pcibios_enable_device (struct pci_dev *dev, int mask)
void
pcibios_disable_device (struct pci_dev *dev)
resource_size_t
pcibios_align_resource (void *data, const struct resource *res,
resource_size_t size, resource_size_t align)
char * __init
pcibios_setup (char *str)
int
pci_mmap_page_range (struct pci_dev *dev, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state, int write_combine)
char *ia64_pci_get_legacy_mem(struct pci_bus *bus)
int
pci_mmap_legacy_page_range(struct pci_bus *bus, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state)
int ia64_pci_legacy_read(struct pci_bus *bus, u16 port, u32 *val, u8 size)
int ia64_pci_legacy_write(struct pci_bus *bus, u16 port, u32 val, u8 size)
static void __init set_pci_dfl_cacheline_size(void)
u64 ia64_dma_get_required_mask(struct device *dev)
EXPORT_SYMBOL_GPL(ia64_dma_get_required_mask);
u64 dma_get_required_mask(struct device *dev)
EXPORT_SYMBOL_GPL(dma_get_required_mask);
static int __init pcibios_init(void)
subsys_initcall(pcibios_init);
