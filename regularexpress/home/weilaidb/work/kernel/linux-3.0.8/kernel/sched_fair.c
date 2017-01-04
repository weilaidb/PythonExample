unsigned int sysctl_sched_latency = 6000000ULL;
unsigned int normalized_sysctl_sched_latency = 6000000ULL;
enum sched_tunable_scaling sysctl_sched_tunable_scaling
= SCHED_TUNABLESCALING_LOG;
unsigned int sysctl_sched_min_granularity = 750000ULL;
unsigned int normalized_sysctl_sched_min_granularity = 750000ULL;
static unsigned int sched_nr_latency = 8;
unsigned int sysctl_sched_child_runs_first __read_mostly;
unsigned int sysctl_sched_wakeup_granularity = 1000000UL;
unsigned int normalized_sysctl_sched_wakeup_granularity = 1000000UL;
const_debug unsigned int sysctl_sched_migration_cost = 500000UL;
unsigned int __read_mostly sysctl_sched_shares_window = 10000000UL;
static const struct sched_class fair_sched_class;
static inline struct rq *rq_of(struct cfs_rq *cfs_rq)
#define entity_is_task(se)	(!se->my_q)
static inline struct task_struct *task_of(struct sched_entity *se)
#define for_each_sched_entity(se) \
for (; se; se = se->parent)
static inline struct cfs_rq *task_cfs_rq(struct task_struct *p)
static inline struct cfs_rq *cfs_rq_of(struct sched_entity *se)
static inline struct cfs_rq *group_cfs_rq(struct sched_entity *grp)
static inline struct cfs_rq *cpu_cfs_rq(struct cfs_rq *cfs_rq, int this_cpu)
static inline void list_add_leaf_cfs_rq(struct cfs_rq *cfs_rq)
static inline void list_del_leaf_cfs_rq(struct cfs_rq *cfs_rq)
#define for_each_leaf_cfs_rq(rq, cfs_rq) \
list_for_each_entry_rcu(cfs_rq, &rq->leaf_cfs_rq_list, leaf_cfs_rq_list)
static inline int
is_same_group(struct sched_entity *se, struct sched_entity *pse)
static inline struct sched_entity *parent_entity(struct sched_entity *se)
static inline int depth_se(struct sched_entity *se)
static void
find_matching_se(struct sched_entity **se, struct sched_entity **pse)
static inline struct task_struct *task_of(struct sched_entity *se)
static inline struct rq *rq_of(struct cfs_rq *cfs_rq)
#define entity_is_task(se)	1
#define for_each_sched_entity(se) \
for (; se; se = NULL)
static inline struct cfs_rq *task_cfs_rq(struct task_struct *p)
static inline struct cfs_rq *cfs_rq_of(struct sched_entity *se)
static inline struct cfs_rq *group_cfs_rq(struct sched_entity *grp)
static inline struct cfs_rq *cpu_cfs_rq(struct cfs_rq *cfs_rq, int this_cpu)
static inline void list_add_leaf_cfs_rq(struct cfs_rq *cfs_rq)
static inline void list_del_leaf_cfs_rq(struct cfs_rq *cfs_rq)
#define for_each_leaf_cfs_rq(rq, cfs_rq) \
for (cfs_rq = &rq->cfs; cfs_rq; cfs_rq = NULL)
static inline int
is_same_group(struct sched_entity *se, struct sched_entity *pse)
static inline struct sched_entity *parent_entity(struct sched_entity *se)
static inline void
find_matching_se(struct sched_entity **se, struct sched_entity **pse)
static inline u64 max_vruntime(u64 min_vruntime, u64 vruntime)
static inline u64 min_vruntime(u64 min_vruntime, u64 vruntime)
static inline int entity_before(struct sched_entity *a,
struct sched_entity *b)
static inline s64 entity_key(struct cfs_rq *cfs_rq, struct sched_entity *se)
static void update_min_vruntime(struct cfs_rq *cfs_rq)
static void __enqueue_entity(struct cfs_rq *cfs_rq, struct sched_entity *se)
static void __dequeue_entity(struct cfs_rq *cfs_rq, struct sched_entity *se)
static struct sched_entity *__pick_first_entity(struct cfs_rq *cfs_rq)
static struct sched_entity *__pick_next_entity(struct sched_entity *se)
static struct sched_entity *__pick_last_entity(struct cfs_rq *cfs_rq)
int sched_proc_update_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp,
loff_t *ppos)
static inline unsigned long
calc_delta_fair(unsigned long delta, struct sched_entity *se)
static u64 __sched_period(unsigned long nr_running)
static u64 sched_slice(struct cfs_rq *cfs_rq, struct sched_entity *se)
static u64 sched_vslice(struct cfs_rq *cfs_rq, struct sched_entity *se)
static void update_cfs_load(struct cfs_rq *cfs_rq, int global_update);
static void update_cfs_shares(struct cfs_rq *cfs_rq);
static inline void
__update_curr(struct cfs_rq *cfs_rq, struct sched_entity *curr,
unsigned long delta_exec)
static void update_curr(struct cfs_rq *cfs_rq)
static inline void
update_stats_wait_start(struct cfs_rq *cfs_rq, struct sched_entity *se)
static void update_stats_enqueue(struct cfs_rq *cfs_rq, struct sched_entity *se)
static void
update_stats_wait_end(struct cfs_rq *cfs_rq, struct sched_entity *se)
static inline void
update_stats_dequeue(struct cfs_rq *cfs_rq, struct sched_entity *se)
static inline void
update_stats_curr_start(struct cfs_rq *cfs_rq, struct sched_entity *se)
#if defined CONFIG_SMP && defined CONFIG_FAIR_GROUP_SCHED
static void
add_cfs_task_weight(struct cfs_rq *cfs_rq, unsigned long weight)
static inline void
add_cfs_task_weight(struct cfs_rq *cfs_rq, unsigned long weight)
static void
account_entity_enqueue(struct cfs_rq *cfs_rq, struct sched_entity *se)
static void
account_entity_dequeue(struct cfs_rq *cfs_rq, struct sched_entity *se)
# ifdef CONFIG_SMP
static void update_cfs_rq_load_contribution(struct cfs_rq *cfs_rq,
int global_update)
static void update_cfs_load(struct cfs_rq *cfs_rq, int global_update)
static long calc_cfs_shares(struct cfs_rq *cfs_rq, struct task_group *tg)
static void update_entity_shares_tick(struct cfs_rq *cfs_rq)
# else
static void update_cfs_load(struct cfs_rq *cfs_rq, int global_update)
static inline long calc_cfs_shares(struct cfs_rq *cfs_rq, struct task_group *tg)
static inline void update_entity_shares_tick(struct cfs_rq *cfs_rq)
# endif
static void reweight_entity(struct cfs_rq *cfs_rq, struct sched_entity *se,
unsigned long weight)
static void update_cfs_shares(struct cfs_rq *cfs_rq)
static void update_cfs_load(struct cfs_rq *cfs_rq, int global_update)
static inline void update_cfs_shares(struct cfs_rq *cfs_rq)
static inline void update_entity_shares_tick(struct cfs_rq *cfs_rq)
static void enqueue_sleeper(struct cfs_rq *cfs_rq, struct sched_entity *se)
static void check_spread(struct cfs_rq *cfs_rq, struct sched_entity *se)
static void
place_entity(struct cfs_rq *cfs_rq, struct sched_entity *se, int initial)
static void
enqueue_entity(struct cfs_rq *cfs_rq, struct sched_entity *se, int flags)
static void __clear_buddies_last(struct sched_entity *se)
static void __clear_buddies_next(struct sched_entity *se)
static void __clear_buddies_skip(struct sched_entity *se)
static void clear_buddies(struct cfs_rq *cfs_rq, struct sched_entity *se)
static void
dequeue_entity(struct cfs_rq *cfs_rq, struct sched_entity *se, int flags)
static void
check_preempt_tick(struct cfs_rq *cfs_rq, struct sched_entity *curr)
static void
set_next_entity(struct cfs_rq *cfs_rq, struct sched_entity *se)
static int
wakeup_preempt_entity(struct sched_entity *curr, struct sched_entity *se);
static struct sched_entity *pick_next_entity(struct cfs_rq *cfs_rq)
static void put_prev_entity(struct cfs_rq *cfs_rq, struct sched_entity *prev)
static void
entity_tick(struct cfs_rq *cfs_rq, struct sched_entity *curr, int queued)
static void hrtick_start_fair(struct rq *rq, struct task_struct *p)
static void hrtick_update(struct rq *rq)
static inline void
hrtick_start_fair(struct rq *rq, struct task_struct *p)
static inline void hrtick_update(struct rq *rq)
static void
enqueue_task_fair(struct rq *rq, struct task_struct *p, int flags)
static void set_next_buddy(struct sched_entity *se);
static void dequeue_task_fair(struct rq *rq, struct task_struct *p, int flags)
static void task_waking_fair(struct task_struct *p)
static long effective_load(struct task_group *tg, int cpu, long wl, long wg)
static inline unsigned long effective_load(struct task_group *tg, int cpu,
unsigned long wl, unsigned long wg)
static int wake_affine(struct sched_domain *sd, struct task_struct *p, int sync)
static struct sched_group *
find_idlest_group(struct sched_domain *sd, struct task_struct *p,
int this_cpu, int load_idx)
static int
find_idlest_cpu(struct sched_group *group, struct task_struct *p, int this_cpu)
static int select_idle_sibling(struct task_struct *p, int target)
static int
select_task_rq_fair(struct task_struct *p, int sd_flag, int wake_flags)
static unsigned long
wakeup_gran(struct sched_entity *curr, struct sched_entity *se)
static int
wakeup_preempt_entity(struct sched_entity *curr, struct sched_entity *se)
static void set_last_buddy(struct sched_entity *se)
static void set_next_buddy(struct sched_entity *se)
static void set_skip_buddy(struct sched_entity *se)
static void check_preempt_wakeup(struct rq *rq, struct task_struct *p, int wake_flags)
static struct task_struct *pick_next_task_fair(struct rq *rq)
static void put_prev_task_fair(struct rq *rq, struct task_struct *prev)
static void yield_task_fair(struct rq *rq)
static bool yield_to_task_fair(struct rq *rq, struct task_struct *p, bool preempt)
static void pull_task(struct rq *src_rq, struct task_struct *p,
struct rq *this_rq, int this_cpu)
static
int can_migrate_task(struct task_struct *p, struct rq *rq, int this_cpu,
struct sched_domain *sd, enum cpu_idle_type idle,
int *all_pinned)
static int
move_one_task(struct rq *this_rq, int this_cpu, struct rq *busiest,
struct sched_domain *sd, enum cpu_idle_type idle)
static unsigned long
balance_tasks(struct rq *this_rq, int this_cpu, struct rq *busiest,
unsigned long max_load_move, struct sched_domain *sd,
enum cpu_idle_type idle, int *all_pinned,
struct cfs_rq *busiest_cfs_rq)
static int update_shares_cpu(struct task_group *tg, int cpu)
static void update_shares(int cpu)
static unsigned long
load_balance_fair(struct rq *this_rq, int this_cpu, struct rq *busiest,
unsigned long max_load_move,
struct sched_domain *sd, enum cpu_idle_type idle,
int *all_pinned)
static inline void update_shares(int cpu)
static unsigned long
load_balance_fair(struct rq *this_rq, int this_cpu, struct rq *busiest,
unsigned long max_load_move,
struct sched_domain *sd, enum cpu_idle_type idle,
int *all_pinned)
static int move_tasks(struct rq *this_rq, int this_cpu, struct rq *busiest,
unsigned long max_load_move,
struct sched_domain *sd, enum cpu_idle_type idle,
int *all_pinned)
struct sd_lb_stats ;
struct sg_lb_stats ;
static inline unsigned int group_first_cpu(struct sched_group *group)
static inline int get_sd_load_idx(struct sched_domain *sd,
enum cpu_idle_type idle)
#if defined(CONFIG_SCHED_MC) || defined(CONFIG_SCHED_SMT)
static inline void init_sd_power_savings_stats(struct sched_domain *sd,
struct sd_lb_stats *sds, enum cpu_idle_type idle)
static inline void update_sd_power_savings_stats(struct sched_group *group,
struct sd_lb_stats *sds, int local_group, struct sg_lb_stats *sgs)
static inline int check_power_save_busiest_group(struct sd_lb_stats *sds,
int this_cpu, unsigned long *imbalance)
static inline void init_sd_power_savings_stats(struct sched_domain *sd,
struct sd_lb_stats *sds, enum cpu_idle_type idle)
static inline void update_sd_power_savings_stats(struct sched_group *group,
struct sd_lb_stats *sds, int local_group, struct sg_lb_stats *sgs)
static inline int check_power_save_busiest_group(struct sd_lb_stats *sds,
int this_cpu, unsigned long *imbalance)
unsigned long default_scale_freq_power(struct sched_domain *sd, int cpu)
unsigned long __weak arch_scale_freq_power(struct sched_domain *sd, int cpu)
unsigned long default_scale_smt_power(struct sched_domain *sd, int cpu)
unsigned long __weak arch_scale_smt_power(struct sched_domain *sd, int cpu)
unsigned long scale_rt_power(int cpu)
static void update_cpu_power(struct sched_domain *sd, int cpu)
static void update_group_power(struct sched_domain *sd, int cpu)
static inline int
fix_small_capacity(struct sched_domain *sd, struct sched_group *group)
static inline void update_sg_lb_stats(struct sched_domain *sd,
struct sched_group *group, int this_cpu,
enum cpu_idle_type idle, int load_idx,
int local_group, const struct cpumask *cpus,
int *balance, struct sg_lb_stats *sgs)
static bool update_sd_pick_busiest(struct sched_domain *sd,
struct sd_lb_stats *sds,
struct sched_group *sg,
struct sg_lb_stats *sgs,
int this_cpu)
static inline void update_sd_lb_stats(struct sched_domain *sd, int this_cpu,
enum cpu_idle_type idle, const struct cpumask *cpus,
int *balance, struct sd_lb_stats *sds)
int __weak arch_sd_sibling_asym_packing(void)
static int check_asym_packing(struct sched_domain *sd,
struct sd_lb_stats *sds,
int this_cpu, unsigned long *imbalance)
static inline void fix_small_imbalance(struct sd_lb_stats *sds,
int this_cpu, unsigned long *imbalance)
static inline void calculate_imbalance(struct sd_lb_stats *sds, int this_cpu,
unsigned long *imbalance)
static struct sched_group *
find_busiest_group(struct sched_domain *sd, int this_cpu,
unsigned long *imbalance, enum cpu_idle_type idle,
const struct cpumask *cpus, int *balance)
static struct rq *
find_busiest_queue(struct sched_domain *sd, struct sched_group *group,
enum cpu_idle_type idle, unsigned long imbalance,
const struct cpumask *cpus)
#define MAX_PINNED_INTERVAL	512
static DEFINE_PER_CPU(cpumask_var_t, load_balance_tmpmask);
static int need_active_balance(struct sched_domain *sd, int idle,
int busiest_cpu, int this_cpu)
static int active_load_balance_cpu_stop(void *data);
static int load_balance(int this_cpu, struct rq *this_rq,
struct sched_domain *sd, enum cpu_idle_type idle,
int *balance)
static void idle_balance(int this_cpu, struct rq *this_rq)
static int active_load_balance_cpu_stop(void *data)
static DEFINE_PER_CPU(struct call_single_data, remote_sched_softirq_cb);
static void trigger_sched_softirq(void *data)
static inline void init_sched_softirq_csd(struct call_single_data *csd)
static struct  nohz ____cacheline_aligned;
int get_nohz_load_balancer(void)
#if defined(CONFIG_SCHED_MC) || defined(CONFIG_SCHED_SMT)
static inline struct sched_domain *lowest_flag_domain(int cpu, int flag)
#define for_each_flag_domain(cpu, sd, flag) \
for (sd = lowest_flag_domain(cpu, flag); \
(sd && (sd->flags & flag)); sd = sd->parent)
static inline int is_semi_idle_group(struct sched_group *ilb_group)
static int find_new_ilb(int cpu)
static inline int find_new_ilb(int call_cpu)
static void nohz_balancer_kick(int cpu)
void select_nohz_load_balancer(int stop_tick)
static DEFINE_SPINLOCK(balancing);
static unsigned long __read_mostly max_load_balance_interval = HZ/10;
static void update_max_interval(void)
static void rebalance_domains(int cpu, enum cpu_idle_type idle)
static void nohz_idle_balance(int this_cpu, enum cpu_idle_type idle)
static inline int nohz_kick_needed(struct rq *rq, int cpu)
static void nohz_idle_balance(int this_cpu, enum cpu_idle_type idle)
static void run_rebalance_domains(struct softirq_action *h)
static inline int on_null_domain(int cpu)
static inline void trigger_load_balance(struct rq *rq, int cpu)
static void rq_online_fair(struct rq *rq)
static void rq_offline_fair(struct rq *rq)
static inline void idle_balance(int cpu, struct rq *rq)
static void task_tick_fair(struct rq *rq, struct task_struct *curr, int queued)
static void task_fork_fair(struct task_struct *p)
static void
prio_changed_fair(struct rq *rq, struct task_struct *p, int oldprio)
static void switched_from_fair(struct rq *rq, struct task_struct *p)
static void switched_to_fair(struct rq *rq, struct task_struct *p)
static void set_curr_task_fair(struct rq *rq)
static void task_move_group_fair(struct task_struct *p, int on_rq)
static unsigned int get_rr_interval_fair(struct rq *rq, struct task_struct *task)
static const struct sched_class fair_sched_class = ;
static void print_cfs_stats(struct seq_file *m, int cpu)
