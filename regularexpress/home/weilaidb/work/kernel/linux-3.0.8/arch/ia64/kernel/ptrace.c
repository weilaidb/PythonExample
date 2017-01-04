#define IPSR_MASK (IA64_PSR_UM | IA64_PSR_DB | IA64_PSR_IS	\
| IA64_PSR_ID | IA64_PSR_DD | IA64_PSR_RI)
#define MASK(nbits)	((1UL << (nbits)) - 1)
#define PFM_MASK	MASK(38)
#define PTRACE_DEBUG	0
#if PTRACE_DEBUG
# define dprintk(format...)	printk(format)
# define inline
# define dprintk(format...)
static inline int
in_syscall (struct pt_regs *pt)
unsigned long
ia64_get_scratch_nat_bits (struct pt_regs *pt, unsigned long scratch_unat)
unsigned long
ia64_put_scratch_nat_bits (struct pt_regs *pt, unsigned long nat)
#define IA64_MLX_TEMPLATE	0x2
#define IA64_MOVL_OPCODE	6
void
ia64_increment_ip (struct pt_regs *regs)
void
ia64_decrement_ip (struct pt_regs *regs)
static unsigned long
get_rnat (struct task_struct *task, struct switch_stack *sw,
unsigned long *krbs, unsigned long *urnat_addr,
unsigned long *urbs_end)
static void
put_rnat (struct task_struct *task, struct switch_stack *sw,
unsigned long *krbs, unsigned long *urnat_addr, unsigned long urnat,
unsigned long *urbs_end)
static inline int
on_kernel_rbs (unsigned long addr, unsigned long bspstore,
unsigned long urbs_end)
long
ia64_peek (struct task_struct *child, struct switch_stack *child_stack,
unsigned long user_rbs_end, unsigned long addr, long *val)
long
ia64_poke (struct task_struct *child, struct switch_stack *child_stack,
unsigned long user_rbs_end, unsigned long addr, long val)
unsigned long
ia64_get_user_rbs_end (struct task_struct *child, struct pt_regs *pt,
unsigned long *cfmp)
long
ia64_sync_user_rbs (struct task_struct *child, struct switch_stack *sw,
unsigned long user_rbs_start, unsigned long user_rbs_end)
static long
ia64_sync_kernel_rbs (struct task_struct *child, struct switch_stack *sw,
unsigned long user_rbs_start, unsigned long user_rbs_end)
typedef long (*syncfunc_t)(struct task_struct *, struct switch_stack *,
unsigned long, unsigned long);
static void do_sync_rbs(struct unw_frame_info *info, void *arg)
void ia64_ptrace_stop(void)
void ia64_sync_krbs(void)
void
ptrace_attach_sync_user_rbs (struct task_struct *child)
static inline int
thread_matches (struct task_struct *thread, unsigned long addr)
inline void
ia64_flush_fph (struct task_struct *task)
void
ia64_sync_fph (struct task_struct *task)
static void
convert_to_non_syscall (struct task_struct *child, struct pt_regs  *pt,
unsigned long cfm)
static int
access_nat_bits (struct task_struct *child, struct pt_regs *pt,
struct unw_frame_info *info,
unsigned long *data, int write_access)
static int
access_uarea (struct task_struct *child, unsigned long addr,
unsigned long *data, int write_access);
static long
ptrace_getregs (struct task_struct *child, struct pt_all_user_regs __user *ppr)
static long
ptrace_setregs (struct task_struct *child, struct pt_all_user_regs __user *ppr)
void
user_enable_single_step (struct task_struct *child)
void
user_enable_block_step (struct task_struct *child)
void
user_disable_single_step (struct task_struct *child)
void
ptrace_disable (struct task_struct *child)
long
arch_ptrace (struct task_struct *child, long request,
unsigned long addr, unsigned long data)
asmlinkage long
syscall_trace_enter (long arg0, long arg1, long arg2, long arg3,
long arg4, long arg5, long arg6, long arg7,
struct pt_regs regs)
asmlinkage void
syscall_trace_leave (long arg0, long arg1, long arg2, long arg3,
long arg4, long arg5, long arg6, long arg7,
struct pt_regs regs)
struct regset_get ;
struct regset_set ;
struct regset_getset ;
static int
access_elf_gpreg(struct task_struct *target, struct unw_frame_info *info,
unsigned long addr, unsigned long *data, int write_access)
static int
access_elf_breg(struct task_struct *target, struct unw_frame_info *info,
unsigned long addr, unsigned long *data, int write_access)
static int
access_elf_areg(struct task_struct *target, struct unw_frame_info *info,
unsigned long addr, unsigned long *data, int write_access)
static int
access_elf_reg(struct task_struct *target, struct unw_frame_info *info,
unsigned long addr, unsigned long *data, int write_access)
void do_gpregs_get(struct unw_frame_info *info, void *arg)
void do_gpregs_set(struct unw_frame_info *info, void *arg)
#define ELF_FP_OFFSET(i)	(i * sizeof(elf_fpreg_t))
void do_fpregs_get(struct unw_frame_info *info, void *arg)
void do_fpregs_set(struct unw_frame_info *info, void *arg)
static int
do_regset_call(void (*call)(struct unw_frame_info *, void *),
struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static int
gpregs_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int gpregs_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static void do_gpregs_writeback(struct unw_frame_info *info, void *arg)
static int
gpregs_writeback(struct task_struct *target,
const struct user_regset *regset,
int now)
static int
fpregs_active(struct task_struct *target, const struct user_regset *regset)
static int fpregs_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int fpregs_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static int
access_uarea(struct task_struct *child, unsigned long addr,
unsigned long *data, int write_access)
static const struct user_regset native_regsets[] = ;
static const struct user_regset_view user_ia64_view = ;
const struct user_regset_view *task_user_regset_view(struct task_struct *tsk)
struct syscall_get_set_args ;
static void syscall_get_set_args_cb(struct unw_frame_info *info, void *data)
void ia64_syscall_get_set_arguments(struct task_struct *task,
struct pt_regs *regs, unsigned int i, unsigned int n,
unsigned long *args, int rw)
