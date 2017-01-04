#define MAX_EXTRA_REGS 2
struct er_account ;
struct intel_percore ;
static u64 intel_perfmon_event_map[PERF_COUNT_HW_MAX] __read_mostly =
;
static struct event_constraint intel_core_event_constraints[] __read_mostly =
;
static struct event_constraint intel_core2_event_constraints[] __read_mostly =
;
static struct event_constraint intel_nehalem_event_constraints[] __read_mostly =
;
static struct extra_reg intel_nehalem_extra_regs[] __read_mostly =
;
static struct event_constraint intel_nehalem_percore_constraints[] __read_mostly =
;
static struct event_constraint intel_westmere_event_constraints[] __read_mostly =
;
static struct event_constraint intel_snb_event_constraints[] __read_mostly =
;
static struct extra_reg intel_westmere_extra_regs[] __read_mostly =
;
static struct event_constraint intel_westmere_percore_constraints[] __read_mostly =
;
static struct event_constraint intel_gen_event_constraints[] __read_mostly =
;
static u64 intel_pmu_event_map(int hw_event)
static __initconst const u64 snb_hw_cache_event_ids
[PERF_COUNT_HW_CACHE_MAX]
[PERF_COUNT_HW_CACHE_OP_MAX]
[PERF_COUNT_HW_CACHE_RESULT_MAX] =
;
static __initconst const u64 westmere_hw_cache_event_ids
[PERF_COUNT_HW_CACHE_MAX]
[PERF_COUNT_HW_CACHE_OP_MAX]
[PERF_COUNT_HW_CACHE_RESULT_MAX] =
;
#define NHM_DMND_DATA_RD	(1 << 0)
#define NHM_DMND_RFO		(1 << 1)
#define NHM_DMND_IFETCH		(1 << 2)
#define NHM_DMND_WB		(1 << 3)
#define NHM_PF_DATA_RD		(1 << 4)
#define NHM_PF_DATA_RFO		(1 << 5)
#define NHM_PF_IFETCH		(1 << 6)
#define NHM_OFFCORE_OTHER	(1 << 7)
#define NHM_UNCORE_HIT		(1 << 8)
#define NHM_OTHER_CORE_HIT_SNP	(1 << 9)
#define NHM_OTHER_CORE_HITM	(1 << 10)
#define NHM_REMOTE_CACHE_FWD	(1 << 12)
#define NHM_REMOTE_DRAM		(1 << 13)
#define NHM_LOCAL_DRAM		(1 << 14)
#define NHM_NON_DRAM		(1 << 15)
#define NHM_ALL_DRAM		(NHM_REMOTE_DRAM|NHM_LOCAL_DRAM)
#define NHM_DMND_READ		(NHM_DMND_DATA_RD)
#define NHM_DMND_WRITE		(NHM_DMND_RFO|NHM_DMND_WB)
#define NHM_DMND_PREFETCH	(NHM_PF_DATA_RD|NHM_PF_DATA_RFO)
#define NHM_L3_HIT	(NHM_UNCORE_HIT|NHM_OTHER_CORE_HIT_SNP|NHM_OTHER_CORE_HITM)
#define NHM_L3_MISS	(NHM_NON_DRAM|NHM_ALL_DRAM|NHM_REMOTE_CACHE_FWD)
#define NHM_L3_ACCESS	(NHM_L3_HIT|NHM_L3_MISS)
static __initconst const u64 nehalem_hw_cache_extra_regs
[PERF_COUNT_HW_CACHE_MAX]
[PERF_COUNT_HW_CACHE_OP_MAX]
[PERF_COUNT_HW_CACHE_RESULT_MAX] =
;
static __initconst const u64 nehalem_hw_cache_event_ids
[PERF_COUNT_HW_CACHE_MAX]
[PERF_COUNT_HW_CACHE_OP_MAX]
[PERF_COUNT_HW_CACHE_RESULT_MAX] =
;
static __initconst const u64 core2_hw_cache_event_ids
[PERF_COUNT_HW_CACHE_MAX]
[PERF_COUNT_HW_CACHE_OP_MAX]
[PERF_COUNT_HW_CACHE_RESULT_MAX] =
;
static __initconst const u64 atom_hw_cache_event_ids
[PERF_COUNT_HW_CACHE_MAX]
[PERF_COUNT_HW_CACHE_OP_MAX]
[PERF_COUNT_HW_CACHE_RESULT_MAX] =
;
static void intel_pmu_disable_all(void)
static void intel_pmu_enable_all(int added)
static void intel_pmu_nhm_workaround(void)
static void intel_pmu_nhm_enable_all(int added)
static inline u64 intel_pmu_get_status(void)
static inline void intel_pmu_ack_status(u64 ack)
static void intel_pmu_disable_fixed(struct hw_perf_event *hwc)
static void intel_pmu_disable_event(struct perf_event *event)
static void intel_pmu_enable_fixed(struct hw_perf_event *hwc)
static void intel_pmu_enable_event(struct perf_event *event)
static int intel_pmu_save_and_restart(struct perf_event *event)
static void intel_pmu_reset(void)
static int intel_pmu_handle_irq(struct pt_regs *regs)
static struct event_constraint *
intel_bts_constraints(struct perf_event *event)
static struct event_constraint *
intel_percore_constraints(struct cpu_hw_events *cpuc, struct perf_event *event)
static struct event_constraint *
intel_get_event_constraints(struct cpu_hw_events *cpuc, struct perf_event *event)
static void intel_put_event_constraints(struct cpu_hw_events *cpuc,
struct perf_event *event)
static int intel_pmu_hw_config(struct perf_event *event)
static __initconst const struct x86_pmu core_pmu = ;
static int intel_pmu_cpu_prepare(int cpu)
static void intel_pmu_cpu_starting(int cpu)
static void intel_pmu_cpu_dying(int cpu)
static __initconst const struct x86_pmu intel_pmu = ;
static void intel_clovertown_quirks(void)
static __init int intel_pmu_init(void)
static int intel_pmu_init(void)
