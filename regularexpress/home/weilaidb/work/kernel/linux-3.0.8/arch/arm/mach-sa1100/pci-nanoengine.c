static DEFINE_SPINLOCK(nano_lock);
static int nanoengine_get_pci_address(struct pci_bus *bus,
unsigned int devfn, int where, unsigned long *address)
static int nanoengine_read_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *val)
static int nanoengine_write_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 val)
static struct pci_ops pci_nano_ops = ;
static int __init pci_nanoengine_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
struct pci_bus * __init pci_nanoengine_scan_bus(int nr, struct pci_sys_data *sys)
static struct resource pci_io_ports = ;
static struct resource pci_non_prefetchable_memory = ;
static struct resource pci_prefetchable_memory = ;
static int __init pci_nanoengine_setup_resources(struct resource **resource)
int __init pci_nanoengine_setup(int nr, struct pci_sys_data *sys)
static struct hw_pci nanoengine_pci __initdata = ;
static int __init nanoengine_pci_init(void)
subsys_initcall(nanoengine_pci_init);
