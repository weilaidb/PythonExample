#define PM_PMC_SH	20
#define PM_PMC_MSK	0x7
#define PM_PMC_MSKS	(PM_PMC_MSK << PM_PMC_SH)
#define PM_UNIT_SH	16
#define PM_UNIT_MSK	0xf
#define PM_UNIT_MSKS	(PM_UNIT_MSK << PM_UNIT_SH)
#define PM_LLAV		0x8000
#define PM_LLA		0x4000
#define PM_BYTE_SH	12
#define PM_BYTE_MSK	3
#define PM_SUBUNIT_SH	8
#define PM_SUBUNIT_MSK	7
#define PM_SUBUNIT_MSKS	(PM_SUBUNIT_MSK << PM_SUBUNIT_SH)
#define PM_PMCSEL_MSK	0xff
#define PM_BUSEVENT_MSK	0xf3700
#define MMCR1_TTM0SEL_SH	60
#define MMCR1_TTMSEL_SH(n)	(MMCR1_TTM0SEL_SH - (n) * 4)
#define MMCR1_TTMSEL_MSK	0xf
#define MMCR1_TTMSEL(m, n)	(((m) >> MMCR1_TTMSEL_SH(n)) & MMCR1_TTMSEL_MSK)
#define MMCR1_NESTSEL_SH	45
#define MMCR1_NESTSEL_MSK	0x7
#define MMCR1_NESTSEL(m)	(((m) >> MMCR1_NESTSEL_SH) & MMCR1_NESTSEL_MSK)
#define MMCR1_PMC1_LLA		(1ul << 44)
#define MMCR1_PMC1_LLA_VALUE	(1ul << 39)
#define MMCR1_PMC1_ADDR_SEL	(1ul << 35)
#define MMCR1_PMC1SEL_SH	24
#define MMCR1_PMCSEL_SH(n)	(MMCR1_PMC1SEL_SH - (n) * 8)
#define MMCR1_PMCSEL_MSK	0xff
static unsigned char direct_event_is_marked[0x60 >> 1] = ;
static u32 marked_bus_events[16] = ;
static int power6_marked_instr_event(u64 event)
static int p6_compute_mmcr(u64 event[], int n_ev,
unsigned int hwc[], unsigned long mmcr[])
static int p6_get_constraint(u64 event, unsigned long *maskp,
unsigned long *valp)
static int p6_limited_pmc_event(u64 event)
#define MAX_ALT	4
static const unsigned int event_alternatives[][MAX_ALT] = ;
static int find_alternatives_list(u64 event)
static int p6_get_alternatives(u64 event, unsigned int flags, u64 alt[])
static void p6_disable_pmc(unsigned int pmc, unsigned long mmcr[])
static int power6_generic_events[] = ;
#define C(x)	PERF_COUNT_HW_CACHE_##x
static int power6_cache_events[C(MAX)][C(OP_MAX)][C(RESULT_MAX)] = ;
static struct power_pmu power6_pmu = ;
static int init_power6_pmu(void)
early_initcall(init_power6_pmu);
