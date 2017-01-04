static struct resource pci_io_resource = ;
static struct resource pci_mem_resource = ;
extern struct pci_ops pnx8550_pci_ops;
static struct pci_controller pnx8550_controller = ;
static inline unsigned long get_system_mem_size(void)
static int __init pnx8550_pci_setup(void)
arch_initcall(pnx8550_pci_setup);
