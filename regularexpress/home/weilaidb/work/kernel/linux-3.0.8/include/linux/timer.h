#define _LINUX_TIMER_H
struct tvec_base;
struct timer_list ;
extern struct tvec_base boot_tvec_bases;
#define __TIMER_LOCKDEP_MAP_INITIALIZER(_kn)				\
.lockdep_map = STATIC_LOCKDEP_MAP_INIT(_kn, &_kn),
#define __TIMER_LOCKDEP_MAP_INITIALIZER(_kn)
#define TBASE_DEFERRABLE_FLAG		(0x1)
#define TIMER_INITIALIZER(_function, _expires, _data)
#define TBASE_MAKE_DEFERRED(ptr) ((struct tvec_base *)		\
((unsigned char *)(ptr) + TBASE_DEFERRABLE_FLAG))
#define TIMER_DEFERRED_INITIALIZER(_function, _expires, _data)
#define DEFINE_TIMER(_name, _function, _expires, _data)		\
struct timer_list _name =				\
TIMER_INITIALIZER(_function, _expires, _data)
void init_timer_key(struct timer_list *timer,
const char *name,
struct lock_class_key *key);
void init_timer_deferrable_key(struct timer_list *timer,
const char *name,
struct lock_class_key *key);
#define init_timer(timer)						\
do  while (0)
#define init_timer_deferrable(timer)					\
do  while (0)
#define init_timer_on_stack(timer)					\
do  while (0)
#define setup_timer(timer, fn, data)					\
do  while (0)
#define setup_timer_on_stack(timer, fn, data)				\
do  while (0)
#define setup_deferrable_timer_on_stack(timer, fn, data)		\
do  while (0)
#define init_timer(timer)\
init_timer_key((timer), NULL, NULL)
#define init_timer_deferrable(timer)\
init_timer_deferrable_key((timer), NULL, NULL)
#define init_timer_on_stack(timer)\
init_timer_on_stack_key((timer), NULL, NULL)
#define setup_timer(timer, fn, data)\
setup_timer_key((timer), NULL, NULL, (fn), (data))
#define setup_timer_on_stack(timer, fn, data)\
setup_timer_on_stack_key((timer), NULL, NULL, (fn), (data))
#define setup_deferrable_timer_on_stack(timer, fn, data)\
setup_deferrable_timer_on_stack_key((timer), NULL, NULL, (fn), (data))
extern void init_timer_on_stack_key(struct timer_list *timer,
const char *name,
struct lock_class_key *key);
extern void destroy_timer_on_stack(struct timer_list *timer);
static inline void destroy_timer_on_stack(struct timer_list *timer)
static inline void init_timer_on_stack_key(struct timer_list *timer,
const char *name,
struct lock_class_key *key)
static inline void setup_timer_key(struct timer_list * timer,
const char *name,
struct lock_class_key *key,
void (*function)(unsigned long),
unsigned long data)
static inline void setup_timer_on_stack_key(struct timer_list *timer,
const char *name,
struct lock_class_key *key,
void (*function)(unsigned long),
unsigned long data)
extern void setup_deferrable_timer_on_stack_key(struct timer_list *timer,
const char *name,
struct lock_class_key *key,
void (*function)(unsigned long),
unsigned long data);
static inline int timer_pending(const struct timer_list * timer)
extern void add_timer_on(struct timer_list *timer, int cpu);
extern int del_timer(struct timer_list * timer);
extern int mod_timer(struct timer_list *timer, unsigned long expires);
extern int mod_timer_pending(struct timer_list *timer, unsigned long expires);
extern int mod_timer_pinned(struct timer_list *timer, unsigned long expires);
extern void set_timer_slack(struct timer_list *time, int slack_hz);
#define TIMER_NOT_PINNED	0
#define TIMER_PINNED		1
#define NEXT_TIMER_MAX_DELTA	((1UL << 30) - 1)
extern unsigned long get_next_timer_interrupt(unsigned long now);
extern int timer_stats_active;
#define TIMER_STATS_FLAG_DEFERRABLE	0x1
extern void init_timer_stats(void);
extern void timer_stats_update_stats(void *timer, pid_t pid, void *startf,
void *timerf, char *comm,
unsigned int timer_flag);
extern void __timer_stats_timer_set_start_info(struct timer_list *timer,
void *addr);
static inline void timer_stats_timer_set_start_info(struct timer_list *timer)
static inline void timer_stats_timer_clear_start_info(struct timer_list *timer)
static inline void init_timer_stats(void)
static inline void timer_stats_timer_set_start_info(struct timer_list *timer)
static inline void timer_stats_timer_clear_start_info(struct timer_list *timer)
extern void add_timer(struct timer_list *timer);
extern int try_to_del_timer_sync(struct timer_list *timer);
extern int del_timer_sync(struct timer_list *timer);
# define del_timer_sync(t)		del_timer(t)
#define del_singleshot_timer_sync(t) del_timer_sync(t)
extern void init_timers(void);
extern void run_local_timers(void);
struct hrtimer;
extern enum hrtimer_restart it_real_fn(struct hrtimer *);
unsigned long __round_jiffies(unsigned long j, int cpu);
unsigned long __round_jiffies_relative(unsigned long j, int cpu);
unsigned long round_jiffies(unsigned long j);
unsigned long round_jiffies_relative(unsigned long j);
unsigned long __round_jiffies_up(unsigned long j, int cpu);
unsigned long __round_jiffies_up_relative(unsigned long j, int cpu);
unsigned long round_jiffies_up(unsigned long j);
unsigned long round_jiffies_up_relative(unsigned long j);
