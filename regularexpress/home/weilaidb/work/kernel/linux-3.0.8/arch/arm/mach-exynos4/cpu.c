extern int combiner_init(unsigned int combiner_nr, void __iomem *base,
unsigned int irq_start);
extern void combiner_cascade_irq(unsigned int combiner_nr, unsigned int irq);
static struct map_desc exynos4_iodesc[] __initdata = ;
static void exynos4_idle(void)
void __init exynos4_map_io(void)
void __init exynos4_init_clocks(int xtal)
void __init exynos4_init_irq(void)
struct sysdev_class exynos4_sysclass = ;
static struct sys_device exynos4_sysdev = ;
static int __init exynos4_core_init(void)
core_initcall(exynos4_core_init);
static int __init exynos4_l2x0_cache_init(void)
early_initcall(exynos4_l2x0_cache_init);
int __init exynos4_init(void)
