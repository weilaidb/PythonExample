unsigned int __nongpreldata pci_probe = 1;
int  __nongpreldata pcibios_last_bus = -1;
struct pci_bus *__nongpreldata pci_root_bus;
struct pci_ops *__nongpreldata pci_root_ops;
static struct resource pci_ioport_resource = ;
static struct resource pci_iomem_resource = ;
#define CONFIG_CMD(bus, dev, where) \
(0x80000000 | (bus->number << 16) | (devfn << 8) | (where & ~3))
#define __set_PciCfgAddr(A) writel((A), (volatile void __iomem *) __region_CS1 + 0x80)
#define __get_PciCfgDataB(A) readb((volatile void __iomem *) __region_CS1 + 0x88 + ((A) & 3))
#define __get_PciCfgDataW(A) readw((volatile void __iomem *) __region_CS1 + 0x88 + ((A) & 2))
#define __get_PciCfgDataL(A) readl((volatile void __iomem *) __region_CS1 + 0x88)
#define __set_PciCfgDataB(A,V) \
writeb((V), (volatile void __iomem *) __region_CS1 + 0x88 + (3 - ((A) & 3)))
#define __set_PciCfgDataW(A,V) \
writew((V), (volatile void __iomem *) __region_CS1 + 0x88 + (2 - ((A) & 2)))
#define __set_PciCfgDataL(A,V) \
writel((V), (volatile void __iomem *) __region_CS1 + 0x88)
#define __get_PciBridgeDataB(A) readb((volatile void __iomem *) __region_CS1 + 0x800 + (A))
#define __get_PciBridgeDataW(A) readw((volatile void __iomem *) __region_CS1 + 0x800 + (A))
#define __get_PciBridgeDataL(A) readl((volatile void __iomem *) __region_CS1 + 0x800 + (A))
#define __set_PciBridgeDataB(A,V) writeb((V), (volatile void __iomem *) __region_CS1 + 0x800 + (A))
#define __set_PciBridgeDataW(A,V) writew((V), (volatile void __iomem *) __region_CS1 + 0x800 + (A))
#define __set_PciBridgeDataL(A,V) writel((V), (volatile void __iomem *) __region_CS1 + 0x800 + (A))
static inline int __query(const struct pci_dev *dev)
static int pci_frv_read_config(struct pci_bus *bus, unsigned int devfn, int where, int size,
u32 *val)
static int pci_frv_write_config(struct pci_bus *bus, unsigned int devfn, int where, int size,
u32 value)
static struct pci_ops pci_direct_frv = ;
static int __init pci_sanity_check(struct pci_ops *o)
static struct pci_ops * __init pci_check_direct(void)
static void __init pcibios_fixup_peer_bridges(void)
static void __init pci_fixup_umc_ide(struct pci_dev *d)
static void __init pci_fixup_ide_bases(struct pci_dev *d)
static void __init pci_fixup_ide_trash(struct pci_dev *d)
static void __devinit  pci_fixup_latency(struct pci_dev *d)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_UMC, PCI_DEVICE_ID_UMC_UM8886BF, pci_fixup_umc_ide);
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_SI, PCI_DEVICE_ID_SI_5513, pci_fixup_ide_trash);
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_SI, PCI_DEVICE_ID_SI_5597, pci_fixup_latency);
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_SI, PCI_DEVICE_ID_SI_5598, pci_fixup_latency);
DECLARE_PCI_FIXUP_HEADER(PCI_ANY_ID, PCI_ANY_ID, pci_fixup_ide_bases);
void __init pcibios_fixup_bus(struct pci_bus *bus)
int __init pcibios_init(void)
arch_initcall(pcibios_init);
char * __init pcibios_setup(char *str)
int pcibios_enable_device(struct pci_dev *dev, int mask)
