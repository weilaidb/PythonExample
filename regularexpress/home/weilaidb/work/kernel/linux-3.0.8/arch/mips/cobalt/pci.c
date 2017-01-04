extern struct pci_ops gt64xxx_pci0_ops;
static struct resource cobalt_mem_resource = ;
static struct resource cobalt_io_resource = ;
static struct pci_controller cobalt_pci_controller = ;
static int __init cobalt_pci_init(void)
arch_initcall(cobalt_pci_init);
