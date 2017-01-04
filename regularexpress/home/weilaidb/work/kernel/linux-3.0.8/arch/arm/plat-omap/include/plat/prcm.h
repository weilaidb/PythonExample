#define __ASM_ARM_ARCH_OMAP_PRCM_H
u32 omap_prcm_get_reset_sources(void);
int omap2_cm_wait_idlest(void __iomem *reg, u32 mask, u8 idlest,
const char *name);
