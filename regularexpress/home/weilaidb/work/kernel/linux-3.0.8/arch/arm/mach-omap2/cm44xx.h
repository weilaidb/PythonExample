#define __ARCH_ASM_MACH_OMAP2_CM44XX_H
#define OMAP4_CM_CLKSTCTRL				0x0000
#define OMAP4_CM_STATICDEP				0x0004
# ifndef __ASSEMBLER__
extern int omap4_cm_wait_module_ready(void __iomem *clkctrl_reg);
# endif
