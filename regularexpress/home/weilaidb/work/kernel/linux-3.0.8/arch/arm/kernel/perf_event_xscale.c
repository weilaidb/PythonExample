enum xscale_perf_types ;
enum xscale_counters ;
static const unsigned xscale_perf_map[PERF_COUNT_HW_MAX] = ;
static const unsigned xscale_perf_cache_map[PERF_COUNT_HW_CACHE_MAX]
[PERF_COUNT_HW_CACHE_OP_MAX]
[PERF_COUNT_HW_CACHE_RESULT_MAX] = ;
#define	XSCALE_PMU_ENABLE	0x001
#define XSCALE_PMN_RESET	0x002
#define	XSCALE_CCNT_RESET	0x004
#define	XSCALE_PMU_RESET	(CCNT_RESET | PMN_RESET)
#define XSCALE_PMU_CNT64	0x008
#define XSCALE1_OVERFLOWED_MASK	0x700
#define XSCALE1_CCOUNT_OVERFLOW	0x400
#define XSCALE1_COUNT0_OVERFLOW	0x100
#define XSCALE1_COUNT1_OVERFLOW	0x200
#define XSCALE1_CCOUNT_INT_EN	0x040
#define XSCALE1_COUNT0_INT_EN	0x010
#define XSCALE1_COUNT1_INT_EN	0x020
#define XSCALE1_COUNT0_EVT_SHFT	12
#define XSCALE1_COUNT0_EVT_MASK	(0xff << XSCALE1_COUNT0_EVT_SHFT)
#define XSCALE1_COUNT1_EVT_SHFT	20
#define XSCALE1_COUNT1_EVT_MASK	(0xff << XSCALE1_COUNT1_EVT_SHFT)
static inline u32
xscale1pmu_read_pmnc(void)
static inline void
xscale1pmu_write_pmnc(u32 val)
static inline int
xscale1_pmnc_counter_has_overflowed(unsigned long pmnc,
enum xscale_counters counter)
static irqreturn_t
xscale1pmu_handle_irq(int irq_num, void *dev)
static void
xscale1pmu_enable_event(struct hw_perf_event *hwc, int idx)
static void
xscale1pmu_disable_event(struct hw_perf_event *hwc, int idx)
static int
xscale1pmu_get_event_idx(struct cpu_hw_events *cpuc,
struct hw_perf_event *event)
static void
xscale1pmu_start(void)
static void
xscale1pmu_stop(void)
static inline u32
xscale1pmu_read_counter(int counter)
static inline void
xscale1pmu_write_counter(int counter, u32 val)
static const struct arm_pmu xscale1pmu = ;
static const struct arm_pmu *__init xscale1pmu_init(void)
#define XSCALE2_OVERFLOWED_MASK	0x01f
#define XSCALE2_CCOUNT_OVERFLOW	0x001
#define XSCALE2_COUNT0_OVERFLOW	0x002
#define XSCALE2_COUNT1_OVERFLOW	0x004
#define XSCALE2_COUNT2_OVERFLOW	0x008
#define XSCALE2_COUNT3_OVERFLOW	0x010
#define XSCALE2_CCOUNT_INT_EN	0x001
#define XSCALE2_COUNT0_INT_EN	0x002
#define XSCALE2_COUNT1_INT_EN	0x004
#define XSCALE2_COUNT2_INT_EN	0x008
#define XSCALE2_COUNT3_INT_EN	0x010
#define XSCALE2_COUNT0_EVT_SHFT	0
#define XSCALE2_COUNT0_EVT_MASK	(0xff << XSCALE2_COUNT0_EVT_SHFT)
#define XSCALE2_COUNT1_EVT_SHFT	8
#define XSCALE2_COUNT1_EVT_MASK	(0xff << XSCALE2_COUNT1_EVT_SHFT)
#define XSCALE2_COUNT2_EVT_SHFT	16
#define XSCALE2_COUNT2_EVT_MASK	(0xff << XSCALE2_COUNT2_EVT_SHFT)
#define XSCALE2_COUNT3_EVT_SHFT	24
#define XSCALE2_COUNT3_EVT_MASK	(0xff << XSCALE2_COUNT3_EVT_SHFT)
static inline u32
xscale2pmu_read_pmnc(void)
static inline void
xscale2pmu_write_pmnc(u32 val)
static inline u32
xscale2pmu_read_overflow_flags(void)
static inline void
xscale2pmu_write_overflow_flags(u32 val)
static inline u32
xscale2pmu_read_event_select(void)
static inline void
xscale2pmu_write_event_select(u32 val)
static inline u32
xscale2pmu_read_int_enable(void)
static void
xscale2pmu_write_int_enable(u32 val)
static inline int
xscale2_pmnc_counter_has_overflowed(unsigned long of_flags,
enum xscale_counters counter)
static irqreturn_t
xscale2pmu_handle_irq(int irq_num, void *dev)
static void
xscale2pmu_enable_event(struct hw_perf_event *hwc, int idx)
static void
xscale2pmu_disable_event(struct hw_perf_event *hwc, int idx)
static int
xscale2pmu_get_event_idx(struct cpu_hw_events *cpuc,
struct hw_perf_event *event)
static void
xscale2pmu_start(void)
static void
xscale2pmu_stop(void)
static inline u32
xscale2pmu_read_counter(int counter)
static inline void
xscale2pmu_write_counter(int counter, u32 val)
static const struct arm_pmu xscale2pmu = ;
static const struct arm_pmu *__init xscale2pmu_init(void)
static const struct arm_pmu *__init xscale1pmu_init(void)
static const struct arm_pmu *__init xscale2pmu_init(void)
