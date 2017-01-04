void (*pm_power_off)(void) = machine_power_off;
EXPORT_SYMBOL(pm_power_off);
void
cpu_idle(void)
struct halt_info ;
static void
common_shutdown_1(void *generic_ptr)
static void
common_shutdown(int mode, char *restart_cmd)
void
machine_restart(char *restart_cmd)
void
machine_halt(void)
void
machine_power_off(void)
void
show_regs(struct pt_regs *regs)
void
start_thread(struct pt_regs * regs, unsigned long pc, unsigned long sp)
EXPORT_SYMBOL(start_thread);
void
exit_thread(void)
void
flush_thread(void)
void
release_thread(struct task_struct *dead_task)
int
alpha_clone(unsigned long clone_flags, unsigned long usp,
int __user *parent_tid, int __user *child_tid,
unsigned long tls_value, struct pt_regs *regs)
int
alpha_vfork(struct pt_regs *regs)
int
copy_thread(unsigned long clone_flags, unsigned long usp,
unsigned long unused,
struct task_struct * p, struct pt_regs * regs)
void
dump_elf_thread(elf_greg_t *dest, struct pt_regs *pt, struct thread_info *ti)
EXPORT_SYMBOL(dump_elf_thread);
int
dump_elf_task(elf_greg_t *dest, struct task_struct *task)
EXPORT_SYMBOL(dump_elf_task);
int
dump_elf_task_fp(elf_fpreg_t *dest, struct task_struct *task)
EXPORT_SYMBOL(dump_elf_task_fp);
asmlinkage int
do_sys_execve(const char __user *ufilename,
const char __user *const __user *argv,
const char __user *const __user *envp, struct pt_regs *regs)
unsigned long
thread_saved_pc(struct task_struct *t)
unsigned long
get_wchan(struct task_struct *p)
