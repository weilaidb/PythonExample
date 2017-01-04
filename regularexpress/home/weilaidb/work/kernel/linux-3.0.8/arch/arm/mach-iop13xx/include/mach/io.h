#define __ASM_ARM_ARCH_IO_H
#define IO_SPACE_LIMIT 0xffffffff
#define __io(a) __iop13xx_io(a)
#define __mem_pci(a) (a)
#define __mem_isa(a) (a)
extern void __iomem * __iop13xx_io(unsigned long io_addr);
extern void __iomem *__iop13xx_ioremap(unsigned long cookie, size_t size,
unsigned int mtype);
extern void __iop13xx_iounmap(void __iomem *addr);
extern u32 iop13xx_atue_mem_base;
extern u32 iop13xx_atux_mem_base;
extern size_t iop13xx_atue_mem_size;
extern size_t iop13xx_atux_mem_size;
#define __arch_ioremap	__iop13xx_ioremap
#define __arch_iounmap	__iop13xx_iounmap
