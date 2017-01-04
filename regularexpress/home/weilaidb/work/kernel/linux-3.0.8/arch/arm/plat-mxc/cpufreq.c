#define CLK32_FREQ	32768
#define NANOSECOND	(1000 * 1000 * 1000)
struct cpu_op *(*get_cpu_op)(int *op);
static int cpu_freq_khz_min;
static int cpu_freq_khz_max;
static struct clk *cpu_clk;
static struct cpufreq_frequency_table *imx_freq_table;
static int cpu_op_nr;
static struct cpu_op *cpu_op_tbl;
static int set_cpu_freq(int freq)
static int mxc_verify_speed(struct cpufreq_policy *policy)
static unsigned int mxc_get_speed(unsigned int cpu)
static int mxc_set_target(struct cpufreq_policy *policy,
unsigned int target_freq, unsigned int relation)
static int __init mxc_cpufreq_init(struct cpufreq_policy *policy)
static int mxc_cpufreq_exit(struct cpufreq_policy *policy)
static struct cpufreq_driver mxc_driver = ;
static int __devinit mxc_cpufreq_driver_init(void)
static void mxc_cpufreq_driver_exit(void)
module_init(mxc_cpufreq_driver_init);
module_exit(mxc_cpufreq_driver_exit);
MODULE_AUTHOR("Freescale Semiconductor Inc. Yong Shen <yong.shen@linaro.org>");
MODULE_DESCRIPTION("CPUfreq driver for i.MX");
MODULE_LICENSE("GPL");
