#define CARDBUS_LATENCY_TIMER	176
#define CARDBUS_RESERVE_BUSNR	3
LIST_HEAD(pci_root_buses);
EXPORT_SYMBOL(pci_root_buses);
static int find_anything(struct device *dev, void *data)
int no_pci_devices(void)
EXPORT_SYMBOL(no_pci_devices);
static void release_pcibus_dev(struct device *dev)
static struct class pcibus_class = ;
static int __init pcibus_class_init(void)
postcore_initcall(pcibus_class_init);
static inline unsigned int pci_calc_resource_flags(unsigned int flags)
static u64 pci_size(u64 base, u64 maxbase, u64 mask)
static inline enum pci_bar_type decode_bar(struct resource *res, u32 bar)
int __pci_read_base(struct pci_dev *dev, enum pci_bar_type type,
struct resource *res, unsigned int pos)
static void pci_read_bases(struct pci_dev *dev, unsigned int howmany, int rom)
static void __devinit pci_read_bridge_io(struct pci_bus *child)
static void __devinit pci_read_bridge_mmio(struct pci_bus *child)
static void __devinit pci_read_bridge_mmio_pref(struct pci_bus *child)
void __devinit pci_read_bridge_bases(struct pci_bus *child)
static struct pci_bus * pci_alloc_bus(void)
static unsigned char pcix_bus_speed[] = ;
static unsigned char pcie_link_speed[] = ;
void pcie_update_link_speed(struct pci_bus *bus, u16 linksta)
EXPORT_SYMBOL_GPL(pcie_update_link_speed);
static unsigned char agp_speeds[] = ;
static enum pci_bus_speed agp_speed(int agp3, int agpstat)
static void pci_set_bus_speed(struct pci_bus *bus)
static struct pci_bus *pci_alloc_child_bus(struct pci_bus *parent,
struct pci_dev *bridge, int busnr)
struct pci_bus *__ref pci_add_new_bus(struct pci_bus *parent, struct pci_dev *dev, int busnr)
static void pci_fixup_parent_subordinate_busnr(struct pci_bus *child, int max)
int __devinit pci_scan_bridge(struct pci_bus *bus, struct pci_dev *dev, int max, int pass)
static void pci_read_irq(struct pci_dev *dev)
void set_pcie_port_type(struct pci_dev *pdev)
void set_pcie_hotplug_bridge(struct pci_dev *pdev)
#define LEGACY_IO_RESOURCE	(IORESOURCE_IO | IORESOURCE_PCI_FIXED)
int pci_setup_device(struct pci_dev *dev)
static void pci_release_capabilities(struct pci_dev *dev)
static void pci_release_dev(struct device *dev)
int pci_cfg_space_size_ext(struct pci_dev *dev)
int pci_cfg_space_size(struct pci_dev *dev)
static void pci_release_bus_bridge_dev(struct device *dev)
struct pci_dev *alloc_pci_dev(void)
EXPORT_SYMBOL(alloc_pci_dev);
static struct pci_dev *pci_scan_device(struct pci_bus *bus, int devfn)
static void pci_init_capabilities(struct pci_dev *dev)
void pci_device_add(struct pci_dev *dev, struct pci_bus *bus)
struct pci_dev *__ref pci_scan_single_device(struct pci_bus *bus, int devfn)
EXPORT_SYMBOL(pci_scan_single_device);
static unsigned next_ari_fn(struct pci_dev *dev, unsigned fn)
static unsigned next_trad_fn(struct pci_dev *dev, unsigned fn)
static unsigned no_next_fn(struct pci_dev *dev, unsigned fn)
static int only_one_child(struct pci_bus *bus)
int pci_scan_slot(struct pci_bus *bus, int devfn)
unsigned int __devinit pci_scan_child_bus(struct pci_bus *bus)
struct pci_bus * pci_create_bus(struct device *parent,
int bus, struct pci_ops *ops, void *sysdata)
struct pci_bus * __devinit pci_scan_bus_parented(struct device *parent,
int bus, struct pci_ops *ops, void *sysdata)
EXPORT_SYMBOL(pci_scan_bus_parented);
unsigned int __ref pci_rescan_bus(struct pci_bus *bus)
EXPORT_SYMBOL_GPL(pci_rescan_bus);
EXPORT_SYMBOL(pci_add_new_bus);
EXPORT_SYMBOL(pci_scan_slot);
EXPORT_SYMBOL(pci_scan_bridge);
EXPORT_SYMBOL_GPL(pci_scan_child_bus);
static int __init pci_sort_bf_cmp(const struct device *d_a, const struct device *d_b)
void __init pci_sort_breadthfirst(void)
