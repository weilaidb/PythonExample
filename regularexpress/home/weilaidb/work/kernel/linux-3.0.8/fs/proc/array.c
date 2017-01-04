static inline void task_name(struct seq_file *m, struct task_struct *p)
static const char * const task_state_array[] = ;
static inline const char *get_task_state(struct task_struct *tsk)
static inline void task_state(struct seq_file *m, struct pid_namespace *ns,
struct pid *pid, struct task_struct *p)
static void render_sigset_t(struct seq_file *m, const char *header,
sigset_t *set)
static void collect_sigign_sigcatch(struct task_struct *p, sigset_t *ign,
sigset_t *catch)
static inline void task_sig(struct seq_file *m, struct task_struct *p)
static void render_cap_t(struct seq_file *m, const char *header,
kernel_cap_t *a)
static inline void task_cap(struct seq_file *m, struct task_struct *p)
static inline void task_context_switch_counts(struct seq_file *m,
struct task_struct *p)
static void task_cpus_allowed(struct seq_file *m, struct task_struct *task)
int proc_pid_status(struct seq_file *m, struct pid_namespace *ns,
struct pid *pid, struct task_struct *task)
static int do_task_stat(struct seq_file *m, struct pid_namespace *ns,
struct pid *pid, struct task_struct *task, int whole)
int proc_tid_stat(struct seq_file *m, struct pid_namespace *ns,
struct pid *pid, struct task_struct *task)
int proc_tgid_stat(struct seq_file *m, struct pid_namespace *ns,
struct pid *pid, struct task_struct *task)
int proc_pid_statm(struct seq_file *m, struct pid_namespace *ns,
struct pid *pid, struct task_struct *task)
