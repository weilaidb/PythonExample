#undef DEBUG
unsigned long pci_probe_only = 1;
unsigned long pci_io_base = ISA_IO_BASE;
EXPORT_SYMBOL(pci_io_base);
static int __init pcibios_init(void)
subsys_initcall(pcibios_init);
int pcibios_unmap_io_space(struct pci_bus *bus)
EXPORT_SYMBOL_GPL(pcibios_unmap_io_space);
int __devinit pcibios_map_io_space(struct pci_bus *bus)
EXPORT_SYMBOL_GPL(pcibios_map_io_space);
void __devinit pcibios_setup_phb_io_space(struct pci_controller *hose)
#define IOBASE_BRIDGE_NUMBER	0
#define IOBASE_MEMORY		1
#define IOBASE_IO		2
#define IOBASE_ISA_IO		3
#define IOBASE_ISA_MEM		4
long sys_pciconfig_iobase(long which, unsigned long in_bus,
unsigned long in_devfn)
int pcibus_to_node(struct pci_bus *bus)
EXPORT_SYMBOL(pcibus_to_node);
