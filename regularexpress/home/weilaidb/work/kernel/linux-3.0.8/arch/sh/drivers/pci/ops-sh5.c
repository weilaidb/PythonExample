static int sh5pci_read(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *val)
static int sh5pci_write(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 val)
struct pci_ops sh5_pci_ops = ;
