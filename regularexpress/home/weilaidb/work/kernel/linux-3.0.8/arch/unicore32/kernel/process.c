static const char * const processor_modes[] = ;
void cpu_idle(void)
static char reboot_mode = 'h';
int __init reboot_setup(char *str)
__setup("reboot=", reboot_setup);
void machine_halt(void)
void (*pm_power_off)(void) = NULL;
void machine_power_off(void)
void machine_restart(char *cmd)
void __show_regs(struct pt_regs *regs)
void show_regs(struct pt_regs *regs)
void exit_thread(void)
void flush_thread(void)
void release_thread(struct task_struct *dead_task)
asmlinkage void ret_from_fork(void) __asm__("ret_from_fork");
int
copy_thread(unsigned long clone_flags, unsigned long stack_start,
unsigned long stk_sz, struct task_struct *p, struct pt_regs *regs)
int dump_task_regs(struct task_struct *t, elf_gregset_t *elfregs)
int dump_fpu(struct pt_regs *regs, elf_fpregset_t *fp)
EXPORT_SYMBOL(dump_fpu);
asm(".pushsection .text\n"
"	.align\n"
"	.type	kernel_thread_helper, #function\n"
"kernel_thread_helper:\n"
"	mov.a	asr, r7\n"
"	mov	r0, r4\n"
"	mov	lr, r6\n"
"	mov	pc, r5\n"
"	.size	kernel_thread_helper, . - kernel_thread_helper\n"
"	.popsection");
pid_t kernel_thread(int (*fn)(void *), void *arg, unsigned long flags)
EXPORT_SYMBOL(kernel_thread);
unsigned long get_wchan(struct task_struct *p)
unsigned long arch_randomize_brk(struct mm_struct *mm)
int vectors_user_mapping(void)
const char *arch_vma_name(struct vm_area_struct *vma)
