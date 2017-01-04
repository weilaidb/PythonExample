static struct cpufreq_driver *cpufreq_us3_driver;
struct us3_freq_percpu_info ;
static struct us3_freq_percpu_info *us3_freq_table;
#define SAFARI_CFG_DIV_1	0x0000000000000000UL
#define SAFARI_CFG_DIV_2	0x0000000040000000UL
#define SAFARI_CFG_DIV_32	0x0000000080000000UL
#define SAFARI_CFG_DIV_MASK	0x00000000C0000000UL
static unsigned long read_safari_cfg(void)
static void write_safari_cfg(unsigned long val)
static unsigned long get_current_freq(unsigned int cpu, unsigned long safari_cfg)
static unsigned int us3_freq_get(unsigned int cpu)
static void us3_set_cpu_divider_index(unsigned int cpu, unsigned int index)
static int us3_freq_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int us3_freq_verify(struct cpufreq_policy *policy)
static int __init us3_freq_cpu_init(struct cpufreq_policy *policy)
static int us3_freq_cpu_exit(struct cpufreq_policy *policy)
static int __init us3_freq_init(void)
static void __exit us3_freq_exit(void)
MODULE_AUTHOR("David S. Miller <davem@redhat.com>");
MODULE_DESCRIPTION("cpufreq driver for UltraSPARC-III");
MODULE_LICENSE("GPL");
module_init(us3_freq_init);
module_exit(us3_freq_exit);
