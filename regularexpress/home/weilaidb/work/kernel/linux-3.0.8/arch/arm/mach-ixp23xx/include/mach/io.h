#define __ASM_ARCH_IO_H
#define IO_SPACE_LIMIT 0xffffffff
#define __io(p)		((void __iomem*)((p) + IXP23XX_PCI_IO_VIRT))
#define __mem_pci(a)	(a)
static inline void __iomem *
ixp23xx_ioremap(unsigned long addr, unsigned long size, unsigned int mtype)
static inline void
ixp23xx_iounmap(void __iomem *addr)
#define __arch_ioremap	ixp23xx_ioremap
#define __arch_iounmap	ixp23xx_iounmap
