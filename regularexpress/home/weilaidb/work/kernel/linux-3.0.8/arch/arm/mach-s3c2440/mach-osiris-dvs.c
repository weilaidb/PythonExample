#define OSIRIS_GPIO_DVS	S3C2410_GPB(5)
static bool dvs_en;
static void osiris_dvs_tps_setdvs(bool on)
static bool is_dvs(struct s3c_freq *f)
static bool cur_dvs = false;
static int osiris_dvs_notify(struct notifier_block *nb,
unsigned long val, void *data)
static struct notifier_block osiris_dvs_nb = ;
static int __devinit osiris_dvs_probe(struct platform_device *pdev)
static int __devexit osiris_dvs_remove(struct platform_device *pdev)
static int osiris_dvs_suspend(struct device *dev)
static int osiris_dvs_resume(struct device *dev)
static const struct dev_pm_ops osiris_dvs_pm = ;
static struct platform_driver osiris_dvs_driver = ;
static int __init osiris_dvs_init(void)
static void __exit osiris_dvs_exit(void)
module_init(osiris_dvs_init);
module_exit(osiris_dvs_exit);
MODULE_DESCRIPTION("Simtec OSIRIS DVS support");
MODULE_AUTHOR("Ben Dooks <ben@simtec.co.uk>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:osiris-dvs");
