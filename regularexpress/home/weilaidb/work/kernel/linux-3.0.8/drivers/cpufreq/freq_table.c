int cpufreq_frequency_table_cpuinfo(struct cpufreq_policy *policy,
struct cpufreq_frequency_table *table)
EXPORT_SYMBOL_GPL(cpufreq_frequency_table_cpuinfo);
int cpufreq_frequency_table_verify(struct cpufreq_policy *policy,
struct cpufreq_frequency_table *table)
EXPORT_SYMBOL_GPL(cpufreq_frequency_table_verify);
int cpufreq_frequency_table_target(struct cpufreq_policy *policy,
struct cpufreq_frequency_table *table,
unsigned int target_freq,
unsigned int relation,
unsigned int *index)
EXPORT_SYMBOL_GPL(cpufreq_frequency_table_target);
static DEFINE_PER_CPU(struct cpufreq_frequency_table *, cpufreq_show_table);
static ssize_t show_available_freqs(struct cpufreq_policy *policy, char *buf)
struct freq_attr cpufreq_freq_attr_scaling_available_freqs = ;
EXPORT_SYMBOL_GPL(cpufreq_freq_attr_scaling_available_freqs);
void cpufreq_frequency_table_get_attr(struct cpufreq_frequency_table *table,
unsigned int cpu)
EXPORT_SYMBOL_GPL(cpufreq_frequency_table_get_attr);
void cpufreq_frequency_table_put_attr(unsigned int cpu)
EXPORT_SYMBOL_GPL(cpufreq_frequency_table_put_attr);
struct cpufreq_frequency_table *cpufreq_frequency_get_table(unsigned int cpu)
EXPORT_SYMBOL_GPL(cpufreq_frequency_get_table);
MODULE_AUTHOR("Dominik Brodowski <linux@brodo.de>");
MODULE_DESCRIPTION("CPUfreq frequency table helpers");
MODULE_LICENSE("GPL");
