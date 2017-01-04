static struct resource pci_io_resource = ;
static struct resource pci_mem_resource = ;
extern struct pci_ops emma2rh_pci_ops;
static struct pci_controller emma2rh_pci_controller = ;
static void __init emma2rh_pci_init(void)
static int __init emma2rh_pci_setup(void)
arch_initcall(emma2rh_pci_setup);
