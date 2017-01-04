extern void ret_from_fork(void);
struct task_struct *current_set[NR_CPUS] = ;
void (*pm_power_off)(void) = NULL;
EXPORT_SYMBOL(pm_power_off);
#if XTENSA_HAVE_COPROCESSORS
void coprocessor_release_all(struct thread_info *ti)
void coprocessor_flush_all(struct thread_info *ti)
void cpu_idle(void)
void exit_thread(void)
void flush_thread(void)
void prepare_to_copy(struct task_struct *tsk)
int copy_thread(unsigned long clone_flags, unsigned long usp,
unsigned long unused,
struct task_struct * p, struct pt_regs * regs)
unsigned long get_wchan(struct task_struct *p)
void xtensa_elf_core_copy_regs (xtensa_gregset_t *elfregs, struct pt_regs *regs)
int dump_fpu(void)
asmlinkage
long xtensa_clone(unsigned long clone_flags, unsigned long newsp,
void __user *parent_tid, void *child_tls,
void __user *child_tid, long a5,
struct pt_regs *regs)
asmlinkage
long xtensa_execve(const char __user *name,
const char __user *const __user *argv,
const char __user *const __user *envp,
long a3, long a4, long a5,
struct pt_regs *regs)
