static struct resource pci_io_resource = ;
static struct resource pci_mem_resource = ;
extern struct pci_ops au1x_pci_ops;
static struct pci_controller au1x_controller = ;
#if defined(CONFIG_SOC_AU1500) || defined(CONFIG_SOC_AU1550)
static unsigned long virt_io_addr;
static int __init au1x_pci_setup(void)
arch_initcall(au1x_pci_setup);
