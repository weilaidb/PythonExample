#define MAX_PEBS_EVENTS		4
#define BTS_RECORD_SIZE		24
#define BTS_BUFFER_SIZE		(PAGE_SIZE << 4)
#define PEBS_BUFFER_SIZE	PAGE_SIZE
struct pebs_record_core ;
struct pebs_record_nhm ;
struct debug_store ;
static void init_debug_store_on_cpu(int cpu)
static void fini_debug_store_on_cpu(int cpu)
static int alloc_pebs_buffer(int cpu)
static void release_pebs_buffer(int cpu)
static int alloc_bts_buffer(int cpu)
static void release_bts_buffer(int cpu)
static int alloc_ds_buffer(int cpu)
static void release_ds_buffer(int cpu)
static void release_ds_buffers(void)
static void reserve_ds_buffers(void)
static struct event_constraint bts_constraint =
EVENT_CONSTRAINT(0, 1ULL << X86_PMC_IDX_FIXED_BTS, 0);
static void intel_pmu_enable_bts(u64 config)
static void intel_pmu_disable_bts(void)
static int intel_pmu_drain_bts_buffer(void)
static struct event_constraint intel_core2_pebs_event_constraints[] = ;
static struct event_constraint intel_atom_pebs_event_constraints[] = ;
static struct event_constraint intel_nehalem_pebs_event_constraints[] = ;
static struct event_constraint intel_westmere_pebs_event_constraints[] = ;
static struct event_constraint intel_snb_pebs_events[] = ;
static struct event_constraint *
intel_pebs_constraints(struct perf_event *event)
static void intel_pmu_pebs_enable(struct perf_event *event)
static void intel_pmu_pebs_disable(struct perf_event *event)
static void intel_pmu_pebs_enable_all(void)
static void intel_pmu_pebs_disable_all(void)
static inline bool kernel_ip(unsigned long ip)
static int intel_pmu_pebs_fixup_ip(struct pt_regs *regs)
static int intel_pmu_save_and_restart(struct perf_event *event);
static void __intel_pmu_pebs_event(struct perf_event *event,
struct pt_regs *iregs, void *__pebs)
static void intel_pmu_drain_pebs_core(struct pt_regs *iregs)
static void intel_pmu_drain_pebs_nhm(struct pt_regs *iregs)
static void intel_ds_init(void)
static void reserve_ds_buffers(void)
static void release_ds_buffers(void)
