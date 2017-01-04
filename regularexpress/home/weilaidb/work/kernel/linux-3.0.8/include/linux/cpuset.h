#define _LINUX_CPUSET_H
extern int number_of_cpusets;
extern int cpuset_init(void);
extern void cpuset_init_smp(void);
extern void cpuset_update_active_cpus(void);
extern void cpuset_cpus_allowed(struct task_struct *p, struct cpumask *mask);
extern int cpuset_cpus_allowed_fallback(struct task_struct *p);
extern nodemask_t cpuset_mems_allowed(struct task_struct *p);
#define cpuset_current_mems_allowed (current->mems_allowed)
void cpuset_init_current_mems_allowed(void);
int cpuset_nodemask_valid_mems_allowed(nodemask_t *nodemask);
extern int __cpuset_node_allowed_softwall(int node, gfp_t gfp_mask);
extern int __cpuset_node_allowed_hardwall(int node, gfp_t gfp_mask);
static inline int cpuset_node_allowed_softwall(int node, gfp_t gfp_mask)
static inline int cpuset_node_allowed_hardwall(int node, gfp_t gfp_mask)
static inline int cpuset_zone_allowed_softwall(struct zone *z, gfp_t gfp_mask)
static inline int cpuset_zone_allowed_hardwall(struct zone *z, gfp_t gfp_mask)
extern int cpuset_mems_allowed_intersects(const struct task_struct *tsk1,
const struct task_struct *tsk2);
#define cpuset_memory_pressure_bump() 				\
do  while (0)
extern int cpuset_memory_pressure_enabled;
extern void __cpuset_memory_pressure_bump(void);
extern const struct file_operations proc_cpuset_operations;
struct seq_file;
extern void cpuset_task_status_allowed(struct seq_file *m,
struct task_struct *task);
extern int cpuset_mem_spread_node(void);
extern int cpuset_slab_spread_node(void);
static inline int cpuset_do_page_mem_spread(void)
static inline int cpuset_do_slab_mem_spread(void)
extern int current_cpuset_is_being_rebound(void);
extern void rebuild_sched_domains(void);
extern void cpuset_print_task_mems_allowed(struct task_struct *p);
static inline void get_mems_allowed(void)
static inline void put_mems_allowed(void)
static inline void set_mems_allowed(nodemask_t nodemask)
static inline int cpuset_init(void)
static inline void cpuset_init_smp(void)
static inline void cpuset_update_active_cpus(void)
static inline void cpuset_cpus_allowed(struct task_struct *p,
struct cpumask *mask)
static inline int cpuset_cpus_allowed_fallback(struct task_struct *p)
static inline nodemask_t cpuset_mems_allowed(struct task_struct *p)
#define cpuset_current_mems_allowed (node_states[N_HIGH_MEMORY])
static inline void cpuset_init_current_mems_allowed(void)
static inline int cpuset_nodemask_valid_mems_allowed(nodemask_t *nodemask)
static inline int cpuset_node_allowed_softwall(int node, gfp_t gfp_mask)
static inline int cpuset_node_allowed_hardwall(int node, gfp_t gfp_mask)
static inline int cpuset_zone_allowed_softwall(struct zone *z, gfp_t gfp_mask)
static inline int cpuset_zone_allowed_hardwall(struct zone *z, gfp_t gfp_mask)
static inline int cpuset_mems_allowed_intersects(const struct task_struct *tsk1,
const struct task_struct *tsk2)
static inline void cpuset_memory_pressure_bump(void)
static inline void cpuset_task_status_allowed(struct seq_file *m,
struct task_struct *task)
static inline int cpuset_mem_spread_node(void)
static inline int cpuset_slab_spread_node(void)
static inline int cpuset_do_page_mem_spread(void)
static inline int cpuset_do_slab_mem_spread(void)
static inline int current_cpuset_is_being_rebound(void)
static inline void rebuild_sched_domains(void)
static inline void cpuset_print_task_mems_allowed(struct task_struct *p)
static inline void set_mems_allowed(nodemask_t nodemask)
static inline void get_mems_allowed(void)
static inline void put_mems_allowed(void)
