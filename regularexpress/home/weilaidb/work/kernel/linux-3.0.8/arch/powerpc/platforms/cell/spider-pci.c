#undef DEBUG
#define SPIDER_PCI_DISABLE_PREFETCH
struct spiderpci_iowa_private ;
static void spiderpci_io_flush(struct iowa_bus *bus)
#define SPIDER_PCI_MMIO_READ(name, ret)					\
static ret spiderpci_##name(const PCI_IO_ADDR addr)			\
#define SPIDER_PCI_MMIO_READ_STR(name)					\
static void spiderpci_##name(const PCI_IO_ADDR addr, void *buf, 	\
unsigned long count)			\
SPIDER_PCI_MMIO_READ(readb, u8)
SPIDER_PCI_MMIO_READ(readw, u16)
SPIDER_PCI_MMIO_READ(readl, u32)
SPIDER_PCI_MMIO_READ(readq, u64)
SPIDER_PCI_MMIO_READ(readw_be, u16)
SPIDER_PCI_MMIO_READ(readl_be, u32)
SPIDER_PCI_MMIO_READ(readq_be, u64)
SPIDER_PCI_MMIO_READ_STR(readsb)
SPIDER_PCI_MMIO_READ_STR(readsw)
SPIDER_PCI_MMIO_READ_STR(readsl)
static void spiderpci_memcpy_fromio(void *dest, const PCI_IO_ADDR src,
unsigned long n)
static int __init spiderpci_pci_setup_chip(struct pci_controller *phb,
void __iomem *regs)
int __init spiderpci_iowa_init(struct iowa_bus *bus, void *data)
struct ppc_pci_io spiderpci_ops = ;
