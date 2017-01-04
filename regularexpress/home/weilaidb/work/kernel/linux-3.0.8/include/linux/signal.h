#define _LINUX_SIGNAL_H
struct task_struct;
extern int print_fatal_signals;
struct sigqueue ;
#define SIGQUEUE_PREALLOC	1
struct sigpending ;
static inline void sigaddset(sigset_t *set, int _sig)
static inline void sigdelset(sigset_t *set, int _sig)
static inline int sigismember(sigset_t *set, int _sig)
static inline int sigfindinword(unsigned long word)
static inline int sigisemptyset(sigset_t *set)
#define sigmask(sig)	(1UL << ((sig) - 1))
#define _SIG_SET_BINOP(name, op)					\
static inline void name(sigset_t *r, const sigset_t *a, const sigset_t *b) \
#define _sig_or(x,y)	((x) | (y))
_SIG_SET_BINOP(sigorsets, _sig_or)
#define _sig_and(x,y)	((x) & (y))
_SIG_SET_BINOP(sigandsets, _sig_and)
#define _sig_andn(x,y)	((x) & ~(y))
_SIG_SET_BINOP(sigandnsets, _sig_andn)
#undef _SIG_SET_BINOP
#undef _sig_or
#undef _sig_and
#undef _sig_andn
#define _SIG_SET_OP(name, op)						\
static inline void name(sigset_t *set)					\
#define _sig_not(x)	(~(x))
_SIG_SET_OP(signotset, _sig_not)
#undef _SIG_SET_OP
#undef _sig_not
static inline void sigemptyset(sigset_t *set)
static inline void sigfillset(sigset_t *set)
static inline void sigaddsetmask(sigset_t *set, unsigned long mask)
static inline void sigdelsetmask(sigset_t *set, unsigned long mask)
static inline int sigtestsetmask(sigset_t *set, unsigned long mask)
static inline void siginitset(sigset_t *set, unsigned long mask)
static inline void siginitsetinv(sigset_t *set, unsigned long mask)
static inline void init_sigpending(struct sigpending *sig)
extern void flush_sigqueue(struct sigpending *queue);
static inline int valid_signal(unsigned long sig)
struct timespec;
struct pt_regs;
extern int next_signal(struct sigpending *pending, sigset_t *mask);
extern int do_send_sig_info(int sig, struct siginfo *info,
struct task_struct *p, bool group);
extern int group_send_sig_info(int sig, struct siginfo *info, struct task_struct *p);
extern int __group_send_sig_info(int, struct siginfo *, struct task_struct *);
extern long do_rt_tgsigqueueinfo(pid_t tgid, pid_t pid, int sig,
siginfo_t *info);
extern long do_sigpending(void __user *, unsigned long);
extern int do_sigtimedwait(const sigset_t *, siginfo_t *,
const struct timespec *);
extern int sigprocmask(int, sigset_t *, sigset_t *);
extern void set_current_blocked(const sigset_t *);
extern int show_unhandled_signals;
extern int get_signal_to_deliver(siginfo_t *info, struct k_sigaction *return_ka, struct pt_regs *regs, void *cookie);
extern void exit_signals(struct task_struct *tsk);
extern struct kmem_cache *sighand_cachep;
int unhandled_signal(struct task_struct *tsk, int sig);
#define SIGEMT_MASK	rt_sigmask(SIGEMT)
#define SIGEMT_MASK	0
#if SIGRTMIN > BITS_PER_LONG
#define rt_sigmask(sig)	(1ULL << ((sig)-1))
#define rt_sigmask(sig)	sigmask(sig)
#define siginmask(sig, mask) (rt_sigmask(sig) & (mask))
#define SIG_KERNEL_ONLY_MASK (\
rt_sigmask(SIGKILL)   |  rt_sigmask(SIGSTOP))
#define SIG_KERNEL_STOP_MASK (\
rt_sigmask(SIGSTOP)   |  rt_sigmask(SIGTSTP)   | \
rt_sigmask(SIGTTIN)   |  rt_sigmask(SIGTTOU)   )
#define SIG_KERNEL_COREDUMP_MASK (\
rt_sigmask(SIGQUIT)   |  rt_sigmask(SIGILL)    | \
rt_sigmask(SIGTRAP)   |  rt_sigmask(SIGABRT)   | \
rt_sigmask(SIGFPE)    |  rt_sigmask(SIGSEGV)   | \
rt_sigmask(SIGBUS)    |  rt_sigmask(SIGSYS)    | \
rt_sigmask(SIGXCPU)   |  rt_sigmask(SIGXFSZ)   | \
SIGEMT_MASK				       )
#define SIG_KERNEL_IGNORE_MASK (\
rt_sigmask(SIGCONT)   |  rt_sigmask(SIGCHLD)   | \
rt_sigmask(SIGWINCH)  |  rt_sigmask(SIGURG)    )
#define sig_kernel_only(sig) \
(((sig) < SIGRTMIN) && siginmask(sig, SIG_KERNEL_ONLY_MASK))
#define sig_kernel_coredump(sig) \
(((sig) < SIGRTMIN) && siginmask(sig, SIG_KERNEL_COREDUMP_MASK))
#define sig_kernel_ignore(sig) \
(((sig) < SIGRTMIN) && siginmask(sig, SIG_KERNEL_IGNORE_MASK))
#define sig_kernel_stop(sig) \
(((sig) < SIGRTMIN) && siginmask(sig, SIG_KERNEL_STOP_MASK))
#define sig_user_defined(t, signr) \
(((t)->sighand->action[(signr)-1].sa.sa_handler != SIG_DFL) &&	\
((t)->sighand->action[(signr)-1].sa.sa_handler != SIG_IGN))
#define sig_fatal(t, signr) \
(!siginmask(signr, SIG_KERNEL_IGNORE_MASK|SIG_KERNEL_STOP_MASK) && \
(t)->sighand->action[(signr)-1].sa.sa_handler == SIG_DFL)
void signals_init(void);
