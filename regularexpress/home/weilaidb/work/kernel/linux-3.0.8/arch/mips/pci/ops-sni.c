static int set_config_address(unsigned int busno, unsigned int devfn, int reg)
static int pcimt_read(struct pci_bus *bus, unsigned int devfn, int reg,
int size, u32 * val)
static int pcimt_write(struct pci_bus *bus, unsigned int devfn, int reg,
int size, u32 val)
struct pci_ops sni_pcimt_ops = ;
static int pcit_set_config_address(unsigned int busno, unsigned int devfn, int reg)
static int pcit_read(struct pci_bus *bus, unsigned int devfn, int reg,
int size, u32 * val)
static int pcit_write(struct pci_bus *bus, unsigned int devfn, int reg,
int size, u32 val)
struct pci_ops sni_pcit_ops = ;
