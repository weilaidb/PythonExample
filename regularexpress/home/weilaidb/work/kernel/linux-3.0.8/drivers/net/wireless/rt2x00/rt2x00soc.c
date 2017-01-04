static void rt2x00soc_free_reg(struct rt2x00_dev *rt2x00dev)
static int rt2x00soc_alloc_reg(struct rt2x00_dev *rt2x00dev)
int rt2x00soc_probe(struct platform_device *pdev, const struct rt2x00_ops *ops)
EXPORT_SYMBOL_GPL(rt2x00soc_probe);
int rt2x00soc_remove(struct platform_device *pdev)
EXPORT_SYMBOL_GPL(rt2x00soc_remove);
int rt2x00soc_suspend(struct platform_device *pdev, pm_message_t state)
EXPORT_SYMBOL_GPL(rt2x00soc_suspend);
int rt2x00soc_resume(struct platform_device *pdev)
EXPORT_SYMBOL_GPL(rt2x00soc_resume);
MODULE_AUTHOR(DRV_PROJECT);
MODULE_VERSION(DRV_VERSION);
MODULE_DESCRIPTION("rt2x00 soc library");
MODULE_LICENSE("GPL");
