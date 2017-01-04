#undef DEBUG_FREQ
extern void low_choose_7447a_dfs(int dfs);
extern void low_choose_750fx_pll(int pll);
extern void low_sleep_handler(void);
static unsigned int low_freq;
static unsigned int hi_freq;
static unsigned int cur_freq;
static unsigned int sleep_freq;
static int (*set_speed_proc)(int low_speed);
static unsigned int (*get_speed_proc)(void);
static u32 voltage_gpio;
static u32 frequency_gpio;
static u32 slew_done_gpio;
static int no_schedule;
static int has_cpu_l2lve;
static int is_pmu_based;
#define CPUFREQ_HIGH                  0
#define CPUFREQ_LOW                   1
static struct cpufreq_frequency_table pmac_cpu_freqs[] = ;
static struct freq_attr* pmac_cpu_freqs_attr[] = ;
static inline void local_delay(unsigned long ms)
static inline void debug_calc_bogomips(void)
static int cpu_750fx_cpu_speed(int low_speed)
static unsigned int cpu_750fx_get_cpu_speed(void)
static int dfs_set_cpu_speed(int low_speed)
static unsigned int dfs_get_cpu_speed(void)
static int gpios_set_cpu_speed(int low_speed)
static int pmu_set_cpu_speed(int low_speed)
static int do_set_cpu_speed(int speed_mode, int notify)
static unsigned int pmac_cpufreq_get_speed(unsigned int cpu)
static int pmac_cpufreq_verify(struct cpufreq_policy *policy)
static int pmac_cpufreq_target(	struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int pmac_cpufreq_cpu_init(struct cpufreq_policy *policy)
static u32 read_gpio(struct device_node *np)
static int pmac_cpufreq_suspend(struct cpufreq_policy *policy)
static int pmac_cpufreq_resume(struct cpufreq_policy *policy)
static struct cpufreq_driver pmac_cpufreq_driver = ;
static int pmac_cpufreq_init_MacRISC3(struct device_node *cpunode)
static int pmac_cpufreq_init_7447A(struct device_node *cpunode)
static int pmac_cpufreq_init_750FX(struct device_node *cpunode)
static int __init pmac_cpufreq_setup(void)
module_init(pmac_cpufreq_setup);
