#define EPS_BRAND_C7M	0
#define EPS_BRAND_C7	1
#define EPS_BRAND_EDEN	2
#define EPS_BRAND_C3	3
#define EPS_BRAND_C7D	4
struct eps_cpu_data ;
static struct eps_cpu_data *eps_cpu[NR_CPUS];
static unsigned int eps_get(unsigned int cpu)
static int eps_set_state(struct eps_cpu_data *centaur,
unsigned int cpu,
u32 dest_state)
static int eps_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int eps_verify(struct cpufreq_policy *policy)
static int eps_cpu_init(struct cpufreq_policy *policy)
static int eps_cpu_exit(struct cpufreq_policy *policy)
static struct freq_attr *eps_attr[] = ;
static struct cpufreq_driver eps_driver = ;
static int __init eps_init(void)
static void __exit eps_exit(void)
MODULE_AUTHOR("Rafal Bilski <rafalbilski@interia.pl>");
MODULE_DESCRIPTION("Enhanced PowerSaver driver for VIA C7 CPU's.");
MODULE_LICENSE("GPL");
module_init(eps_init);
module_exit(eps_exit);
