#define _LINUX_TICK_H
enum tick_device_mode ;
struct tick_device ;
enum tick_nohz_mode ;
struct tick_sched ;
extern void __init tick_init(void);
extern int tick_is_oneshot_available(void);
extern struct tick_device *tick_get_device(int cpu);
# ifdef CONFIG_HIGH_RES_TIMERS
extern int tick_init_highres(void);
extern int tick_program_event(ktime_t expires, int force);
extern void tick_setup_sched_timer(void);
# endif
# if defined CONFIG_NO_HZ || defined CONFIG_HIGH_RES_TIMERS
extern void tick_cancel_sched_timer(int cpu);
# else
static inline void tick_cancel_sched_timer(int cpu)
# endif
# ifdef CONFIG_GENERIC_CLOCKEVENTS_BROADCAST
extern struct tick_device *tick_get_broadcast_device(void);
extern struct cpumask *tick_get_broadcast_mask(void);
#  ifdef CONFIG_TICK_ONESHOT
extern struct cpumask *tick_get_broadcast_oneshot_mask(void);
#  endif
# endif
# ifdef CONFIG_TICK_ONESHOT
extern void tick_clock_notify(void);
extern int tick_check_oneshot_change(int allow_nohz);
extern struct tick_sched *tick_get_tick_sched(int cpu);
extern void tick_check_idle(int cpu);
extern int tick_oneshot_mode_active(void);
#  ifndef arch_needs_cpu
#   define arch_needs_cpu(cpu) (0)
#  endif
# else
static inline void tick_clock_notify(void)
static inline int tick_check_oneshot_change(int allow_nohz)
static inline void tick_check_idle(int cpu)
static inline int tick_oneshot_mode_active(void)
# endif
static inline void tick_init(void)
static inline void tick_cancel_sched_timer(int cpu)
static inline void tick_clock_notify(void)
static inline int tick_check_oneshot_change(int allow_nohz)
static inline void tick_check_idle(int cpu)
static inline int tick_oneshot_mode_active(void)
# ifdef CONFIG_NO_HZ
extern void tick_nohz_stop_sched_tick(int inidle);
extern void tick_nohz_restart_sched_tick(void);
extern ktime_t tick_nohz_get_sleep_length(void);
extern u64 get_cpu_idle_time_us(int cpu, u64 *last_update_time);
extern u64 get_cpu_iowait_time_us(int cpu, u64 *last_update_time);
# else
static inline void tick_nohz_stop_sched_tick(int inidle)
static inline void tick_nohz_restart_sched_tick(void)
static inline ktime_t tick_nohz_get_sleep_length(void)
static inline u64 get_cpu_idle_time_us(int cpu, u64 *unused)
static inline u64 get_cpu_iowait_time_us(int cpu, u64 *unused)
# endif
