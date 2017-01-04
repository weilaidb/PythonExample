enum ;
static int sh7786_pcie_config_access(unsigned char access_type,
struct pci_bus *bus, unsigned int devfn, int where, u32 *data)
static int sh7786_pcie_read(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 *val)
static int sh7786_pcie_write(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
struct pci_ops sh7786_pci_ops = ;
