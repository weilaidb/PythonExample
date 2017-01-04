#define MMCR_BASE	0xfffef000
#define OFFS_CPUCTL	0x2
static __u8 __iomem *cpuctl;
#define PFX "sc520_freq: "
static struct cpufreq_frequency_table sc520_freq_table[] = ;
static unsigned int sc520_freq_get_cpu_frequency(unsigned int cpu)
static void sc520_freq_set_cpu_state(unsigned int state)
;
static int sc520_freq_verify(struct cpufreq_policy *policy)
static int sc520_freq_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int sc520_freq_cpu_init(struct cpufreq_policy *policy)
static int sc520_freq_cpu_exit(struct cpufreq_policy *policy)
static struct freq_attr *sc520_freq_attr[] = ;
static struct cpufreq_driver sc520_freq_driver = ;
static int __init sc520_freq_init(void)
static void __exit sc520_freq_exit(void)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sean Young <sean@mess.org>");
MODULE_DESCRIPTION("cpufreq driver for AMD's Elan sc520 CPU");
module_init(sc520_freq_init);
module_exit(sc520_freq_exit);
