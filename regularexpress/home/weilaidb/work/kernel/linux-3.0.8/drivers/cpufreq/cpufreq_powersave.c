static int cpufreq_governor_powersave(struct cpufreq_policy *policy,
unsigned int event)
static
struct cpufreq_governor cpufreq_gov_powersave = ;
static int __init cpufreq_gov_powersave_init(void)
static void __exit cpufreq_gov_powersave_exit(void)
MODULE_AUTHOR("Dominik Brodowski <linux@brodo.de>");
MODULE_DESCRIPTION("CPUfreq policy governor 'powersave'");
MODULE_LICENSE("GPL");
fs_initcall(cpufreq_gov_powersave_init);
module_init(cpufreq_gov_powersave_init);
module_exit(cpufreq_gov_powersave_exit);
