#undef DEBUG_MACE_PCI
static irqreturn_t macepci_error(int irq, void *dev)
extern struct pci_ops mace_pci_ops;
static struct resource mace_pci_mem_resource = ;
static struct resource mace_pci_io_resource = ;
#define MACE_PCI_MEM_OFFSET 0x200000000
static struct resource mace_pci_mem_resource = ;
static struct resource mace_pci_io_resource = ;
#define MACE_PCI_MEM_OFFSET (MACEPCI_LOW_MEMORY - 0x80000000)
static struct pci_controller mace_pci_controller = ;
static int __init mace_init(void)
arch_initcall(mace_init);
