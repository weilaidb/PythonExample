#define MAX_HWEVENTS 3
#define PMC_NO_INDEX -1
struct cpu_hw_events ;
DEFINE_PER_CPU(struct cpu_hw_events, cpu_hw_events);
struct alpha_pmu_t ;
static const struct alpha_pmu_t *alpha_pmu;
#define HW_OP_UNSUPPORTED -1
enum ev67_pmc_event_type ;
#define EV67_NUM_EVENT_TYPES (EV67_LAST_ET-EV67_CYCLES)
static const int ev67_perfmon_event_map[] = ;
struct ev67_mapping_t ;
static const struct ev67_mapping_t ev67_mapping[] = ;
static int ev67_check_constraints(struct perf_event **event,
unsigned long *evtype, int n_ev)
static const struct alpha_pmu_t ev67_pmu = ;
static inline void alpha_write_pmc(int idx, unsigned long val)
static inline unsigned long alpha_read_pmc(int idx)
static int alpha_perf_event_set_period(struct perf_event *event,
struct hw_perf_event *hwc, int idx)
static unsigned long alpha_perf_event_update(struct perf_event *event,
struct hw_perf_event *hwc, int idx, long ovf)
static int collect_events(struct perf_event *group, int max_count,
struct perf_event *event[], unsigned long *evtype,
int *current_idx)
static int alpha_check_constraints(struct perf_event **events,
unsigned long *evtypes, int n_ev)
static void maybe_change_configuration(struct cpu_hw_events *cpuc)
static int alpha_pmu_add(struct perf_event *event, int flags)
static void alpha_pmu_del(struct perf_event *event, int flags)
static void alpha_pmu_read(struct perf_event *event)
static void alpha_pmu_stop(struct perf_event *event, int flags)
static void alpha_pmu_start(struct perf_event *event, int flags)
static int supported_cpu(void)
static void hw_perf_event_destroy(struct perf_event *event)
static int __hw_perf_event_init(struct perf_event *event)
static int alpha_pmu_event_init(struct perf_event *event)
static void alpha_pmu_enable(struct pmu *pmu)
static void alpha_pmu_disable(struct pmu *pmu)
static struct pmu pmu = ;
void perf_event_print_debug(void)
static void alpha_perf_event_irq_handler(unsigned long la_ptr,
struct pt_regs *regs)
int __init init_hw_perf_events(void)
early_initcall(init_hw_perf_events);
