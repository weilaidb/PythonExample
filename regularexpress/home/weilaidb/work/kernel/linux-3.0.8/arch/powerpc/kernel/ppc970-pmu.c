#define PM_PMC_SH	12
#define PM_PMC_MSK	0xf
#define PM_UNIT_SH	8
#define PM_UNIT_MSK	0xf
#define PM_SPCSEL_SH	6
#define PM_SPCSEL_MSK	3
#define PM_BYTE_SH	4
#define PM_BYTE_MSK	3
#define PM_PMCSEL_MSK	0xf
#define PM_NONE		0
#define PM_FPU		1
#define PM_VPU		2
#define PM_ISU		3
#define PM_IFU		4
#define PM_IDU		5
#define PM_STS		6
#define PM_LSU0		7
#define PM_LSU1U	8
#define PM_LSU1L	9
#define PM_LASTUNIT	9
#define MMCR0_PMC1SEL_SH	8
#define MMCR0_PMC2SEL_SH	1
#define MMCR_PMCSEL_MSK		0x1f
#define MMCR1_TTM0SEL_SH	62
#define MMCR1_TTM1SEL_SH	59
#define MMCR1_TTM3SEL_SH	53
#define MMCR1_TTMSEL_MSK	3
#define MMCR1_TD_CP_DBG0SEL_SH	50
#define MMCR1_TD_CP_DBG1SEL_SH	48
#define MMCR1_TD_CP_DBG2SEL_SH	46
#define MMCR1_TD_CP_DBG3SEL_SH	44
#define MMCR1_PMC1_ADDER_SEL_SH	39
#define MMCR1_PMC2_ADDER_SEL_SH	38
#define MMCR1_PMC6_ADDER_SEL_SH	37
#define MMCR1_PMC5_ADDER_SEL_SH	36
#define MMCR1_PMC8_ADDER_SEL_SH	35
#define MMCR1_PMC7_ADDER_SEL_SH	34
#define MMCR1_PMC3_ADDER_SEL_SH	33
#define MMCR1_PMC4_ADDER_SEL_SH	32
#define MMCR1_PMC3SEL_SH	27
#define MMCR1_PMC4SEL_SH	22
#define MMCR1_PMC5SEL_SH	17
#define MMCR1_PMC6SEL_SH	12
#define MMCR1_PMC7SEL_SH	7
#define MMCR1_PMC8SEL_SH	2
static short mmcr1_adder_bits[8] = ;
static unsigned char direct_marked_event[8] = ;
static int p970_marked_instr_event(u64 event)
static unsigned long unit_cons[PM_LASTUNIT+1][2] = ;
static int p970_get_constraint(u64 event, unsigned long *maskp,
unsigned long *valp)
static int p970_get_alternatives(u64 event, unsigned int flags, u64 alt[])
static int p970_compute_mmcr(u64 event[], int n_ev,
unsigned int hwc[], unsigned long mmcr[])
static void p970_disable_pmc(unsigned int pmc, unsigned long mmcr[])
static int ppc970_generic_events[] = ;
#define C(x)	PERF_COUNT_HW_CACHE_##x
static int ppc970_cache_events[C(MAX)][C(OP_MAX)][C(RESULT_MAX)] = ;
static struct power_pmu ppc970_pmu = ;
static int init_ppc970_pmu(void)
early_initcall(init_ppc970_pmu);
