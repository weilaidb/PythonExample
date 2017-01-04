#define PPC_CCBR(idx)	(0xff200800 + (sizeof(u32) * idx))
#define PPC_PMCTR(idx)	(0xfc100000 + (sizeof(u32) * idx))
#define CCBR_CIT_MASK	(0x7ff << 6)
#define CCBR_DUC	(1 << 3)
#define CCBR_CMDS	(1 << 1)
#define CCBR_PPCE	(1 << 0)
#define PPC_PMCAT	0xfc100240
#define PPC_PMCAT	0xfc100080
#define PMCAT_OVF3	(1 << 27)
#define PMCAT_CNN3	(1 << 26)
#define PMCAT_CLR3	(1 << 25)
#define PMCAT_OVF2	(1 << 19)
#define PMCAT_CLR2	(1 << 17)
#define PMCAT_OVF1	(1 << 11)
#define PMCAT_CNN1	(1 << 10)
#define PMCAT_CLR1	(1 << 9)
#define PMCAT_OVF0	(1 << 3)
#define PMCAT_CLR0	(1 << 1)
static struct sh_pmu sh4a_pmu;
#define PMCAT_EMU_CLR_MASK	((1 << 24) | (1 << 16) | (1 << 8) | (1 << 0))
static const int sh4a_general_events[] = ;
#define C(x)	PERF_COUNT_HW_CACHE_##x
static const int sh4a_cache_events
[PERF_COUNT_HW_CACHE_MAX]
[PERF_COUNT_HW_CACHE_OP_MAX]
[PERF_COUNT_HW_CACHE_RESULT_MAX] =
;
static int sh4a_event_map(int event)
static u64 sh4a_pmu_read(int idx)
static void sh4a_pmu_disable(struct hw_perf_event *hwc, int idx)
static void sh4a_pmu_enable(struct hw_perf_event *hwc, int idx)
static void sh4a_pmu_disable_all(void)
static void sh4a_pmu_enable_all(void)
static struct sh_pmu sh4a_pmu = ;
static int __init sh4a_pmu_init(void)
early_initcall(sh4a_pmu_init);
