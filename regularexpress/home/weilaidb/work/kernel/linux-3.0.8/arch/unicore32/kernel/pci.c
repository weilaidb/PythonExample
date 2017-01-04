static int debug_pci;
static int use_firmware;
#define CONFIG_CMD(bus, devfn, where)	\
(0x80000000 | (bus->number << 16) | (devfn << 8) | (where & ~3))
static int
puv3_read_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *value)
static int
puv3_write_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 value)
struct pci_ops pci_puv3_ops = ;
void pci_puv3_preinit(void)
static int __init pci_puv3_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
void __init puv3_pci_adjust_zones(unsigned long *zone_size,
unsigned long *zhole_size)
void __devinit pcibios_update_irq(struct pci_dev *dev, int irq)
static inline int pdev_bad_for_parity(struct pci_dev *dev)
void __devinit pcibios_fixup_bus(struct pci_bus *bus)
EXPORT_SYMBOL(pcibios_fixup_bus);
static int __init pci_common_init(void)
subsys_initcall(pci_common_init);
char * __devinit pcibios_setup(char *str)
resource_size_t pcibios_align_resource(void *data, const struct resource *res,
resource_size_t size, resource_size_t align)
int pcibios_enable_device(struct pci_dev *dev, int mask)
int pci_mmap_page_range(struct pci_dev *dev, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state, int write_combine)
