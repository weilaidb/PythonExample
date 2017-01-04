#define __UNICORE_IO_H__
#define PCI_IOBASE	PKUNITY_PCILIO_BASE
extern void __iomem *__uc32_ioremap(unsigned long, size_t);
extern void __iomem *__uc32_ioremap_cached(unsigned long, size_t);
extern void __uc32_iounmap(volatile void __iomem *addr);
#define ioremap(cookie, size)		__uc32_ioremap(cookie, size)
#define ioremap_cached(cookie, size)	__uc32_ioremap_cached(cookie, size)
#define iounmap(cookie)			__uc32_iounmap(cookie)
#undef xlate_dev_mem_ptr
#define xlate_dev_mem_ptr(p)	__va(p)
#define HAVE_ARCH_PIO_SIZE
#define PIO_OFFSET		(unsigned int)(PCI_IOBASE)
#define PIO_MASK		(unsigned int)(IO_SPACE_LIMIT)
#define PIO_RESERVED		(PIO_OFFSET + PIO_MASK + 1)
