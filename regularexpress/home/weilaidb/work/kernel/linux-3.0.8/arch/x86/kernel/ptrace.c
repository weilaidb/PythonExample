#define CREATE_TRACE_POINTS
enum x86_regset ;
struct pt_regs_offset ;
#define REG_OFFSET_NAME(r)
#define REG_OFFSET_END
static const struct pt_regs_offset regoffset_table[] = ;
int regs_query_register_offset(const char *name)
const char *regs_query_register_name(unsigned int offset)
static const int arg_offs_table[] = ;
#define FLAG_MASK_32		((unsigned long)			\
(X86_EFLAGS_CF | X86_EFLAGS_PF |	\
X86_EFLAGS_AF | X86_EFLAGS_ZF |	\
X86_EFLAGS_SF | X86_EFLAGS_TF |	\
X86_EFLAGS_DF | X86_EFLAGS_OF |	\
X86_EFLAGS_RF | X86_EFLAGS_AC))
static inline bool invalid_selector(u16 value)
#define FLAG_MASK		FLAG_MASK_32
static unsigned long *pt_regs_access(struct pt_regs *regs, unsigned long regno)
static u16 get_segment_reg(struct task_struct *task, unsigned long offset)
static int set_segment_reg(struct task_struct *task,
unsigned long offset, u16 value)
#define FLAG_MASK		(FLAG_MASK_32 | X86_EFLAGS_NT)
static unsigned long *pt_regs_access(struct pt_regs *regs, unsigned long offset)
static u16 get_segment_reg(struct task_struct *task, unsigned long offset)
static int set_segment_reg(struct task_struct *task,
unsigned long offset, u16 value)
static unsigned long get_flags(struct task_struct *task)
static int set_flags(struct task_struct *task, unsigned long value)
static int putreg(struct task_struct *child,
unsigned long offset, unsigned long value)
static unsigned long getreg(struct task_struct *task, unsigned long offset)
static int genregs_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int genregs_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static void ptrace_triggered(struct perf_event *bp, int nmi,
struct perf_sample_data *data,
struct pt_regs *regs)
static unsigned long ptrace_get_dr7(struct perf_event *bp[])
static int
ptrace_modify_breakpoint(struct perf_event *bp, int len, int type,
struct task_struct *tsk, int disabled)
static int ptrace_write_dr7(struct task_struct *tsk, unsigned long data)
static unsigned long ptrace_get_debugreg(struct task_struct *tsk, int n)
static int ptrace_set_breakpoint_addr(struct task_struct *tsk, int nr,
unsigned long addr)
int ptrace_set_debugreg(struct task_struct *tsk, int n, unsigned long val)
static int ioperm_active(struct task_struct *target,
const struct user_regset *regset)
static int ioperm_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
void ptrace_disable(struct task_struct *child)
#if defined CONFIG_X86_32 || defined CONFIG_IA32_EMULATION
static const struct user_regset_view user_x86_32_view;
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
#define R32(l,q)							\
case offsetof(struct user32, regs.l):				\
regs->q = value; break
#define SEG32(rs)							\
case offsetof(struct user32, regs.rs):				\
return set_segment_reg(child,				\
offsetof(struct user_regs_struct, rs), \
value);				\
break
static int putreg32(struct task_struct *child, unsigned regno, u32 value)
#undef R32
#undef SEG32
#define R32(l,q)							\
case offsetof(struct user32, regs.l):				\
*val = regs->q; break
#define SEG32(rs)							\
case offsetof(struct user32, regs.rs):				\
*val = get_segment_reg(child,				\
offsetof(struct user_regs_struct, rs)); \
break
static int getreg32(struct task_struct *child, unsigned regno, u32 *val)
#undef R32
#undef SEG32
static int genregs32_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int genregs32_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
long compat_arch_ptrace(struct task_struct *child, compat_long_t request,
compat_ulong_t caddr, compat_ulong_t cdata)
static struct user_regset x86_64_regsets[] __read_mostly = ;
static const struct user_regset_view user_x86_64_view = ;
#define user_regs_struct32	user_regs_struct
#define genregs32_get		genregs_get
#define genregs32_set		genregs_set
#define user_i387_ia32_struct	user_i387_struct
#define user32_fxsr_struct	user_fxsr_struct
#if defined CONFIG_X86_32 || defined CONFIG_IA32_EMULATION
static struct user_regset x86_32_regsets[] __read_mostly = ;
static const struct user_regset_view user_x86_32_view = ;
u64 xstate_fx_sw_bytes[USER_XSTATE_FX_SW_WORDS];
void update_regset_xstate_info(unsigned int size, u64 xstate_mask)
const struct user_regset_view *task_user_regset_view(struct task_struct *task)
static void fill_sigtrap_info(struct task_struct *tsk,
struct pt_regs *regs,
int error_code, int si_code,
struct siginfo *info)
void user_single_step_siginfo(struct task_struct *tsk,
struct pt_regs *regs,
struct siginfo *info)
void send_sigtrap(struct task_struct *tsk, struct pt_regs *regs,
int error_code, int si_code)
# define IS_IA32	1
#elif defined CONFIG_IA32_EMULATION
# define IS_IA32	is_compat_task()
# define IS_IA32	0
long syscall_trace_enter(struct pt_regs *regs)
void syscall_trace_leave(struct pt_regs *regs)
