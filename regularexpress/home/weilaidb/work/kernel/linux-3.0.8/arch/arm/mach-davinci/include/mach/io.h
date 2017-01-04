#define __ASM_ARCH_IO_H
#define IO_SPACE_LIMIT 0xffffffff
#define __io(a)			__typesafe_io(a)
#define __mem_pci(a)		(a)
#define __mem_isa(a)		(a)
#define __arch_ioremap		davinci_ioremap
#define __arch_iounmap		davinci_iounmap
void __iomem *davinci_ioremap(unsigned long phys, size_t size,
unsigned int type);
void davinci_iounmap(volatile void __iomem *addr);
