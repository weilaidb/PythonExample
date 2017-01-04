static unsigned int freq_debug;
module_param(freq_debug, uint, 0);
MODULE_PARM_DESC(freq_debug, "Set the debug messages to on=1/off=0");
#define freq_debug  0
static struct regulator *vcc_core;
static unsigned int pxa27x_maxfreq;
module_param(pxa27x_maxfreq, uint, 0);
MODULE_PARM_DESC(pxa27x_maxfreq, "Set the pxa27x maxfreq in MHz"
"(typically 624=>pxa270, 416=>pxa271, 520=>pxa272)");
typedef struct  pxa_freqs_t;
#define SDRAM_TREF	64
static unsigned int sdram_rows;
#define CCLKCFG_TURBO		0x1
#define CCLKCFG_FCS		0x2
#define CCLKCFG_HALFTURBO	0x4
#define CCLKCFG_FASTBUS		0x8
#define MDREFR_DB2_MASK		(MDREFR_K2DB2 | MDREFR_K1DB2)
#define MDREFR_DRI_MASK		0xFFF
#define MDCNFG_DRAC2(mdcnfg) (((mdcnfg) >> 21) & 0x3)
#define MDCNFG_DRAC0(mdcnfg) (((mdcnfg) >> 5) & 0x3)
#define CCLKCFG			CCLKCFG_TURBO | CCLKCFG_FCS
static pxa_freqs_t pxa255_run_freqs[] =
;
static pxa_freqs_t pxa255_turbo_freqs[] =
;
#define NUM_PXA25x_RUN_FREQS ARRAY_SIZE(pxa255_run_freqs)
#define NUM_PXA25x_TURBO_FREQS ARRAY_SIZE(pxa255_turbo_freqs)
static struct cpufreq_frequency_table
pxa255_run_freq_table[NUM_PXA25x_RUN_FREQS+1];
static struct cpufreq_frequency_table
pxa255_turbo_freq_table[NUM_PXA25x_TURBO_FREQS+1];
static unsigned int pxa255_turbo_table;
module_param(pxa255_turbo_table, uint, 0);
MODULE_PARM_DESC(pxa255_turbo_table, "Selects the frequency table (0 = run table, !0 = turbo table)");
#define PXA27x_CCCR(A, L, N2) (A << 25 | N2 << 7 | L)
#define CCLKCFG2(B, HT, T) \
(CCLKCFG_FCS | \
((B)  ? CCLKCFG_FASTBUS : 0) | \
((HT) ? CCLKCFG_HALFTURBO : 0) | \
((T)  ? CCLKCFG_TURBO : 0))
static pxa_freqs_t pxa27x_freqs[] = ;
#define NUM_PXA27x_FREQS ARRAY_SIZE(pxa27x_freqs)
static struct cpufreq_frequency_table
pxa27x_freq_table[NUM_PXA27x_FREQS+1];
extern unsigned get_clk_frequency_khz(int info);
static int pxa_cpufreq_change_voltage(pxa_freqs_t *pxa_freq)
static __init void pxa_cpufreq_init_voltages(void)
static int pxa_cpufreq_change_voltage(pxa_freqs_t *pxa_freq)
static __init void pxa_cpufreq_init_voltages(void)
static void find_freq_tables(struct cpufreq_frequency_table **freq_table,
pxa_freqs_t **pxa_freqs)
static void pxa27x_guess_max_freq(void)
static void init_sdram_rows(void)
static u32 mdrefr_dri(unsigned int freq)
static int pxa_verify_policy(struct cpufreq_policy *policy)
static unsigned int pxa_cpufreq_get(unsigned int cpu)
static int pxa_set_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int pxa_cpufreq_init(struct cpufreq_policy *policy)
static struct cpufreq_driver pxa_cpufreq_driver = ;
static int __init pxa_cpu_init(void)
static void __exit pxa_cpu_exit(void)
MODULE_AUTHOR("Intrinsyc Software Inc.");
MODULE_DESCRIPTION("CPU frequency changing driver for the PXA architecture");
MODULE_LICENSE("GPL");
module_init(pxa_cpu_init);
module_exit(pxa_cpu_exit);
