#define MAX_PERIOD	((1ULL << 32) - 1)
#define VALID_COUNT	0x7fffffff
#define TOTAL_BITS	32
#define HIGHEST_BIT	31
#define MIPS_MAX_HWEVENTS 4
struct cpu_hw_events ;
DEFINE_PER_CPU(struct cpu_hw_events, cpu_hw_events) = ;
struct mips_perf_event ;
static struct mips_perf_event raw_event;
static DEFINE_MUTEX(raw_event_mutex);
#define UNSUPPORTED_PERF_EVENT_ID 0xffffffff
#define C(x) PERF_COUNT_HW_CACHE_##x
struct mips_pmu ;
static const struct mips_pmu *mipspmu;
static int
mipspmu_event_set_period(struct perf_event *event,
struct hw_perf_event *hwc,
int idx)
static void mipspmu_event_update(struct perf_event *event,
struct hw_perf_event *hwc,
int idx)
static void mipspmu_start(struct perf_event *event, int flags)
static void mipspmu_stop(struct perf_event *event, int flags)
static int mipspmu_add(struct perf_event *event, int flags)
static void mipspmu_del(struct perf_event *event, int flags)
static void mipspmu_read(struct perf_event *event)
static void mipspmu_enable(struct pmu *pmu)
static void mipspmu_disable(struct pmu *pmu)
static atomic_t active_events = ATOMIC_INIT(0);
static DEFINE_MUTEX(pmu_reserve_mutex);
static int (*save_perf_irq)(void);
static int mipspmu_get_irq(void)
static void mipspmu_free_irq(void)
static void reset_counters(void *arg);
static int __hw_perf_event_init(struct perf_event *event);
static void hw_perf_event_destroy(struct perf_event *event)
static int mipspmu_event_init(struct perf_event *event)
static struct pmu pmu = ;
static inline unsigned int
mipspmu_perf_event_encode(const struct mips_perf_event *pev)
static const struct mips_perf_event *
mipspmu_map_general_event(int idx)
static const struct mips_perf_event *
mipspmu_map_cache_event(u64 config)
static int validate_event(struct cpu_hw_events *cpuc,
struct perf_event *event)
static int validate_group(struct perf_event *event)
static void
handle_associated_event(struct cpu_hw_events *cpuc,
int idx, struct perf_sample_data *data, struct pt_regs *regs)
void perf_callchain_user(struct perf_callchain_entry *entry,
struct pt_regs *regs)
static void save_raw_perf_callchain(struct perf_callchain_entry *entry,
unsigned long reg29)
void perf_callchain_kernel(struct perf_callchain_entry *entry,
struct pt_regs *regs)
