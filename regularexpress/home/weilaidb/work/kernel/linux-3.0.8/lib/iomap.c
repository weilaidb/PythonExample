#define PIO_OFFSET	0x10000UL
#define PIO_MASK	0x0ffffUL
#define PIO_RESERVED	0x40000UL
static void bad_io_access(unsigned long port, const char *access)
#define IO_COND(addr, is_pio, is_mmio) do  while (0)
#define pio_read16be(port) swab16(inw(port))
#define pio_read32be(port) swab32(inl(port))
#define mmio_read16be(addr) be16_to_cpu(__raw_readw(addr))
#define mmio_read32be(addr) be32_to_cpu(__raw_readl(addr))
unsigned int ioread8(void __iomem *addr)
unsigned int ioread16(void __iomem *addr)
unsigned int ioread16be(void __iomem *addr)
unsigned int ioread32(void __iomem *addr)
unsigned int ioread32be(void __iomem *addr)
EXPORT_SYMBOL(ioread8);
EXPORT_SYMBOL(ioread16);
EXPORT_SYMBOL(ioread16be);
EXPORT_SYMBOL(ioread32);
EXPORT_SYMBOL(ioread32be);
#define pio_write16be(val,port) outw(swab16(val),port)
#define pio_write32be(val,port) outl(swab32(val),port)
#define mmio_write16be(val,port) __raw_writew(be16_to_cpu(val),port)
#define mmio_write32be(val,port) __raw_writel(be32_to_cpu(val),port)
void iowrite8(u8 val, void __iomem *addr)
void iowrite16(u16 val, void __iomem *addr)
void iowrite16be(u16 val, void __iomem *addr)
void iowrite32(u32 val, void __iomem *addr)
void iowrite32be(u32 val, void __iomem *addr)
EXPORT_SYMBOL(iowrite8);
EXPORT_SYMBOL(iowrite16);
EXPORT_SYMBOL(iowrite16be);
EXPORT_SYMBOL(iowrite32);
EXPORT_SYMBOL(iowrite32be);
static inline void mmio_insb(void __iomem *addr, u8 *dst, int count)
static inline void mmio_insw(void __iomem *addr, u16 *dst, int count)
static inline void mmio_insl(void __iomem *addr, u32 *dst, int count)
static inline void mmio_outsb(void __iomem *addr, const u8 *src, int count)
static inline void mmio_outsw(void __iomem *addr, const u16 *src, int count)
static inline void mmio_outsl(void __iomem *addr, const u32 *src, int count)
void ioread8_rep(void __iomem *addr, void *dst, unsigned long count)
void ioread16_rep(void __iomem *addr, void *dst, unsigned long count)
void ioread32_rep(void __iomem *addr, void *dst, unsigned long count)
EXPORT_SYMBOL(ioread8_rep);
EXPORT_SYMBOL(ioread16_rep);
EXPORT_SYMBOL(ioread32_rep);
void iowrite8_rep(void __iomem *addr, const void *src, unsigned long count)
void iowrite16_rep(void __iomem *addr, const void *src, unsigned long count)
void iowrite32_rep(void __iomem *addr, const void *src, unsigned long count)
EXPORT_SYMBOL(iowrite8_rep);
EXPORT_SYMBOL(iowrite16_rep);
EXPORT_SYMBOL(iowrite32_rep);
void __iomem *ioport_map(unsigned long port, unsigned int nr)
void ioport_unmap(void __iomem *addr)
EXPORT_SYMBOL(ioport_map);
EXPORT_SYMBOL(ioport_unmap);
void __iomem *pci_iomap(struct pci_dev *dev, int bar, unsigned long maxlen)
void pci_iounmap(struct pci_dev *dev, void __iomem * addr)
EXPORT_SYMBOL(pci_iomap);
EXPORT_SYMBOL(pci_iounmap);
