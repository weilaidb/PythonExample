#define _LINUX_TRACEHOOK_H	1
struct linux_binprm;
static inline int tracehook_expect_breakpoints(struct task_struct *task)
static inline void ptrace_report_syscall(struct pt_regs *regs)
static inline __must_check int tracehook_report_syscall_entry(
struct pt_regs *regs)
static inline void tracehook_report_syscall_exit(struct pt_regs *regs, int step)
static inline int tracehook_unsafe_exec(struct task_struct *task)
static inline struct task_struct *tracehook_tracer_task(struct task_struct *tsk)
static inline void tracehook_report_exec(struct linux_binfmt *fmt,
struct linux_binprm *bprm,
struct pt_regs *regs)
static inline void tracehook_report_exit(long *exit_code)
static inline int tracehook_prepare_clone(unsigned clone_flags)
static inline void tracehook_finish_clone(struct task_struct *child,
unsigned long clone_flags, int trace)
static inline void tracehook_report_clone(struct pt_regs *regs,
unsigned long clone_flags,
pid_t pid, struct task_struct *child)
static inline void tracehook_report_clone_complete(int trace,
struct pt_regs *regs,
unsigned long clone_flags,
pid_t pid,
struct task_struct *child)
static inline void tracehook_report_vfork_done(struct task_struct *child,
pid_t pid)
static inline void tracehook_prepare_release_task(struct task_struct *task)
static inline void tracehook_finish_release_task(struct task_struct *task)
static inline void tracehook_signal_handler(int sig, siginfo_t *info,
const struct k_sigaction *ka,
struct pt_regs *regs, int stepping)
static inline int tracehook_consider_ignored_signal(struct task_struct *task,
int sig)
static inline int tracehook_consider_fatal_signal(struct task_struct *task,
int sig)
static inline int tracehook_force_sigpending(void)
static inline int tracehook_get_signal(struct task_struct *task,
struct pt_regs *regs,
siginfo_t *info,
struct k_sigaction *return_ka)
static inline void tracehook_finish_jctl(void)
#define DEATH_REAP			-1
#define DEATH_DELAYED_GROUP_LEADER	-2
static inline int tracehook_notify_death(struct task_struct *task,
void **death_cookie, int group_dead)
static inline void tracehook_report_death(struct task_struct *task,
int signal, void *death_cookie,
int group_dead)
static inline void set_notify_resume(struct task_struct *task)
static inline void tracehook_notify_resume(struct pt_regs *regs)
