static DEFINE_MUTEX(cbe_switch_mutex);
static struct cpufreq_frequency_table cbe_freqs[] = ;
static int set_pmode(unsigned int cpu, unsigned int slow_mode)
static int cbe_cpufreq_cpu_init(struct cpufreq_policy *policy)
static int cbe_cpufreq_cpu_exit(struct cpufreq_policy *policy)
static int cbe_cpufreq_verify(struct cpufreq_policy *policy)
static int cbe_cpufreq_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static struct cpufreq_driver cbe_cpufreq_driver = ;
static int __init cbe_cpufreq_init(void)
static void __exit cbe_cpufreq_exit(void)
module_init(cbe_cpufreq_init);
module_exit(cbe_cpufreq_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Christian Krafft <krafft@de.ibm.com>");
