#define CFGOFFSET(bus, devfn, where) (((bus)<<16)+((devfn)<<8)+(where))
#define CFGADDR(bus, devfn, where)   CFGOFFSET((bus)->number, (devfn), where)
static void *cfg_space;
#define PCI_BUS_ENABLED	1
#define PCI_DEVICE_MODE	2
static int bcm1480_bus_status;
#define PCI_BRIDGE_DEVICE  0
static inline u32 READCFG32(u32 addr)
static inline void WRITECFG32(u32 addr, u32 data)
int pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
int pcibios_plat_dev_init(struct pci_dev *dev)
static int bcm1480_pci_can_access(struct pci_bus *bus, int devfn)
static int bcm1480_pcibios_read(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 * val)
static int bcm1480_pcibios_write(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
struct pci_ops bcm1480_pci_ops = ;
static struct resource bcm1480_mem_resource = ;
static struct resource bcm1480_io_resource = ;
struct pci_controller bcm1480_controller = ;
static int __init bcm1480_pcibios_init(void)
arch_initcall(bcm1480_pcibios_init);
