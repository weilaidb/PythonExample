static struct workqueue_struct *cpuset_wq;
int number_of_cpusets __read_mostly;
struct cgroup_subsys cpuset_subsys;
struct cpuset;
struct fmeter ;
struct cpuset ;
static inline struct cpuset *cgroup_cs(struct cgroup *cont)
static inline struct cpuset *task_cs(struct task_struct *task)
typedef enum  cpuset_flagbits_t;
static inline int is_cpu_exclusive(const struct cpuset *cs)
static inline int is_mem_exclusive(const struct cpuset *cs)
static inline int is_mem_hardwall(const struct cpuset *cs)
static inline int is_sched_load_balance(const struct cpuset *cs)
static inline int is_memory_migrate(const struct cpuset *cs)
static inline int is_spread_page(const struct cpuset *cs)
static inline int is_spread_slab(const struct cpuset *cs)
static struct cpuset top_cpuset = ;
static DEFINE_MUTEX(callback_mutex);
#define CPUSET_NAME_LEN		(128)
#define	CPUSET_NODELIST_LEN	(256)
static char cpuset_name[CPUSET_NAME_LEN];
static char cpuset_nodelist[CPUSET_NODELIST_LEN];
static DEFINE_SPINLOCK(cpuset_buffer_lock);
static struct dentry *cpuset_mount(struct file_system_type *fs_type,
int flags, const char *unused_dev_name, void *data)
static struct file_system_type cpuset_fs_type = ;
static void guarantee_online_cpus(const struct cpuset *cs,
struct cpumask *pmask)
static void guarantee_online_mems(const struct cpuset *cs, nodemask_t *pmask)
static void cpuset_update_task_spread_flag(struct cpuset *cs,
struct task_struct *tsk)
static int is_cpuset_subset(const struct cpuset *p, const struct cpuset *q)
static struct cpuset *alloc_trial_cpuset(const struct cpuset *cs)
static void free_trial_cpuset(struct cpuset *trial)
static int validate_change(const struct cpuset *cur, const struct cpuset *trial)
static int cpusets_overlap(struct cpuset *a, struct cpuset *b)
static void
update_domain_attr(struct sched_domain_attr *dattr, struct cpuset *c)
static void
update_domain_attr_tree(struct sched_domain_attr *dattr, struct cpuset *c)
static int generate_sched_domains(cpumask_var_t **domains,
struct sched_domain_attr **attributes)
static void do_rebuild_sched_domains(struct work_struct *unused)
static void do_rebuild_sched_domains(struct work_struct *unused)
static int generate_sched_domains(cpumask_var_t **domains,
struct sched_domain_attr **attributes)
static DECLARE_WORK(rebuild_sched_domains_work, do_rebuild_sched_domains);
static void async_rebuild_sched_domains(void)
void rebuild_sched_domains(void)
static int cpuset_test_cpumask(struct task_struct *tsk,
struct cgroup_scanner *scan)
static void cpuset_change_cpumask(struct task_struct *tsk,
struct cgroup_scanner *scan)
static void update_tasks_cpumask(struct cpuset *cs, struct ptr_heap *heap)
static int update_cpumask(struct cpuset *cs, struct cpuset *trialcs,
const char *buf)
static void cpuset_migrate_mm(struct mm_struct *mm, const nodemask_t *from,
const nodemask_t *to)
static void cpuset_change_task_nodemask(struct task_struct *tsk,
nodemask_t *newmems)
static void cpuset_change_nodemask(struct task_struct *p,
struct cgroup_scanner *scan)
static void *cpuset_being_rebound;
static void update_tasks_nodemask(struct cpuset *cs, const nodemask_t *oldmem,
struct ptr_heap *heap)
static int update_nodemask(struct cpuset *cs, struct cpuset *trialcs,
const char *buf)
int current_cpuset_is_being_rebound(void)
static int update_relax_domain_level(struct cpuset *cs, s64 val)
static void cpuset_change_flag(struct task_struct *tsk,
struct cgroup_scanner *scan)
static void update_tasks_flags(struct cpuset *cs, struct ptr_heap *heap)
static int update_flag(cpuset_flagbits_t bit, struct cpuset *cs,
int turning_on)
#define FM_COEF 933
#define FM_MAXTICKS ((time_t)99)
#define FM_MAXCNT 1000000
#define FM_SCALE 1000
static void fmeter_init(struct fmeter *fmp)
static void fmeter_update(struct fmeter *fmp)
static void fmeter_markevent(struct fmeter *fmp)
static int fmeter_getrate(struct fmeter *fmp)
static int cpuset_can_attach(struct cgroup_subsys *ss, struct cgroup *cont,
struct task_struct *tsk)
static int cpuset_can_attach_task(struct cgroup *cgrp, struct task_struct *task)
static cpumask_var_t cpus_attach;
static nodemask_t cpuset_attach_nodemask_from;
static nodemask_t cpuset_attach_nodemask_to;
static void cpuset_pre_attach(struct cgroup *cont)
static void cpuset_attach_task(struct cgroup *cont, struct task_struct *tsk)
static void cpuset_attach(struct cgroup_subsys *ss, struct cgroup *cont,
struct cgroup *oldcont, struct task_struct *tsk)
typedef enum  cpuset_filetype_t;
static int cpuset_write_u64(struct cgroup *cgrp, struct cftype *cft, u64 val)
static int cpuset_write_s64(struct cgroup *cgrp, struct cftype *cft, s64 val)
static int cpuset_write_resmask(struct cgroup *cgrp, struct cftype *cft,
const char *buf)
static size_t cpuset_sprintf_cpulist(char *page, struct cpuset *cs)
static size_t cpuset_sprintf_memlist(char *page, struct cpuset *cs)
static ssize_t cpuset_common_file_read(struct cgroup *cont,
struct cftype *cft,
struct file *file,
char __user *buf,
size_t nbytes, loff_t *ppos)
static u64 cpuset_read_u64(struct cgroup *cont, struct cftype *cft)
static s64 cpuset_read_s64(struct cgroup *cont, struct cftype *cft)
static struct cftype files[] = ;
static struct cftype cft_memory_pressure_enabled = ;
static int cpuset_populate(struct cgroup_subsys *ss, struct cgroup *cont)
static void cpuset_post_clone(struct cgroup_subsys *ss,
struct cgroup *cgroup)
static struct cgroup_subsys_state *cpuset_create(
struct cgroup_subsys *ss,
struct cgroup *cont)
static void cpuset_destroy(struct cgroup_subsys *ss, struct cgroup *cont)
struct cgroup_subsys cpuset_subsys = ;
int __init cpuset_init(void)
static void cpuset_do_move_task(struct task_struct *tsk,
struct cgroup_scanner *scan)
static void move_member_tasks_to_cpuset(struct cpuset *from, struct cpuset *to)
static void remove_tasks_in_empty_cpuset(struct cpuset *cs)
static void scan_for_empty_cpusets(struct cpuset *root)
void cpuset_update_active_cpus(void)
static int cpuset_track_online_nodes(struct notifier_block *self,
unsigned long action, void *arg)
void __init cpuset_init_smp(void)
void cpuset_cpus_allowed(struct task_struct *tsk, struct cpumask *pmask)
int cpuset_cpus_allowed_fallback(struct task_struct *tsk)
void cpuset_init_current_mems_allowed(void)
nodemask_t cpuset_mems_allowed(struct task_struct *tsk)
int cpuset_nodemask_valid_mems_allowed(nodemask_t *nodemask)
static const struct cpuset *nearest_hardwall_ancestor(const struct cpuset *cs)
int __cpuset_node_allowed_softwall(int node, gfp_t gfp_mask)
int __cpuset_node_allowed_hardwall(int node, gfp_t gfp_mask)
void cpuset_unlock(void)
static int cpuset_spread_node(int *rotor)
int cpuset_mem_spread_node(void)
int cpuset_slab_spread_node(void)
EXPORT_SYMBOL_GPL(cpuset_mem_spread_node);
int cpuset_mems_allowed_intersects(const struct task_struct *tsk1,
const struct task_struct *tsk2)
void cpuset_print_task_mems_allowed(struct task_struct *tsk)
int cpuset_memory_pressure_enabled __read_mostly;
void __cpuset_memory_pressure_bump(void)
static int proc_cpuset_show(struct seq_file *m, void *unused_v)
static int cpuset_open(struct inode *inode, struct file *file)
const struct file_operations proc_cpuset_operations = ;
void cpuset_task_status_allowed(struct seq_file *m, struct task_struct *task)
