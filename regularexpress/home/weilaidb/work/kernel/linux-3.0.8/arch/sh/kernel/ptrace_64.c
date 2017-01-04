#define CREATE_TRACE_POINTS
#define SR_MASK      (0xffff8cfd)
static inline int get_stack_long(struct task_struct *task, int offset)
static inline unsigned long
get_fpu_long(struct task_struct *task, unsigned long addr)
static inline int put_stack_long(struct task_struct *task, int offset,
unsigned long data)
static inline int
put_fpu_long(struct task_struct *task, unsigned long addr, unsigned long data)
void user_enable_single_step(struct task_struct *child)
void user_disable_single_step(struct task_struct *child)
static int genregs_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int genregs_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
int fpregs_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int fpregs_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static int fpregs_active(struct task_struct *target,
const struct user_regset *regset)
const struct pt_regs_offset regoffset_table[] = ;
enum sh_regset ;
static const struct user_regset sh_regsets[] = ;
static const struct user_regset_view user_sh64_native_view = ;
const struct user_regset_view *task_user_regset_view(struct task_struct *task)
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
asmlinkage int sh64_ptrace(long request, long pid,
unsigned long addr, unsigned long data)
static inline int audit_arch(void)
asmlinkage long long do_syscall_trace_enter(struct pt_regs *regs)
asmlinkage void do_syscall_trace_leave(struct pt_regs *regs)
asmlinkage void do_single_step(unsigned long long vec, struct pt_regs *regs)
BUILD_TRAP_HANDLER(breakpoint)
void ptrace_disable(struct task_struct *child)
