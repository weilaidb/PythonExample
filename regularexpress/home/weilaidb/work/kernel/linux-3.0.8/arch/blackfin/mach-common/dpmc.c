#define DRIVER_NAME "bfin dpmc"
struct bfin_dpmc_platform_data *pdata;
static void bfin_set_vlev(unsigned int vlev)
static unsigned int bfin_get_vlev(unsigned int freq)
# ifdef CONFIG_SMP
static void bfin_idle_this_cpu(void *info)
static void bfin_idle_cpu(void)
static void bfin_wakeup_cpu(void)
# else
static void bfin_idle_cpu(void)
static void bfin_wakeup_cpu(void)
# endif
static int
vreg_cpufreq_notifier(struct notifier_block *nb, unsigned long val, void *data)
static struct notifier_block vreg_cpufreq_notifier_block = ;
static int __devinit bfin_dpmc_probe(struct platform_device *pdev)
static int __devexit bfin_dpmc_remove(struct platform_device *pdev)
struct platform_driver bfin_dpmc_device_driver = ;
static int __init bfin_dpmc_init(void)
module_init(bfin_dpmc_init);
static void __exit bfin_dpmc_exit(void)
module_exit(bfin_dpmc_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("cpu power management driver for Blackfin");
MODULE_LICENSE("GPL");
