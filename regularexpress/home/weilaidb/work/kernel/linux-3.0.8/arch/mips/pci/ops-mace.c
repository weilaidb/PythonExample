static inline int mkaddr(struct pci_bus *bus, unsigned int devfn,
unsigned int reg)
static int
mace_pci_read_config(struct pci_bus *bus, unsigned int devfn,
int reg, int size, u32 *val)
static int
mace_pci_write_config(struct pci_bus *bus, unsigned int devfn,
int reg, int size, u32 val)
struct pci_ops mace_pci_ops = ;
