void __ptrace_link(struct task_struct *child, struct task_struct *new_parent)
void __ptrace_unlink(struct task_struct *child)
int ptrace_check_attach(struct task_struct *child, int kill)
int __ptrace_may_access(struct task_struct *task, unsigned int mode)
bool ptrace_may_access(struct task_struct *task, unsigned int mode)
static int ptrace_attach(struct task_struct *task)
static int ptrace_traceme(void)
static int ignoring_children(struct sighand_struct *sigh)
static bool __ptrace_detach(struct task_struct *tracer, struct task_struct *p)
static int ptrace_detach(struct task_struct *child, unsigned int data)
void exit_ptrace(struct task_struct *tracer)
__releases(&tasklist_lock)
__acquires(&tasklist_lock)
int ptrace_readdata(struct task_struct *tsk, unsigned long src, char __user *dst, int len)
int ptrace_writedata(struct task_struct *tsk, char __user *src, unsigned long dst, int len)
static int ptrace_setoptions(struct task_struct *child, unsigned long data)
static int ptrace_getsiginfo(struct task_struct *child, siginfo_t *info)
static int ptrace_setsiginfo(struct task_struct *child, const siginfo_t *info)
#define is_singlestep(request)		((request) == PTRACE_SINGLESTEP)
#define is_singlestep(request)		0
#define is_singleblock(request)		((request) == PTRACE_SINGLEBLOCK)
#define is_singleblock(request)		0
#define is_sysemu_singlestep(request)	((request) == PTRACE_SYSEMU_SINGLESTEP)
#define is_sysemu_singlestep(request)	0
static int ptrace_resume(struct task_struct *child, long request,
unsigned long data)
static const struct user_regset *
find_regset(const struct user_regset_view *view, unsigned int type)
static int ptrace_regset(struct task_struct *task, int req, unsigned int type,
struct iovec *kiov)
int ptrace_request(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
static struct task_struct *ptrace_get_task_struct(pid_t pid)
#define arch_ptrace_attach(child)	do  while (0)
SYSCALL_DEFINE4(ptrace, long, request, long, pid, unsigned long, addr,
unsigned long, data)
int generic_ptrace_peekdata(struct task_struct *tsk, unsigned long addr,
unsigned long data)
int generic_ptrace_pokedata(struct task_struct *tsk, unsigned long addr,
unsigned long data)
#if defined CONFIG_COMPAT
int compat_ptrace_request(struct task_struct *child, compat_long_t request,
compat_ulong_t addr, compat_ulong_t data)
asmlinkage long compat_sys_ptrace(compat_long_t request, compat_long_t pid,
compat_long_t addr, compat_long_t data)
int ptrace_get_breakpoints(struct task_struct *tsk)
void ptrace_put_breakpoints(struct task_struct *tsk)
