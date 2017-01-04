struct pci_pbm_info *pci_pbm_root = NULL;
int pci_num_pbms = 0;
volatile int pci_poke_in_progress;
volatile int pci_poke_cpu = -1;
volatile int pci_poke_faulted;
static DEFINE_SPINLOCK(pci_poke_lock);
void pci_config_read8(u8 *addr, u8 *ret)
void pci_config_read16(u16 *addr, u16 *ret)
void pci_config_read32(u32 *addr, u32 *ret)
void pci_config_write8(u8 *addr, u8 val)
void pci_config_write16(u16 *addr, u16 val)
void pci_config_write32(u32 *addr, u32 val)
static int ofpci_verbose;
static int __init ofpci_debug(char *str)
__setup("ofpci_debug=", ofpci_debug);
static unsigned long pci_parse_of_flags(u32 addr0)
static void pci_parse_of_addrs(struct platform_device *op,
struct device_node *node,
struct pci_dev *dev)
static struct pci_dev *of_create_pci_dev(struct pci_pbm_info *pbm,
struct device_node *node,
struct pci_bus *bus, int devfn)
static void __devinit apb_calc_first_last(u8 map, u32 *first_p, u32 *last_p)
static void pci_resource_adjust(struct resource *res,
struct resource *root)
static void __devinit pci_cfg_fake_ranges(struct pci_dev *dev,
struct pci_bus *bus,
struct pci_pbm_info *pbm)
static void __devinit apb_fake_ranges(struct pci_dev *dev,
struct pci_bus *bus,
struct pci_pbm_info *pbm)
static void __devinit pci_of_scan_bus(struct pci_pbm_info *pbm,
struct device_node *node,
struct pci_bus *bus);
#define GET_64BIT(prop, i)	((((u64) (prop)[(i)]) << 32) | (prop)[(i)+1])
static void __devinit of_scan_pci_bridge(struct pci_pbm_info *pbm,
struct device_node *node,
struct pci_dev *dev)
static void __devinit pci_of_scan_bus(struct pci_pbm_info *pbm,
struct device_node *node,
struct pci_bus *bus)
static ssize_t
show_pciobppath_attr(struct device * dev, struct device_attribute * attr, char * buf)
static DEVICE_ATTR(obppath, S_IRUSR | S_IRGRP | S_IROTH, show_pciobppath_attr, NULL);
static void __devinit pci_bus_register_of_sysfs(struct pci_bus *bus)
struct pci_bus * __devinit pci_scan_one_pbm(struct pci_pbm_info *pbm,
struct device *parent)
void __devinit pcibios_fixup_bus(struct pci_bus *pbus)
void pcibios_update_irq(struct pci_dev *pdev, int irq)
resource_size_t pcibios_align_resource(void *data, const struct resource *res,
resource_size_t size, resource_size_t align)
int pcibios_enable_device(struct pci_dev *dev, int mask)
void pcibios_resource_to_bus(struct pci_dev *pdev, struct pci_bus_region *region,
struct resource *res)
EXPORT_SYMBOL(pcibios_resource_to_bus);
void pcibios_bus_to_resource(struct pci_dev *pdev, struct resource *res,
struct pci_bus_region *region)
EXPORT_SYMBOL(pcibios_bus_to_resource);
char * __devinit pcibios_setup(char *str)
static int __pci_mmap_make_offset_bus(struct pci_dev *pdev, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state)
static int __pci_mmap_make_offset(struct pci_dev *pdev,
struct vm_area_struct *vma,
enum pci_mmap_state mmap_state)
static void __pci_mmap_set_flags(struct pci_dev *dev, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state)
static void __pci_mmap_set_pgprot(struct pci_dev *dev, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state)
int pci_mmap_page_range(struct pci_dev *dev, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state,
int write_combine)
int pcibus_to_node(struct pci_bus *pbus)
EXPORT_SYMBOL(pcibus_to_node);
int pci_domain_nr(struct pci_bus *pbus)
EXPORT_SYMBOL(pci_domain_nr);
int arch_setup_msi_irq(struct pci_dev *pdev, struct msi_desc *desc)
void arch_teardown_msi_irq(unsigned int irq)
struct device_node *pci_device_to_OF_node(struct pci_dev *pdev)
EXPORT_SYMBOL(pci_device_to_OF_node);
static void ali_sound_dma_hack(struct pci_dev *pdev, int set_bit)
int pci64_dma_supported(struct pci_dev *pdev, u64 device_mask)
void pci_resource_to_user(const struct pci_dev *pdev, int bar,
const struct resource *rp, resource_size_t *start,
resource_size_t *end)
static int __init pcibios_init(void)
subsys_initcall(pcibios_init);
static void __devinit pci_bus_slot_names(struct device_node *node,
struct pci_bus *bus)
static int __init of_pci_slot_init(void)
module_init(of_pci_slot_init);
