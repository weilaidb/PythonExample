void memcpy_fromio(void *to, const volatile void __iomem *from, long count)
EXPORT_SYMBOL(memcpy_fromio);
void memcpy_toio(volatile void __iomem *to, const void *from, long count)
EXPORT_SYMBOL(memcpy_toio);
void memset_io(volatile void __iomem *dst, int c, long count)
EXPORT_SYMBOL(memset_io);
#undef __ia64_inb
#undef __ia64_inw
#undef __ia64_inl
#undef __ia64_outb
#undef __ia64_outw
#undef __ia64_outl
#undef __ia64_readb
#undef __ia64_readw
#undef __ia64_readl
#undef __ia64_readq
#undef __ia64_readb_relaxed
#undef __ia64_readw_relaxed
#undef __ia64_readl_relaxed
#undef __ia64_readq_relaxed
#undef __ia64_writeb
#undef __ia64_writew
#undef __ia64_writel
#undef __ia64_writeq
#undef __ia64_mmiowb
unsigned int
__ia64_inb (unsigned long port)
unsigned int
__ia64_inw (unsigned long port)
unsigned int
__ia64_inl (unsigned long port)
void
__ia64_outb (unsigned char val, unsigned long port)
void
__ia64_outw (unsigned short val, unsigned long port)
void
__ia64_outl (unsigned int val, unsigned long port)
unsigned char
__ia64_readb (void __iomem *addr)
unsigned short
__ia64_readw (void __iomem *addr)
unsigned int
__ia64_readl (void __iomem *addr)
unsigned long
__ia64_readq (void __iomem *addr)
unsigned char
__ia64_readb_relaxed (void __iomem *addr)
unsigned short
__ia64_readw_relaxed (void __iomem *addr)
unsigned int
__ia64_readl_relaxed (void __iomem *addr)
unsigned long
__ia64_readq_relaxed (void __iomem *addr)
void
__ia64_mmiowb(void)
