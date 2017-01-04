static void __iomem *__isamem_convert_addr(const volatile void __iomem *addr)
u8 __readb(const volatile void __iomem *addr)
u16 __readw(const volatile void __iomem *addr)
u32 __readl(const volatile void __iomem *addr)
EXPORT_SYMBOL(__readb);
EXPORT_SYMBOL(__readw);
EXPORT_SYMBOL(__readl);
void readsw(const void __iomem *addr, void *data, int len)
EXPORT_SYMBOL(readsw);
void readsl(const void __iomem *addr, void *data, int len)
EXPORT_SYMBOL(readsl);
void __writeb(u8 val, void __iomem *addr)
void __writew(u16 val, void __iomem *addr)
void __writel(u32 val, void __iomem *addr)
EXPORT_SYMBOL(__writeb);
EXPORT_SYMBOL(__writew);
EXPORT_SYMBOL(__writel);
void writesw(void __iomem *addr, const void *data, int len)
EXPORT_SYMBOL(writesw);
void writesl(void __iomem *addr, const void *data, int len)
EXPORT_SYMBOL(writesl);
#define SUPERIO_PORT(p) \
(((p) >> 3) == (0x3f8 >> 3) || \
((p) >> 3) == (0x2f8 >> 3) || \
((p) >> 3) == (0x378 >> 3))
u8 __inb8(unsigned int port)
u8 __inb16(unsigned int port)
u16 __inw(unsigned int port)
u32 __inl(unsigned int port)
EXPORT_SYMBOL(__inb8);
EXPORT_SYMBOL(__inb16);
EXPORT_SYMBOL(__inw);
EXPORT_SYMBOL(__inl);
void __outb8(u8 val, unsigned int port)
void __outb16(u8 val, unsigned int port)
void __outw(u16 val, unsigned int port)
void __outl(u32 val, unsigned int port)
EXPORT_SYMBOL(__outb8);
EXPORT_SYMBOL(__outb16);
EXPORT_SYMBOL(__outw);
EXPORT_SYMBOL(__outl);
void outsb(unsigned int port, const void *from, int len)
void insb(unsigned int port, void *from, int len)
EXPORT_SYMBOL(outsb);
EXPORT_SYMBOL(insb);
void outsw(unsigned int port, const void *from, int len)
void insw(unsigned int port, void *from, int len)
EXPORT_SYMBOL(outsw);
EXPORT_SYMBOL(insw);
void outsl(unsigned int port, const void *from, int len)
void insl(unsigned int port, void *from, int len)
EXPORT_SYMBOL(outsl);
EXPORT_SYMBOL(insl);
