#define rt_entity_is_task(rt_se) (!(rt_se)->my_q)
static inline struct task_struct *rt_task_of(struct sched_rt_entity *rt_se)
static inline struct rq *rq_of_rt_rq(struct rt_rq *rt_rq)
static inline struct rt_rq *rt_rq_of_se(struct sched_rt_entity *rt_se)
#define rt_entity_is_task(rt_se) (1)
static inline struct task_struct *rt_task_of(struct sched_rt_entity *rt_se)
static inline struct rq *rq_of_rt_rq(struct rt_rq *rt_rq)
static inline struct rt_rq *rt_rq_of_se(struct sched_rt_entity *rt_se)
static inline int rt_overloaded(struct rq *rq)
static inline void rt_set_overload(struct rq *rq)
static inline void rt_clear_overload(struct rq *rq)
static void update_rt_migration(struct rt_rq *rt_rq)
static void inc_rt_migration(struct sched_rt_entity *rt_se, struct rt_rq *rt_rq)
static void dec_rt_migration(struct sched_rt_entity *rt_se, struct rt_rq *rt_rq)
static void enqueue_pushable_task(struct rq *rq, struct task_struct *p)
static void dequeue_pushable_task(struct rq *rq, struct task_struct *p)
static inline int has_pushable_tasks(struct rq *rq)
static inline void enqueue_pushable_task(struct rq *rq, struct task_struct *p)
static inline void dequeue_pushable_task(struct rq *rq, struct task_struct *p)
static inline
void inc_rt_migration(struct sched_rt_entity *rt_se, struct rt_rq *rt_rq)
static inline
void dec_rt_migration(struct sched_rt_entity *rt_se, struct rt_rq *rt_rq)
static inline int on_rt_rq(struct sched_rt_entity *rt_se)
static inline u64 sched_rt_runtime(struct rt_rq *rt_rq)
static inline u64 sched_rt_period(struct rt_rq *rt_rq)
typedef struct task_group *rt_rq_iter_t;
#define for_each_rt_rq(rt_rq, iter, rq) \
for (iter = list_entry_rcu(task_groups.next, typeof(*iter), list); \
(&iter->list != &task_groups) && \
(rt_rq = iter->rt_rq[cpu_of(rq)]); \
iter = list_entry_rcu(iter->list.next, typeof(*iter), list))
static inline void list_add_leaf_rt_rq(struct rt_rq *rt_rq)
static inline void list_del_leaf_rt_rq(struct rt_rq *rt_rq)
#define for_each_leaf_rt_rq(rt_rq, rq) \
list_for_each_entry_rcu(rt_rq, &rq->leaf_rt_rq_list, leaf_rt_rq_list)
#define for_each_sched_rt_entity(rt_se) \
for (; rt_se; rt_se = rt_se->parent)
static inline struct rt_rq *group_rt_rq(struct sched_rt_entity *rt_se)
static void enqueue_rt_entity(struct sched_rt_entity *rt_se, bool head);
static void dequeue_rt_entity(struct sched_rt_entity *rt_se);
static void sched_rt_rq_enqueue(struct rt_rq *rt_rq)
static void sched_rt_rq_dequeue(struct rt_rq *rt_rq)
static inline int rt_rq_throttled(struct rt_rq *rt_rq)
static int rt_se_boosted(struct sched_rt_entity *rt_se)
static inline const struct cpumask *sched_rt_period_mask(void)
static inline const struct cpumask *sched_rt_period_mask(void)
static inline
struct rt_rq *sched_rt_period_rt_rq(struct rt_bandwidth *rt_b, int cpu)
static inline struct rt_bandwidth *sched_rt_bandwidth(struct rt_rq *rt_rq)
static inline u64 sched_rt_runtime(struct rt_rq *rt_rq)
static inline u64 sched_rt_period(struct rt_rq *rt_rq)
typedef struct rt_rq *rt_rq_iter_t;
#define for_each_rt_rq(rt_rq, iter, rq) \
for ((void) iter, rt_rq = &rq->rt; rt_rq; rt_rq = NULL)
static inline void list_add_leaf_rt_rq(struct rt_rq *rt_rq)
static inline void list_del_leaf_rt_rq(struct rt_rq *rt_rq)
#define for_each_leaf_rt_rq(rt_rq, rq) \
for (rt_rq = &rq->rt; rt_rq; rt_rq = NULL)
#define for_each_sched_rt_entity(rt_se) \
for (; rt_se; rt_se = NULL)
static inline struct rt_rq *group_rt_rq(struct sched_rt_entity *rt_se)
static inline void sched_rt_rq_enqueue(struct rt_rq *rt_rq)
static inline void sched_rt_rq_dequeue(struct rt_rq *rt_rq)
static inline int rt_rq_throttled(struct rt_rq *rt_rq)
static inline const struct cpumask *sched_rt_period_mask(void)
static inline
struct rt_rq *sched_rt_period_rt_rq(struct rt_bandwidth *rt_b, int cpu)
static inline struct rt_bandwidth *sched_rt_bandwidth(struct rt_rq *rt_rq)
static int do_balance_runtime(struct rt_rq *rt_rq)
static void __disable_runtime(struct rq *rq)
static void disable_runtime(struct rq *rq)
static void __enable_runtime(struct rq *rq)
static void enable_runtime(struct rq *rq)
static int balance_runtime(struct rt_rq *rt_rq)
static inline int balance_runtime(struct rt_rq *rt_rq)
static int do_sched_rt_period_timer(struct rt_bandwidth *rt_b, int overrun)
static inline int rt_se_prio(struct sched_rt_entity *rt_se)
static int sched_rt_runtime_exceeded(struct rt_rq *rt_rq)
static void update_curr_rt(struct rq *rq)
#if defined CONFIG_SMP
static struct task_struct *pick_next_highest_task_rt(struct rq *rq, int cpu);
static inline int next_prio(struct rq *rq)
static void
inc_rt_prio_smp(struct rt_rq *rt_rq, int prio, int prev_prio)
static void
dec_rt_prio_smp(struct rt_rq *rt_rq, int prio, int prev_prio)
static inline
void inc_rt_prio_smp(struct rt_rq *rt_rq, int prio, int prev_prio)
static inline
void dec_rt_prio_smp(struct rt_rq *rt_rq, int prio, int prev_prio)
#if defined CONFIG_SMP || defined CONFIG_RT_GROUP_SCHED
static void
inc_rt_prio(struct rt_rq *rt_rq, int prio)
static void
dec_rt_prio(struct rt_rq *rt_rq, int prio)
static inline void inc_rt_prio(struct rt_rq *rt_rq, int prio)
static inline void dec_rt_prio(struct rt_rq *rt_rq, int prio)
static void
inc_rt_group(struct sched_rt_entity *rt_se, struct rt_rq *rt_rq)
static void
dec_rt_group(struct sched_rt_entity *rt_se, struct rt_rq *rt_rq)
static void
inc_rt_group(struct sched_rt_entity *rt_se, struct rt_rq *rt_rq)
static inline
void dec_rt_group(struct sched_rt_entity *rt_se, struct rt_rq *rt_rq)
static inline
void inc_rt_tasks(struct sched_rt_entity *rt_se, struct rt_rq *rt_rq)
static inline
void dec_rt_tasks(struct sched_rt_entity *rt_se, struct rt_rq *rt_rq)
static void __enqueue_rt_entity(struct sched_rt_entity *rt_se, bool head)
static void __dequeue_rt_entity(struct sched_rt_entity *rt_se)
static void dequeue_rt_stack(struct sched_rt_entity *rt_se)
static void enqueue_rt_entity(struct sched_rt_entity *rt_se, bool head)
static void dequeue_rt_entity(struct sched_rt_entity *rt_se)
static void
enqueue_task_rt(struct rq *rq, struct task_struct *p, int flags)
static void dequeue_task_rt(struct rq *rq, struct task_struct *p, int flags)
static void
requeue_rt_entity(struct rt_rq *rt_rq, struct sched_rt_entity *rt_se, int head)
static void requeue_task_rt(struct rq *rq, struct task_struct *p, int head)
static void yield_task_rt(struct rq *rq)
static int find_lowest_rq(struct task_struct *task);
static int
select_task_rq_rt(struct task_struct *p, int sd_flag, int flags)
static void check_preempt_equal_prio(struct rq *rq, struct task_struct *p)
static void check_preempt_curr_rt(struct rq *rq, struct task_struct *p, int flags)
static struct sched_rt_entity *pick_next_rt_entity(struct rq *rq,
struct rt_rq *rt_rq)
static struct task_struct *_pick_next_task_rt(struct rq *rq)
static struct task_struct *pick_next_task_rt(struct rq *rq)
static void put_prev_task_rt(struct rq *rq, struct task_struct *p)
#define RT_MAX_TRIES 3
static void deactivate_task(struct rq *rq, struct task_struct *p, int sleep);
static int pick_rt_task(struct rq *rq, struct task_struct *p, int cpu)
static struct task_struct *pick_next_highest_task_rt(struct rq *rq, int cpu)
static DEFINE_PER_CPU(cpumask_var_t, local_cpu_mask);
static int find_lowest_rq(struct task_struct *task)
static struct rq *find_lock_lowest_rq(struct task_struct *task, struct rq *rq)
static struct task_struct *pick_next_pushable_task(struct rq *rq)
static int push_rt_task(struct rq *rq)
static void push_rt_tasks(struct rq *rq)
static int pull_rt_task(struct rq *this_rq)
static void pre_schedule_rt(struct rq *rq, struct task_struct *prev)
static void post_schedule_rt(struct rq *rq)
static void task_woken_rt(struct rq *rq, struct task_struct *p)
static void set_cpus_allowed_rt(struct task_struct *p,
const struct cpumask *new_mask)
static void rq_online_rt(struct rq *rq)
static void rq_offline_rt(struct rq *rq)
static void switched_from_rt(struct rq *rq, struct task_struct *p)
static inline void init_sched_rt_class(void)
static void switched_to_rt(struct rq *rq, struct task_struct *p)
static void
prio_changed_rt(struct rq *rq, struct task_struct *p, int oldprio)
static void watchdog(struct rq *rq, struct task_struct *p)
static void task_tick_rt(struct rq *rq, struct task_struct *p, int queued)
static void set_curr_task_rt(struct rq *rq)
static unsigned int get_rr_interval_rt(struct rq *rq, struct task_struct *task)
static const struct sched_class rt_sched_class = ;
extern void print_rt_rq(struct seq_file *m, int cpu, struct rt_rq *rt_rq);
static void print_rt_stats(struct seq_file *m, int cpu)
