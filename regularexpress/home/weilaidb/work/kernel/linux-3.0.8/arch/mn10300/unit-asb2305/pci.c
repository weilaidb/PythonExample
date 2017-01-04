unsigned int pci_probe = 1;
int pcibios_last_bus = -1;
struct pci_bus *pci_root_bus;
struct pci_ops *pci_root_ops;
static struct resource pci_ioport_resource = ;
static struct resource pci_iomem_resource = ;
#define CONFIG_CMD(bus, devfn, where) \
(0x80000000 | (bus->number << 16) | (devfn << 8) | (where & ~3))
#define MEM_PAGING_REG	(*(volatile __u32 *) 0xBFFFFFF4)
#define CONFIG_ADDRESS	(*(volatile __u32 *) 0xBFFFFFF8)
#define CONFIG_DATAL(X)	(*(volatile __u32 *) 0xBFFFFFFC)
#define CONFIG_DATAW(X)	(*(volatile __u16 *) (0xBFFFFFFC + ((X) & 2)))
#define CONFIG_DATAB(X)	(*(volatile __u8  *) (0xBFFFFFFC + ((X) & 3)))
#define BRIDGEREGB(X)	(*(volatile __u8  *) (0xBE040000 + (X)))
#define BRIDGEREGW(X)	(*(volatile __u16 *) (0xBE040000 + (X)))
#define BRIDGEREGL(X)	(*(volatile __u32 *) (0xBE040000 + (X)))
static inline int __query(const struct pci_bus *bus, unsigned int devfn)
void pcibios_resource_to_bus(struct pci_dev *dev, struct pci_bus_region *region,
struct resource *res)
EXPORT_SYMBOL(pcibios_resource_to_bus);
void pcibios_bus_to_resource(struct pci_dev *dev, struct resource *res,
struct pci_bus_region *region)
EXPORT_SYMBOL(pcibios_bus_to_resource);
static int pci_ampci_read_config_byte(struct pci_bus *bus, unsigned int devfn,
int where, u32 *_value)
static int pci_ampci_read_config_word(struct pci_bus *bus, unsigned int devfn,
int where, u32 *_value)
static int pci_ampci_read_config_dword(struct pci_bus *bus, unsigned int devfn,
int where, u32 *_value)
static int pci_ampci_write_config_byte(struct pci_bus *bus, unsigned int devfn,
int where, u8 value)
static int pci_ampci_write_config_word(struct pci_bus *bus, unsigned int devfn,
int where, u16 value)
static int pci_ampci_write_config_dword(struct pci_bus *bus, unsigned int devfn,
int where, u32 value)
static int pci_ampci_read_config(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 *val)
static int pci_ampci_write_config(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
static struct pci_ops pci_direct_ampci = ;
static int __init pci_sanity_check(struct pci_ops *o)
static int __init pci_check_direct(void)
static int __devinit is_valid_resource(struct pci_dev *dev, int idx)
static void __devinit pcibios_fixup_device_resources(struct pci_dev *dev)
void __devinit pcibios_fixup_bus(struct pci_bus *bus)
static int __init pcibios_init(void)
arch_initcall(pcibios_init);
char *__init pcibios_setup(char *str)
int pcibios_enable_device(struct pci_dev *dev, int mask)
static void __init unit_disable_pcnet(struct pci_bus *bus, struct pci_ops *o)
asmlinkage void __init unit_pci_init(void)
