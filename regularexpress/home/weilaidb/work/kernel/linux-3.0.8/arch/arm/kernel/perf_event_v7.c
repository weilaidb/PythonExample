enum armv7_perf_types ;
enum armv7_a8_perf_types ;
enum armv7_a9_perf_types ;
static const unsigned armv7_a8_perf_map[PERF_COUNT_HW_MAX] = ;
static const unsigned armv7_a8_perf_cache_map[PERF_COUNT_HW_CACHE_MAX]
[PERF_COUNT_HW_CACHE_OP_MAX]
[PERF_COUNT_HW_CACHE_RESULT_MAX] = ;
static const unsigned armv7_a9_perf_map[PERF_COUNT_HW_MAX] = ;
static const unsigned armv7_a9_perf_cache_map[PERF_COUNT_HW_CACHE_MAX]
[PERF_COUNT_HW_CACHE_OP_MAX]
[PERF_COUNT_HW_CACHE_RESULT_MAX] = ;
enum armv7_counters ;
#define	ARMV7_COUNTER_LAST	(ARMV7_COUNTER0 + armpmu->num_events - 1)
#define ARMV7_PMNC_E		(1 << 0)
#define ARMV7_PMNC_P		(1 << 1)
#define ARMV7_PMNC_C		(1 << 2)
#define ARMV7_PMNC_D		(1 << 3)
#define ARMV7_PMNC_X		(1 << 4)
#define ARMV7_PMNC_DP		(1 << 5)
#define	ARMV7_PMNC_N_SHIFT	11
#define	ARMV7_PMNC_N_MASK	0x1f
#define	ARMV7_PMNC_MASK		0x3f
#define ARMV7_CNT0		0
#define ARMV7_CCNT		31
#define ARMV7_EVENT_CNT_TO_CNTx	(ARMV7_COUNTER0 - ARMV7_CNT0)
#define ARMV7_CNTENS_P(idx)	(1 << (idx - ARMV7_EVENT_CNT_TO_CNTx))
#define ARMV7_CNTENS_C		(1 << ARMV7_CCNT)
#define ARMV7_CNTENC_P(idx)	(1 << (idx - ARMV7_EVENT_CNT_TO_CNTx))
#define ARMV7_CNTENC_C		(1 << ARMV7_CCNT)
#define ARMV7_INTENS_P(idx)	(1 << (idx - ARMV7_EVENT_CNT_TO_CNTx))
#define ARMV7_INTENS_C		(1 << ARMV7_CCNT)
#define ARMV7_INTENC_P(idx)	(1 << (idx - ARMV7_EVENT_CNT_TO_CNTx))
#define ARMV7_INTENC_C		(1 << ARMV7_CCNT)
#define	ARMV7_EVTSEL_MASK	0xff
#define	ARMV7_SELECT_MASK	0x1f
#define ARMV7_FLAG_P(idx)	(1 << (idx - ARMV7_EVENT_CNT_TO_CNTx))
#define ARMV7_FLAG_C		(1 << ARMV7_CCNT)
#define	ARMV7_FLAG_MASK		0xffffffff
#define	ARMV7_OVERFLOWED_MASK	ARMV7_FLAG_MASK
static inline unsigned long armv7_pmnc_read(void)
static inline void armv7_pmnc_write(unsigned long val)
static inline int armv7_pmnc_has_overflowed(unsigned long pmnc)
static inline int armv7_pmnc_counter_has_overflowed(unsigned long pmnc,
enum armv7_counters counter)
static inline int armv7_pmnc_select_counter(unsigned int idx)
static inline u32 armv7pmu_read_counter(int idx)
static inline void armv7pmu_write_counter(int idx, u32 value)
static inline void armv7_pmnc_write_evtsel(unsigned int idx, u32 val)
static inline u32 armv7_pmnc_enable_counter(unsigned int idx)
static inline u32 armv7_pmnc_disable_counter(unsigned int idx)
static inline u32 armv7_pmnc_enable_intens(unsigned int idx)
static inline u32 armv7_pmnc_disable_intens(unsigned int idx)
static inline u32 armv7_pmnc_getreset_flags(void)
static void armv7_pmnc_dump_regs(void)
static void armv7pmu_enable_event(struct hw_perf_event *hwc, int idx)
static void armv7pmu_disable_event(struct hw_perf_event *hwc, int idx)
static irqreturn_t armv7pmu_handle_irq(int irq_num, void *dev)
static void armv7pmu_start(void)
static void armv7pmu_stop(void)
static int armv7pmu_get_event_idx(struct cpu_hw_events *cpuc,
struct hw_perf_event *event)
static void armv7pmu_reset(void *info)
static struct arm_pmu armv7pmu = ;
static u32 __init armv7_read_num_pmnc_events(void)
static const struct arm_pmu *__init armv7_a8_pmu_init(void)
static const struct arm_pmu *__init armv7_a9_pmu_init(void)
static const struct arm_pmu *__init armv7_a8_pmu_init(void)
static const struct arm_pmu *__init armv7_a9_pmu_init(void)
