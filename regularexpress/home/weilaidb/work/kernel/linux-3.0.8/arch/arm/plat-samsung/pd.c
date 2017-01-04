static int samsung_pd_probe(struct platform_device *pdev)
static int __devexit samsung_pd_remove(struct platform_device *pdev)
static int samsung_pd_runtime_suspend(struct device *dev)
static int samsung_pd_runtime_resume(struct device *dev)
static const struct dev_pm_ops samsung_pd_pm_ops = ;
static struct platform_driver samsung_pd_driver = ;
static int __init samsung_pd_init(void)
arch_initcall(samsung_pd_init);
