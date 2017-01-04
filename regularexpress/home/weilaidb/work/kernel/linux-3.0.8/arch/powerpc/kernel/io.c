void _insb(const volatile u8 __iomem *port, void *buf, long count)
EXPORT_SYMBOL(_insb);
void _outsb(volatile u8 __iomem *port, const void *buf, long count)
EXPORT_SYMBOL(_outsb);
void _insw_ns(const volatile u16 __iomem *port, void *buf, long count)
EXPORT_SYMBOL(_insw_ns);
void _outsw_ns(volatile u16 __iomem *port, const void *buf, long count)
EXPORT_SYMBOL(_outsw_ns);
void _insl_ns(const volatile u32 __iomem *port, void *buf, long count)
EXPORT_SYMBOL(_insl_ns);
void _outsl_ns(volatile u32 __iomem *port, const void *buf, long count)
EXPORT_SYMBOL(_outsl_ns);
#define IO_CHECK_ALIGN(v,a) ((((unsigned long)(v)) & ((a) - 1)) == 0)
notrace void
_memset_io(volatile void __iomem *addr, int c, unsigned long n)
EXPORT_SYMBOL(_memset_io);
void _memcpy_fromio(void *dest, const volatile void __iomem *src,
unsigned long n)
EXPORT_SYMBOL(_memcpy_fromio);
void _memcpy_toio(volatile void __iomem *dest, const void *src, unsigned long n)
EXPORT_SYMBOL(_memcpy_toio);
