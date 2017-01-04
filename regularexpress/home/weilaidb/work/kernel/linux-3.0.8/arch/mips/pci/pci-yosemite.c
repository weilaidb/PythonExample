extern struct pci_ops titan_pci_ops;
static struct resource py_mem_resource = ;
#define TITAN_IO_SIZE	0x0000ffffUL
#define TITAN_IO_BASE	0xe8000000UL
static struct resource py_io_resource = ;
static struct pci_controller py_controller = ;
static char ioremap_failed[] __initdata = "Could not ioremap I/O port range";
static int __init pmc_yosemite_setup(void)
arch_initcall(pmc_yosemite_setup);
