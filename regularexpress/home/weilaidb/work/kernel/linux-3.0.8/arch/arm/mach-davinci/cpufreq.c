struct davinci_cpufreq ;
static struct davinci_cpufreq cpufreq;
static int davinci_verify_speed(struct cpufreq_policy *policy)
static unsigned int davinci_getspeed(unsigned int cpu)
static int davinci_target(struct cpufreq_policy *policy,
unsigned int target_freq, unsigned int relation)
static int davinci_cpu_init(struct cpufreq_policy *policy)
static int davinci_cpu_exit(struct cpufreq_policy *policy)
static struct freq_attr *davinci_cpufreq_attr[] = ;
static struct cpufreq_driver davinci_driver = ;
static int __init davinci_cpufreq_probe(struct platform_device *pdev)
static int __exit davinci_cpufreq_remove(struct platform_device *pdev)
static struct platform_driver davinci_cpufreq_driver = ;
static int __init davinci_cpufreq_init(void)
late_initcall(davinci_cpufreq_init);
