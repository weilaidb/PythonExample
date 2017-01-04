static const int event_map[] = ;
#define C(x)	PERF_COUNT_HW_CACHE_##x
static const int cache_events[PERF_COUNT_HW_CACHE_MAX]
[PERF_COUNT_HW_CACHE_OP_MAX]
[PERF_COUNT_HW_CACHE_RESULT_MAX] =
;
const char *perf_pmu_name(void)
EXPORT_SYMBOL(perf_pmu_name);
int perf_num_counters(void)
EXPORT_SYMBOL(perf_num_counters);
static u64 bfin_pfmon_read(int idx)
static void bfin_pfmon_disable(struct hw_perf_event *hwc, int idx)
static void bfin_pfmon_enable(struct hw_perf_event *hwc, int idx)
static void bfin_pfmon_disable_all(void)
static void bfin_pfmon_enable_all(void)
struct cpu_hw_events ;
DEFINE_PER_CPU(struct cpu_hw_events, cpu_hw_events);
static int hw_perf_cache_event(int config, int *evp)
static void bfin_perf_event_update(struct perf_event *event,
struct hw_perf_event *hwc, int idx)
static void bfin_pmu_stop(struct perf_event *event, int flags)
static void bfin_pmu_start(struct perf_event *event, int flags)
static void bfin_pmu_del(struct perf_event *event, int flags)
static int bfin_pmu_add(struct perf_event *event, int flags)
static void bfin_pmu_read(struct perf_event *event)
static int bfin_pmu_event_init(struct perf_event *event)
static void bfin_pmu_enable(struct pmu *pmu)
static void bfin_pmu_disable(struct pmu *pmu)
static struct pmu pmu = ;
static void bfin_pmu_setup(int cpu)
static int __cpuinit
bfin_pmu_notifier(struct notifier_block *self, unsigned long action, void *hcpu)
static int __init bfin_pmu_init(void)
early_initcall(bfin_pmu_init);
