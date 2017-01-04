void __iomem *_PRCMU_BASE;
static void __iomem *l2x0_base;
void __init ux500_init_irq(void)
static inline void ux500_cache_wait(void __iomem *reg, unsigned long mask)
static inline void ux500_cache_sync(void)
static void ux500_l2x0_disable(void)
static void ux500_l2x0_inv_all(void)
static int ux500_l2x0_init(void)
early_initcall(ux500_l2x0_init);
static void __init ux500_timer_init(void)
struct sys_timer ux500_timer = ;
