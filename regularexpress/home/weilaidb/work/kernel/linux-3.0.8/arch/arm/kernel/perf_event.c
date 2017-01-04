#undef DEBUG
#define pr_fmt(fmt) "hw perfevents: " fmt
static struct platform_device *pmu_device;
static DEFINE_RAW_SPINLOCK(pmu_lock);
#define ARMPMU_MAX_HWEVENTS		33
struct cpu_hw_events ;
static DEFINE_PER_CPU(struct cpu_hw_events, cpu_hw_events);
struct arm_pmu ;
static const struct arm_pmu *armpmu;
enum arm_perf_pmu_ids
armpmu_get_pmu_id(void)
EXPORT_SYMBOL_GPL(armpmu_get_pmu_id);
int
armpmu_get_max_events(void)
EXPORT_SYMBOL_GPL(armpmu_get_max_events);
int perf_num_counters(void)
EXPORT_SYMBOL_GPL(perf_num_counters);
#define HW_OP_UNSUPPORTED		0xFFFF
#define C(_x) \
PERF_COUNT_HW_CACHE_##_x
#define CACHE_OP_UNSUPPORTED		0xFFFF
static int
armpmu_map_cache_event(u64 config)
static int
armpmu_map_event(u64 config)
static int
armpmu_map_raw_event(u64 config)
static int
armpmu_event_set_period(struct perf_event *event,
struct hw_perf_event *hwc,
int idx)
static u64
armpmu_event_update(struct perf_event *event,
struct hw_perf_event *hwc,
int idx, int overflow)
static void
armpmu_read(struct perf_event *event)
static void
armpmu_stop(struct perf_event *event, int flags)
static void
armpmu_start(struct perf_event *event, int flags)
static void
armpmu_del(struct perf_event *event, int flags)
static int
armpmu_add(struct perf_event *event, int flags)
static struct pmu pmu;
static int
validate_event(struct cpu_hw_events *cpuc,
struct perf_event *event)
static int
validate_group(struct perf_event *event)
static irqreturn_t armpmu_platform_irq(int irq, void *dev)
static int
armpmu_reserve_hardware(void)
static void
armpmu_release_hardware(void)
static atomic_t active_events = ATOMIC_INIT(0);
static DEFINE_MUTEX(pmu_reserve_mutex);
static void
hw_perf_event_destroy(struct perf_event *event)
static int
__hw_perf_event_init(struct perf_event *event)
static int armpmu_event_init(struct perf_event *event)
static void armpmu_enable(struct pmu *pmu)
static void armpmu_disable(struct pmu *pmu)
static struct pmu pmu = ;
static int __init
armpmu_reset(void)
arch_initcall(armpmu_reset);
static int __init
init_hw_perf_events(void)
early_initcall(init_hw_perf_events);
struct frame_tail  __attribute__((packed));
static struct frame_tail __user *
user_backtrace(struct frame_tail __user *tail,
struct perf_callchain_entry *entry)
void
perf_callchain_user(struct perf_callchain_entry *entry, struct pt_regs *regs)
static int
callchain_trace(struct stackframe *fr,
void *data)
void
perf_callchain_kernel(struct perf_callchain_entry *entry, struct pt_regs *regs)
