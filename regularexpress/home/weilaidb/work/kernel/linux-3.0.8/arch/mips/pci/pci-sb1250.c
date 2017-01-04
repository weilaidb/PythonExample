#define CFGOFFSET(bus, devfn, where) (((bus)<<16) + ((devfn)<<8) + (where))
#define CFGADDR(bus, devfn, where)   CFGOFFSET((bus)->number, (devfn), where)
static void *cfg_space;
#define PCI_BUS_ENABLED	1
#define LDT_BUS_ENABLED	2
#define PCI_DEVICE_MODE	4
static int sb1250_bus_status;
#define PCI_BRIDGE_DEVICE  0
#define LDT_BRIDGE_DEVICE  1
unsigned long ldt_eoi_space;
static inline u32 READCFG32(u32 addr)
static inline void WRITECFG32(u32 addr, u32 data)
int pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
int pcibios_plat_dev_init(struct pci_dev *dev)
static int sb1250_pci_can_access(struct pci_bus *bus, int devfn)
static int sb1250_pcibios_read(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 * val)
static int sb1250_pcibios_write(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
struct pci_ops sb1250_pci_ops = ;
static struct resource sb1250_mem_resource = ;
static struct resource sb1250_io_resource = ;
struct pci_controller sb1250_controller = ;
static int __init sb1250_pcibios_init(void)
arch_initcall(sb1250_pcibios_init);
