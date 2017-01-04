#define PM_PMC_SH	16
#define PM_PMC_MSK	0xf
#define PM_PMC_MSKS	(PM_PMC_MSK << PM_PMC_SH)
#define PM_UNIT_SH	12
#define PM_UNIT_MSK	0xf
#define PM_COMBINE_SH	11
#define PM_COMBINE_MSK	1
#define PM_COMBINE_MSKS	0x800
#define PM_L2SEL_SH	8
#define PM_L2SEL_MSK	7
#define PM_PMCSEL_MSK	0xff
#define MMCR1_TTM0SEL_SH	60
#define MMCR1_TTM1SEL_SH	56
#define MMCR1_TTM2SEL_SH	52
#define MMCR1_TTM3SEL_SH	48
#define MMCR1_TTMSEL_MSK	0xf
#define MMCR1_L2SEL_SH		45
#define MMCR1_L2SEL_MSK		7
#define MMCR1_PMC1_COMBINE_SH	35
#define MMCR1_PMC2_COMBINE_SH	34
#define MMCR1_PMC3_COMBINE_SH	33
#define MMCR1_PMC4_COMBINE_SH	32
#define MMCR1_PMC1SEL_SH	24
#define MMCR1_PMC2SEL_SH	16
#define MMCR1_PMC3SEL_SH	8
#define MMCR1_PMC4SEL_SH	0
#define MMCR1_PMCSEL_SH(n)	(MMCR1_PMC1SEL_SH - (n) * 8)
#define MMCR1_PMCSEL_MSK	0xff
static int power7_get_constraint(u64 event, unsigned long *maskp,
unsigned long *valp)
#define MAX_ALT	2
static const unsigned int event_alternatives[][MAX_ALT] = ;
static int find_alternative(u64 event)
static s64 find_alternative_decode(u64 event)
static int power7_get_alternatives(u64 event, unsigned int flags, u64 alt[])
static int power7_marked_instr_event(u64 event)
static int power7_compute_mmcr(u64 event[], int n_ev,
unsigned int hwc[], unsigned long mmcr[])
static void power7_disable_pmc(unsigned int pmc, unsigned long mmcr[])
static int power7_generic_events[] = ;
#define C(x)	PERF_COUNT_HW_CACHE_##x
static int power7_cache_events[C(MAX)][C(OP_MAX)][C(RESULT_MAX)] = ;
static struct power_pmu power7_pmu = ;
static int init_power7_pmu(void)
early_initcall(init_power7_pmu);
