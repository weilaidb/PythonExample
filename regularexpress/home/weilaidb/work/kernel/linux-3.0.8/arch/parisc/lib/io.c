void memcpy_toio(volatile void __iomem *dst, const void *src, int count)
void memcpy_fromio(void *dst, const volatile void __iomem *src, int count)
void memset_io(volatile void __iomem *addr, unsigned char val, int count)
void insb (unsigned long port, void *dst, unsigned long count)
void insw (unsigned long port, void *dst, unsigned long count)
void insl (unsigned long port, void *dst, unsigned long count)
void outsb(unsigned long port, const void * src, unsigned long count)
void outsw (unsigned long port, const void *src, unsigned long count)
void outsl (unsigned long port, const void *src, unsigned long count)
EXPORT_SYMBOL(insb);
EXPORT_SYMBOL(insw);
EXPORT_SYMBOL(insl);
EXPORT_SYMBOL(outsb);
EXPORT_SYMBOL(outsw);
EXPORT_SYMBOL(outsl);
