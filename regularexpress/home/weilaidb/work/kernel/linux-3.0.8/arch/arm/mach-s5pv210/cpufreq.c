static struct clk *cpu_clk;
static struct clk *dmc0_clk;
static struct clk *dmc1_clk;
static struct cpufreq_freqs freqs;
#define APLL_VAL_1000	((1 << 31) | (125 << 16) | (3 << 8) | 1)
#define APLL_VAL_800	((1 << 31) | (100 << 16) | (3 << 8) | 1)
struct dram_conf ;
static struct dram_conf s5pv210_dram_conf[2];
enum perf_level ;
enum s5pv210_mem_type ;
enum s5pv210_dmc_port ;
static struct cpufreq_frequency_table s5pv210_freq_table[] = ;
static u32 clkdiv_val[5][11] = ;
static void s5pv210_set_refresh(enum s5pv210_dmc_port ch, unsigned long freq)
int s5pv210_verify_speed(struct cpufreq_policy *policy)
unsigned int s5pv210_getspeed(unsigned int cpu)
static int s5pv210_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int s5pv210_cpufreq_suspend(struct cpufreq_policy *policy)
static int s5pv210_cpufreq_resume(struct cpufreq_policy *policy)
static int check_mem_type(void __iomem *dmc_reg)
static int __init s5pv210_cpu_init(struct cpufreq_policy *policy)
static struct cpufreq_driver s5pv210_driver = ;
static int __init s5pv210_cpufreq_init(void)
late_initcall(s5pv210_cpufreq_init);
