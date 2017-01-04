static __initconst const u64 amd_hw_cache_event_ids
[PERF_COUNT_HW_CACHE_MAX]
[PERF_COUNT_HW_CACHE_OP_MAX]
[PERF_COUNT_HW_CACHE_RESULT_MAX] =
;
static const u64 amd_perfmon_event_map[] =
;
static u64 amd_pmu_event_map(int hw_event)
static int amd_pmu_hw_config(struct perf_event *event)
static inline unsigned int amd_get_event_code(struct hw_perf_event *hwc)
static inline int amd_is_nb_event(struct hw_perf_event *hwc)
static inline int amd_has_nb(struct cpu_hw_events *cpuc)
static void amd_put_event_constraints(struct cpu_hw_events *cpuc,
struct perf_event *event)
static struct event_constraint *
amd_get_event_constraints(struct cpu_hw_events *cpuc, struct perf_event *event)
static struct amd_nb *amd_alloc_nb(int cpu)
static int amd_pmu_cpu_prepare(int cpu)
static void amd_pmu_cpu_starting(int cpu)
static void amd_pmu_cpu_dead(int cpu)
static __initconst const struct x86_pmu amd_pmu = ;
#define AMD_EVENT_TYPE_MASK	0x000000F0ULL
#define AMD_EVENT_FP		0x00000000ULL ... 0x00000010ULL
#define AMD_EVENT_LS		0x00000020ULL ... 0x00000030ULL
#define AMD_EVENT_DC		0x00000040ULL ... 0x00000050ULL
#define AMD_EVENT_CU		0x00000060ULL ... 0x00000070ULL
#define AMD_EVENT_IC_DE		0x00000080ULL ... 0x00000090ULL
#define AMD_EVENT_EX_LS		0x000000C0ULL
#define AMD_EVENT_DE		0x000000D0ULL
#define AMD_EVENT_NB		0x000000E0ULL ... 0x000000F0ULL
static struct event_constraint amd_f15_PMC0  = EVENT_CONSTRAINT(0, 0x01, 0);
static struct event_constraint amd_f15_PMC20 = EVENT_CONSTRAINT(0, 0x07, 0);
static struct event_constraint amd_f15_PMC3  = EVENT_CONSTRAINT(0, 0x08, 0);
static struct event_constraint amd_f15_PMC30 = EVENT_CONSTRAINT(0, 0x09, 0);
static struct event_constraint amd_f15_PMC50 = EVENT_CONSTRAINT(0, 0x3F, 0);
static struct event_constraint amd_f15_PMC53 = EVENT_CONSTRAINT(0, 0x38, 0);
static struct event_constraint *
amd_get_event_constraints_f15h(struct cpu_hw_events *cpuc, struct perf_event *event)
static __initconst const struct x86_pmu amd_pmu_f15h = ;
static __init int amd_pmu_init(void)
static int amd_pmu_init(void)
