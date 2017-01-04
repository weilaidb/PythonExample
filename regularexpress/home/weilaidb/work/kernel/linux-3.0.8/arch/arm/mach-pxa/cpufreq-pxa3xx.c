#define HSS_104M	(0)
#define HSS_156M	(1)
#define HSS_208M	(2)
#define HSS_312M	(3)
#define SMCFS_78M	(0)
#define SMCFS_104M	(2)
#define SMCFS_208M	(5)
#define SFLFS_104M	(0)
#define SFLFS_156M	(1)
#define SFLFS_208M	(2)
#define SFLFS_312M	(3)
#define XSPCLK_156M	(0)
#define XSPCLK_NONE	(3)
#define DMCFS_26M	(0)
#define DMCFS_260M	(3)
struct pxa3xx_freq_info ;
#define OP(cpufreq, _xl, _xn, _hss, _dmc, _smc, _sfl, _dfi, vcore, vsram) \
static struct pxa3xx_freq_info pxa300_freqs[] = ;
static struct pxa3xx_freq_info pxa320_freqs[] = ;
static unsigned int pxa3xx_freqs_num;
static struct pxa3xx_freq_info *pxa3xx_freqs;
static struct cpufreq_frequency_table *pxa3xx_freqs_table;
static int setup_freqs_table(struct cpufreq_policy *policy,
struct pxa3xx_freq_info *freqs, int num)
static void __update_core_freq(struct pxa3xx_freq_info *info)
static void __update_bus_freq(struct pxa3xx_freq_info *info)
static int pxa3xx_cpufreq_verify(struct cpufreq_policy *policy)
static unsigned int pxa3xx_cpufreq_get(unsigned int cpu)
static int pxa3xx_cpufreq_set(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int pxa3xx_cpufreq_init(struct cpufreq_policy *policy)
static struct cpufreq_driver pxa3xx_cpufreq_driver = ;
static int __init cpufreq_init(void)
module_init(cpufreq_init);
static void __exit cpufreq_exit(void)
module_exit(cpufreq_exit);
MODULE_DESCRIPTION("CPU frequency scaling driver for PXA3xx");
MODULE_LICENSE("GPL");
