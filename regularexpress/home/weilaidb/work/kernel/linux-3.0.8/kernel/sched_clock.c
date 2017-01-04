unsigned long long __attribute__((weak)) sched_clock(void)
EXPORT_SYMBOL_GPL(sched_clock);
__read_mostly int sched_clock_running;
__read_mostly int sched_clock_stable;
struct sched_clock_data ;
static DEFINE_PER_CPU_SHARED_ALIGNED(struct sched_clock_data, sched_clock_data);
static inline struct sched_clock_data *this_scd(void)
static inline struct sched_clock_data *cpu_sdc(int cpu)
void sched_clock_init(void)
static inline u64 wrap_min(u64 x, u64 y)
static inline u64 wrap_max(u64 x, u64 y)
static u64 sched_clock_local(struct sched_clock_data *scd)
static u64 sched_clock_remote(struct sched_clock_data *scd)
u64 sched_clock_cpu(int cpu)
void sched_clock_tick(void)
void sched_clock_idle_sleep_event(void)
EXPORT_SYMBOL_GPL(sched_clock_idle_sleep_event);
void sched_clock_idle_wakeup_event(u64 delta_ns)
EXPORT_SYMBOL_GPL(sched_clock_idle_wakeup_event);
u64 cpu_clock(int cpu)
u64 local_clock(void)
void sched_clock_init(void)
u64 sched_clock_cpu(int cpu)
u64 cpu_clock(int cpu)
u64 local_clock(void)
EXPORT_SYMBOL_GPL(cpu_clock);
EXPORT_SYMBOL_GPL(local_clock);
