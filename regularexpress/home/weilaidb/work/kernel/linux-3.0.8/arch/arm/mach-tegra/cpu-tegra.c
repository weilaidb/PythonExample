static struct cpufreq_frequency_table freq_table[] = ;
#define NUM_CPUS	2
static struct clk *cpu_clk;
static struct clk *emc_clk;
static unsigned long target_cpu_speed[NUM_CPUS];
static DEFINE_MUTEX(tegra_cpu_lock);
static bool is_suspended;
int tegra_verify_speed(struct cpufreq_policy *policy)
unsigned int tegra_getspeed(unsigned int cpu)
static int tegra_update_cpu_speed(unsigned long rate)
static unsigned long tegra_cpu_highest_speed(void)
static int tegra_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int tegra_pm_notify(struct notifier_block *nb, unsigned long event,
void *dummy)
static struct notifier_block tegra_cpu_pm_notifier = ;
static int tegra_cpu_init(struct cpufreq_policy *policy)
static int tegra_cpu_exit(struct cpufreq_policy *policy)
static struct freq_attr *tegra_cpufreq_attr[] = ;
static struct cpufreq_driver tegra_cpufreq_driver = ;
static int __init tegra_cpufreq_init(void)
static void __exit tegra_cpufreq_exit(void)
MODULE_AUTHOR("Colin Cross <ccross@android.com>");
MODULE_DESCRIPTION("cpufreq driver for Nvidia Tegra2");
MODULE_LICENSE("GPL");
module_init(tegra_cpufreq_init);
module_exit(tegra_cpufreq_exit);
