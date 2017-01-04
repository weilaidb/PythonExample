#define VERY_HI_RATE	900000000
static struct cpufreq_frequency_table *freq_table;
#define MPU_CLK		"mpu"
#define MPU_CLK		"virt_prcm_set"
static struct clk *mpu_clk;
static int omap_verify_speed(struct cpufreq_policy *policy)
static unsigned int omap_getspeed(unsigned int cpu)
static int omap_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int __cpuinit omap_cpu_init(struct cpufreq_policy *policy)
static int omap_cpu_exit(struct cpufreq_policy *policy)
static struct freq_attr *omap_cpufreq_attr[] = ;
static struct cpufreq_driver omap_driver = ;
static int __init omap_cpufreq_init(void)
arch_initcall(omap_cpufreq_init);
