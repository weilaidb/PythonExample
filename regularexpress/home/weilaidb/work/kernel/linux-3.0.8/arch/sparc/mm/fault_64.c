int show_unhandled_signals = 1;
static inline __kprobes int notify_page_fault(struct pt_regs *regs)
static void __kprobes unhandled_fault(unsigned long address,
struct task_struct *tsk,
struct pt_regs *regs)
static void __kprobes bad_kernel_pc(struct pt_regs *regs, unsigned long vaddr)
static unsigned int get_user_insn(unsigned long tpc)
static inline void
show_signal_msg(struct pt_regs *regs, int sig, int code,
unsigned long address, struct task_struct *tsk)
extern unsigned long compute_effective_address(struct pt_regs *, unsigned int, unsigned int);
static void do_fault_siginfo(int code, int sig, struct pt_regs *regs,
unsigned int insn, int fault_code)
extern int handle_ldf_stq(u32, struct pt_regs *);
extern int handle_ld_nf(u32, struct pt_regs *);
static unsigned int get_fault_insn(struct pt_regs *regs, unsigned int insn)
static void __kprobes do_kernel_fault(struct pt_regs *regs, int si_code,
int fault_code, unsigned int insn,
unsigned long address)
static void noinline __kprobes bogus_32bit_fault_tpc(struct pt_regs *regs)
static void noinline __kprobes bogus_32bit_fault_address(struct pt_regs *regs,
unsigned long addr)
asmlinkage void __kprobes do_sparc64_fault(struct pt_regs *regs)
