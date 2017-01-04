#define _LINUX_WORKQUEUE_H
struct workqueue_struct;
struct work_struct;
typedef void (*work_func_t)(struct work_struct *work);
#define work_data_bits(work) ((unsigned long *)(&(work)->data))
enum ;
struct work_struct ;
#define WORK_DATA_INIT()	ATOMIC_LONG_INIT(WORK_STRUCT_NO_CPU)
#define WORK_DATA_STATIC_INIT()	\
ATOMIC_LONG_INIT(WORK_STRUCT_NO_CPU | WORK_STRUCT_STATIC)
struct delayed_work ;
static inline struct delayed_work *to_delayed_work(struct work_struct *work)
struct execute_work ;
#define __WORK_INIT_LOCKDEP_MAP(n, k) \
.lockdep_map = STATIC_LOCKDEP_MAP_INIT(n, k),
#define __WORK_INIT_LOCKDEP_MAP(n, k)
#define __WORK_INITIALIZER(n, f)
#define __DELAYED_WORK_INITIALIZER(n, f)
#define __DEFERRED_WORK_INITIALIZER(n, f)
#define DECLARE_WORK(n, f)					\
struct work_struct n = __WORK_INITIALIZER(n, f)
#define DECLARE_DELAYED_WORK(n, f)				\
struct delayed_work n = __DELAYED_WORK_INITIALIZER(n, f)
#define DECLARE_DEFERRED_WORK(n, f)				\
struct delayed_work n = __DEFERRED_WORK_INITIALIZER(n, f)
#define PREPARE_WORK(_work, _func)				\
do  while (0)
#define PREPARE_DELAYED_WORK(_work, _func)			\
PREPARE_WORK(&(_work)->work, (_func))
extern void __init_work(struct work_struct *work, int onstack);
extern void destroy_work_on_stack(struct work_struct *work);
static inline unsigned int work_static(struct work_struct *work)
static inline void __init_work(struct work_struct *work, int onstack)
static inline void destroy_work_on_stack(struct work_struct *work)
static inline unsigned int work_static(struct work_struct *work)
#define __INIT_WORK(_work, _func, _onstack)				\
do  while (0)
#define __INIT_WORK(_work, _func, _onstack)				\
do  while (0)
#define INIT_WORK(_work, _func)					\
do  while (0)
#define INIT_WORK_ONSTACK(_work, _func)				\
do  while (0)
#define INIT_DELAYED_WORK(_work, _func)				\
do  while (0)
#define INIT_DELAYED_WORK_ONSTACK(_work, _func)			\
do  while (0)
#define INIT_DELAYED_WORK_DEFERRABLE(_work, _func)		\
do  while (0)
#define work_pending(work) \
test_bit(WORK_STRUCT_PENDING_BIT, work_data_bits(work))
#define delayed_work_pending(w) \
work_pending(&(w)->work)
#define work_clear_pending(work) \
clear_bit(WORK_STRUCT_PENDING_BIT, work_data_bits(work))
enum ;
#define WQ_UNBOUND_MAX_ACTIVE	\
max_t(int, WQ_MAX_ACTIVE, num_possible_cpus() * WQ_MAX_UNBOUND_PER_CPU)
extern struct workqueue_struct *system_wq;
extern struct workqueue_struct *system_long_wq;
extern struct workqueue_struct *system_nrt_wq;
extern struct workqueue_struct *system_unbound_wq;
extern struct workqueue_struct *system_freezable_wq;
extern struct workqueue_struct *
__alloc_workqueue_key(const char *name, unsigned int flags, int max_active,
struct lock_class_key *key, const char *lock_name);
#define alloc_workqueue(name, flags, max_active)		\
()
#define alloc_workqueue(name, flags, max_active)		\
__alloc_workqueue_key((name), (flags), (max_active), NULL, NULL)
static inline struct workqueue_struct *
alloc_ordered_workqueue(const char *name, unsigned int flags)
#define create_workqueue(name)					\
alloc_workqueue((name), WQ_MEM_RECLAIM, 1)
#define create_freezable_workqueue(name)			\
alloc_workqueue((name), WQ_FREEZABLE | WQ_UNBOUND | WQ_MEM_RECLAIM, 1)
#define create_singlethread_workqueue(name)			\
alloc_workqueue((name), WQ_UNBOUND | WQ_MEM_RECLAIM, 1)
extern void destroy_workqueue(struct workqueue_struct *wq);
extern int queue_work(struct workqueue_struct *wq, struct work_struct *work);
extern int queue_work_on(int cpu, struct workqueue_struct *wq,
struct work_struct *work);
extern int queue_delayed_work(struct workqueue_struct *wq,
struct delayed_work *work, unsigned long delay);
extern int queue_delayed_work_on(int cpu, struct workqueue_struct *wq,
struct delayed_work *work, unsigned long delay);
extern void flush_workqueue(struct workqueue_struct *wq);
extern void flush_scheduled_work(void);
extern int schedule_work(struct work_struct *work);
extern int schedule_work_on(int cpu, struct work_struct *work);
extern int schedule_delayed_work(struct delayed_work *work, unsigned long delay);
extern int schedule_delayed_work_on(int cpu, struct delayed_work *work,
unsigned long delay);
extern int schedule_on_each_cpu(work_func_t func);
extern int keventd_up(void);
int execute_in_process_context(work_func_t fn, struct execute_work *);
extern bool flush_work(struct work_struct *work);
extern bool flush_work_sync(struct work_struct *work);
extern bool cancel_work_sync(struct work_struct *work);
extern bool flush_delayed_work(struct delayed_work *dwork);
extern bool flush_delayed_work_sync(struct delayed_work *work);
extern bool cancel_delayed_work_sync(struct delayed_work *dwork);
extern void workqueue_set_max_active(struct workqueue_struct *wq,
int max_active);
extern bool workqueue_congested(unsigned int cpu, struct workqueue_struct *wq);
extern unsigned int work_cpu(struct work_struct *work);
extern unsigned int work_busy(struct work_struct *work);
static inline bool cancel_delayed_work(struct delayed_work *work)
static inline bool __cancel_delayed_work(struct delayed_work *work)
static inline __deprecated
void cancel_rearming_delayed_workqueue(struct workqueue_struct *wq,
struct delayed_work *work)
static inline __deprecated
void cancel_rearming_delayed_work(struct delayed_work *work)
static inline long work_on_cpu(unsigned int cpu, long (*fn)(void *), void *arg)
long work_on_cpu(unsigned int cpu, long (*fn)(void *), void *arg);
extern void freeze_workqueues_begin(void);
extern bool freeze_workqueues_busy(void);
extern void thaw_workqueues(void);
