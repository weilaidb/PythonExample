#define CREATE_TRACE_POINTS
void ptrace_disable(struct task_struct *child)
void flush_ptrace_access(struct vm_area_struct *vma, struct page *page,
unsigned long uaddr, void *kaddr,
unsigned long len, int write)
static int get_from_target(struct task_struct *target, unsigned long uaddr,
void *kbuf, int len)
static int set_to_target(struct task_struct *target, unsigned long uaddr,
void *kbuf, int len)
static int regwindow64_get(struct task_struct *target,
const struct pt_regs *regs,
struct reg_window *wbuf)
static int regwindow64_set(struct task_struct *target,
const struct pt_regs *regs,
struct reg_window *wbuf)
enum sparc_regset ;
static int genregs64_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int genregs64_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static int fpregs64_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int fpregs64_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static const struct user_regset sparc64_regsets[] = ;
static const struct user_regset_view user_sparc64_view = ;
static int genregs32_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int genregs32_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static int fpregs32_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int fpregs32_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static const struct user_regset sparc32_regsets[] = ;
static const struct user_regset_view user_sparc32_view = ;
const struct user_regset_view *task_user_regset_view(struct task_struct *task)
struct compat_fps ;
long compat_arch_ptrace(struct task_struct *child, compat_long_t request,
compat_ulong_t caddr, compat_ulong_t cdata)
struct fps ;
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
asmlinkage int syscall_trace_enter(struct pt_regs *regs)
asmlinkage void syscall_trace_leave(struct pt_regs *regs)
