static spinlock_t cpufreq_stats_lock;
#define CPUFREQ_STATDEVICE_ATTR(_name, _mode, _show) \
static struct freq_attr _attr_##_name = ;
struct cpufreq_stats ;
static DEFINE_PER_CPU(struct cpufreq_stats *, cpufreq_stats_table);
struct cpufreq_stats_attribute ;
static int cpufreq_stats_update(unsigned int cpu)
static ssize_t show_total_trans(struct cpufreq_policy *policy, char *buf)
static ssize_t show_time_in_state(struct cpufreq_policy *policy, char *buf)
static ssize_t show_trans_table(struct cpufreq_policy *policy, char *buf)
CPUFREQ_STATDEVICE_ATTR(trans_table, 0444, show_trans_table);
CPUFREQ_STATDEVICE_ATTR(total_trans, 0444, show_total_trans);
CPUFREQ_STATDEVICE_ATTR(time_in_state, 0444, show_time_in_state);
static struct attribute *default_attrs[] = ;
static struct attribute_group stats_attr_group = ;
static int freq_table_get_index(struct cpufreq_stats *stat, unsigned int freq)
static void cpufreq_stats_free_table(unsigned int cpu)
static void cpufreq_stats_free_sysfs(unsigned int cpu)
static int cpufreq_stats_create_table(struct cpufreq_policy *policy,
struct cpufreq_frequency_table *table)
static int cpufreq_stat_notifier_policy(struct notifier_block *nb,
unsigned long val, void *data)
static int cpufreq_stat_notifier_trans(struct notifier_block *nb,
unsigned long val, void *data)
static int __cpuinit cpufreq_stat_cpu_callback(struct notifier_block *nfb,
unsigned long action,
void *hcpu)
static struct notifier_block cpufreq_stat_cpu_notifier __refdata = ;
static struct notifier_block notifier_policy_block = ;
static struct notifier_block notifier_trans_block = ;
static int __init cpufreq_stats_init(void)
static void __exit cpufreq_stats_exit(void)
MODULE_AUTHOR("Zou Nan hai <nanhai.zou@intel.com>");
MODULE_DESCRIPTION("'cpufreq_stats' - A driver to export cpufreq stats "
"through sysfs filesystem");
MODULE_LICENSE("GPL");
module_init(cpufreq_stats_init);
module_exit(cpufreq_stats_exit);
