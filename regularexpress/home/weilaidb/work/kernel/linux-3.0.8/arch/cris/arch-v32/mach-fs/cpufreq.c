static int
cris_sdram_freq_notifier(struct notifier_block *nb, unsigned long val,
void *data);
static struct notifier_block cris_sdram_freq_notifier_block = ;
static struct cpufreq_frequency_table cris_freq_table[] = ;
static unsigned int cris_freq_get_cpu_frequency(unsigned int cpu)
static void cris_freq_set_cpu_state(unsigned int state)
;
static int cris_freq_verify(struct cpufreq_policy *policy)
static int cris_freq_target(struct cpufreq_policy *policy,
unsigned int target_freq, unsigned int relation)
static int cris_freq_cpu_init(struct cpufreq_policy *policy)
static int cris_freq_cpu_exit(struct cpufreq_policy *policy)
static struct freq_attr *cris_freq_attr[] = ;
static struct cpufreq_driver cris_freq_driver = ;
static int __init cris_freq_init(void)
static int
cris_sdram_freq_notifier(struct notifier_block *nb, unsigned long val,
void *data)
module_init(cris_freq_init);
