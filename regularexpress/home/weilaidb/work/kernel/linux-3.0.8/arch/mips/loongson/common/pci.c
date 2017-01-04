static struct resource loongson_pci_mem_resource = ;
static struct resource loongson_pci_io_resource = ;
static struct pci_controller  loongson_pci_controller = ;
static void __init setup_pcimap(void)
static int __init pcibios_init(void)
arch_initcall(pcibios_init);
