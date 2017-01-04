struct cpu_hw_events ;
DEFINE_PER_CPU(struct cpu_hw_events, cpu_hw_events);
struct power_pmu *ppmu;
static unsigned int freeze_events_kernel = MMCR0_FCS;
#define MMCR0_FCHV		0
#define MMCR0_PMCjCE		MMCR0_PMCnCE
#define SPRN_MMCRA		SPRN_MMCR2
#define MMCRA_SAMPLE_ENABLE	0
static inline unsigned long perf_ip_adjust(struct pt_regs *regs)
static inline void perf_get_data_addr(struct pt_regs *regs, u64 *addrp)
static inline u32 perf_get_misc_flags(struct pt_regs *regs)
static inline void perf_read_regs(struct pt_regs *regs)
static inline int perf_intr_is_nmi(struct pt_regs *regs)
static inline unsigned long perf_ip_adjust(struct pt_regs *regs)
static inline void perf_get_data_addr(struct pt_regs *regs, u64 *addrp)
static inline u32 perf_get_misc_flags(struct pt_regs *regs)
static inline void perf_read_regs(struct pt_regs *regs)
static inline int perf_intr_is_nmi(struct pt_regs *regs)
static void perf_event_interrupt(struct pt_regs *regs);
void perf_event_print_debug(void)
static unsigned long read_pmc(int idx)
static void write_pmc(int idx, unsigned long val)
static int power_check_constraints(struct cpu_hw_events *cpuhw,
u64 event_id[], unsigned int cflags[],
int n_ev)
static int check_excludes(struct perf_event **ctrs, unsigned int cflags[],
int n_prev, int n_new)
static u64 check_and_compute_delta(u64 prev, u64 val)
static void power_pmu_read(struct perf_event *event)
static int is_limited_pmc(int pmcnum)
static void freeze_limited_counters(struct cpu_hw_events *cpuhw,
unsigned long pmc5, unsigned long pmc6)
static void thaw_limited_counters(struct cpu_hw_events *cpuhw,
unsigned long pmc5, unsigned long pmc6)
static void write_mmcr0(struct cpu_hw_events *cpuhw, unsigned long mmcr0)
static void power_pmu_disable(struct pmu *pmu)
static void power_pmu_enable(struct pmu *pmu)
static int collect_events(struct perf_event *group, int max_count,
struct perf_event *ctrs[], u64 *events,
unsigned int *flags)
static int power_pmu_add(struct perf_event *event, int ef_flags)
static void power_pmu_del(struct perf_event *event, int ef_flags)
static void power_pmu_start(struct perf_event *event, int ef_flags)
static void power_pmu_stop(struct perf_event *event, int ef_flags)
void power_pmu_start_txn(struct pmu *pmu)
void power_pmu_cancel_txn(struct pmu *pmu)
int power_pmu_commit_txn(struct pmu *pmu)
static int can_go_on_limited_pmc(struct perf_event *event, u64 ev,
unsigned int flags)
static u64 normal_pmc_alternative(u64 ev, unsigned long flags)
static atomic_t num_events;
static DEFINE_MUTEX(pmc_reserve_mutex);
static void hw_perf_event_destroy(struct perf_event *event)
static int hw_perf_cache_event(u64 config, u64 *eventp)
static int power_pmu_event_init(struct perf_event *event)
struct pmu power_pmu = ;
static void record_and_restart(struct perf_event *event, unsigned long val,
struct pt_regs *regs, int nmi)
unsigned long perf_misc_flags(struct pt_regs *regs)
unsigned long perf_instruction_pointer(struct pt_regs *regs)
static bool pmc_overflow(unsigned long val)
static void perf_event_interrupt(struct pt_regs *regs)
static void power_pmu_setup(int cpu)
static int __cpuinit
power_pmu_notifier(struct notifier_block *self, unsigned long action, void *hcpu)
int register_power_pmu(struct power_pmu *pmu)
