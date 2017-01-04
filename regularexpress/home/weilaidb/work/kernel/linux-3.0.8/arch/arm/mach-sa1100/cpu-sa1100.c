struct sa1100_dram_regs ;
static struct cpufreq_driver sa1100_driver;
static struct sa1100_dram_regs sa1100_dram_settings[] = ;
static void sa1100_update_dram_timings(int current_speed, int new_speed)
static int sa1100_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int __init sa1100_cpu_init(struct cpufreq_policy *policy)
static struct cpufreq_driver sa1100_driver = ;
static int __init sa1100_dram_init(void)
arch_initcall(sa1100_dram_init);
