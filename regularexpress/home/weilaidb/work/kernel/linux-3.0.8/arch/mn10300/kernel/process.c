void (*pm_idle)(void);
EXPORT_SYMBOL(pm_idle);
unsigned long thread_saved_pc(struct task_struct *tsk)
void (*pm_power_off)(void);
EXPORT_SYMBOL(pm_power_off);
#if !defined(CONFIG_SMP) || defined(CONFIG_HOTPLUG_CPU)
static void default_idle(void)
static inline void poll_idle(void)
void cpu_idle(void)
void release_segments(struct mm_struct *mm)
void machine_restart(char *cmd)
void machine_halt(void)
void machine_power_off(void)
void show_regs(struct pt_regs *regs)
int kernel_thread(int (*fn)(void *), void *arg, unsigned long flags)
EXPORT_SYMBOL(kernel_thread);
void exit_thread(void)
void flush_thread(void)
void release_thread(struct task_struct *dead_task)
void copy_segments(struct task_struct *p, struct mm_struct *new_mm)
void prepare_to_copy(struct task_struct *tsk)
int copy_thread(unsigned long clone_flags,
unsigned long c_usp, unsigned long ustk_size,
struct task_struct *p, struct pt_regs *kregs)
asmlinkage long sys_clone(unsigned long clone_flags, unsigned long newsp,
int __user *parent_tidptr, int __user *child_tidptr,
int __user *tlsptr)
asmlinkage long sys_fork(void)
asmlinkage long sys_vfork(void)
asmlinkage long sys_execve(const char __user *name,
const char __user *const __user *argv,
const char __user *const __user *envp)
unsigned long get_wchan(struct task_struct *p)
