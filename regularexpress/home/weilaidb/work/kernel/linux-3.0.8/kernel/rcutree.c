static struct lock_class_key rcu_node_class[NUM_RCU_LVLS];
#define RCU_STATE_INITIALIZER(structname)
struct rcu_state rcu_sched_state = RCU_STATE_INITIALIZER(rcu_sched_state);
DEFINE_PER_CPU(struct rcu_data, rcu_sched_data);
struct rcu_state rcu_bh_state = RCU_STATE_INITIALIZER(rcu_bh_state);
DEFINE_PER_CPU(struct rcu_data, rcu_bh_data);
static struct rcu_state *rcu_state;
int rcu_scheduler_active __read_mostly;
EXPORT_SYMBOL_GPL(rcu_scheduler_active);
static int rcu_scheduler_fully_active __read_mostly;
static DEFINE_PER_CPU(struct task_struct *, rcu_cpu_kthread_task);
DEFINE_PER_CPU(unsigned int, rcu_cpu_kthread_status);
DEFINE_PER_CPU(int, rcu_cpu_kthread_cpu);
DEFINE_PER_CPU(unsigned int, rcu_cpu_kthread_loops);
DEFINE_PER_CPU(char, rcu_cpu_has_work);
static void rcu_node_kthread_setaffinity(struct rcu_node *rnp, int outgoingcpu);
static void invoke_rcu_core(void);
static void invoke_rcu_callbacks(struct rcu_state *rsp, struct rcu_data *rdp);
#define RCU_KTHREAD_PRIO 1
unsigned long rcutorture_testseq;
unsigned long rcutorture_vernum;
static int rcu_gp_in_progress(struct rcu_state *rsp)
void rcu_sched_qs(int cpu)
void rcu_bh_qs(int cpu)
void rcu_note_context_switch(int cpu)
EXPORT_SYMBOL_GPL(rcu_note_context_switch);
DEFINE_PER_CPU(struct rcu_dynticks, rcu_dynticks) = ;
static int blimit = 10;
static int qhimark = 10000;
static int qlowmark = 100;
module_param(blimit, int, 0);
module_param(qhimark, int, 0);
module_param(qlowmark, int, 0);
int rcu_cpu_stall_suppress __read_mostly;
module_param(rcu_cpu_stall_suppress, int, 0644);
static void force_quiescent_state(struct rcu_state *rsp, int relaxed);
static int rcu_pending(int cpu);
long rcu_batches_completed_sched(void)
EXPORT_SYMBOL_GPL(rcu_batches_completed_sched);
long rcu_batches_completed_bh(void)
EXPORT_SYMBOL_GPL(rcu_batches_completed_bh);
void rcu_bh_force_quiescent_state(void)
EXPORT_SYMBOL_GPL(rcu_bh_force_quiescent_state);
void rcutorture_record_test_transition(void)
EXPORT_SYMBOL_GPL(rcutorture_record_test_transition);
void rcutorture_record_progress(unsigned long vernum)
EXPORT_SYMBOL_GPL(rcutorture_record_progress);
void rcu_sched_force_quiescent_state(void)
EXPORT_SYMBOL_GPL(rcu_sched_force_quiescent_state);
static int
cpu_has_callbacks_ready_to_invoke(struct rcu_data *rdp)
static int
cpu_needs_another_gp(struct rcu_state *rsp, struct rcu_data *rdp)
static struct rcu_node *rcu_get_root(struct rcu_state *rsp)
static int rcu_implicit_offline_qs(struct rcu_data *rdp)
void rcu_enter_nohz(void)
void rcu_exit_nohz(void)
void rcu_nmi_enter(void)
void rcu_nmi_exit(void)
void rcu_irq_enter(void)
void rcu_irq_exit(void)
static int dyntick_save_progress_counter(struct rcu_data *rdp)
static int rcu_implicit_dynticks_qs(struct rcu_data *rdp)
static int dyntick_save_progress_counter(struct rcu_data *rdp)
static int rcu_implicit_dynticks_qs(struct rcu_data *rdp)
int rcu_cpu_stall_suppress __read_mostly;
static void record_gp_stall_check_time(struct rcu_state *rsp)
static void print_other_cpu_stall(struct rcu_state *rsp)
static void print_cpu_stall(struct rcu_state *rsp)
static void check_cpu_stall(struct rcu_state *rsp, struct rcu_data *rdp)
static int rcu_panic(struct notifier_block *this, unsigned long ev, void *ptr)
void rcu_cpu_stall_reset(void)
static struct notifier_block rcu_panic_block = ;
static void __init check_cpu_stall_init(void)
static void __note_new_gpnum(struct rcu_state *rsp, struct rcu_node *rnp, struct rcu_data *rdp)
static void note_new_gpnum(struct rcu_state *rsp, struct rcu_data *rdp)
static int
check_for_new_grace_period(struct rcu_state *rsp, struct rcu_data *rdp)
static void
__rcu_process_gp_end(struct rcu_state *rsp, struct rcu_node *rnp, struct rcu_data *rdp)
static void
rcu_process_gp_end(struct rcu_state *rsp, struct rcu_data *rdp)
static void
rcu_start_gp_per_cpu(struct rcu_state *rsp, struct rcu_node *rnp, struct rcu_data *rdp)
static void
rcu_start_gp(struct rcu_state *rsp, unsigned long flags)
__releases(rcu_get_root(rsp)->lock)
static void rcu_report_qs_rsp(struct rcu_state *rsp, unsigned long flags)
__releases(rcu_get_root(rsp)->lock)
static void
rcu_report_qs_rnp(unsigned long mask, struct rcu_state *rsp,
struct rcu_node *rnp, unsigned long flags)
__releases(rnp->lock)
static void
rcu_report_qs_rdp(int cpu, struct rcu_state *rsp, struct rcu_data *rdp, long lastcomp)
static void
rcu_check_quiescent_state(struct rcu_state *rsp, struct rcu_data *rdp)
static void rcu_send_cbs_to_online(struct rcu_state *rsp)
static void __rcu_offline_cpu(int cpu, struct rcu_state *rsp)
static void rcu_offline_cpu(int cpu)
static void rcu_send_cbs_to_online(struct rcu_state *rsp)
static void rcu_offline_cpu(int cpu)
static void rcu_do_batch(struct rcu_state *rsp, struct rcu_data *rdp)
void rcu_check_callbacks(int cpu, int user)
static void force_qs_rnp(struct rcu_state *rsp, int (*f)(struct rcu_data *))
static void force_quiescent_state(struct rcu_state *rsp, int relaxed)
static void force_quiescent_state(struct rcu_state *rsp, int relaxed)
static void
__rcu_process_callbacks(struct rcu_state *rsp, struct rcu_data *rdp)
static void rcu_process_callbacks(struct softirq_action *unused)
static void invoke_rcu_callbacks(struct rcu_state *rsp, struct rcu_data *rdp)
static void invoke_rcu_core(void)
static void
__call_rcu(struct rcu_head *head, void (*func)(struct rcu_head *rcu),
struct rcu_state *rsp)
void call_rcu_sched(struct rcu_head *head, void (*func)(struct rcu_head *rcu))
EXPORT_SYMBOL_GPL(call_rcu_sched);
void call_rcu_bh(struct rcu_head *head, void (*func)(struct rcu_head *rcu))
EXPORT_SYMBOL_GPL(call_rcu_bh);
void synchronize_sched(void)
EXPORT_SYMBOL_GPL(synchronize_sched);
void synchronize_rcu_bh(void)
EXPORT_SYMBOL_GPL(synchronize_rcu_bh);
static int __rcu_pending(struct rcu_state *rsp, struct rcu_data *rdp)
static int rcu_pending(int cpu)
static int rcu_needs_cpu_quick_check(int cpu)
static DEFINE_PER_CPU(struct rcu_head, rcu_barrier_head) = ;
static atomic_t rcu_barrier_cpu_count;
static DEFINE_MUTEX(rcu_barrier_mutex);
static struct completion rcu_barrier_completion;
static void rcu_barrier_callback(struct rcu_head *notused)
static void rcu_barrier_func(void *type)
static void _rcu_barrier(struct rcu_state *rsp,
void (*call_rcu_func)(struct rcu_head *head,
void (*func)(struct rcu_head *head)))
void rcu_barrier_bh(void)
EXPORT_SYMBOL_GPL(rcu_barrier_bh);
void rcu_barrier_sched(void)
EXPORT_SYMBOL_GPL(rcu_barrier_sched);
static void __init
rcu_boot_init_percpu_data(int cpu, struct rcu_state *rsp)
static void __cpuinit
rcu_init_percpu_data(int cpu, struct rcu_state *rsp, int preemptible)
static void __cpuinit rcu_prepare_cpu(int cpu)
static int __cpuinit rcu_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
void rcu_scheduler_starting(void)
static void __init rcu_init_levelspread(struct rcu_state *rsp)
static void __init rcu_init_levelspread(struct rcu_state *rsp)
static void __init rcu_init_one(struct rcu_state *rsp,
struct rcu_data __percpu *rda)
void __init rcu_init(void)
