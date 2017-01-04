void memcpy_fromio(void *to, const volatile void __iomem *from, unsigned long count)
EXPORT_SYMBOL(memcpy_fromio);
void memcpy_toio(volatile void __iomem *to, const void *from, unsigned long count)
EXPORT_SYMBOL(memcpy_toio);
void memset_io(volatile void __iomem *dst, int c, unsigned long count)
EXPORT_SYMBOL(memset_io);
