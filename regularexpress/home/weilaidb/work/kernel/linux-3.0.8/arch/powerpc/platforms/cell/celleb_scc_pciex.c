#undef DEBUG
#define PEX_IN(base, off)	in_be32((void __iomem *)(base) + (off))
#define PEX_OUT(base, off, data) out_be32((void __iomem *)(base) + (off), (data))
static void scc_pciex_io_flush(struct iowa_bus *bus)
#define PCIEX_MMIO_READ(name, ret)					\
static ret scc_pciex_##name(const PCI_IO_ADDR addr)			\
#define PCIEX_MMIO_READ_STR(name)					\
static void scc_pciex_##name(const PCI_IO_ADDR addr, void *buf,		\
unsigned long count)			\
PCIEX_MMIO_READ(readb, u8)
PCIEX_MMIO_READ(readw, u16)
PCIEX_MMIO_READ(readl, u32)
PCIEX_MMIO_READ(readq, u64)
PCIEX_MMIO_READ(readw_be, u16)
PCIEX_MMIO_READ(readl_be, u32)
PCIEX_MMIO_READ(readq_be, u64)
PCIEX_MMIO_READ_STR(readsb)
PCIEX_MMIO_READ_STR(readsw)
PCIEX_MMIO_READ_STR(readsl)
static void scc_pciex_memcpy_fromio(void *dest, const PCI_IO_ADDR src,
unsigned long n)
static inline unsigned long get_bus_address(struct pci_controller *phb,
unsigned long port)
static u32 scc_pciex_read_port(struct pci_controller *phb,
unsigned long port, int size)
static void scc_pciex_write_port(struct pci_controller *phb,
unsigned long port, int size, u32 val)
static u8 __scc_pciex_inb(struct pci_controller *phb, unsigned long port)
static u16 __scc_pciex_inw(struct pci_controller *phb, unsigned long port)
static u32 __scc_pciex_inl(struct pci_controller *phb, unsigned long port)
static void __scc_pciex_outb(struct pci_controller *phb,
u8 val, unsigned long port)
static void __scc_pciex_outw(struct pci_controller *phb,
u16 val, unsigned long port)
static void __scc_pciex_outl(struct pci_controller *phb,
u32 val, unsigned long port)
#define PCIEX_PIO_FUNC(size, name)					\
static u##size scc_pciex_in##name(unsigned long port)			\
\
static void scc_pciex_ins##name(unsigned long p, void *b, unsigned long c) \
\
static void scc_pciex_out##name(u##size val, unsigned long port)	\
\
static void scc_pciex_outs##name(unsigned long p, const void *b,	\
unsigned long c)			\
#define __le8 u8
#define cpu_to_le8(x) (x)
#define le8_to_cpu(x) (x)
PCIEX_PIO_FUNC(8, b)
PCIEX_PIO_FUNC(16, w)
PCIEX_PIO_FUNC(32, l)
static struct ppc_pci_io scc_pciex_ops = ;
static int __init scc_pciex_iowa_init(struct iowa_bus *bus, void *data)
#define MK_PEXDADRS(bus_no, dev_no, func_no, addr) \
((uint32_t)(((addr) & ~0x3UL) | \
((bus_no) << PEXDADRS_BUSNO_SHIFT) | \
((dev_no)  << PEXDADRS_DEVNO_SHIFT) | \
((func_no) << PEXDADRS_FUNCNO_SHIFT)))
#define MK_PEXDCMND_BYTE_EN(addr, size) \
((((0x1 << (size))-1) << ((addr) & 0x3)) << PEXDCMND_BYTE_EN_SHIFT)
#define MK_PEXDCMND(cmd, addr, size) ((cmd) | MK_PEXDCMND_BYTE_EN(addr, size))
static uint32_t config_read_pciex_dev(unsigned int __iomem *base,
uint64_t bus_no, uint64_t dev_no, uint64_t func_no,
uint64_t off, uint64_t size)
static void config_write_pciex_dev(unsigned int __iomem *base, uint64_t bus_no,
uint64_t dev_no, uint64_t func_no, uint64_t off, uint64_t size,
uint32_t data)
#define MK_PEXCADRS_BYTE_EN(off, len) \
((((0x1 << (len)) - 1) << ((off) & 0x3)) << PEXCADRS_BYTE_EN_SHIFT)
#define MK_PEXCADRS(cmd, addr, size) \
((cmd) | MK_PEXCADRS_BYTE_EN(addr, size) | ((addr) & ~0x3))
static uint32_t config_read_pciex_rc(unsigned int __iomem *base,
uint32_t where, uint32_t size)
static void config_write_pciex_rc(unsigned int __iomem *base, uint32_t where,
uint32_t size, uint32_t val)
static int scc_pciex_read_config(struct pci_bus *bus, unsigned int devfn,
int where, int size, unsigned int *val)
static int scc_pciex_write_config(struct pci_bus *bus, unsigned int devfn,
int where, int size, unsigned int val)
static struct pci_ops scc_pciex_pci_ops = ;
static void pciex_clear_intr_all(unsigned int __iomem *base)
static void pciex_enable_intr_all(unsigned int __iomem *base)
static void pciex_check_status(unsigned int __iomem *base)
static irqreturn_t pciex_handle_internal_irq(int irq, void *dev_id)
static __init int celleb_setup_pciex(struct device_node *node,
struct pci_controller *phb)
struct celleb_phb_spec celleb_pciex_spec __initdata = ;
