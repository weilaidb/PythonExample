#undef DEBUG
#define IOWA_MAX_BUS	8
static struct iowa_bus iowa_busses[IOWA_MAX_BUS];
static unsigned int iowa_bus_count;
static struct iowa_bus *iowa_pci_find(unsigned long vaddr, unsigned long paddr)
struct iowa_bus *iowa_mem_find_bus(const PCI_IO_ADDR addr)
struct iowa_bus *iowa_pio_find_bus(unsigned long port)
#define DEF_PCI_AC_RET(name, ret, at, al, space, aa)		\
static ret iowa_##name at					\
#define DEF_PCI_AC_NORET(name, at, al, space, aa)		\
static void iowa_##name at					\
#undef DEF_PCI_AC_RET
#undef DEF_PCI_AC_NORET
static const struct ppc_pci_io __devinitconst iowa_pci_io = ;
static void __iomem *iowa_ioremap(phys_addr_t addr, unsigned long size,
unsigned long flags, void *caller)
static void __devinit io_workaround_init(void)
void __devinit iowa_register_bus(struct pci_controller *phb,
struct ppc_pci_io *ops,
int (*initfunc)(struct iowa_bus *, void *), void *data)
