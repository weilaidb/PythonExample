unsigned long __stack_chk_guard __read_mostly;
EXPORT_SYMBOL(__stack_chk_guard);
static const char *processor_modes[] = ;
static const char *isa_modes[] = ;
extern void setup_mm_for_reboot(char mode);
static volatile int hlt_counter;
void disable_hlt(void)
EXPORT_SYMBOL(disable_hlt);
void enable_hlt(void)
EXPORT_SYMBOL(enable_hlt);
static int __init nohlt_setup(char *__unused)
static int __init hlt_setup(char *__unused)
__setup("nohlt", nohlt_setup);
__setup("hlt", hlt_setup);
void arm_machine_restart(char mode, const char *cmd)
void (*pm_power_off)(void);
EXPORT_SYMBOL(pm_power_off);
void (*arm_pm_restart)(char str, const char *cmd) = arm_machine_restart;
EXPORT_SYMBOL_GPL(arm_pm_restart);
static void do_nothing(void *unused)
void cpu_idle_wait(void)
EXPORT_SYMBOL_GPL(cpu_idle_wait);
static void default_idle(void)
void (*pm_idle)(void) = default_idle;
EXPORT_SYMBOL(pm_idle);
void cpu_idle(void)
static char reboot_mode = 'h';
int __init reboot_setup(char *str)
__setup("reboot=", reboot_setup);
void machine_shutdown(void)
void machine_halt(void)
void machine_power_off(void)
void machine_restart(char *cmd)
void __show_regs(struct pt_regs *regs)
void show_regs(struct pt_regs * regs)
ATOMIC_NOTIFIER_HEAD(thread_notify_head);
EXPORT_SYMBOL_GPL(thread_notify_head);
void exit_thread(void)
void flush_thread(void)
void release_thread(struct task_struct *dead_task)
asmlinkage void ret_from_fork(void) __asm__("ret_from_fork");
int
copy_thread(unsigned long clone_flags, unsigned long stack_start,
unsigned long stk_sz, struct task_struct *p, struct pt_regs *regs)
int dump_task_regs(struct task_struct *t, elf_gregset_t *elfregs)
int dump_fpu (struct pt_regs *regs, struct user_fp *fp)
EXPORT_SYMBOL(dump_fpu);
extern void kernel_thread_helper(void);
asm(	".pushsection .text\n"
"	.align\n"
"	.type	kernel_thread_helper, #function\n"
"kernel_thread_helper:\n"
"	bl	trace_hardirqs_on\n"
"	msr	cpsr_c, r7\n"
"	mov	r0, r4\n"
"	mov	lr, r6\n"
"	mov	pc, r5\n"
"	.size	kernel_thread_helper, . - kernel_thread_helper\n"
"	.popsection");
extern void kernel_thread_exit(long code);
asm(	".pushsection .text\n"
"	.align\n"
"	.type	kernel_thread_exit, #function\n"
"kernel_thread_exit:\n"
"	.fnstart\n"
"	.cantunwind\n"
"	bl	do_exit\n"
"	nop\n"
"	.fnend\n"
"	.size	kernel_thread_exit, . - kernel_thread_exit\n"
"	.popsection");
#define kernel_thread_exit	do_exit
pid_t kernel_thread(int (*fn)(void *), void *arg, unsigned long flags)
EXPORT_SYMBOL(kernel_thread);
unsigned long get_wchan(struct task_struct *p)
unsigned long arch_randomize_brk(struct mm_struct *mm)
int vectors_user_mapping(void)
const char *arch_vma_name(struct vm_area_struct *vma)
