extern int prom_node_root;
int show_unhandled_signals = 1;
int num_segmaps, num_contexts;
int invalid_segment;
int vac_size, vac_linesize, vac_do_hw_vac_flushes;
int vac_entries_per_context, vac_entries_per_segment;
int vac_entries_per_page;
unsigned long probe_memory(void)
extern void sun4c_complete_all_stores(void);
asmlinkage void sparc_lvl15_nmi(struct pt_regs *regs, unsigned long serr,
unsigned long svaddr, unsigned long aerr,
unsigned long avaddr)
static void unhandled_fault(unsigned long, struct task_struct *,
struct pt_regs *) __attribute__ ((noreturn));
static void unhandled_fault(unsigned long address, struct task_struct *tsk,
struct pt_regs *regs)
asmlinkage int lookup_fault(unsigned long pc, unsigned long ret_pc,
unsigned long address)
static inline void
show_signal_msg(struct pt_regs *regs, int sig, int code,
unsigned long address, struct task_struct *tsk)
static void __do_fault_siginfo(int code, int sig, struct pt_regs *regs,
unsigned long addr)
extern unsigned long safe_compute_effective_address(struct pt_regs *,
unsigned int);
static unsigned long compute_si_addr(struct pt_regs *regs, int text_fault)
static noinline void do_fault_siginfo(int code, int sig, struct pt_regs *regs,
int text_fault)
asmlinkage void do_sparc_fault(struct pt_regs *regs, int text_fault, int write,
unsigned long address)
asmlinkage void do_sun4c_fault(struct pt_regs *regs, int text_fault, int write,
unsigned long address)
static void force_user_fault(unsigned long address, int write)
static void check_stack_aligned(unsigned long sp)
void window_overflow_fault(void)
void window_underflow_fault(unsigned long sp)
void window_ret_fault(struct pt_regs *regs)
