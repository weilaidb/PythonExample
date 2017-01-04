#define MAX_RCU_LVLS 4
#if CONFIG_RCU_FANOUT > 16
#define RCU_FANOUT_LEAF       16
#define RCU_FANOUT_LEAF       (CONFIG_RCU_FANOUT)
#define RCU_FANOUT_1	      (RCU_FANOUT_LEAF)
#define RCU_FANOUT_2	      (RCU_FANOUT_1 * CONFIG_RCU_FANOUT)
#define RCU_FANOUT_3	      (RCU_FANOUT_2 * CONFIG_RCU_FANOUT)
#define RCU_FANOUT_4	      (RCU_FANOUT_3 * CONFIG_RCU_FANOUT)
#if NR_CPUS <= RCU_FANOUT_1
#  define NUM_RCU_LVLS	      1
#  define NUM_RCU_LVL_0	      1
#  define NUM_RCU_LVL_1	      (NR_CPUS)
#  define NUM_RCU_LVL_2	      0
#  define NUM_RCU_LVL_3	      0
#  define NUM_RCU_LVL_4	      0
#elif NR_CPUS <= RCU_FANOUT_2
#  define NUM_RCU_LVLS	      2
#  define NUM_RCU_LVL_0	      1
#  define NUM_RCU_LVL_1	      DIV_ROUND_UP(NR_CPUS, RCU_FANOUT_1)
#  define NUM_RCU_LVL_2	      (NR_CPUS)
#  define NUM_RCU_LVL_3	      0
#  define NUM_RCU_LVL_4	      0
#elif NR_CPUS <= RCU_FANOUT_3
#  define NUM_RCU_LVLS	      3
#  define NUM_RCU_LVL_0	      1
#  define NUM_RCU_LVL_1	      DIV_ROUND_UP(NR_CPUS, RCU_FANOUT_2)
#  define NUM_RCU_LVL_2	      DIV_ROUND_UP(NR_CPUS, RCU_FANOUT_1)
#  define NUM_RCU_LVL_3	      (NR_CPUS)
#  define NUM_RCU_LVL_4	      0
#elif NR_CPUS <= RCU_FANOUT_4
#  define NUM_RCU_LVLS	      4
#  define NUM_RCU_LVL_0	      1
#  define NUM_RCU_LVL_1	      DIV_ROUND_UP(NR_CPUS, RCU_FANOUT_3)
#  define NUM_RCU_LVL_2	      DIV_ROUND_UP(NR_CPUS, RCU_FANOUT_2)
#  define NUM_RCU_LVL_3	      DIV_ROUND_UP(NR_CPUS, RCU_FANOUT_1)
#  define NUM_RCU_LVL_4	      (NR_CPUS)
# error "CONFIG_RCU_FANOUT insufficient for NR_CPUS"
#define RCU_SUM (NUM_RCU_LVL_0 + NUM_RCU_LVL_1 + NUM_RCU_LVL_2 + NUM_RCU_LVL_3 + NUM_RCU_LVL_4)
#define NUM_RCU_NODES (RCU_SUM - NR_CPUS)
struct rcu_dynticks ;
#define RCU_KTHREAD_STOPPED  0
#define RCU_KTHREAD_RUNNING  1
#define RCU_KTHREAD_WAITING  2
#define RCU_KTHREAD_OFFCPU   3
#define RCU_KTHREAD_YIELDING 4
#define RCU_KTHREAD_MAX      4
struct rcu_node  ____cacheline_internodealigned_in_smp;
#define rcu_for_each_node_breadth_first(rsp, rnp) \
for ((rnp) = &(rsp)->node[0]; \
(rnp) < &(rsp)->node[NUM_RCU_NODES]; (rnp)++)
#define rcu_for_each_nonleaf_node_breadth_first(rsp, rnp) \
for ((rnp) = &(rsp)->node[0]; \
(rnp) < (rsp)->level[NUM_RCU_LVLS - 1]; (rnp)++)
#define rcu_for_each_leaf_node(rsp, rnp) \
for ((rnp) = (rsp)->level[NUM_RCU_LVLS - 1]; \
(rnp) < &(rsp)->node[NUM_RCU_NODES]; (rnp)++)
#define RCU_DONE_TAIL		0
#define RCU_WAIT_TAIL		1
#define RCU_NEXT_READY_TAIL	2
#define RCU_NEXT_TAIL		3
#define RCU_NEXT_SIZE		4
struct rcu_data ;
#define RCU_GP_IDLE		0
#define RCU_GP_INIT		1
#define RCU_SAVE_DYNTICK	2
#define RCU_FORCE_QS		3
#define RCU_SIGNAL_INIT		RCU_SAVE_DYNTICK
#define RCU_SIGNAL_INIT		RCU_FORCE_QS
#define RCU_JIFFIES_TILL_FORCE_QS	 3
#define RCU_STALL_DELAY_DELTA	       (5 * HZ)
#define RCU_STALL_DELAY_DELTA	       0
#define RCU_SECONDS_TILL_STALL_CHECK   (CONFIG_RCU_CPU_STALL_TIMEOUT * HZ + \
RCU_STALL_DELAY_DELTA)
#define RCU_SECONDS_TILL_STALL_RECHECK (3 * RCU_SECONDS_TILL_STALL_CHECK + 30)
#define RCU_STALL_RAT_DELAY		2
#define rcu_wait(cond)							\
do  while (0)
struct rcu_state ;
#define RCU_OFL_TASKS_NORM_GP	0x1
#define RCU_OFL_TASKS_EXP_GP	0x2
extern struct rcu_state rcu_sched_state;
DECLARE_PER_CPU(struct rcu_data, rcu_sched_data);
extern struct rcu_state rcu_bh_state;
DECLARE_PER_CPU(struct rcu_data, rcu_bh_data);
extern struct rcu_state rcu_preempt_state;
DECLARE_PER_CPU(struct rcu_data, rcu_preempt_data);
static void rcu_bootup_announce(void);
long rcu_batches_completed(void);
static void rcu_preempt_note_context_switch(int cpu);
static int rcu_preempt_blocked_readers_cgp(struct rcu_node *rnp);
static void rcu_report_unblock_qs_rnp(struct rcu_node *rnp,
unsigned long flags);
static void rcu_stop_cpu_kthread(int cpu);
static void rcu_print_detail_task_stall(struct rcu_state *rsp);
static void rcu_print_task_stall(struct rcu_node *rnp);
static void rcu_preempt_stall_reset(void);
static void rcu_preempt_check_blocked_tasks(struct rcu_node *rnp);
static int rcu_preempt_offline_tasks(struct rcu_state *rsp,
struct rcu_node *rnp,
struct rcu_data *rdp);
static void rcu_preempt_offline_cpu(int cpu);
static void rcu_preempt_check_callbacks(int cpu);
static void rcu_preempt_process_callbacks(void);
void call_rcu(struct rcu_head *head, void (*func)(struct rcu_head *rcu));
#if defined(CONFIG_HOTPLUG_CPU) || defined(CONFIG_TREE_PREEMPT_RCU)
static void rcu_report_exp_rnp(struct rcu_state *rsp, struct rcu_node *rnp);
static int rcu_preempt_pending(int cpu);
static int rcu_preempt_needs_cpu(int cpu);
static void __cpuinit rcu_preempt_init_percpu_data(int cpu);
static void rcu_preempt_send_cbs_to_online(void);
static void __init __rcu_init_preempt(void);
static void rcu_needs_cpu_flush(void);
static void rcu_initiate_boost(struct rcu_node *rnp, unsigned long flags);
static void rcu_preempt_boost_start_gp(struct rcu_node *rnp);
static void invoke_rcu_callbacks_kthread(void);
static void rcu_preempt_do_callbacks(void);
static void rcu_boost_kthread_setaffinity(struct rcu_node *rnp,
cpumask_var_t cm);
static int __cpuinit rcu_spawn_one_boost_kthread(struct rcu_state *rsp,
struct rcu_node *rnp,
int rnp_index);
static void invoke_rcu_node_kthread(struct rcu_node *rnp);
static void rcu_yield(void (*f)(unsigned long), unsigned long arg);
static void rcu_cpu_kthread_setrt(int cpu, int to_rt);
static void __cpuinit rcu_prepare_kthreads(int cpu);
