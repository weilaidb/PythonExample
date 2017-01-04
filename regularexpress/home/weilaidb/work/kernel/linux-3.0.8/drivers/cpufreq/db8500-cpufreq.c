static struct cpufreq_frequency_table freq_table[] = ;
static enum arm_opp idx2opp[] = ;
static struct freq_attr *db8500_cpufreq_attr[] = ;
static int db8500_cpufreq_verify_speed(struct cpufreq_policy *policy)
static int db8500_cpufreq_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static unsigned int db8500_cpufreq_getspeed(unsigned int cpu)
static int __cpuinit db8500_cpufreq_init(struct cpufreq_policy *policy)
static struct cpufreq_driver db8500_cpufreq_driver = ;
static int __init db8500_cpufreq_register(void)
device_initcall(db8500_cpufreq_register);
