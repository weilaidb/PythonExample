extern void stop_watchdog(void);
extern int cris_hlt_counter;
void default_idle(void)
extern void deconfigure_bp(long pid);
void exit_thread(void)
extern void arch_enable_nmi(void);
void
hard_reset_now(void)
unsigned long thread_saved_pc(struct task_struct *t)
static void
kernel_thread_helper(void* dummy, int (*fn)(void *), void * arg)
int
kernel_thread(int (*fn)(void *), void * arg, unsigned long flags)
extern asmlinkage void ret_from_fork(void);
int
copy_thread(unsigned long clone_flags, unsigned long usp,
unsigned long unused,
struct task_struct *p, struct pt_regs *regs)
asmlinkage int
sys_fork(long r10, long r11, long r12, long r13, long mof, long srp,
struct pt_regs *regs)
asmlinkage int
sys_clone(unsigned long newusp, unsigned long flags, int *parent_tid, int *child_tid,
unsigned long tls, long srp, struct pt_regs *regs)
asmlinkage int
sys_vfork(long r10, long r11, long r12, long r13, long mof, long srp,
struct pt_regs *regs)
asmlinkage int
sys_execve(const char *fname,
const char *const *argv,
const char *const *envp, long r13, long mof, long srp,
struct pt_regs *regs)
unsigned long
get_wchan(struct task_struct *p)
#undef last_sched
#undef first_sched
void show_regs(struct pt_regs * regs)
