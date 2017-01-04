#define MAX_HWEVENTS			2
#define MAX_PERIOD			((1UL << 32) - 1)
#define PIC_UPPER_INDEX			0
#define PIC_LOWER_INDEX			1
#define PIC_NO_INDEX			-1
struct cpu_hw_events ;
DEFINE_PER_CPU(struct cpu_hw_events, cpu_hw_events) = ;
struct perf_event_map ;
static unsigned long perf_event_encode(const struct perf_event_map *pmap)
static u8 perf_event_get_msk(unsigned long val)
static u64 perf_event_get_enc(unsigned long val)
#define C(x) PERF_COUNT_HW_CACHE_##x
#define CACHE_OP_UNSUPPORTED	0xfffe
#define CACHE_OP_NONSENSE	0xffff
typedef struct perf_event_map cache_map_t
[PERF_COUNT_HW_CACHE_MAX]
[PERF_COUNT_HW_CACHE_OP_MAX]
[PERF_COUNT_HW_CACHE_RESULT_MAX];
struct sparc_pmu ;
static const struct perf_event_map ultra3_perfmon_event_map[] = ;
static const struct perf_event_map *ultra3_event_map(int event_id)
static const cache_map_t ultra3_cache_map = ;
static const struct sparc_pmu ultra3_pmu = ;
static const struct perf_event_map niagara1_perfmon_event_map[] = ;
static const struct perf_event_map *niagara1_event_map(int event_id)
static const cache_map_t niagara1_cache_map = ;
static const struct sparc_pmu niagara1_pmu = ;
static const struct perf_event_map niagara2_perfmon_event_map[] = ;
static const struct perf_event_map *niagara2_event_map(int event_id)
static const cache_map_t niagara2_cache_map = ;
static const struct sparc_pmu niagara2_pmu = ;
static const struct sparc_pmu *sparc_pmu __read_mostly;
static u64 event_encoding(u64 event_id, int idx)
static u64 mask_for_index(int idx)
static u64 nop_for_index(int idx)
static inline void sparc_pmu_enable_event(struct cpu_hw_events *cpuc, struct hw_perf_event *hwc, int idx)
static inline void sparc_pmu_disable_event(struct cpu_hw_events *cpuc, struct hw_perf_event *hwc, int idx)
static u32 read_pmc(int idx)
static void write_pmc(int idx, u64 val)
static u64 sparc_perf_event_update(struct perf_event *event,
struct hw_perf_event *hwc, int idx)
static int sparc_perf_event_set_period(struct perf_event *event,
struct hw_perf_event *hwc, int idx)
static u64 maybe_change_configuration(struct cpu_hw_events *cpuc, u64 pcr)
static void sparc_pmu_enable(struct pmu *pmu)
static void sparc_pmu_disable(struct pmu *pmu)
static int active_event_index(struct cpu_hw_events *cpuc,
struct perf_event *event)
static void sparc_pmu_start(struct perf_event *event, int flags)
static void sparc_pmu_stop(struct perf_event *event, int flags)
static void sparc_pmu_del(struct perf_event *event, int _flags)
static void sparc_pmu_read(struct perf_event *event)
static atomic_t active_events = ATOMIC_INIT(0);
static DEFINE_MUTEX(pmc_grab_mutex);
static void perf_stop_nmi_watchdog(void *unused)
void perf_event_grab_pmc(void)
void perf_event_release_pmc(void)
static const struct perf_event_map *sparc_map_cache_event(u64 config)
static void hw_perf_event_destroy(struct perf_event *event)
static int sparc_check_constraints(struct perf_event **evts,
unsigned long *events, int n_ev)
static int check_excludes(struct perf_event **evts, int n_prev, int n_new)
static int collect_events(struct perf_event *group, int max_count,
struct perf_event *evts[], unsigned long *events,
int *current_idx)
static int sparc_pmu_add(struct perf_event *event, int ef_flags)
static int sparc_pmu_event_init(struct perf_event *event)
static void sparc_pmu_start_txn(struct pmu *pmu)
static void sparc_pmu_cancel_txn(struct pmu *pmu)
static int sparc_pmu_commit_txn(struct pmu *pmu)
static struct pmu pmu = ;
void perf_event_print_debug(void)
static int __kprobes perf_event_nmi_handler(struct notifier_block *self,
unsigned long cmd, void *__args)
static __read_mostly struct notifier_block perf_event_nmi_notifier = ;
static bool __init supported_pmu(void)
int __init init_hw_perf_events(void)
early_initcall(init_hw_perf_events);
void perf_callchain_kernel(struct perf_callchain_entry *entry,
struct pt_regs *regs)
static void perf_callchain_user_64(struct perf_callchain_entry *entry,
struct pt_regs *regs)
static void perf_callchain_user_32(struct perf_callchain_entry *entry,
struct pt_regs *regs)
void
perf_callchain_user(struct perf_callchain_entry *entry, struct pt_regs *regs)
