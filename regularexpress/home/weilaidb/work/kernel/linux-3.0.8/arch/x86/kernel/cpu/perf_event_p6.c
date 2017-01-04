static const u64 p6_perfmon_event_map[] =
;
static u64 p6_pmu_event_map(int hw_event)
#define P6_NOP_EVENT			0x0000002EULL
static struct event_constraint p6_event_constraints[] =
;
static void p6_pmu_disable_all(void)
static void p6_pmu_enable_all(int added)
static inline void
p6_pmu_disable_event(struct perf_event *event)
static void p6_pmu_enable_event(struct perf_event *event)
static __initconst const struct x86_pmu p6_pmu = ;
static __init int p6_pmu_init(void)
