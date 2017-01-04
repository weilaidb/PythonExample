#define POWERNOW_IOPORT 0xfff0
#define PFX "powernow-k6: "
static unsigned int                     busfreq;
static unsigned int                     max_multiplier;
static struct cpufreq_frequency_table clock_ratio[] = ;
static int powernow_k6_get_cpu_multiplier(void)
static void powernow_k6_set_state(unsigned int best_i)
static int powernow_k6_verify(struct cpufreq_policy *policy)
static int powernow_k6_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int powernow_k6_cpu_init(struct cpufreq_policy *policy)
static int powernow_k6_cpu_exit(struct cpufreq_policy *policy)
static unsigned int powernow_k6_get(unsigned int cpu)
static struct freq_attr *powernow_k6_attr[] = ;
static struct cpufreq_driver powernow_k6_driver = ;
static int __init powernow_k6_init(void)
static void __exit powernow_k6_exit(void)
MODULE_AUTHOR("Arjan van de Ven, Dave Jones <davej@redhat.com>, "
"Dominik Brodowski <linux@brodo.de>");
MODULE_DESCRIPTION("PowerNow! driver for AMD K6-2+ / K6-3+ processors.");
MODULE_LICENSE("GPL");
module_init(powernow_k6_init);
module_exit(powernow_k6_exit);
