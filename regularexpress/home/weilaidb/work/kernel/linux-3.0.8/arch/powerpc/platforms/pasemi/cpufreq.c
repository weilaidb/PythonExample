#define SDCASR_REG		0x0100
#define SDCASR_REG_STRIDE	0x1000
#define SDCPWR_CFGA0_REG	0x0100
#define SDCPWR_PWST0_REG	0x0000
#define SDCPWR_GIZTIME_REG	0x0440
#define SDCPWR_GIZTIME_GR	0x80000000
#define SDCPWR_GIZTIME_LONGLOCK	0x000000ff
#define SDCASR_OFFSET		0x120000
static void __iomem *sdcpwr_mapbase;
static void __iomem *sdcasr_mapbase;
static DEFINE_MUTEX(pas_switch_mutex);
static int current_astate;
static struct cpufreq_frequency_table pas_freqs[] = ;
static struct freq_attr *pas_cpu_freqs_attr[] = ;
static int get_astate_freq(int astate)
static int get_cur_astate(int cpu)
static int get_gizmo_latency(void)
static void set_astate(int cpu, unsigned int astate)
int check_astate(void)
void restore_astate(int cpu)
static int pas_cpufreq_cpu_init(struct cpufreq_policy *policy)
static int pas_cpufreq_cpu_exit(struct cpufreq_policy *policy)
static int pas_cpufreq_verify(struct cpufreq_policy *policy)
static int pas_cpufreq_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static struct cpufreq_driver pas_cpufreq_driver = ;
static int __init pas_cpufreq_init(void)
static void __exit pas_cpufreq_exit(void)
module_init(pas_cpufreq_init);
module_exit(pas_cpufreq_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Egor Martovetsky <egor@pasemi.com>, Olof Johansson <olof@lixom.net>");
