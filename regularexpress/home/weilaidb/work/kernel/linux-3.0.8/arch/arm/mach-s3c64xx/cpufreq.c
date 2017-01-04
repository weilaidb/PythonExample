static struct clk *armclk;
static struct regulator *vddarm;
static unsigned long regulator_latency;
struct s3c64xx_dvfs ;
static struct s3c64xx_dvfs s3c64xx_dvfs_table[] = ;
static struct cpufreq_frequency_table s3c64xx_freq_table[] = ;
static int s3c64xx_cpufreq_verify_speed(struct cpufreq_policy *policy)
static unsigned int s3c64xx_cpufreq_get_speed(unsigned int cpu)
static int s3c64xx_cpufreq_set_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static void __init s3c64xx_cpufreq_config_regulator(void)
static int s3c64xx_cpufreq_driver_init(struct cpufreq_policy *policy)
static struct cpufreq_driver s3c64xx_cpufreq_driver = ;
static int __init s3c64xx_cpufreq_init(void)
module_init(s3c64xx_cpufreq_init);
