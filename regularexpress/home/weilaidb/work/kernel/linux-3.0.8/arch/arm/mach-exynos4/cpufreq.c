static struct clk *cpu_clk;
static struct clk *moutcore;
static struct clk *mout_mpll;
static struct clk *mout_apll;
static struct regulator *arm_regulator;
static struct regulator *int_regulator;
static struct cpufreq_freqs freqs;
static unsigned int memtype;
enum exynos4_memory_type ;
enum cpufreq_level_index ;
static struct cpufreq_frequency_table exynos4_freq_table[] = ;
static unsigned int clkdiv_cpu0[CPUFREQ_LEVEL_END][7] = ;
static unsigned int clkdiv_cpu1[CPUFREQ_LEVEL_END][2] = ;
static unsigned int clkdiv_dmc0[CPUFREQ_LEVEL_END][8] = ;
static unsigned int clkdiv_top[CPUFREQ_LEVEL_END][5] = ;
static unsigned int clkdiv_lr_bus[CPUFREQ_LEVEL_END][2] = ;
struct cpufreq_voltage_table ;
static struct cpufreq_voltage_table exynos4_volt_table[CPUFREQ_LEVEL_END] = ;
static unsigned int exynos4_apll_pms_table[CPUFREQ_LEVEL_END] = ;
int exynos4_verify_speed(struct cpufreq_policy *policy)
unsigned int exynos4_getspeed(unsigned int cpu)
void exynos4_set_clkdiv(unsigned int div_index)
static void exynos4_set_apll(unsigned int index)
static void exynos4_set_frequency(unsigned int old_index, unsigned int new_index)
static int exynos4_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int exynos4_cpufreq_suspend(struct cpufreq_policy *policy)
static int exynos4_cpufreq_resume(struct cpufreq_policy *policy)
static int exynos4_cpufreq_cpu_init(struct cpufreq_policy *policy)
static struct cpufreq_driver exynos4_driver = ;
static int __init exynos4_cpufreq_init(void)
late_initcall(exynos4_cpufreq_init);
