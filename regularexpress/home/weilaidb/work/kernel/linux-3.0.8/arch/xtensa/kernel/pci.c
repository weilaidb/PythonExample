#undef DEBUG
#define DBG(x...) printk(x)
#define DBG(x...)
struct pci_controller* pci_ctrl_head;
struct pci_controller** pci_ctrl_tail = &pci_ctrl_head;
static int pci_bus_count;
resource_size_t
pcibios_align_resource(void *data, const struct resource *res,
resource_size_t size, resource_size_t align)
int
pcibios_enable_resources(struct pci_dev *dev, int mask)
struct pci_controller * __init pcibios_alloc_controller(void)
static int __init pcibios_init(void)
subsys_initcall(pcibios_init);
void __init pcibios_fixup_bus(struct pci_bus *bus)
char __init *pcibios_setup(char *str)
void __init
pcibios_update_irq(struct pci_dev *dev, int irq)
int pcibios_enable_device(struct pci_dev *dev, int mask)
int
pci_controller_num(struct pci_dev *dev)
static __inline__ int
__pci_mmap_make_offset(struct pci_dev *dev, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state)
static __inline__ void
__pci_mmap_set_pgprot(struct pci_dev *dev, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state, int write_combine)
int pci_mmap_page_range(struct pci_dev *dev, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state,
int write_combine)
