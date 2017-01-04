void (*pm_power_off)(void) = NULL;
EXPORT_SYMBOL(pm_power_off);
asmlinkage void ret_from_fork(void);
#if !defined(CONFIG_H8300H_SIM) && !defined(CONFIG_H8S_SIM)
static void default_idle(void)
static void default_idle(void)
void (*idle)(void) = default_idle;
void cpu_idle(void)
void machine_restart(char * __unused)
void machine_halt(void)
void machine_power_off(void)
void show_regs(struct pt_regs * regs)
int kernel_thread(int (*fn)(void *), void * arg, unsigned long flags)
void flush_thread(void)
asmlinkage int h8300_fork(struct pt_regs *regs)
asmlinkage int h8300_vfork(struct pt_regs *regs)
asmlinkage int h8300_clone(struct pt_regs *regs)
int copy_thread(unsigned long clone_flags,
unsigned long usp, unsigned long topstk,
struct task_struct * p, struct pt_regs * regs)
asmlinkage int sys_execve(const char *name,
const char *const *argv,
const char *const *envp,
int dummy, ...)
unsigned long thread_saved_pc(struct task_struct *tsk)
unsigned long get_wchan(struct task_struct *p)
