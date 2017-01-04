static struct cpufreq_driver ucv2_driver;
int ucv2_verify_speed(struct cpufreq_policy *policy)
static unsigned int ucv2_getspeed(unsigned int cpu)
static int ucv2_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int __init ucv2_cpu_init(struct cpufreq_policy *policy)
static struct cpufreq_driver ucv2_driver = ;
static int __init ucv2_cpufreq_init(void)
arch_initcall(ucv2_cpufreq_init);
