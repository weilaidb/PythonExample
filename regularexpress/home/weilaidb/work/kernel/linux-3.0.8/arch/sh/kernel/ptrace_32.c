#define CREATE_TRACE_POINTS
static inline int get_stack_long(struct task_struct *task, int offset)
static inline int put_stack_long(struct task_struct *task, int offset,
unsigned long data)
void ptrace_triggered(struct perf_event *bp, int nmi,
struct perf_sample_data *data, struct pt_regs *regs)
static int set_single_step(struct task_struct *tsk, unsigned long addr)
void user_enable_single_step(struct task_struct *child)
void user_disable_single_step(struct task_struct *child)
void ptrace_disable(struct task_struct *child)
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
static int dspregs_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int dspregs_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static int dspregs_active(struct task_struct *target,
const struct user_regset *regset)
const struct pt_regs_offset regoffset_table[] = ;
enum sh_regset ;
static const struct user_regset sh_regsets[] = ;
static const struct user_regset_view user_sh_native_view = ;
const struct user_regset_view *task_user_regset_view(struct task_struct *task)
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
static inline int audit_arch(void)
asmlinkage long do_syscall_trace_enter(struct pt_regs *regs)
asmlinkage void do_syscall_trace_leave(struct pt_regs *regs)
