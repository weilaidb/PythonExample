#define __ASM_ARCH_MXC_IO_H__
#define IO_SPACE_LIMIT 0xffffffff
#if defined(CONFIG_SOC_IMX31) || defined(CONFIG_SOC_IMX35)
#define __arch_ioremap __imx_ioremap
#define __arch_iounmap __iounmap
#define addr_in_module(addr, mod) \
((unsigned long)(addr) - mod ## _BASE_ADDR < mod ## _SIZE)
static inline void __iomem *
__imx_ioremap(unsigned long phys_addr, size_t size, unsigned int mtype)
#define __io(a)		__typesafe_io(a)
#define __mem_pci(a)	(a)
