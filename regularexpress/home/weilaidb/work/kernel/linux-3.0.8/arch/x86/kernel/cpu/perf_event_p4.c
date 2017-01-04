#define P4_CNTR_LIMIT 3
struct p4_event_bind ;
struct p4_pebs_bind ;
#define P4_GEN_PEBS_BIND(name, pebs, vert)			\
[P4_PEBS_METRIC__##name] =
static struct p4_pebs_bind p4_pebs_bind_map[] = ;
static struct p4_event_bind p4_event_bind_map[] = ;
#define P4_GEN_CACHE_EVENT(event, bit, metric)				  \
p4_config_pack_escr(P4_ESCR_EVENT(event)			| \
P4_ESCR_EMASK_BIT(event, bit))		| \
p4_config_pack_cccr(metric					| \
P4_CCCR_ESEL(P4_OPCODE_ESEL(P4_OPCODE(event))))
static __initconst const u64 p4_hw_cache_event_ids
[PERF_COUNT_HW_CACHE_MAX]
[PERF_COUNT_HW_CACHE_OP_MAX]
[PERF_COUNT_HW_CACHE_RESULT_MAX] =
;
static u64 p4_general_events[PERF_COUNT_HW_MAX] = ;
static struct p4_event_bind *p4_config_get_bind(u64 config)
static u64 p4_pmu_event_map(int hw_event)
static bool p4_event_match_cpu_model(unsigned int event_idx)
static int p4_validate_raw_event(struct perf_event *event)
static int p4_hw_config(struct perf_event *event)
static inline int p4_pmu_clear_cccr_ovf(struct hw_perf_event *hwc)
static void p4_pmu_disable_pebs(void)
static inline void p4_pmu_disable_event(struct perf_event *event)
static void p4_pmu_disable_all(void)
static void p4_pmu_enable_pebs(u64 config)
static void p4_pmu_enable_event(struct perf_event *event)
static void p4_pmu_enable_all(int added)
static int p4_pmu_handle_irq(struct pt_regs *regs)
static void p4_pmu_swap_config_ts(struct hw_perf_event *hwc, int cpu)
#define P4_ESCR_MSR_BASE		0x000003a0
#define P4_ESCR_MSR_MAX			0x000003e1
#define P4_ESCR_MSR_TABLE_SIZE		(P4_ESCR_MSR_MAX - P4_ESCR_MSR_BASE + 1)
#define P4_ESCR_MSR_IDX(msr)		(msr - P4_ESCR_MSR_BASE)
#define P4_ESCR_MSR_TABLE_ENTRY(msr)	[P4_ESCR_MSR_IDX(msr)] = msr
static const unsigned int p4_escr_table[P4_ESCR_MSR_TABLE_SIZE] = ;
static int p4_get_escr_idx(unsigned int addr)
static int p4_next_cntr(int thread, unsigned long *used_mask,
struct p4_event_bind *bind)
static int p4_pmu_schedule_events(struct cpu_hw_events *cpuc, int n, int *assign)
static __initconst const struct x86_pmu p4_pmu = ;
static __init int p4_pmu_init(void)
