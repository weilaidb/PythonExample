unsigned int
ioread8(void __iomem *addr)
unsigned int ioread16(void __iomem *addr)
unsigned int ioread32(void __iomem *addr)
void iowrite8(u8 b, void __iomem *addr)
void iowrite16(u16 b, void __iomem *addr)
void iowrite32(u32 b, void __iomem *addr)
EXPORT_SYMBOL(ioread8);
EXPORT_SYMBOL(ioread16);
EXPORT_SYMBOL(ioread32);
EXPORT_SYMBOL(iowrite8);
EXPORT_SYMBOL(iowrite16);
EXPORT_SYMBOL(iowrite32);
u8 inb(unsigned long port)
u16 inw(unsigned long port)
u32 inl(unsigned long port)
void outb(u8 b, unsigned long port)
void outw(u16 b, unsigned long port)
void outl(u32 b, unsigned long port)
EXPORT_SYMBOL(inb);
EXPORT_SYMBOL(inw);
EXPORT_SYMBOL(inl);
EXPORT_SYMBOL(outb);
EXPORT_SYMBOL(outw);
EXPORT_SYMBOL(outl);
u8 __raw_readb(const volatile void __iomem *addr)
u16 __raw_readw(const volatile void __iomem *addr)
u32 __raw_readl(const volatile void __iomem *addr)
u64 __raw_readq(const volatile void __iomem *addr)
void __raw_writeb(u8 b, volatile void __iomem *addr)
void __raw_writew(u16 b, volatile void __iomem *addr)
void __raw_writel(u32 b, volatile void __iomem *addr)
void __raw_writeq(u64 b, volatile void __iomem *addr)
EXPORT_SYMBOL(__raw_readb);
EXPORT_SYMBOL(__raw_readw);
EXPORT_SYMBOL(__raw_readl);
EXPORT_SYMBOL(__raw_readq);
EXPORT_SYMBOL(__raw_writeb);
EXPORT_SYMBOL(__raw_writew);
EXPORT_SYMBOL(__raw_writel);
EXPORT_SYMBOL(__raw_writeq);
u8 readb(const volatile void __iomem *addr)
u16 readw(const volatile void __iomem *addr)
u32 readl(const volatile void __iomem *addr)
u64 readq(const volatile void __iomem *addr)
void writeb(u8 b, volatile void __iomem *addr)
void writew(u16 b, volatile void __iomem *addr)
void writel(u32 b, volatile void __iomem *addr)
void writeq(u64 b, volatile void __iomem *addr)
EXPORT_SYMBOL(readb);
EXPORT_SYMBOL(readw);
EXPORT_SYMBOL(readl);
EXPORT_SYMBOL(readq);
EXPORT_SYMBOL(writeb);
EXPORT_SYMBOL(writew);
EXPORT_SYMBOL(writel);
EXPORT_SYMBOL(writeq);
void ioread8_rep(void __iomem *port, void *dst, unsigned long count)
void insb(unsigned long port, void *dst, unsigned long count)
EXPORT_SYMBOL(ioread8_rep);
EXPORT_SYMBOL(insb);
void ioread16_rep(void __iomem *port, void *dst, unsigned long count)
void insw(unsigned long port, void *dst, unsigned long count)
EXPORT_SYMBOL(ioread16_rep);
EXPORT_SYMBOL(insw);
void ioread32_rep(void __iomem *port, void *dst, unsigned long count)
void insl(unsigned long port, void *dst, unsigned long count)
EXPORT_SYMBOL(ioread32_rep);
EXPORT_SYMBOL(insl);
void iowrite8_rep(void __iomem *port, const void *xsrc, unsigned long count)
void outsb(unsigned long port, const void *src, unsigned long count)
EXPORT_SYMBOL(iowrite8_rep);
EXPORT_SYMBOL(outsb);
void iowrite16_rep(void __iomem *port, const void *src, unsigned long count)
void outsw(unsigned long port, const void *src, unsigned long count)
EXPORT_SYMBOL(iowrite16_rep);
EXPORT_SYMBOL(outsw);
void iowrite32_rep(void __iomem *port, const void *src, unsigned long count)
void outsl(unsigned long port, const void *src, unsigned long count)
EXPORT_SYMBOL(iowrite32_rep);
EXPORT_SYMBOL(outsl);
void memcpy_fromio(void *to, const volatile void __iomem *from, long count)
EXPORT_SYMBOL(memcpy_fromio);
void memcpy_toio(volatile void __iomem *to, const void *from, long count)
EXPORT_SYMBOL(memcpy_toio);
void _memset_c_io(volatile void __iomem *to, unsigned long c, long count)
EXPORT_SYMBOL(_memset_c_io);
void
scr_memcpyw(u16 *d, const u16 *s, unsigned int count)
EXPORT_SYMBOL(scr_memcpyw);
void __iomem *ioport_map(unsigned long port, unsigned int size)
void ioport_unmap(void __iomem *addr)
EXPORT_SYMBOL(ioport_map);
EXPORT_SYMBOL(ioport_unmap);
