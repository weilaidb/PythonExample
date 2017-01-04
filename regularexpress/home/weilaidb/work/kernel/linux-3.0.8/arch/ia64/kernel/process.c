# include <asm/perfmon.h>
void (*ia64_mark_idle)(int);
unsigned long boot_option_idle_override = IDLE_NO_OVERRIDE;
EXPORT_SYMBOL(boot_option_idle_override);
void (*pm_idle) (void);
EXPORT_SYMBOL(pm_idle);
void (*pm_power_off) (void);
EXPORT_SYMBOL(pm_power_off);
void
ia64_do_show_stack (struct unw_frame_info *info, void *arg)
void
show_stack (struct task_struct *task, unsigned long *sp)
void
dump_stack (void)
EXPORT_SYMBOL(dump_stack);
void
show_regs (struct pt_regs *regs)
void
console_print(const char *s)
void
do_notify_resume_user(sigset_t *unused, struct sigscratch *scr, long in_syscall)
static int pal_halt        = 1;
static int can_do_pal_halt = 1;
static int __init nohalt_setup(char * str)
__setup("nohalt", nohalt_setup);
void
update_pal_halt_status(int status)
void
default_idle (void)
static inline void play_dead(void)
static inline void play_dead(void)
static void do_nothing(void *unused)
void cpu_idle_wait(void)
EXPORT_SYMBOL_GPL(cpu_idle_wait);
void __attribute__((noreturn))
cpu_idle (void)
void
ia64_save_extra (struct task_struct *task)
void
ia64_load_extra (struct task_struct *task)
int
copy_thread(unsigned long clone_flags,
unsigned long user_stack_base, unsigned long user_stack_size,
struct task_struct *p, struct pt_regs *regs)
static void
do_copy_task_regs (struct task_struct *task, struct unw_frame_info *info, void *arg)
void
do_dump_task_fpu (struct task_struct *task, struct unw_frame_info *info, void *arg)
void
do_copy_regs (struct unw_frame_info *info, void *arg)
void
do_dump_fpu (struct unw_frame_info *info, void *arg)
void
ia64_elf_core_copy_regs (struct pt_regs *pt, elf_gregset_t dst)
int
dump_fpu (struct pt_regs *pt, elf_fpregset_t dst)
long
sys_execve (const char __user *filename,
const char __user *const __user *argv,
const char __user *const __user *envp,
struct pt_regs *regs)
pid_t
kernel_thread (int (*fn)(void *), void *arg, unsigned long flags)
EXPORT_SYMBOL(kernel_thread);
int
kernel_thread_helper (int (*fn)(void *), void *arg)
void
flush_thread (void)
void
exit_thread (void)
unsigned long
get_wchan (struct task_struct *p)
void
cpu_halt (void)
void machine_shutdown(void)
void
machine_restart (char *restart_cmd)
void
machine_halt (void)
void
machine_power_off (void)
