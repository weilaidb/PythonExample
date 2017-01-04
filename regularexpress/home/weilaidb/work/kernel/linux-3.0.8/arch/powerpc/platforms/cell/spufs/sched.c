#undef DEBUG
#define CREATE_TRACE_POINTS
struct spu_prio_array ;
static unsigned long spu_avenrun[3];
static struct spu_prio_array *spu_prio;
static struct task_struct *spusched_task;
static struct timer_list spusched_timer;
static struct timer_list spuloadavg_timer;
#define NORMAL_PRIO		120
#define SPUSCHED_TICK		(10)
#define MIN_SPU_TIMESLICE	max(5 * HZ / (1000 * SPUSCHED_TICK), 1)
#define DEF_SPU_TIMESLICE	(100 * HZ / (1000 * SPUSCHED_TICK))
#define MAX_USER_PRIO		(MAX_PRIO - MAX_RT_PRIO)
#define SCALE_PRIO(x, prio) \
max(x * (MAX_PRIO - prio) / (MAX_USER_PRIO / 2), MIN_SPU_TIMESLICE)
void spu_set_timeslice(struct spu_context *ctx)
void __spu_update_sched_info(struct spu_context *ctx)
void spu_update_sched_info(struct spu_context *ctx)
static int __node_allowed(struct spu_context *ctx, int node)
static int node_allowed(struct spu_context *ctx, int node)
void do_notify_spus_active(void)
static void spu_bind_context(struct spu *spu, struct spu_context *ctx)
static inline int sched_spu(struct spu *spu)
static void aff_merge_remaining_ctxs(struct spu_gang *gang)
static void aff_set_offsets(struct spu_gang *gang)
static struct spu *aff_ref_location(struct spu_context *ctx, int mem_aff,
int group_size, int lowest_offset)
static void aff_set_ref_point_location(struct spu_gang *gang)
static struct spu *ctx_location(struct spu *ref, int offset, int node)
static int has_affinity(struct spu_context *ctx)
static void spu_unbind_context(struct spu *spu, struct spu_context *ctx)
static void __spu_add_to_rq(struct spu_context *ctx)
static void spu_add_to_rq(struct spu_context *ctx)
static void __spu_del_from_rq(struct spu_context *ctx)
void spu_del_from_rq(struct spu_context *ctx)
static void spu_prio_wait(struct spu_context *ctx)
static struct spu *spu_get_idle(struct spu_context *ctx)
static struct spu *find_victim(struct spu_context *ctx)
static void __spu_schedule(struct spu *spu, struct spu_context *ctx)
static void spu_schedule(struct spu *spu, struct spu_context *ctx)
static void spu_unschedule(struct spu *spu, struct spu_context *ctx,
int free_spu)
int spu_activate(struct spu_context *ctx, unsigned long flags)
static struct spu_context *grab_runnable_context(int prio, int node)
static int __spu_deactivate(struct spu_context *ctx, int force, int max_prio)
void spu_deactivate(struct spu_context *ctx)
void spu_yield(struct spu_context *ctx)
static noinline void spusched_tick(struct spu_context *ctx)
static unsigned long count_active_contexts(void)
static void spu_calc_load(void)
static void spusched_wake(unsigned long data)
static void spuloadavg_wake(unsigned long data)
static int spusched_thread(void *unused)
void spuctx_switch_state(struct spu_context *ctx,
enum spu_utilization_state new_state)
#define LOAD_INT(x) ((x) >> FSHIFT)
#define LOAD_FRAC(x) LOAD_INT(((x) & (FIXED_1-1)) * 100)
static int show_spu_loadavg(struct seq_file *s, void *private)
static int spu_loadavg_open(struct inode *inode, struct file *file)
static const struct file_operations spu_loadavg_fops = ;
int __init spu_sched_init(void)
void spu_sched_exit(void)
