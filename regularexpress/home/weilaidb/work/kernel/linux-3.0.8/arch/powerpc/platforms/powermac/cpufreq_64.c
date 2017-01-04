#undef DEBUG
#define DBG(fmt...) pr_debug(fmt)
#define SCOM_PCR 0x0aa001
#define PCR_HILO_SELECT		0x80000000U
#define PCR_SPEED_FULL		0x00000000U
#define PCR_SPEED_HALF		0x00020000U
#define PCR_SPEED_QUARTER	0x00040000U
#define PCR_SPEED_MASK		0x000e0000U
#define PCR_SPEED_SHIFT		17
#define PCR_FREQ_REQ_VALID	0x00010000U
#define PCR_VOLT_REQ_VALID	0x00008000U
#define PCR_TARGET_TIME_MASK	0x00006000U
#define PCR_STATLAT_MASK	0x00001f00U
#define PCR_SNOOPLAT_MASK	0x000000f0U
#define PCR_SNOOPACC_MASK	0x0000000fU
#define SCOM_PSR 0x408001
#define PSR_CMD_RECEIVED	0x2000000000000000U
#define PSR_CMD_COMPLETED	0x1000000000000000U
#define PSR_CUR_SPEED_MASK	0x0300000000000000U
#define PSR_CUR_SPEED_SHIFT	(56)
#define CPUFREQ_HIGH                  0
#define CPUFREQ_LOW                   1
static struct cpufreq_frequency_table g5_cpu_freqs[] = ;
static struct freq_attr* g5_cpu_freqs_attr[] = ;
static int g5_pmode_cur;
static void (*g5_switch_volt)(int speed_mode);
static int (*g5_switch_freq)(int speed_mode);
static int (*g5_query_freq)(void);
static DEFINE_MUTEX(g5_switch_mutex);
static unsigned long transition_latency;
static const u32 *g5_pmode_data;
static int g5_pmode_max;
static struct smu_sdbp_fvt *g5_fvt_table;
static int g5_fvt_count;
static int g5_fvt_cur;
static void g5_smu_switch_volt(int speed_mode)
static struct pmf_function *pfunc_set_vdnap0;
static struct pmf_function *pfunc_vdnap0_complete;
static void g5_vdnap_switch_volt(int speed_mode)
static int g5_scom_switch_freq(int speed_mode)
static int g5_scom_query_freq(void)
static void g5_dummy_switch_volt(int speed_mode)
static struct pmf_function *pfunc_cpu0_volt_high;
static struct pmf_function *pfunc_cpu0_volt_low;
static struct pmf_function *pfunc_cpu1_volt_high;
static struct pmf_function *pfunc_cpu1_volt_low;
static void g5_pfunc_switch_volt(int speed_mode)
static struct pmf_function *pfunc_cpu_setfreq_high;
static struct pmf_function *pfunc_cpu_setfreq_low;
static struct pmf_function *pfunc_cpu_getfreq;
static struct pmf_function *pfunc_slewing_done;
static int g5_pfunc_switch_freq(int speed_mode)
static int g5_pfunc_query_freq(void)
static int g5_cpufreq_verify(struct cpufreq_policy *policy)
static int g5_cpufreq_target(struct cpufreq_policy *policy,
unsigned int target_freq, unsigned int relation)
static unsigned int g5_cpufreq_get_speed(unsigned int cpu)
static int g5_cpufreq_cpu_init(struct cpufreq_policy *policy)
static struct cpufreq_driver g5_cpufreq_driver = ;
static int __init g5_neo2_cpufreq_init(struct device_node *cpus)
static int __init g5_pm72_cpufreq_init(struct device_node *cpus)
static int __init g5_cpufreq_init(void)
module_init(g5_cpufreq_init);
MODULE_LICENSE("GPL");
