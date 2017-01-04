static struct signal_struct init_signals = INIT_SIGNALS(init_signals);
static struct sighand_struct init_sighand = INIT_SIGHAND(init_sighand);
union thread_union init_thread_union __init_task_data
__attribute__((aligned(THREAD_SIZE))) =
;
struct task_struct init_task = INIT_TASK(init_task);
EXPORT_SYMBOL(init_task);
asmlinkage void ret_from_fork(void);
unsigned long thread_saved_pc(struct task_struct *tsk)
static void default_idle(void)
void (*idle)(void) = default_idle;
void cpu_idle(void)
void machine_restart(char * __unused)
void machine_halt(void)
void machine_power_off(void)
void (*pm_power_off)(void) = machine_power_off;
EXPORT_SYMBOL(pm_power_off);
void show_regs(struct pt_regs * regs)
int kernel_thread(int (*fn)(void *), void * arg, unsigned long flags)
EXPORT_SYMBOL(kernel_thread);
void flush_thread(void)
asmlinkage int m68k_fork(struct pt_regs *regs)
asmlinkage int m68k_vfork(struct pt_regs *regs)
asmlinkage int m68k_clone(struct pt_regs *regs)
int copy_thread(unsigned long clone_flags, unsigned long usp,
unsigned long unused,
struct task_struct * p, struct pt_regs * regs)
int dump_fpu (struct pt_regs *regs, struct user_m68kfp_struct *fpu)
EXPORT_SYMBOL(dump_fpu);
asmlinkage int sys_execve(const char __user *name,
const char __user *const __user *argv,
const char __user *const __user *envp)
unsigned long get_wchan(struct task_struct *p)
