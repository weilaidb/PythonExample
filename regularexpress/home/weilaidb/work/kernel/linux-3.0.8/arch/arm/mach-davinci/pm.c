#define DEEPSLEEP_SLEEPCOUNT_MASK	0xFFFF
static void (*davinci_sram_suspend) (struct davinci_pm_config *);
static struct davinci_pm_config *pdata;
static void davinci_sram_push(void *dest, void *src, unsigned int size)
static void davinci_pm_suspend(void)
static int davinci_pm_enter(suspend_state_t state)
static const struct platform_suspend_ops davinci_pm_ops = ;
static int __init davinci_pm_probe(struct platform_device *pdev)
static int __exit davinci_pm_remove(struct platform_device *pdev)
static struct platform_driver davinci_pm_driver = ;
static int __init davinci_pm_init(void)
late_initcall(davinci_pm_init);
