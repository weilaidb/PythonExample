#define CREATE_TRACE_POINTS
static struct kmem_cache *sigqueue_cachep;
int print_fatal_signals __read_mostly;
static void __user *sig_handler(struct task_struct *t, int sig)
static int sig_handler_ignored(void __user *handler, int sig)
static int sig_task_ignored(struct task_struct *t, int sig,
int from_ancestor_ns)
static int sig_ignored(struct task_struct *t, int sig, int from_ancestor_ns)
static inline int has_pending_signals(sigset_t *signal, sigset_t *blocked)
#define PENDING(p,b) has_pending_signals(&(p)->signal, (b))
static int recalc_sigpending_tsk(struct task_struct *t)
void recalc_sigpending_and_wake(struct task_struct *t)
void recalc_sigpending(void)
#define SYNCHRONOUS_MASK \
(sigmask(SIGSEGV) | sigmask(SIGBUS) | sigmask(SIGILL) | \
sigmask(SIGTRAP) | sigmask(SIGFPE))
int next_signal(struct sigpending *pending, sigset_t *mask)
static inline void print_dropped_signal(int sig)
static void task_clear_group_stop_trapping(struct task_struct *task)
void task_clear_group_stop_pending(struct task_struct *task)
static bool task_participate_group_stop(struct task_struct *task)
static struct sigqueue *
__sigqueue_alloc(int sig, struct task_struct *t, gfp_t flags, int override_rlimit)
static void __sigqueue_free(struct sigqueue *q)
void flush_sigqueue(struct sigpending *queue)
void __flush_signals(struct task_struct *t)
void flush_signals(struct task_struct *t)
static void __flush_itimer_signals(struct sigpending *pending)
void flush_itimer_signals(void)
void ignore_signals(struct task_struct *t)
void
flush_signal_handlers(struct task_struct *t, int force_default)
int unhandled_signal(struct task_struct *tsk, int sig)
void
block_all_signals(int (*notifier)(void *priv), void *priv, sigset_t *mask)
void
unblock_all_signals(void)
static void collect_signal(int sig, struct sigpending *list, siginfo_t *info)
static int __dequeue_signal(struct sigpending *pending, sigset_t *mask,
siginfo_t *info)
int dequeue_signal(struct task_struct *tsk, sigset_t *mask, siginfo_t *info)
void signal_wake_up(struct task_struct *t, int resume)
static int rm_from_queue_full(sigset_t *mask, struct sigpending *s)
static int rm_from_queue(unsigned long mask, struct sigpending *s)
static inline int is_si_special(const struct siginfo *info)
static inline bool si_fromuser(const struct siginfo *info)
static int kill_ok_by_cred(struct task_struct *t)
static int check_kill_permission(int sig, struct siginfo *info,
struct task_struct *t)
static int prepare_signal(int sig, struct task_struct *p, int from_ancestor_ns)
static inline int wants_signal(int sig, struct task_struct *p)
static void complete_signal(int sig, struct task_struct *p, int group)
static inline int legacy_queue(struct sigpending *signals, int sig)
static int __send_signal(int sig, struct siginfo *info, struct task_struct *t,
int group, int from_ancestor_ns)
static int send_signal(int sig, struct siginfo *info, struct task_struct *t,
int group)
static void print_fatal_signal(struct pt_regs *regs, int signr)
static int __init setup_print_fatal_signals(char *str)
__setup("print-fatal-signals=", setup_print_fatal_signals);
int
__group_send_sig_info(int sig, struct siginfo *info, struct task_struct *p)
static int
specific_send_sig_info(int sig, struct siginfo *info, struct task_struct *t)
int do_send_sig_info(int sig, struct siginfo *info, struct task_struct *p,
bool group)
int
force_sig_info(int sig, struct siginfo *info, struct task_struct *t)
int zap_other_threads(struct task_struct *p)
struct sighand_struct *__lock_task_sighand(struct task_struct *tsk,
unsigned long *flags)
int group_send_sig_info(int sig, struct siginfo *info, struct task_struct *p)
int __kill_pgrp_info(int sig, struct siginfo *info, struct pid *pgrp)
int kill_pid_info(int sig, struct siginfo *info, struct pid *pid)
int kill_proc_info(int sig, struct siginfo *info, pid_t pid)
int kill_pid_info_as_uid(int sig, struct siginfo *info, struct pid *pid,
uid_t uid, uid_t euid, u32 secid)
EXPORT_SYMBOL_GPL(kill_pid_info_as_uid);
static int kill_something_info(int sig, struct siginfo *info, pid_t pid)
int send_sig_info(int sig, struct siginfo *info, struct task_struct *p)
#define __si_special(priv) \
((priv) ? SEND_SIG_PRIV : SEND_SIG_NOINFO)
int
send_sig(int sig, struct task_struct *p, int priv)
void
force_sig(int sig, struct task_struct *p)
int
force_sigsegv(int sig, struct task_struct *p)
int kill_pgrp(struct pid *pid, int sig, int priv)
EXPORT_SYMBOL(kill_pgrp);
int kill_pid(struct pid *pid, int sig, int priv)
EXPORT_SYMBOL(kill_pid);
struct sigqueue *sigqueue_alloc(void)
void sigqueue_free(struct sigqueue *q)
int send_sigqueue(struct sigqueue *q, struct task_struct *t, int group)
int do_notify_parent(struct task_struct *tsk, int sig)
static void do_notify_parent_cldstop(struct task_struct *tsk,
bool for_ptracer, int why)
static inline int may_ptrace_stop(void)
static int sigkill_pending(struct task_struct *tsk)
static bool real_parent_is_ptracer(struct task_struct *child)
static void ptrace_stop(int exit_code, int why, int clear_code, siginfo_t *info)
__releases(&current->sighand->siglock)
__acquires(&current->sighand->siglock)
void ptrace_notify(int exit_code)
static int do_signal_stop(int signr)
static int ptrace_signal(int signr, siginfo_t *info,
struct pt_regs *regs, void *cookie)
int get_signal_to_deliver(siginfo_t *info, struct k_sigaction *return_ka,
struct pt_regs *regs, void *cookie)
static void retarget_shared_pending(struct task_struct *tsk, sigset_t *which)
void exit_signals(struct task_struct *tsk)
EXPORT_SYMBOL(recalc_sigpending);
EXPORT_SYMBOL_GPL(dequeue_signal);
EXPORT_SYMBOL(flush_signals);
EXPORT_SYMBOL(force_sig);
EXPORT_SYMBOL(send_sig);
EXPORT_SYMBOL(send_sig_info);
EXPORT_SYMBOL(sigprocmask);
EXPORT_SYMBOL(block_all_signals);
EXPORT_SYMBOL(unblock_all_signals);
SYSCALL_DEFINE0(restart_syscall)
long do_no_restart_syscall(struct restart_block *param)
static void __set_task_blocked(struct task_struct *tsk, const sigset_t *newset)
void set_current_blocked(const sigset_t *newset)
int sigprocmask(int how, sigset_t *set, sigset_t *oldset)
SYSCALL_DEFINE4(rt_sigprocmask, int, how, sigset_t __user *, nset,
sigset_t __user *, oset, size_t, sigsetsize)
long do_sigpending(void __user *set, unsigned long sigsetsize)
SYSCALL_DEFINE2(rt_sigpending, sigset_t __user *, set, size_t, sigsetsize)
int copy_siginfo_to_user(siginfo_t __user *to, siginfo_t *from)
int do_sigtimedwait(const sigset_t *which, siginfo_t *info,
const struct timespec *ts)
SYSCALL_DEFINE4(rt_sigtimedwait, const sigset_t __user *, uthese,
siginfo_t __user *, uinfo, const struct timespec __user *, uts,
size_t, sigsetsize)
SYSCALL_DEFINE2(kill, pid_t, pid, int, sig)
static int
do_send_specific(pid_t tgid, pid_t pid, int sig, struct siginfo *info)
static int do_tkill(pid_t tgid, pid_t pid, int sig)
SYSCALL_DEFINE3(tgkill, pid_t, tgid, pid_t, pid, int, sig)
SYSCALL_DEFINE2(tkill, pid_t, pid, int, sig)
SYSCALL_DEFINE3(rt_sigqueueinfo, pid_t, pid, int, sig,
siginfo_t __user *, uinfo)
long do_rt_tgsigqueueinfo(pid_t tgid, pid_t pid, int sig, siginfo_t *info)
SYSCALL_DEFINE4(rt_tgsigqueueinfo, pid_t, tgid, pid_t, pid, int, sig,
siginfo_t __user *, uinfo)
int do_sigaction(int sig, struct k_sigaction *act, struct k_sigaction *oact)
int
do_sigaltstack (const stack_t __user *uss, stack_t __user *uoss, unsigned long sp)
SYSCALL_DEFINE1(sigpending, old_sigset_t __user *, set)
SYSCALL_DEFINE3(sigprocmask, int, how, old_sigset_t __user *, nset,
old_sigset_t __user *, oset)
SYSCALL_DEFINE4(rt_sigaction, int, sig,
const struct sigaction __user *, act,
struct sigaction __user *, oact,
size_t, sigsetsize)
SYSCALL_DEFINE0(sgetmask)
SYSCALL_DEFINE1(ssetmask, int, newmask)
SYSCALL_DEFINE2(signal, int, sig, __sighandler_t, handler)
SYSCALL_DEFINE0(pause)
SYSCALL_DEFINE2(rt_sigsuspend, sigset_t __user *, unewset, size_t, sigsetsize)
__attribute__((weak)) const char *arch_vma_name(struct vm_area_struct *vma)
void __init signals_init(void)
void
kdb_send_sig_info(struct task_struct *t, struct siginfo *info)
