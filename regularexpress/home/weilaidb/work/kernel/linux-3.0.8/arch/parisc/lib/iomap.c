#define INDIRECT_ADDR(addr)	(((unsigned long)(addr) & 1UL<<63) != 0)
#define ADDR_TO_REGION(addr)    (((unsigned long)addr >> 60) & 7)
#define IOPORT_MAP_BASE		(8UL << 60)
#define INDIRECT_ADDR(addr)     (((unsigned long)(addr) & 1UL<<31) != 0)
#define ADDR_TO_REGION(addr)    (((unsigned long)addr >> 28) & 7)
#define IOPORT_MAP_BASE		(8UL << 28)
struct iomap_ops ;
#define ADDR2PORT(addr) ((unsigned long __force)(addr) & 0xffffff)
static unsigned int ioport_read8(void __iomem *addr)
static unsigned int ioport_read16(void __iomem *addr)
static unsigned int ioport_read32(void __iomem *addr)
static void ioport_write8(u8 datum, void __iomem *addr)
static void ioport_write16(u16 datum, void __iomem *addr)
static void ioport_write32(u32 datum, void __iomem *addr)
static void ioport_read8r(void __iomem *addr, void *dst, unsigned long count)
static void ioport_read16r(void __iomem *addr, void *dst, unsigned long count)
static void ioport_read32r(void __iomem *addr, void *dst, unsigned long count)
static void ioport_write8r(void __iomem *addr, const void *s, unsigned long n)
static void ioport_write16r(void __iomem *addr, const void *s, unsigned long n)
static void ioport_write32r(void __iomem *addr, const void *s, unsigned long n)
static const struct iomap_ops ioport_ops = ;
static unsigned int iomem_read8(void __iomem *addr)
static unsigned int iomem_read16(void __iomem *addr)
static unsigned int iomem_read16be(void __iomem *addr)
static unsigned int iomem_read32(void __iomem *addr)
static unsigned int iomem_read32be(void __iomem *addr)
static void iomem_write8(u8 datum, void __iomem *addr)
static void iomem_write16(u16 datum, void __iomem *addr)
static void iomem_write16be(u16 datum, void __iomem *addr)
static void iomem_write32(u32 datum, void __iomem *addr)
static void iomem_write32be(u32 datum, void __iomem *addr)
static void iomem_read8r(void __iomem *addr, void *dst, unsigned long count)
static void iomem_read16r(void __iomem *addr, void *dst, unsigned long count)
static void iomem_read32r(void __iomem *addr, void *dst, unsigned long count)
static void iomem_write8r(void __iomem *addr, const void *s, unsigned long n)
static void iomem_write16r(void __iomem *addr, const void *s, unsigned long n)
static void iomem_write32r(void __iomem *addr, const void *s, unsigned long n)
static const struct iomap_ops iomem_ops = ;
static const struct iomap_ops *iomap_ops[8] = ;
unsigned int ioread8(void __iomem *addr)
unsigned int ioread16(void __iomem *addr)
unsigned int ioread16be(void __iomem *addr)
unsigned int ioread32(void __iomem *addr)
unsigned int ioread32be(void __iomem *addr)
void iowrite8(u8 datum, void __iomem *addr)
void iowrite16(u16 datum, void __iomem *addr)
void iowrite16be(u16 datum, void __iomem *addr)
void iowrite32(u32 datum, void __iomem *addr)
void iowrite32be(u32 datum, void __iomem *addr)
void ioread8_rep(void __iomem *addr, void *dst, unsigned long count)
void ioread16_rep(void __iomem *addr, void *dst, unsigned long count)
void ioread32_rep(void __iomem *addr, void *dst, unsigned long count)
void iowrite8_rep(void __iomem *addr, const void *src, unsigned long count)
void iowrite16_rep(void __iomem *addr, const void *src, unsigned long count)
void iowrite32_rep(void __iomem *addr, const void *src, unsigned long count)
void __iomem *ioport_map(unsigned long port, unsigned int nr)
void ioport_unmap(void __iomem *addr)
void __iomem *pci_iomap(struct pci_dev *dev, int bar, unsigned long maxlen)
void pci_iounmap(struct pci_dev *dev, void __iomem * addr)
EXPORT_SYMBOL(ioread8);
EXPORT_SYMBOL(ioread16);
EXPORT_SYMBOL(ioread16be);
EXPORT_SYMBOL(ioread32);
EXPORT_SYMBOL(ioread32be);
EXPORT_SYMBOL(iowrite8);
EXPORT_SYMBOL(iowrite16);
EXPORT_SYMBOL(iowrite16be);
EXPORT_SYMBOL(iowrite32);
EXPORT_SYMBOL(iowrite32be);
EXPORT_SYMBOL(ioread8_rep);
EXPORT_SYMBOL(ioread16_rep);
EXPORT_SYMBOL(ioread32_rep);
EXPORT_SYMBOL(iowrite8_rep);
EXPORT_SYMBOL(iowrite16_rep);
EXPORT_SYMBOL(iowrite32_rep);
EXPORT_SYMBOL(ioport_map);
EXPORT_SYMBOL(ioport_unmap);
EXPORT_SYMBOL(pci_iomap);
EXPORT_SYMBOL(pci_iounmap);
