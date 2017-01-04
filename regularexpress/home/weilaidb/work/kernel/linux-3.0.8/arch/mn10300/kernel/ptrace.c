static const u8 ptrace_regid_to_frame[] = ;
static inline int get_stack_long(struct task_struct *task, int offset)
static inline
int put_stack_long(struct task_struct *task, int offset, unsigned long data)
static int genregs_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int genregs_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static int fpuregs_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int fpuregs_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static int fpuregs_active(struct task_struct *target,
const struct user_regset *regset)
enum mn10300_regset ;
static const struct user_regset mn10300_regsets[] = ;
static const struct user_regset_view user_mn10300_native_view = ;
const struct user_regset_view *task_user_regset_view(struct task_struct *task)
void user_enable_single_step(struct task_struct *child)
void user_disable_single_step(struct task_struct *child)
void ptrace_disable(struct task_struct *child)
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
asmlinkage unsigned long syscall_trace_entry(struct pt_regs *regs)
asmlinkage void syscall_trace_exit(struct pt_regs *regs)
