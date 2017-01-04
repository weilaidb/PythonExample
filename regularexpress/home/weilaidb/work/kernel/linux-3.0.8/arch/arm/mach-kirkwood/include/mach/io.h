#define __ASM_ARCH_IO_H
#define IO_SPACE_LIMIT		0xffffffff
static inline void __iomem *__io(unsigned long addr)
static inline void __iomem *
__arch_ioremap(unsigned long paddr, size_t size, unsigned int mtype)
static inline void
__arch_iounmap(void __iomem *addr)
#define __arch_ioremap		__arch_ioremap
#define __arch_iounmap		__arch_iounmap
#define __io(a)			__io(a)
#define __mem_pci(a)		(a)
