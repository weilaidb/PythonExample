#define PFX	"p4-clockmod: "
enum ;
#define DC_ENTRIES	8
static int has_N44_O17_errata[NR_CPUS];
static unsigned int stock_freq;
static struct cpufreq_driver p4clockmod_driver;
static unsigned int cpufreq_p4_get(unsigned int cpu);
static int cpufreq_p4_setdc(unsigned int cpu, unsigned int newstate)
static struct cpufreq_frequency_table p4clockmod_table[] = ;
static int cpufreq_p4_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int cpufreq_p4_verify(struct cpufreq_policy *policy)
static unsigned int cpufreq_p4_get_frequency(struct cpuinfo_x86 *c)
static int cpufreq_p4_cpu_init(struct cpufreq_policy *policy)
static int cpufreq_p4_cpu_exit(struct cpufreq_policy *policy)
static unsigned int cpufreq_p4_get(unsigned int cpu)
static struct freq_attr *p4clockmod_attr[] = ;
static struct cpufreq_driver p4clockmod_driver = ;
static int __init cpufreq_p4_init(void)
static void __exit cpufreq_p4_exit(void)
MODULE_AUTHOR("Zwane Mwaikambo <zwane@commfireservices.com>");
MODULE_DESCRIPTION("cpufreq driver for Pentium(TM) 4/Xeon(TM)");
MODULE_LICENSE("GPL");
late_initcall(cpufreq_p4_init);
module_exit(cpufreq_p4_exit);
