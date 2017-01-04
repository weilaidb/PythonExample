void cpu_idle(void)
#define COMMAND_GLOBAL  F_EXTEND(0xfffe0030)
#define CMD_RESET       5
void machine_restart(char *cmd)
void machine_halt(void)
void (*chassis_power_off)(void);
void machine_power_off(void)
void (*pm_power_off)(void) = machine_power_off;
EXPORT_SYMBOL(pm_power_off);
extern pid_t __kernel_thread(int (*fn)(void *), void *arg, unsigned long flags);
pid_t kernel_thread(int (*fn)(void *), void *arg, unsigned long flags)
EXPORT_SYMBOL(kernel_thread);
void exit_thread(void)
void flush_thread(void)
void release_thread(struct task_struct *dead_task)
int dump_fpu (struct pt_regs * regs, elf_fpregset_t *r)
int dump_task_fpu (struct task_struct *tsk, elf_fpregset_t *r)
int
sys_clone(unsigned long clone_flags, unsigned long usp,
struct pt_regs *regs)
int
sys_vfork(struct pt_regs *regs)
int
copy_thread(unsigned long clone_flags, unsigned long usp,
unsigned long unused,
struct task_struct * p, struct pt_regs * pregs)
unsigned long thread_saved_pc(struct task_struct *t)
asmlinkage int sys_execve(struct pt_regs *regs)
extern int __execve(const char *filename,
const char *const argv[],
const char *const envp[], struct task_struct *task);
int kernel_execve(const char *filename,
const char *const argv[],
const char *const envp[])
unsigned long
get_wchan(struct task_struct *p)
void *dereference_function_descriptor(void *ptr)
