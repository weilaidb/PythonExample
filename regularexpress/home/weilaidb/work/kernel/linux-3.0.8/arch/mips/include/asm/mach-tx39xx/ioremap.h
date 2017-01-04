#define __ASM_MACH_TX39XX_IOREMAP_H
static inline phys_t fixup_bigphys_addr(phys_t phys_addr, phys_t size)
static inline void __iomem *plat_ioremap(phys_t offset, unsigned long size,
unsigned long flags)
static inline int plat_iounmap(const volatile void __iomem *addr)
