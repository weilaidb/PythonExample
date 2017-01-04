#define PM_CR_BASE	0xff000084
#define PM_CTR_BASE	0xff100004
#define PMCR(n)		(PM_CR_BASE + ((n) * 0x04))
#define PMCTRH(n)	(PM_CTR_BASE + 0x00 + ((n) * 0x08))
#define PMCTRL(n)	(PM_CTR_BASE + 0x04 + ((n) * 0x08))
#define PMCR_PMM_MASK	0x0000003f
#define PMCR_CLKF	0x00000100
#define PMCR_PMCLR	0x00002000
#define PMCR_PMST	0x00004000
#define PMCR_PMEN	0x00008000
static struct sh_pmu sh7750_pmu;
static const int sh7750_general_events[] = ;
#define C(x)	PERF_COUNT_HW_CACHE_##x
static const int sh7750_cache_events
[PERF_COUNT_HW_CACHE_MAX]
[PERF_COUNT_HW_CACHE_OP_MAX]
[PERF_COUNT_HW_CACHE_RESULT_MAX] =
;
static int sh7750_event_map(int event)
static u64 sh7750_pmu_read(int idx)
static void sh7750_pmu_disable(struct hw_perf_event *hwc, int idx)
static void sh7750_pmu_enable(struct hw_perf_event *hwc, int idx)
static void sh7750_pmu_disable_all(void)
static void sh7750_pmu_enable_all(void)
static struct sh_pmu sh7750_pmu = ;
static int __init sh7750_pmu_init(void)
early_initcall(sh7750_pmu_init);
