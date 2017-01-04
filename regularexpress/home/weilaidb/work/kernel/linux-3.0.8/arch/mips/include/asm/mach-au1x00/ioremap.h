#define __ASM_MACH_AU1X00_IOREMAP_H
#if defined(CONFIG_64BIT_PHYS_ADDR) && defined(CONFIG_PCI)
extern phys_t __fixup_bigphys_addr(phys_t, phys_t);
static inline phys_t __fixup_bigphys_addr(phys_t phys_addr, phys_t size)
static inline phys_t fixup_bigphys_addr(phys_t phys_addr, phys_t size)
static inline void __iomem *plat_ioremap(phys_t offset, unsigned long size,
unsigned long flags)
static inline int plat_iounmap(const volatile void __iomem *addr)
