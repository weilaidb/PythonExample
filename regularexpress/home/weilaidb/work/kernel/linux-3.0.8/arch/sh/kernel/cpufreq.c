static struct clk *cpuclk;
static unsigned int sh_cpufreq_get(unsigned int cpu)
static int sh_cpufreq_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int sh_cpufreq_cpu_init(struct cpufreq_policy *policy)
static int sh_cpufreq_verify(struct cpufreq_policy *policy)
static int sh_cpufreq_exit(struct cpufreq_policy *policy)
static struct cpufreq_driver sh_cpufreq_driver = ;
static int __init sh_cpufreq_module_init(void)
static void __exit sh_cpufreq_module_exit(void)
module_init(sh_cpufreq_module_init);
module_exit(sh_cpufreq_module_exit);
MODULE_AUTHOR("Paul Mundt <lethal@linux-sh.org>");
MODULE_DESCRIPTION("cpufreq driver for SuperH");
MODULE_LICENSE("GPL");
