void _memcpy_fromio(void *to, const volatile void __iomem *from, size_t count)
void _memcpy_toio(volatile void __iomem *to, const void *from, size_t count)
void _memset_io(volatile void __iomem *dst, int c, size_t count)
EXPORT_SYMBOL(_memcpy_fromio);
EXPORT_SYMBOL(_memcpy_toio);
EXPORT_SYMBOL(_memset_io);
