#define _LINUX_PID_NS_H
struct pidmap ;
#define PIDMAP_ENTRIES         ((PID_MAX_LIMIT + 8*PAGE_SIZE - 1)/PAGE_SIZE/8)
struct bsd_acct_struct;
struct pid_namespace ;
extern struct pid_namespace init_pid_ns;
static inline struct pid_namespace *get_pid_ns(struct pid_namespace *ns)
extern struct pid_namespace *copy_pid_ns(unsigned long flags, struct pid_namespace *ns);
extern void free_pid_ns(struct kref *kref);
extern void zap_pid_ns_processes(struct pid_namespace *pid_ns);
static inline void put_pid_ns(struct pid_namespace *ns)
static inline struct pid_namespace *get_pid_ns(struct pid_namespace *ns)
static inline struct pid_namespace *
copy_pid_ns(unsigned long flags, struct pid_namespace *ns)
static inline void put_pid_ns(struct pid_namespace *ns)
static inline void zap_pid_ns_processes(struct pid_namespace *ns)
extern struct pid_namespace *task_active_pid_ns(struct task_struct *tsk);
void pidhash_init(void);
void pidmap_init(void);
