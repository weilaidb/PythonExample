#define N_COUNTER	6
#define MAX_ALT		3
#define PM_THRMULT_MSKS	0x40000
#define PM_THRESH_SH	12
#define PM_THRESH_MSK	0x3f
#define PM_PMC_SH	8
#define PM_PMC_MSK	7
#define PM_PMCSEL_MSK	0x7f
#define N_CLASSES	5
static int mpc7450_classify_event(u32 event)
static int mpc7450_threshold_use(u32 event)
static u32 pmcbits[N_COUNTER][2] = ;
static u32 classbits[N_CLASSES - 1][2] = ;
static int mpc7450_get_constraint(u64 event, unsigned long *maskp,
unsigned long *valp)
static const unsigned int event_alternatives[][MAX_ALT] = ;
static int find_alternative(u32 event)
static int mpc7450_get_alternatives(u64 event, unsigned int flags, u64 alt[])
static const u8 classmap[N_CLASSES] = ;
static const int pmcsel_shift[N_COUNTER] = ;
static const u32 pmcsel_mask[N_COUNTER] = ;
static int mpc7450_compute_mmcr(u64 event[], int n_ev,
unsigned int hwc[], unsigned long mmcr[])
static void mpc7450_disable_pmc(unsigned int pmc, unsigned long mmcr[])
static int mpc7450_generic_events[] = ;
#define C(x)	PERF_COUNT_HW_CACHE_##x
static int mpc7450_cache_events[C(MAX)][C(OP_MAX)][C(RESULT_MAX)] = ;
struct power_pmu mpc7450_pmu = ;
static int init_mpc7450_pmu(void)
early_initcall(init_mpc7450_pmu);
