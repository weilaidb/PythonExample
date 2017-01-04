#if defined(CONFIG_CPU_V6) || defined(CONFIG_CPU_V6K)
enum armv6_perf_types ;
enum armv6_counters ;
static const unsigned armv6_perf_map[PERF_COUNT_HW_MAX] = ;
static const unsigned armv6_perf_cache_map[PERF_COUNT_HW_CACHE_MAX]
[PERF_COUNT_HW_CACHE_OP_MAX]
[PERF_COUNT_HW_CACHE_RESULT_MAX] = ;
enum armv6mpcore_perf_types ;
static const unsigned armv6mpcore_perf_map[PERF_COUNT_HW_MAX] = ;
static const unsigned armv6mpcore_perf_cache_map[PERF_COUNT_HW_CACHE_MAX]
[PERF_COUNT_HW_CACHE_OP_MAX]
[PERF_COUNT_HW_CACHE_RESULT_MAX] = ;
static inline unsigned long
armv6_pmcr_read(void)
static inline void
armv6_pmcr_write(unsigned long val)
#define ARMV6_PMCR_ENABLE		(1 << 0)
#define ARMV6_PMCR_CTR01_RESET		(1 << 1)
#define ARMV6_PMCR_CCOUNT_RESET		(1 << 2)
#define ARMV6_PMCR_CCOUNT_DIV		(1 << 3)
#define ARMV6_PMCR_COUNT0_IEN		(1 << 4)
#define ARMV6_PMCR_COUNT1_IEN		(1 << 5)
#define ARMV6_PMCR_CCOUNT_IEN		(1 << 6)
#define ARMV6_PMCR_COUNT0_OVERFLOW	(1 << 8)
#define ARMV6_PMCR_COUNT1_OVERFLOW	(1 << 9)
#define ARMV6_PMCR_CCOUNT_OVERFLOW	(1 << 10)
#define ARMV6_PMCR_EVT_COUNT0_SHIFT	20
#define ARMV6_PMCR_EVT_COUNT0_MASK	(0xFF << ARMV6_PMCR_EVT_COUNT0_SHIFT)
#define ARMV6_PMCR_EVT_COUNT1_SHIFT	12
#define ARMV6_PMCR_EVT_COUNT1_MASK	(0xFF << ARMV6_PMCR_EVT_COUNT1_SHIFT)
#define ARMV6_PMCR_OVERFLOWED_MASK \
(ARMV6_PMCR_COUNT0_OVERFLOW | ARMV6_PMCR_COUNT1_OVERFLOW | \
ARMV6_PMCR_CCOUNT_OVERFLOW)
static inline int
armv6_pmcr_has_overflowed(unsigned long pmcr)
static inline int
armv6_pmcr_counter_has_overflowed(unsigned long pmcr,
enum armv6_counters counter)
static inline u32
armv6pmu_read_counter(int counter)
static inline void
armv6pmu_write_counter(int counter,
u32 value)
static void
armv6pmu_enable_event(struct hw_perf_event *hwc,
int idx)
static irqreturn_t
armv6pmu_handle_irq(int irq_num,
void *dev)
static void
armv6pmu_start(void)
static void
armv6pmu_stop(void)
static int
armv6pmu_get_event_idx(struct cpu_hw_events *cpuc,
struct hw_perf_event *event)
static void
armv6pmu_disable_event(struct hw_perf_event *hwc,
int idx)
static void
armv6mpcore_pmu_disable_event(struct hw_perf_event *hwc,
int idx)
static const struct arm_pmu armv6pmu = ;
static const struct arm_pmu *__init armv6pmu_init(void)
static const struct arm_pmu armv6mpcore_pmu = ;
static const struct arm_pmu *__init armv6mpcore_pmu_init(void)
static const struct arm_pmu *__init armv6pmu_init(void)
static const struct arm_pmu *__init armv6mpcore_pmu_init(void)
