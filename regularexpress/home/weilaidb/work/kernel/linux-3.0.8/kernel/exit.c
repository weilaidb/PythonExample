static void exit_mm(struct task_struct * tsk);
static void __unhash_process(struct task_struct *p, bool group_dead)
static void __exit_signal(struct task_struct *tsk)
static void delayed_put_task_struct(struct rcu_head *rhp)
void release_task(struct task_struct * p)
struct pid *session_of_pgrp(struct pid *pgrp)
static int will_become_orphaned_pgrp(struct pid *pgrp, struct task_struct *ignored_task)
int is_current_pgrp_orphaned(void)
static int has_stopped_jobs(struct pid *pgrp)
static void
kill_orphaned_pgrp(struct task_struct *tsk, struct task_struct *parent)
static void reparent_to_kthreadd(void)
void __set_special_pids(struct pid *pid)
static void set_special_pids(struct pid *pid)
int allow_signal(int sig)
EXPORT_SYMBOL(allow_signal);
int disallow_signal(int sig)
EXPORT_SYMBOL(disallow_signal);
void daemonize(const char *name, ...)
EXPORT_SYMBOL(daemonize);
static void close_files(struct files_struct * files)
struct files_struct *get_files_struct(struct task_struct *task)
void put_files_struct(struct files_struct *files)
void reset_files_struct(struct files_struct *files)
void exit_files(struct task_struct *tsk)
void mm_update_next_owner(struct mm_struct *mm)
static void exit_mm(struct task_struct * tsk)
static struct task_struct *find_new_reaper(struct task_struct *father)
__releases(&tasklist_lock)
__acquires(&tasklist_lock)
static void reparent_leader(struct task_struct *father, struct task_struct *p,
struct list_head *dead)
static void forget_original_parent(struct task_struct *father)
static void exit_notify(struct task_struct *tsk, int group_dead)
static void check_stack_usage(void)
static inline void check_stack_usage(void)
NORET_TYPE void do_exit(long code)
EXPORT_SYMBOL_GPL(do_exit);
NORET_TYPE void complete_and_exit(struct completion *comp, long code)
EXPORT_SYMBOL(complete_and_exit);
SYSCALL_DEFINE1(exit, int, error_code)
NORET_TYPE void
do_group_exit(int exit_code)
SYSCALL_DEFINE1(exit_group, int, error_code)
struct wait_opts ;
static inline
struct pid *task_pid_type(struct task_struct *task, enum pid_type type)
static int eligible_pid(struct wait_opts *wo, struct task_struct *p)
static int eligible_child(struct wait_opts *wo, struct task_struct *p)
static int wait_noreap_copyout(struct wait_opts *wo, struct task_struct *p,
pid_t pid, uid_t uid, int why, int status)
static int wait_task_zombie(struct wait_opts *wo, struct task_struct *p)
static int *task_stopped_code(struct task_struct *p, bool ptrace)
static int wait_task_stopped(struct wait_opts *wo,
int ptrace, struct task_struct *p)
static int wait_task_continued(struct wait_opts *wo, struct task_struct *p)
static int wait_consider_task(struct wait_opts *wo, int ptrace,
struct task_struct *p)
static int do_wait_thread(struct wait_opts *wo, struct task_struct *tsk)
static int ptrace_do_wait(struct wait_opts *wo, struct task_struct *tsk)
static int child_wait_callback(wait_queue_t *wait, unsigned mode,
int sync, void *key)
void __wake_up_parent(struct task_struct *p, struct task_struct *parent)
static long do_wait(struct wait_opts *wo)
SYSCALL_DEFINE5(waitid, int, which, pid_t, upid, struct siginfo __user *,
infop, int, options, struct rusage __user *, ru)
SYSCALL_DEFINE4(wait4, pid_t, upid, int __user *, stat_addr,
int, options, struct rusage __user *, ru)
SYSCALL_DEFINE3(waitpid, pid_t, pid, int __user *, stat_addr, int, options)
