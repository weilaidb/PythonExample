unsigned int __read_mostly sysctl_sched_autogroup_enabled = 1;
static struct autogroup autogroup_default;
static atomic_t autogroup_seq_nr;
static void __init autogroup_init(struct task_struct *init_task)
static inline void autogroup_free(struct task_group *tg)
static inline void autogroup_destroy(struct kref *kref)
static inline void autogroup_kref_put(struct autogroup *ag)
static inline struct autogroup *autogroup_kref_get(struct autogroup *ag)
static inline struct autogroup *autogroup_task_get(struct task_struct *p)
static void free_rt_sched_group(struct task_group *tg);
static inline struct autogroup *autogroup_create(void)
static inline bool
task_wants_autogroup(struct task_struct *p, struct task_group *tg)
static inline bool task_group_is_autogroup(struct task_group *tg)
static inline struct task_group *
autogroup_task_group(struct task_struct *p, struct task_group *tg)
static void
autogroup_move_group(struct task_struct *p, struct autogroup *ag)
void sched_autogroup_create_attach(struct task_struct *p)
EXPORT_SYMBOL(sched_autogroup_create_attach);
void sched_autogroup_detach(struct task_struct *p)
EXPORT_SYMBOL(sched_autogroup_detach);
void sched_autogroup_fork(struct signal_struct *sig)
void sched_autogroup_exit(struct signal_struct *sig)
static int __init setup_autogroup(char *str)
__setup("noautogroup", setup_autogroup);
int proc_sched_autogroup_set_nice(struct task_struct *p, int *nice)
void proc_sched_autogroup_show_task(struct task_struct *p, struct seq_file *m)
static inline int autogroup_path(struct task_group *tg, char *buf, int buflen)
