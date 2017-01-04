#define PM_PMC_SH	20
#define PM_PMC_MSK	0xf
#define PM_PMC_MSKS	(PM_PMC_MSK << PM_PMC_SH)
#define PM_UNIT_SH	16
#define PM_UNIT_MSK	0xf
#define PM_BYTE_SH	12
#define PM_BYTE_MSK	7
#define PM_GRS_SH	8
#define PM_GRS_MSK	7
#define PM_BUSEVENT_MSK	0x80
#define PM_PMCSEL_MSK	0x7f
#define PM_FPU		0
#define PM_ISU0		1
#define PM_IFU		2
#define PM_ISU1		3
#define PM_IDU		4
#define PM_ISU0_ALT	6
#define PM_GRS		7
#define PM_LSU0		8
#define PM_LSU1		0xc
#define PM_LASTUNIT	0xc
#define MMCR1_TTM0SEL_SH	62
#define MMCR1_TTM1SEL_SH	60
#define MMCR1_TTM2SEL_SH	58
#define MMCR1_TTM3SEL_SH	56
#define MMCR1_TTMSEL_MSK	3
#define MMCR1_TD_CP_DBG0SEL_SH	54
#define MMCR1_TD_CP_DBG1SEL_SH	52
#define MMCR1_TD_CP_DBG2SEL_SH	50
#define MMCR1_TD_CP_DBG3SEL_SH	48
#define MMCR1_GRS_L2SEL_SH	46
#define MMCR1_GRS_L2SEL_MSK	3
#define MMCR1_GRS_L3SEL_SH	44
#define MMCR1_GRS_L3SEL_MSK	3
#define MMCR1_GRS_MCSEL_SH	41
#define MMCR1_GRS_MCSEL_MSK	7
#define MMCR1_GRS_FABSEL_SH	39
#define MMCR1_GRS_FABSEL_MSK	3
#define MMCR1_PMC1_ADDER_SEL_SH	35
#define MMCR1_PMC2_ADDER_SEL_SH	34
#define MMCR1_PMC3_ADDER_SEL_SH	33
#define MMCR1_PMC4_ADDER_SEL_SH	32
#define MMCR1_PMC1SEL_SH	25
#define MMCR1_PMC2SEL_SH	17
#define MMCR1_PMC3SEL_SH	9
#define MMCR1_PMC4SEL_SH	1
#define MMCR1_PMCSEL_SH(n)	(MMCR1_PMC1SEL_SH - (n) * 8)
#define MMCR1_PMCSEL_MSK	0x7f
static const int grsel_shift[8] = ;
static unsigned long unit_cons[PM_LASTUNIT+1][2] = ;
static int power5_get_constraint(u64 event, unsigned long *maskp,
unsigned long *valp)
#define MAX_ALT	3
static const unsigned int event_alternatives[][MAX_ALT] = ;
static int find_alternative(u64 event)
static const unsigned char bytedecode_alternatives[4][4] = ;
static s64 find_alternative_bdecode(u64 event)
static int power5_get_alternatives(u64 event, unsigned int flags, u64 alt[])
static unsigned char direct_event_is_marked[0x28] = ;
static int power5_marked_instr_event(u64 event)
static int power5_compute_mmcr(u64 event[], int n_ev,
unsigned int hwc[], unsigned long mmcr[])
static void power5_disable_pmc(unsigned int pmc, unsigned long mmcr[])
static int power5_generic_events[] = ;
#define C(x)	PERF_COUNT_HW_CACHE_##x
static int power5_cache_events[C(MAX)][C(OP_MAX)][C(RESULT_MAX)] = ;
static struct power_pmu power5_pmu = ;
static int init_power5_pmu(void)
early_initcall(init_power5_pmu);
