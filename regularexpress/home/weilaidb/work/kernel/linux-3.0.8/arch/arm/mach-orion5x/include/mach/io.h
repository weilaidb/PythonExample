#define __ASM_ARCH_IO_H
#define IO_SPACE_LIMIT		0xffffffff
static inline void __iomem *
__arch_ioremap(unsigned long paddr, size_t size, unsigned int mtype)
static inline void
__arch_iounmap(void __iomem *addr)
#define __arch_ioremap		__arch_ioremap
#define __arch_iounmap		__arch_iounmap
#define __io(a)			__typesafe_io(a)
#define __mem_pci(a)		(a)
#define orion5x_setbits(r, mask)	writel(readl(r) | (mask), (r))
#define orion5x_clrbits(r, mask)	writel(readl(r) & ~(mask), (r))
