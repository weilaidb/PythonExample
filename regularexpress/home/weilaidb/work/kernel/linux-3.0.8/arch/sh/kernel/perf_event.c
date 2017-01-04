struct cpu_hw_events ;
DEFINE_PER_CPU(struct cpu_hw_events, cpu_hw_events);
static struct sh_pmu *sh_pmu __read_mostly;
static atomic_t num_events;
static DEFINE_MUTEX(pmc_reserve_mutex);
int reserve_pmc_hardware(void)
void release_pmc_hardware(void)
static inline int sh_pmu_initialized(void)
const char *perf_pmu_name(void)
EXPORT_SYMBOL_GPL(perf_pmu_name);
int perf_num_counters(void)
EXPORT_SYMBOL_GPL(perf_num_counters);
static void hw_perf_event_destroy(struct perf_event *event)
static int hw_perf_cache_event(int config, int *evp)
static int __hw_perf_event_init(struct perf_event *event)
static void sh_perf_event_update(struct perf_event *event,
struct hw_perf_event *hwc, int idx)
static void sh_pmu_stop(struct perf_event *event, int flags)
static void sh_pmu_start(struct perf_event *event, int flags)
static void sh_pmu_del(struct perf_event *event, int flags)
static int sh_pmu_add(struct perf_event *event, int flags)
static void sh_pmu_read(struct perf_event *event)
static int sh_pmu_event_init(struct perf_event *event)
static void sh_pmu_enable(struct pmu *pmu)
static void sh_pmu_disable(struct pmu *pmu)
static struct pmu pmu = ;
static void sh_pmu_setup(int cpu)
static int __cpuinit
sh_pmu_notifier(struct notifier_block *self, unsigned long action, void *hcpu)
int __cpuinit register_sh_pmu(struct sh_pmu *_pmu)
