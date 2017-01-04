#define LEDEN		0x00
#define EFFECT_DIR_180_DEG	0x8000
struct vibra_info ;
static void vibra_disable_leds(void)
static void vibra_enable(struct vibra_info *info)
static void vibra_disable(struct vibra_info *info)
static void vibra_play_work(struct work_struct *work)
static int vibra_play(struct input_dev *input, void *data,
struct ff_effect *effect)
static int twl4030_vibra_open(struct input_dev *input)
static void twl4030_vibra_close(struct input_dev *input)
#if CONFIG_PM
static int twl4030_vibra_suspend(struct device *dev)
static int twl4030_vibra_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(twl4030_vibra_pm_ops,
twl4030_vibra_suspend, twl4030_vibra_resume);
static int __devinit twl4030_vibra_probe(struct platform_device *pdev)
static int __devexit twl4030_vibra_remove(struct platform_device *pdev)
static struct platform_driver twl4030_vibra_driver = ;
static int __init twl4030_vibra_init(void)
module_init(twl4030_vibra_init);
static void __exit twl4030_vibra_exit(void)
module_exit(twl4030_vibra_exit);
MODULE_ALIAS("platform:twl4030-vibra");
MODULE_DESCRIPTION("TWL4030 Vibra driver");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Nokia Corporation");
