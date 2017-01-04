static uint nowait;
static struct clk *cpuclk;
static void (*saved_cpu_wait) (void);
static int loongson2_cpu_freq_notifier(struct notifier_block *nb,
unsigned long val, void *data);
static struct notifier_block loongson2_cpufreq_notifier_block = ;
static int loongson2_cpu_freq_notifier(struct notifier_block *nb,
unsigned long val, void *data)
static unsigned int loongson2_cpufreq_get(unsigned int cpu)
static int loongson2_cpufreq_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int loongson2_cpufreq_cpu_init(struct cpufreq_policy *policy)
static int loongson2_cpufreq_verify(struct cpufreq_policy *policy)
static int loongson2_cpufreq_exit(struct cpufreq_policy *policy)
static struct freq_attr *loongson2_table_attr[] = ;
static struct cpufreq_driver loongson2_cpufreq_driver = ;
static struct platform_device_id platform_device_ids[] = ;
MODULE_DEVICE_TABLE(platform, platform_device_ids);
static struct platform_driver platform_driver = ;
static int __init cpufreq_init(void)
static void __exit cpufreq_exit(void)
module_init(cpufreq_init);
module_exit(cpufreq_exit);
module_param(nowait, uint, 0644);
MODULE_PARM_DESC(nowait, "Disable Loongson-2F specific wait");
MODULE_AUTHOR("Yanhua <yanh@lemote.com>");
MODULE_DESCRIPTION("cpufreq driver for Loongson2F");
MODULE_LICENSE("GPL");
