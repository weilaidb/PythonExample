#define CFGOFFSET(bus, devfn, where) (((bus)<<16)+((devfn)<<8)+(where))
#define CFGADDR(bus, devfn, where)   CFGOFFSET((bus)->number, (devfn), where)
static void *ht_cfg_space;
#define PCI_BUS_ENABLED	1
#define PCI_DEVICE_MODE	2
static int bcm1480ht_bus_status;
#define PCI_BRIDGE_DEVICE  0
#define HT_BRIDGE_DEVICE   1
unsigned long ht_eoi_space;
static inline u32 READCFG32(u32 addr)
static inline void WRITECFG32(u32 addr, u32 data)
static int bcm1480ht_can_access(struct pci_bus *bus, int devfn)
static int bcm1480ht_pcibios_read(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 * val)
static int bcm1480ht_pcibios_write(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
static int bcm1480ht_pcibios_get_busno(void)
struct pci_ops bcm1480ht_pci_ops = ;
static struct resource bcm1480ht_mem_resource = ;
static struct resource bcm1480ht_io_resource = ;
struct pci_controller bcm1480ht_controller = ;
static int __init bcm1480ht_pcibios_init(void)
arch_initcall(bcm1480ht_pcibios_init);
