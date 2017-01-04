static DEFINE_PER_CPU(unsigned int, cpu_max_freq);
static DEFINE_PER_CPU(unsigned int, cpu_min_freq);
static DEFINE_PER_CPU(unsigned int, cpu_cur_freq);
static DEFINE_PER_CPU(unsigned int, cpu_set_freq);
static DEFINE_PER_CPU(unsigned int, cpu_is_managed);
static DEFINE_MUTEX(userspace_mutex);
static int cpus_using_userspace_governor;
static int
userspace_cpufreq_notifier(struct notifier_block *nb, unsigned long val,
void *data)
static struct notifier_block userspace_cpufreq_notifier_block = ;
static int cpufreq_set(struct cpufreq_policy *policy, unsigned int freq)
static ssize_t show_speed(struct cpufreq_policy *policy, char *buf)
static int cpufreq_governor_userspace(struct cpufreq_policy *policy,
unsigned int event)
static
struct cpufreq_governor cpufreq_gov_userspace = ;
static int __init cpufreq_gov_userspace_init(void)
static void __exit cpufreq_gov_userspace_exit(void)
MODULE_AUTHOR("Dominik Brodowski <linux@brodo.de>, "
"Russell King <rmk@arm.linux.org.uk>");
MODULE_DESCRIPTION("CPUfreq policy governor 'userspace'");
MODULE_LICENSE("GPL");
fs_initcall(cpufreq_gov_userspace_init);
module_init(cpufreq_gov_userspace_init);
module_exit(cpufreq_gov_userspace_exit);
