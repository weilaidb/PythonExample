static const struct  sh_keysc_mode[] = ;
struct sh_keysc_priv ;
#define KYCR1 0
#define KYCR2 1
#define KYINDR 2
#define KYOUTDR 3
#define KYCR2_IRQ_LEVEL    0x10
#define KYCR2_IRQ_DISABLED 0x00
static unsigned long sh_keysc_read(struct sh_keysc_priv *p, int reg_nr)
static void sh_keysc_write(struct sh_keysc_priv *p, int reg_nr,
unsigned long value)
static void sh_keysc_level_mode(struct sh_keysc_priv *p,
unsigned long keys_set)
static void sh_keysc_map_dbg(struct device *dev, unsigned long *map,
const char *str)
static irqreturn_t sh_keysc_isr(int irq, void *dev_id)
static int __devinit sh_keysc_probe(struct platform_device *pdev)
static int __devexit sh_keysc_remove(struct platform_device *pdev)
#if CONFIG_PM_SLEEP
static int sh_keysc_suspend(struct device *dev)
static int sh_keysc_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(sh_keysc_dev_pm_ops,
sh_keysc_suspend, sh_keysc_resume);
static struct platform_driver sh_keysc_device_driver = ;
static int __init sh_keysc_init(void)
static void __exit sh_keysc_exit(void)
module_init(sh_keysc_init);
module_exit(sh_keysc_exit);
MODULE_AUTHOR("Magnus Damm");
MODULE_DESCRIPTION("SuperH KEYSC Keypad Driver");
MODULE_LICENSE("GPL");
