static void *pci_config_base;
#define	pci_cfg_addr(bus, devfn, off) (((bus) << 16) | ((devfn) << 8) | (off))
static inline u32 pci_cfg_read_32bit(struct pci_bus *bus, unsigned int devfn,
int where)
static inline void pci_cfg_write_32bit(struct pci_bus *bus, unsigned int devfn,
int where, u32 data)
static int nlm_pcibios_read(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 *val)
static int nlm_pcibios_write(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
struct pci_ops nlm_pci_ops = ;
static struct resource nlm_pci_mem_resource = ;
static struct resource nlm_pci_io_resource = ;
struct pci_controller nlm_pci_controller = ;
int __init pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
int pcibios_plat_dev_init(struct pci_dev *dev)
static int __init pcibios_init(void)
arch_initcall(pcibios_init);
struct pci_fixup pcibios_fixups[] = ;
