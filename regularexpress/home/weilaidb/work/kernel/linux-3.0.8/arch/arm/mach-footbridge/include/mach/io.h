#define __ASM_ARM_ARCH_IO_H
#define MMU_IO(a, b)	(a)
#define MMU_IO(a, b)	(b)
#define PCIO_SIZE       0x00100000
#define PCIO_BASE       MMU_IO(0xff000000, 0x7c000000)
#define IO_SPACE_LIMIT 0xffff
#define __io(a)			((void __iomem *)(PCIO_BASE + (a)))
#if 1
#define __mem_pci(a)		(a)
static inline void __iomem *___mem_pci(void __iomem *p)
#define __mem_pci(a)		___mem_pci(a)
