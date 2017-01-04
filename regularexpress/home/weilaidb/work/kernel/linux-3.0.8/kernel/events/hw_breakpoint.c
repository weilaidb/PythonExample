static DEFINE_PER_CPU(unsigned int, nr_cpu_bp_pinned[TYPE_MAX]);
static DEFINE_PER_CPU(unsigned int *, nr_task_bp_pinned[TYPE_MAX]);
static DEFINE_PER_CPU(unsigned int, nr_bp_flexible[TYPE_MAX]);
static int nr_slots[TYPE_MAX];
static LIST_HEAD(bp_task_head);
static int constraints_initialized;
struct bp_busy_slots ;
static DEFINE_MUTEX(nr_bp_mutex);
__weak int hw_breakpoint_weight(struct perf_event *bp)
static inline enum bp_type_idx find_slot_idx(struct perf_event *bp)
static unsigned int max_task_bp_pinned(int cpu, enum bp_type_idx type)
static int task_bp_pinned(struct perf_event *bp, enum bp_type_idx type)
static void
fetch_bp_busy_slots(struct bp_busy_slots *slots, struct perf_event *bp,
enum bp_type_idx type)
static void
fetch_this_slot(struct bp_busy_slots *slots, int weight)
static void toggle_bp_task_slot(struct perf_event *bp, int cpu, bool enable,
enum bp_type_idx type, int weight)
static void
toggle_bp_slot(struct perf_event *bp, bool enable, enum bp_type_idx type,
int weight)
__weak void arch_unregister_hw_breakpoint(struct perf_event *bp)
static int __reserve_bp_slot(struct perf_event *bp)
int reserve_bp_slot(struct perf_event *bp)
static void __release_bp_slot(struct perf_event *bp)
void release_bp_slot(struct perf_event *bp)
int dbg_reserve_bp_slot(struct perf_event *bp)
int dbg_release_bp_slot(struct perf_event *bp)
static int validate_hw_breakpoint(struct perf_event *bp)
int register_perf_hw_breakpoint(struct perf_event *bp)
struct perf_event *
register_user_hw_breakpoint(struct perf_event_attr *attr,
perf_overflow_handler_t triggered,
struct task_struct *tsk)
EXPORT_SYMBOL_GPL(register_user_hw_breakpoint);
int modify_user_hw_breakpoint(struct perf_event *bp, struct perf_event_attr *attr)
EXPORT_SYMBOL_GPL(modify_user_hw_breakpoint);
void unregister_hw_breakpoint(struct perf_event *bp)
EXPORT_SYMBOL_GPL(unregister_hw_breakpoint);
struct perf_event * __percpu *
register_wide_hw_breakpoint(struct perf_event_attr *attr,
perf_overflow_handler_t triggered)
EXPORT_SYMBOL_GPL(register_wide_hw_breakpoint);
void unregister_wide_hw_breakpoint(struct perf_event * __percpu *cpu_events)
EXPORT_SYMBOL_GPL(unregister_wide_hw_breakpoint);
static struct notifier_block hw_breakpoint_exceptions_nb = ;
static void bp_perf_event_destroy(struct perf_event *event)
static int hw_breakpoint_event_init(struct perf_event *bp)
static int hw_breakpoint_add(struct perf_event *bp, int flags)
static void hw_breakpoint_del(struct perf_event *bp, int flags)
static void hw_breakpoint_start(struct perf_event *bp, int flags)
static void hw_breakpoint_stop(struct perf_event *bp, int flags)
static struct pmu perf_breakpoint = ;
int __init init_hw_breakpoint(void)
