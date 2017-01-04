static inline unsigned long int
get_stack_long(struct task_struct *task, int offset)
static inline int
put_stack_long(struct task_struct *task, int offset, unsigned long data)
static int reg_offset[] = ;
static int ptrace_read_user(struct task_struct *tsk, unsigned long off,
unsigned long __user *data)
static int ptrace_write_user(struct task_struct *tsk, unsigned long off,
unsigned long data)
static int ptrace_getregs(struct task_struct *tsk, void __user *uregs)
static int ptrace_setregs(struct task_struct *tsk, void __user *uregs)
static inline int
check_condition_bit(struct task_struct *child)
static int
check_condition_src(unsigned long op, unsigned long regno1,
unsigned long regno2, struct task_struct *child)
static void
compute_next_pc_for_16bit_insn(unsigned long insn, unsigned long pc,
unsigned long *next_pc,
struct task_struct *child)
static void
compute_next_pc_for_32bit_insn(unsigned long insn, unsigned long pc,
unsigned long *next_pc,
struct task_struct *child)
static inline void
compute_next_pc(unsigned long insn, unsigned long pc,
unsigned long *next_pc, struct task_struct *child)
static int
register_debug_trap(struct task_struct *child, unsigned long next_pc,
unsigned long next_insn, unsigned long *code)
static int
unregister_debug_trap(struct task_struct *child, unsigned long addr,
unsigned long *code)
static void
unregister_all_debug_traps(struct task_struct *child)
static inline void
invalidate_cache(void)
static int
embed_debug_trap(struct task_struct *child, unsigned long next_pc)
void
withdraw_debug_trap(struct pt_regs *regs)
void
init_debug_traps(struct task_struct *child)
void user_enable_single_step(struct task_struct *child)
void user_disable_single_step(struct task_struct *child)
void ptrace_disable(struct task_struct *child)
long
arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
void do_syscall_trace(void)
