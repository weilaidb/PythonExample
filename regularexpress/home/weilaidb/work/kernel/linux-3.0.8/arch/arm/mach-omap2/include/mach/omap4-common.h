#define OMAP_ARCH_OMAP4_COMMON_H
#define do_wfi() __asm__ __volatile__ ("wfi" : : : "memory")
#define do_wfi()			\
__asm__ __volatile__ (".word	0xe320f003" : : : "memory")
extern void __iomem *l2cache_base;
extern void __iomem *gic_dist_base_addr;
extern void __init gic_init_irq(void);
extern void omap_smc1(u32 fn, u32 arg);
extern void omap_secondary_startup(void);
extern u32 omap_modify_auxcoreboot0(u32 set_mask, u32 clear_mask);
extern void omap_auxcoreboot_addr(u32 cpu_addr);
extern u32 omap_read_auxcoreboot0(void);
