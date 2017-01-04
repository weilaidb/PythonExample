static DEFINE_PER_CPU(struct tick_sched, tick_cpu_sched);
static ktime_t last_jiffies_update;
struct tick_sched *tick_get_tick_sched(int cpu)
static void tick_do_update_jiffies64(ktime_t now)
static ktime_t tick_init_jiffy_update(void)
static int tick_nohz_enabled __read_mostly  = 1;
static int __init setup_tick_nohz(char *str)
__setup("nohz=", setup_tick_nohz);
static void tick_nohz_update_jiffies(ktime_t now)
static void
update_ts_time_stats(int cpu, struct tick_sched *ts, ktime_t now, u64 *last_update_time)
static void tick_nohz_stop_idle(int cpu, ktime_t now)
static ktime_t tick_nohz_start_idle(int cpu, struct tick_sched *ts)
u64 get_cpu_idle_time_us(int cpu, u64 *last_update_time)
EXPORT_SYMBOL_GPL(get_cpu_idle_time_us);
u64 get_cpu_iowait_time_us(int cpu, u64 *last_update_time)
EXPORT_SYMBOL_GPL(get_cpu_iowait_time_us);
void tick_nohz_stop_sched_tick(int inidle)
ktime_t tick_nohz_get_sleep_length(void)
static void tick_nohz_restart(struct tick_sched *ts, ktime_t now)
void tick_nohz_restart_sched_tick(void)
static int tick_nohz_reprogram(struct tick_sched *ts, ktime_t now)
static void tick_nohz_handler(struct clock_event_device *dev)
static void tick_nohz_switch_to_nohz(void)
static void tick_nohz_kick_tick(int cpu, ktime_t now)
static inline void tick_check_nohz(int cpu)
static inline void tick_nohz_switch_to_nohz(void)
static inline void tick_check_nohz(int cpu)
void tick_check_idle(int cpu)
static enum hrtimer_restart tick_sched_timer(struct hrtimer *timer)
void tick_setup_sched_timer(void)
#if defined CONFIG_NO_HZ || defined CONFIG_HIGH_RES_TIMERS
void tick_cancel_sched_timer(int cpu)
void tick_clock_notify(void)
void tick_oneshot_notify(void)
int tick_check_oneshot_change(int allow_nohz)
