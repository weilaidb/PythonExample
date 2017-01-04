static struct clk *cpuclk;
static int at32_verify_speed(struct cpufreq_policy *policy)
static unsigned int at32_get_speed(unsigned int cpu)
static unsigned int	ref_freq;
static unsigned long	loops_per_jiffy_ref;
static int at32_set_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int __init at32_cpufreq_driver_init(struct cpufreq_policy *policy)
static struct cpufreq_driver at32_driver = ;
static int __init at32_cpufreq_init(void)
late_initcall(at32_cpufreq_init);
