static struct cpufreq_driver	longrun_driver;
static unsigned int longrun_low_freq, longrun_high_freq;
static void __cpuinit longrun_get_policy(struct cpufreq_policy *policy)
static int longrun_set_policy(struct cpufreq_policy *policy)
static int longrun_verify_policy(struct cpufreq_policy *policy)
static unsigned int longrun_get(unsigned int cpu)
static int __cpuinit longrun_determine_freqs(unsigned int *low_freq,
unsigned int *high_freq)
static int __cpuinit longrun_cpu_init(struct cpufreq_policy *policy)
static struct cpufreq_driver longrun_driver = ;
static int __init longrun_init(void)
static void __exit longrun_exit(void)
MODULE_AUTHOR("Dominik Brodowski <linux@brodo.de>");
MODULE_DESCRIPTION("LongRun driver for Transmeta Crusoe and "
"Efficeon processors.");
MODULE_LICENSE("GPL");
module_init(longrun_init);
module_exit(longrun_exit);
