static DEFINE_SPINLOCK(hose_spinlock);
LIST_HEAD(hose_list);
static int global_phb_number;
resource_size_t isa_mem_base;
unsigned int ppc_pci_flags = 0;
static struct dma_map_ops *pci_dma_ops = &dma_direct_ops;
void set_pci_dma_ops(struct dma_map_ops *dma_ops)
struct dma_map_ops *get_pci_dma_ops(void)
EXPORT_SYMBOL(get_pci_dma_ops);
struct pci_controller *pcibios_alloc_controller(struct device_node *dev)
void pcibios_free_controller(struct pci_controller *phb)
static resource_size_t pcibios_io_size(const struct pci_controller *hose)
int pcibios_vaddr_is_ioport(void __iomem *address)
unsigned long pci_address_to_pio(phys_addr_t address)
EXPORT_SYMBOL_GPL(pci_address_to_pio);
int pci_domain_nr(struct pci_bus *bus)
EXPORT_SYMBOL(pci_domain_nr);
struct pci_controller* pci_find_hose_for_OF_device(struct device_node* node)
static ssize_t pci_show_devspec(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(devspec, S_IRUGO, pci_show_devspec, NULL);
int pcibios_add_platform_entries(struct pci_dev *pdev)
char __devinit *pcibios_setup(char *str)
int pci_read_irq_line(struct pci_dev *pci_dev)
EXPORT_SYMBOL(pci_read_irq_line);
static struct resource *__pci_mmap_make_offset(struct pci_dev *dev,
resource_size_t *offset,
enum pci_mmap_state mmap_state)
static pgprot_t __pci_mmap_set_pgprot(struct pci_dev *dev, struct resource *rp,
pgprot_t protection,
enum pci_mmap_state mmap_state,
int write_combine)
pgprot_t pci_phys_mem_access_prot(struct file *file,
unsigned long pfn,
unsigned long size,
pgprot_t prot)
int pci_mmap_page_range(struct pci_dev *dev, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state, int write_combine)
int pci_legacy_read(struct pci_bus *bus, loff_t port, u32 *val, size_t size)
int pci_legacy_write(struct pci_bus *bus, loff_t port, u32 val, size_t size)
int pci_mmap_legacy_page_range(struct pci_bus *bus,
struct vm_area_struct *vma,
enum pci_mmap_state mmap_state)
void pci_resource_to_user(const struct pci_dev *dev, int bar,
const struct resource *rsrc,
resource_size_t *start, resource_size_t *end)
void __devinit pci_process_bridge_OF_ranges(struct pci_controller *hose,
struct device_node *dev,
int primary)
int pci_proc_domain(struct pci_bus *bus)
void pcibios_resource_to_bus(struct pci_dev *dev, struct pci_bus_region *region,
struct resource *res)
EXPORT_SYMBOL(pcibios_resource_to_bus);
void pcibios_bus_to_resource(struct pci_dev *dev, struct resource *res,
struct pci_bus_region *region)
EXPORT_SYMBOL(pcibios_bus_to_resource);
static void __devinit fixup_resource(struct resource *res, struct pci_dev *dev)
static void __devinit pcibios_fixup_resources(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_ANY_ID, PCI_ANY_ID, pcibios_fixup_resources);
static int __devinit pcibios_uninitialized_bridge_resource(struct pci_bus *bus,
struct resource *res)
static void __devinit pcibios_fixup_bridge(struct pci_bus *bus)
void __devinit pcibios_setup_bus_self(struct pci_bus *bus)
void __devinit pcibios_setup_bus_devices(struct pci_bus *bus)
void __devinit pcibios_fixup_bus(struct pci_bus *bus)
EXPORT_SYMBOL(pcibios_fixup_bus);
void __devinit pci_fixup_cardbus(struct pci_bus *bus)
static int skip_isa_ioresource_align(struct pci_dev *dev)
resource_size_t pcibios_align_resource(void *data, const struct resource *res,
resource_size_t size, resource_size_t align)
EXPORT_SYMBOL(pcibios_align_resource);
static int reparent_resources(struct resource *parent,
struct resource *res)
void pcibios_allocate_bus_resources(struct pci_bus *bus)
static inline void __devinit alloc_resource(struct pci_dev *dev, int idx)
static void __init pcibios_allocate_resources(int pass)
static void __init pcibios_reserve_legacy_regions(struct pci_bus *bus)
void __init pcibios_resource_survey(void)
void pcibios_claim_one_bus(struct pci_bus *bus)
void pcibios_finish_adding_to_bus(struct pci_bus *bus)
EXPORT_SYMBOL_GPL(pcibios_finish_adding_to_bus);
int pcibios_enable_device(struct pci_dev *dev, int mask)
void __devinit pcibios_setup_phb_resources(struct pci_controller *hose)
#define NULL_PCI_OP(rw, size, type)					\
static int								\
null_##rw##_config_##size(struct pci_dev *dev, int offset, type val)	\
static int
null_read_config(struct pci_bus *bus, unsigned int devfn, int offset,
int len, u32 *val)
static int
null_write_config(struct pci_bus *bus, unsigned int devfn, int offset,
int len, u32 val)
static struct pci_ops null_pci_ops =
;
static struct pci_bus *
fake_pci_bus(struct pci_controller *hose, int busnr)
#define EARLY_PCI_OP(rw, size, type)					\
int early_##rw##_config_##size(struct pci_controller *hose, int bus,	\
int devfn, int offset, type value)	\
EARLY_PCI_OP(read, byte, u8 *)
EARLY_PCI_OP(read, word, u16 *)
EARLY_PCI_OP(read, dword, u32 *)
EARLY_PCI_OP(write, byte, u8)
EARLY_PCI_OP(write, word, u16)
EARLY_PCI_OP(write, dword, u32)
extern int pci_bus_find_capability (struct pci_bus *bus, unsigned int devfn, int cap);
int early_find_capability(struct pci_controller *hose, int bus, int devfn,
int cap)
void __devinit pcibios_scan_phb(struct pci_controller *hose)
