int sysctl_panic_on_oom;
int sysctl_oom_kill_allocating_task;
int sysctl_oom_dump_tasks = 1;
static DEFINE_SPINLOCK(zone_scan_lock);
int test_set_oom_score_adj(int new_val)
static bool has_intersects_mems_allowed(struct task_struct *tsk,
const nodemask_t *mask)
static bool has_intersects_mems_allowed(struct task_struct *tsk,
const nodemask_t *mask)
struct task_struct *find_lock_task_mm(struct task_struct *p)
static bool oom_unkillable_task(struct task_struct *p,
const struct mem_cgroup *mem, const nodemask_t *nodemask)
unsigned int oom_badness(struct task_struct *p, struct mem_cgroup *mem,
const nodemask_t *nodemask, unsigned long totalpages)
static enum oom_constraint constrained_alloc(struct zonelist *zonelist,
gfp_t gfp_mask, nodemask_t *nodemask,
unsigned long *totalpages)
static enum oom_constraint constrained_alloc(struct zonelist *zonelist,
gfp_t gfp_mask, nodemask_t *nodemask,
unsigned long *totalpages)
static struct task_struct *select_bad_process(unsigned int *ppoints,
unsigned long totalpages, struct mem_cgroup *mem,
const nodemask_t *nodemask)
static void dump_tasks(const struct mem_cgroup *mem, const nodemask_t *nodemask)
static void dump_header(struct task_struct *p, gfp_t gfp_mask, int order,
struct mem_cgroup *mem, const nodemask_t *nodemask)
#define K(x) ((x) << (PAGE_SHIFT-10))
static int oom_kill_task(struct task_struct *p, struct mem_cgroup *mem)
#undef K
static int oom_kill_process(struct task_struct *p, gfp_t gfp_mask, int order,
unsigned int points, unsigned long totalpages,
struct mem_cgroup *mem, nodemask_t *nodemask,
const char *message)
static void check_panic_on_oom(enum oom_constraint constraint, gfp_t gfp_mask,
int order, const nodemask_t *nodemask)
void mem_cgroup_out_of_memory(struct mem_cgroup *mem, gfp_t gfp_mask)
static BLOCKING_NOTIFIER_HEAD(oom_notify_list);
int register_oom_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(register_oom_notifier);
int unregister_oom_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(unregister_oom_notifier);
int try_set_zonelist_oom(struct zonelist *zonelist, gfp_t gfp_mask)
void clear_zonelist_oom(struct zonelist *zonelist, gfp_t gfp_mask)
static int try_set_system_oom(void)
static void clear_system_oom(void)
void out_of_memory(struct zonelist *zonelist, gfp_t gfp_mask,
int order, nodemask_t *nodemask)
void pagefault_out_of_memory(void)
