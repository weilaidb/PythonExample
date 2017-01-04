#define __INCLUDE_LINUX_OOM_H
#define OOM_DISABLE (-17)
#define OOM_ADJUST_MIN (-16)
#define OOM_ADJUST_MAX 15
#define OOM_SCORE_ADJ_MIN	(-1000)
#define OOM_SCORE_ADJ_MAX	1000
struct zonelist;
struct notifier_block;
struct mem_cgroup;
struct task_struct;
enum oom_constraint ;
extern int test_set_oom_score_adj(int new_val);
extern unsigned int oom_badness(struct task_struct *p, struct mem_cgroup *mem,
const nodemask_t *nodemask, unsigned long totalpages);
extern int try_set_zonelist_oom(struct zonelist *zonelist, gfp_t gfp_flags);
extern void clear_zonelist_oom(struct zonelist *zonelist, gfp_t gfp_flags);
extern void out_of_memory(struct zonelist *zonelist, gfp_t gfp_mask,
int order, nodemask_t *mask);
extern int register_oom_notifier(struct notifier_block *nb);
extern int unregister_oom_notifier(struct notifier_block *nb);
extern bool oom_killer_disabled;
static inline void oom_killer_disable(void)
static inline void oom_killer_enable(void)
extern unsigned long badness(struct task_struct *p, struct mem_cgroup *mem,
const nodemask_t *nodemask, unsigned long uptime);
extern struct task_struct *find_lock_task_mm(struct task_struct *p);
extern int sysctl_oom_dump_tasks;
extern int sysctl_oom_kill_allocating_task;
extern int sysctl_panic_on_oom;
