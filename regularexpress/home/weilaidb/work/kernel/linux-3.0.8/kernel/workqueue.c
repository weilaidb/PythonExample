enum ;
struct global_cwq;
struct worker ;
struct global_cwq  ____cacheline_aligned_in_smp;
struct cpu_workqueue_struct ;
struct wq_flusher ;
typedef cpumask_var_t mayday_mask_t;
#define mayday_test_and_set_cpu(cpu, mask)	\
cpumask_test_and_set_cpu((cpu), (mask))
#define mayday_clear_cpu(cpu, mask)		cpumask_clear_cpu((cpu), (mask))
#define for_each_mayday_cpu(cpu, mask)		for_each_cpu((cpu), (mask))
#define alloc_mayday_mask(maskp, gfp)		zalloc_cpumask_var((maskp), (gfp))
#define free_mayday_mask(mask)			free_cpumask_var((mask))
typedef unsigned long mayday_mask_t;
#define mayday_test_and_set_cpu(cpu, mask)	test_and_set_bit(0, &(mask))
#define mayday_clear_cpu(cpu, mask)		clear_bit(0, &(mask))
#define for_each_mayday_cpu(cpu, mask)		if ((cpu) = 0, (mask))
#define alloc_mayday_mask(maskp, gfp)		true
#define free_mayday_mask(mask)			do  while (0)
struct workqueue_struct ;
struct workqueue_struct *system_wq __read_mostly;
struct workqueue_struct *system_long_wq __read_mostly;
struct workqueue_struct *system_nrt_wq __read_mostly;
struct workqueue_struct *system_unbound_wq __read_mostly;
struct workqueue_struct *system_freezable_wq __read_mostly;
EXPORT_SYMBOL_GPL(system_wq);
EXPORT_SYMBOL_GPL(system_long_wq);
EXPORT_SYMBOL_GPL(system_nrt_wq);
EXPORT_SYMBOL_GPL(system_unbound_wq);
EXPORT_SYMBOL_GPL(system_freezable_wq);
#define CREATE_TRACE_POINTS
#define for_each_busy_worker(worker, i, pos, gcwq)			\
for (i = 0; i < BUSY_WORKER_HASH_SIZE; i++)			\
hlist_for_each_entry(worker, pos, &gcwq->busy_hash[i], hentry)
static inline int __next_gcwq_cpu(int cpu, const struct cpumask *mask,
unsigned int sw)
static inline int __next_wq_cpu(int cpu, const struct cpumask *mask,
struct workqueue_struct *wq)
#define for_each_gcwq_cpu(cpu)						\
for ((cpu) = __next_gcwq_cpu(-1, cpu_possible_mask, 3);		\
(cpu) < WORK_CPU_NONE;					\
(cpu) = __next_gcwq_cpu((cpu), cpu_possible_mask, 3))
#define for_each_online_gcwq_cpu(cpu)					\
for ((cpu) = __next_gcwq_cpu(-1, cpu_online_mask, 3);		\
(cpu) < WORK_CPU_NONE;					\
(cpu) = __next_gcwq_cpu((cpu), cpu_online_mask, 3))
#define for_each_cwq_cpu(cpu, wq)					\
for ((cpu) = __next_wq_cpu(-1, cpu_possible_mask, (wq));	\
(cpu) < WORK_CPU_NONE;					\
(cpu) = __next_wq_cpu((cpu), cpu_possible_mask, (wq)))
static struct debug_obj_descr work_debug_descr;
static void *work_debug_hint(void *addr)
static int work_fixup_init(void *addr, enum debug_obj_state state)
static int work_fixup_activate(void *addr, enum debug_obj_state state)
static int work_fixup_free(void *addr, enum debug_obj_state state)
static struct debug_obj_descr work_debug_descr = ;
static inline void debug_work_activate(struct work_struct *work)
static inline void debug_work_deactivate(struct work_struct *work)
void __init_work(struct work_struct *work, int onstack)
EXPORT_SYMBOL_GPL(__init_work);
void destroy_work_on_stack(struct work_struct *work)
EXPORT_SYMBOL_GPL(destroy_work_on_stack);
static inline void debug_work_activate(struct work_struct *work)
static inline void debug_work_deactivate(struct work_struct *work)
static DEFINE_SPINLOCK(workqueue_lock);
static LIST_HEAD(workqueues);
static bool workqueue_freezing;
static DEFINE_PER_CPU(struct global_cwq, global_cwq);
static DEFINE_PER_CPU_SHARED_ALIGNED(atomic_t, gcwq_nr_running);
static struct global_cwq unbound_global_cwq;
static atomic_t unbound_gcwq_nr_running = ATOMIC_INIT(0);
static int worker_thread(void *__worker);
static struct global_cwq *get_gcwq(unsigned int cpu)
static atomic_t *get_gcwq_nr_running(unsigned int cpu)
static struct cpu_workqueue_struct *get_cwq(unsigned int cpu,
struct workqueue_struct *wq)
static unsigned int work_color_to_flags(int color)
static int get_work_color(struct work_struct *work)
static int work_next_color(int color)
static inline void set_work_data(struct work_struct *work, unsigned long data,
unsigned long flags)
static void set_work_cwq(struct work_struct *work,
struct cpu_workqueue_struct *cwq,
unsigned long extra_flags)
static void set_work_cpu(struct work_struct *work, unsigned int cpu)
static void clear_work_data(struct work_struct *work)
static struct cpu_workqueue_struct *get_work_cwq(struct work_struct *work)
static struct global_cwq *get_work_gcwq(struct work_struct *work)
static bool __need_more_worker(struct global_cwq *gcwq)
static bool need_more_worker(struct global_cwq *gcwq)
static bool may_start_working(struct global_cwq *gcwq)
static bool keep_working(struct global_cwq *gcwq)
static bool need_to_create_worker(struct global_cwq *gcwq)
static bool need_to_manage_workers(struct global_cwq *gcwq)
static bool too_many_workers(struct global_cwq *gcwq)
static struct worker *first_worker(struct global_cwq *gcwq)
static void wake_up_worker(struct global_cwq *gcwq)
void wq_worker_waking_up(struct task_struct *task, unsigned int cpu)
struct task_struct *wq_worker_sleeping(struct task_struct *task,
unsigned int cpu)
static inline void worker_set_flags(struct worker *worker, unsigned int flags,
bool wakeup)
static inline void worker_clr_flags(struct worker *worker, unsigned int flags)
static struct hlist_head *busy_worker_head(struct global_cwq *gcwq,
struct work_struct *work)
static struct worker *__find_worker_executing_work(struct global_cwq *gcwq,
struct hlist_head *bwh,
struct work_struct *work)
static struct worker *find_worker_executing_work(struct global_cwq *gcwq,
struct work_struct *work)
static inline struct list_head *gcwq_determine_ins_pos(struct global_cwq *gcwq,
struct cpu_workqueue_struct *cwq)
static void insert_work(struct cpu_workqueue_struct *cwq,
struct work_struct *work, struct list_head *head,
unsigned int extra_flags)
static bool is_chained_work(struct workqueue_struct *wq)
static void __queue_work(unsigned int cpu, struct workqueue_struct *wq,
struct work_struct *work)
int queue_work(struct workqueue_struct *wq, struct work_struct *work)
EXPORT_SYMBOL_GPL(queue_work);
int
queue_work_on(int cpu, struct workqueue_struct *wq, struct work_struct *work)
EXPORT_SYMBOL_GPL(queue_work_on);
static void delayed_work_timer_fn(unsigned long __data)
int queue_delayed_work(struct workqueue_struct *wq,
struct delayed_work *dwork, unsigned long delay)
EXPORT_SYMBOL_GPL(queue_delayed_work);
int queue_delayed_work_on(int cpu, struct workqueue_struct *wq,
struct delayed_work *dwork, unsigned long delay)
EXPORT_SYMBOL_GPL(queue_delayed_work_on);
static void worker_enter_idle(struct worker *worker)
static void worker_leave_idle(struct worker *worker)
static bool worker_maybe_bind_and_lock(struct worker *worker)
__acquires(&gcwq->lock)
static void worker_rebind_fn(struct work_struct *work)
static struct worker *alloc_worker(void)
static struct worker *create_worker(struct global_cwq *gcwq, bool bind)
static void start_worker(struct worker *worker)
static void destroy_worker(struct worker *worker)
static void idle_worker_timeout(unsigned long __gcwq)
static bool send_mayday(struct work_struct *work)
static void gcwq_mayday_timeout(unsigned long __gcwq)
static bool maybe_create_worker(struct global_cwq *gcwq)
__releases(&gcwq->lock)
__acquires(&gcwq->lock)
static bool maybe_destroy_workers(struct global_cwq *gcwq)
static bool manage_workers(struct worker *worker)
static void move_linked_works(struct work_struct *work, struct list_head *head,
struct work_struct **nextp)
static void cwq_activate_first_delayed(struct cpu_workqueue_struct *cwq)
static void cwq_dec_nr_in_flight(struct cpu_workqueue_struct *cwq, int color,
bool delayed)
static void process_one_work(struct worker *worker, struct work_struct *work)
__releases(&gcwq->lock)
__acquires(&gcwq->lock)
static void process_scheduled_works(struct worker *worker)
static int worker_thread(void *__worker)
static int rescuer_thread(void *__wq)
struct wq_barrier ;
static void wq_barrier_func(struct work_struct *work)
static void insert_wq_barrier(struct cpu_workqueue_struct *cwq,
struct wq_barrier *barr,
struct work_struct *target, struct worker *worker)
static bool flush_workqueue_prep_cwqs(struct workqueue_struct *wq,
int flush_color, int work_color)
void flush_workqueue(struct workqueue_struct *wq)
EXPORT_SYMBOL_GPL(flush_workqueue);
static bool start_flush_work(struct work_struct *work, struct wq_barrier *barr,
bool wait_executing)
bool flush_work(struct work_struct *work)
EXPORT_SYMBOL_GPL(flush_work);
static bool wait_on_cpu_work(struct global_cwq *gcwq, struct work_struct *work)
static bool wait_on_work(struct work_struct *work)
bool flush_work_sync(struct work_struct *work)
EXPORT_SYMBOL_GPL(flush_work_sync);
static int try_to_grab_pending(struct work_struct *work)
static bool __cancel_work_timer(struct work_struct *work,
struct timer_list* timer)
bool cancel_work_sync(struct work_struct *work)
EXPORT_SYMBOL_GPL(cancel_work_sync);
bool flush_delayed_work(struct delayed_work *dwork)
EXPORT_SYMBOL(flush_delayed_work);
bool flush_delayed_work_sync(struct delayed_work *dwork)
EXPORT_SYMBOL(flush_delayed_work_sync);
bool cancel_delayed_work_sync(struct delayed_work *dwork)
EXPORT_SYMBOL(cancel_delayed_work_sync);
int schedule_work(struct work_struct *work)
EXPORT_SYMBOL(schedule_work);
int schedule_work_on(int cpu, struct work_struct *work)
EXPORT_SYMBOL(schedule_work_on);
int schedule_delayed_work(struct delayed_work *dwork,
unsigned long delay)
EXPORT_SYMBOL(schedule_delayed_work);
int schedule_delayed_work_on(int cpu,
struct delayed_work *dwork, unsigned long delay)
EXPORT_SYMBOL(schedule_delayed_work_on);
int schedule_on_each_cpu(work_func_t func)
void flush_scheduled_work(void)
EXPORT_SYMBOL(flush_scheduled_work);
int execute_in_process_context(work_func_t fn, struct execute_work *ew)
EXPORT_SYMBOL_GPL(execute_in_process_context);
int keventd_up(void)
static int alloc_cwqs(struct workqueue_struct *wq)
static void free_cwqs(struct workqueue_struct *wq)
static int wq_clamp_max_active(int max_active, unsigned int flags,
const char *name)
struct workqueue_struct *__alloc_workqueue_key(const char *name,
unsigned int flags,
int max_active,
struct lock_class_key *key,
const char *lock_name)
EXPORT_SYMBOL_GPL(__alloc_workqueue_key);
void destroy_workqueue(struct workqueue_struct *wq)
EXPORT_SYMBOL_GPL(destroy_workqueue);
void workqueue_set_max_active(struct workqueue_struct *wq, int max_active)
EXPORT_SYMBOL_GPL(workqueue_set_max_active);
bool workqueue_congested(unsigned int cpu, struct workqueue_struct *wq)
EXPORT_SYMBOL_GPL(workqueue_congested);
unsigned int work_cpu(struct work_struct *work)
EXPORT_SYMBOL_GPL(work_cpu);
unsigned int work_busy(struct work_struct *work)
EXPORT_SYMBOL_GPL(work_busy);
#define trustee_wait_event_timeout(cond, timeout) ()
#define trustee_wait_event(cond) ()
static int __cpuinit trustee_thread(void *__gcwq)
static void __cpuinit wait_trustee_state(struct global_cwq *gcwq, int state)
__releases(&gcwq->lock)
__acquires(&gcwq->lock)
static int __devinit workqueue_cpu_callback(struct notifier_block *nfb,
unsigned long action,
void *hcpu)
struct work_for_cpu ;
static int do_work_for_cpu(void *_wfc)
long work_on_cpu(unsigned int cpu, long (*fn)(void *), void *arg)
EXPORT_SYMBOL_GPL(work_on_cpu);
void freeze_workqueues_begin(void)
bool freeze_workqueues_busy(void)
void thaw_workqueues(void)
static int __init init_workqueues(void)
early_initcall(init_workqueues);
