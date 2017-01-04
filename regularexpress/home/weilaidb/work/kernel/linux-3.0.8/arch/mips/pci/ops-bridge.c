static u32 emulate_ioc3_cfg(int where, int size)
static int pci_conf0_read_config(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 * value)
static int pci_conf1_read_config(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 * value)
static int pci_read_config(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 * value)
static int pci_conf0_write_config(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 value)
static int pci_conf1_write_config(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 value)
static int pci_write_config(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 value)
struct pci_ops bridge_pci_ops = ;
