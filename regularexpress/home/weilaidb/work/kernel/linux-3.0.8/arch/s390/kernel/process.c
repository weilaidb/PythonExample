asmlinkage void ret_from_fork(void) asm ("ret_from_fork");
unsigned long thread_saved_pc(struct task_struct *tsk)
static void default_idle(void)
void cpu_idle(void)
extern void __kprobes kernel_thread_starter(void);
asm(
".section .kprobes.text, \"ax\"\n"
".global kernel_thread_starter\n"
"kernel_thread_starter:\n"
"    la    2,0(10)\n"
"    basr  14,9\n"
"    la    2,0\n"
"    br    11\n"
".previous\n");
int kernel_thread(int (*fn)(void *), void * arg, unsigned long flags)
EXPORT_SYMBOL(kernel_thread);
void exit_thread(void)
void flush_thread(void)
void release_thread(struct task_struct *dead_task)
int copy_thread(unsigned long clone_flags, unsigned long new_stackp,
unsigned long unused,
struct task_struct *p, struct pt_regs *regs)
SYSCALL_DEFINE0(fork)
SYSCALL_DEFINE4(clone, unsigned long, newsp, unsigned long, clone_flags,
int __user *, parent_tidptr, int __user *, child_tidptr)
SYSCALL_DEFINE0(vfork)
asmlinkage void execve_tail(void)
SYSCALL_DEFINE3(execve, const char __user *, name,
const char __user *const __user *, argv,
const char __user *const __user *, envp)
int dump_fpu (struct pt_regs * regs, s390_fp_regs *fpregs)
EXPORT_SYMBOL(dump_fpu);
unsigned long get_wchan(struct task_struct *p)
unsigned long arch_align_stack(unsigned long sp)
static inline unsigned long brk_rnd(void)
unsigned long arch_randomize_brk(struct mm_struct *mm)
unsigned long randomize_et_dyn(unsigned long base)
