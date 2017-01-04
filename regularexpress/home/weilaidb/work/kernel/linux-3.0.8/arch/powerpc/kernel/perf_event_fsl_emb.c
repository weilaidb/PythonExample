struct cpu_hw_events ;
static DEFINE_PER_CPU(struct cpu_hw_events, cpu_hw_events);
static struct fsl_emb_pmu *ppmu;
static atomic_t num_events;
static DEFINE_MUTEX(pmc_reserve_mutex);
static inline int perf_intr_is_nmi(struct pt_regs *regs)
static void perf_event_interrupt(struct pt_regs *regs);
static unsigned long read_pmc(int idx)
static void write_pmc(int idx, unsigned long val)
static void write_pmlca(int idx, unsigned long val)
static void write_pmlcb(int idx, unsigned long val)
static void fsl_emb_pmu_read(struct perf_event *event)
static void fsl_emb_pmu_disable(struct pmu *pmu)
static void fsl_emb_pmu_enable(struct pmu *pmu)
static int collect_events(struct perf_event *group, int max_count,
struct perf_event *ctrs[])
static int fsl_emb_pmu_add(struct perf_event *event, int flags)
static void fsl_emb_pmu_del(struct perf_event *event, int flags)
static void fsl_emb_pmu_start(struct perf_event *event, int ef_flags)
static void fsl_emb_pmu_stop(struct perf_event *event, int ef_flags)
static void hw_perf_event_destroy(struct perf_event *event)
static int hw_perf_cache_event(u64 config, u64 *eventp)
static int fsl_emb_pmu_event_init(struct perf_event *event)
static struct pmu fsl_emb_pmu = ;
static void record_and_restart(struct perf_event *event, unsigned long val,
struct pt_regs *regs, int nmi)
static void perf_event_interrupt(struct pt_regs *regs)
void hw_perf_event_setup(int cpu)
int register_fsl_emb_pmu(struct fsl_emb_pmu *pmu)
