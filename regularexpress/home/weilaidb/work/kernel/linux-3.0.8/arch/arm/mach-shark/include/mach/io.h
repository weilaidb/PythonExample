#define __ASM_ARM_ARCH_IO_H
#define IO_SPACE_LIMIT 0xffffffff
#define __io(a)                 ((void __iomem *)(0xe0000000 + (a)))
#define __mem_pci(addr) (addr)
