#if defined(CONFIG_CPU_MIPS32) || defined(CONFIG_CPU_MIPS64) || \
defined(CONFIG_CPU_R10000) || defined(CONFIG_CPU_SB1)
#define M_CONFIG1_PC	(1 << 4)
#define M_PERFCTL_EXL			(1UL      <<  0)
#define M_PERFCTL_KERNEL		(1UL      <<  1)
#define M_PERFCTL_SUPERVISOR		(1UL      <<  2)
#define M_PERFCTL_USER			(1UL      <<  3)
#define M_PERFCTL_INTERRUPT_ENABLE	(1UL      <<  4)
#define M_PERFCTL_EVENT(event)		(((event) & 0x3ff)  << 5)
#define M_PERFCTL_VPEID(vpe)		((vpe)    << 16)
#define M_PERFCTL_MT_EN(filter)		((filter) << 20)
#define    M_TC_EN_ALL			M_PERFCTL_MT_EN(0)
#define    M_TC_EN_VPE			M_PERFCTL_MT_EN(1)
#define    M_TC_EN_TC			M_PERFCTL_MT_EN(2)
#define M_PERFCTL_TCID(tcid)		((tcid)   << 22)
#define M_PERFCTL_WIDE			(1UL      << 30)
#define M_PERFCTL_MORE			(1UL      << 31)
#define M_PERFCTL_COUNT_EVENT_WHENEVER	(M_PERFCTL_EXL |		\
M_PERFCTL_KERNEL |		\
M_PERFCTL_USER |		\
M_PERFCTL_SUPERVISOR |		\
M_PERFCTL_INTERRUPT_ENABLE)
#define M_PERFCTL_CONFIG_MASK		0x3fff801f
#define M_PERFCTL_CONFIG_MASK		0x1f
#define M_PERFCTL_EVENT_MASK		0xfe0
#define M_COUNTER_OVERFLOW		(1UL      << 31)
static int cpu_has_mipsmt_pertccounters;
#if defined(CONFIG_HW_PERF_EVENTS)
#define vpe_id()	(cpu_has_mipsmt_pertccounters ? \
0 : smp_processor_id())
#define vpe_id()	(cpu_has_mipsmt_pertccounters ? \
0 : cpu_data[smp_processor_id()].vpe_id)
static inline unsigned int vpe_shift(void)
#define vpe_id()	0
static inline unsigned int vpe_shift(void)
static inline unsigned int
counters_total_to_per_cpu(unsigned int counters)
static inline unsigned int
counters_per_cpu_to_total(unsigned int counters)
#define __define_perf_accessors(r, n, np)				\
\
static inline unsigned int r_c0_ ## r ## n(void)			\
\
\
static inline void w_c0_ ## r ## n(unsigned int value)			\
\
__define_perf_accessors(perfcntr, 0, 2)
__define_perf_accessors(perfcntr, 1, 3)
__define_perf_accessors(perfcntr, 2, 0)
__define_perf_accessors(perfcntr, 3, 1)
__define_perf_accessors(perfctrl, 0, 2)
__define_perf_accessors(perfctrl, 1, 3)
__define_perf_accessors(perfctrl, 2, 0)
__define_perf_accessors(perfctrl, 3, 1)
static inline int __n_counters(void)
static inline int n_counters(void)
static void reset_counters(void *arg)
static inline u64
mipsxx_pmu_read_counter(unsigned int idx)
static inline void
mipsxx_pmu_write_counter(unsigned int idx, u64 val)
static inline unsigned int
mipsxx_pmu_read_control(unsigned int idx)
static inline void
mipsxx_pmu_write_control(unsigned int idx, unsigned int val)
static DEFINE_RWLOCK(pmuint_rwlock);
static const struct mips_perf_event mipsxxcore_event_map
[PERF_COUNT_HW_MAX] = ;
static const struct mips_perf_event mipsxx74Kcore_event_map
[PERF_COUNT_HW_MAX] = ;
static const struct mips_perf_event mipsxxcore_cache_map
[PERF_COUNT_HW_CACHE_MAX]
[PERF_COUNT_HW_CACHE_OP_MAX]
[PERF_COUNT_HW_CACHE_RESULT_MAX] = ;
static const struct mips_perf_event mipsxx74Kcore_cache_map
[PERF_COUNT_HW_CACHE_MAX]
[PERF_COUNT_HW_CACHE_OP_MAX]
[PERF_COUNT_HW_CACHE_RESULT_MAX] = ;
static void
check_and_calc_range(struct perf_event *event,
const struct mips_perf_event *pev)
static void
check_and_calc_range(struct perf_event *event,
const struct mips_perf_event *pev)
static int __hw_perf_event_init(struct perf_event *event)
static void pause_local_counters(void)
static void resume_local_counters(void)
static int mipsxx_pmu_handle_shared_irq(void)
static irqreturn_t
mipsxx_pmu_handle_irq(int irq, void *dev)
static void mipsxx_pmu_start(void)
static void mipsxx_pmu_stop(void)
static int
mipsxx_pmu_alloc_counter(struct cpu_hw_events *cpuc,
struct hw_perf_event *hwc)
static void
mipsxx_pmu_enable_event(struct hw_perf_event *evt, int idx)
static void
mipsxx_pmu_disable_event(int idx)
#define IS_UNSUPPORTED_24K_EVENT(r, b)					\
((b) == 12 || (r) == 151 || (r) == 152 || (b) == 26 ||		\
(b) == 27 || (r) == 28 || (r) == 158 || (b) == 31 ||		\
(b) == 32 || (b) == 34 || (b) == 36 || (r) == 168 ||		\
(r) == 172 || (b) == 47 || ((b) >= 56 && (b) <= 63) ||		\
((b) >= 68 && (b) <= 127))
#define IS_BOTH_COUNTERS_24K_EVENT(b)					\
((b) == 0 || (b) == 1 || (b) == 11)
#define IS_UNSUPPORTED_34K_EVENT(r, b)					\
((b) == 12 || (r) == 27 || (r) == 158 || (b) == 36 ||		\
(b) == 38 || (r) == 175 || ((b) >= 56 && (b) <= 63) ||		\
((b) >= 68 && (b) <= 127))
#define IS_BOTH_COUNTERS_34K_EVENT(b)					\
((b) == 0 || (b) == 1 || (b) == 11)
#define IS_RANGE_P_34K_EVENT(r, b)					\
((b) == 0 || (r) == 18 || (b) == 21 || (b) == 22 ||		\
(b) == 25 || (b) == 39 || (r) == 44 || (r) == 174 ||		\
(r) == 176 || ((b) >= 50 && (b) <= 55) ||			\
((b) >= 64 && (b) <= 67))
#define IS_RANGE_V_34K_EVENT(r)	((r) == 47)
#define IS_UNSUPPORTED_74K_EVENT(r, b)					\
((r) == 5 || ((r) >= 135 && (r) <= 137) ||			\
((b) >= 10 && (b) <= 12) || (b) == 22 || (b) == 27 ||		\
(b) == 33 || (b) == 34 || ((b) >= 47 && (b) <= 49) ||		\
(r) == 178 || (b) == 55 || (b) == 57 || (b) == 60 ||		\
(b) == 61 || (r) == 62 || (r) == 191 ||			\
((b) >= 64 && (b) <= 127))
#define IS_BOTH_COUNTERS_74K_EVENT(b)					\
((b) == 0 || (b) == 1)
#define IS_UNSUPPORTED_1004K_EVENT(r, b)				\
((b) == 12 || (r) == 27 || (r) == 158 || (b) == 38 ||		\
(r) == 175 || (b) == 63 || ((b) >= 68 && (b) <= 127))
#define IS_BOTH_COUNTERS_1004K_EVENT(b)					\
((b) == 0 || (b) == 1 || (b) == 11)
#define IS_RANGE_P_1004K_EVENT(r, b)					\
((b) == 0 || (r) == 18 || (b) == 21 || (b) == 22 ||		\
(b) == 25 || (b) == 36 || (b) == 39 || (r) == 44 ||		\
(r) == 174 || (r) == 176 || ((b) >= 50 && (b) <= 59) ||	\
(r) == 188 || (b) == 61 || (b) == 62 ||			\
((b) >= 64 && (b) <= 67))
#define IS_RANGE_V_1004K_EVENT(r)	((r) == 47)
static const struct mips_perf_event *
mipsxx_pmu_map_raw_event(u64 config)
static struct mips_pmu mipsxxcore_pmu = ;
static struct mips_pmu mipsxx74Kcore_pmu = ;
static int __init
init_hw_perf_events(void)
early_initcall(init_hw_perf_events);
