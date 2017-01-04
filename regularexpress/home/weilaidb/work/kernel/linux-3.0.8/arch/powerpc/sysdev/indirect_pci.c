static int
indirect_read_config(struct pci_bus *bus, unsigned int devfn, int offset,
int len, u32 *val)
static int
indirect_write_config(struct pci_bus *bus, unsigned int devfn, int offset,
int len, u32 val)
static struct pci_ops indirect_pci_ops =
;
void __init
setup_indirect_pci(struct pci_controller* hose,
resource_size_t cfg_addr,
resource_size_t cfg_data, u32 flags)
