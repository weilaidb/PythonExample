void __iomem *l2cache_base;
void __iomem *gic_dist_base_addr;
void __init gic_init_irq(void)
static void omap4_l2x0_disable(void)
static void omap4_l2x0_set_debug(unsigned long val)
static int __init omap_l2_cache_init(void)
early_initcall(omap_l2_cache_init);
