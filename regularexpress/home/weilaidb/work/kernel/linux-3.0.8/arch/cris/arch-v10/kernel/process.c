void etrax_gpio_wake_up_check(void);
void default_idle(void)
void exit_thread(void)
void hard_reset_now (void)
unsigned long thread_saved_pc(struct task_struct *t)
static void kernel_thread_helper(void* dummy, int (*fn)(void *), void * arg)
int kernel_thread(int (*fn)(void *), void * arg, unsigned long flags)
asmlinkage void ret_from_fork(void);
int copy_thread(unsigned long clone_flags, unsigned long usp,
unsigned long unused,
struct task_struct *p, struct pt_regs *regs)
asmlinkage int sys_fork(long r10, long r11, long r12, long r13, long mof, long srp,
struct pt_regs *regs)
asmlinkage int sys_clone(unsigned long newusp, unsigned long flags,
int* parent_tid, int* child_tid, long mof, long srp,
struct pt_regs *regs)
asmlinkage int sys_vfork(long r10, long r11, long r12, long r13, long mof, long srp,
struct pt_regs *regs)
asmlinkage int sys_execve(const char *fname,
const char *const *argv,
const char *const *envp,
long r13, long mof, long srp,
struct pt_regs *regs)
unsigned long get_wchan(struct task_struct *p)
#undef last_sched
#undef first_sched
void show_regs(struct pt_regs * regs)
