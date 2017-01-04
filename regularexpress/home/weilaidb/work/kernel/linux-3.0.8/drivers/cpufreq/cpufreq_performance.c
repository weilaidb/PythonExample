static int cpufreq_governor_performance(struct cpufreq_policy *policy,
unsigned int event)
static
struct cpufreq_governor cpufreq_gov_performance = ;
static int __init cpufreq_gov_performance_init(void)
static void __exit cpufreq_gov_performance_exit(void)
MODULE_AUTHOR("Dominik Brodowski <linux@brodo.de>");
MODULE_DESCRIPTION("CPUfreq policy governor 'performance'");
MODULE_LICENSE("GPL");
fs_initcall(cpufreq_gov_performance_init);
module_exit(cpufreq_gov_performance_exit);
