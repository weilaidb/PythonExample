#define CCS_MASK 0x00087c00
#define SBIT_USER (1 << (S_CCS_BITNR + CCS_SHIFT))
static int put_debugreg(long pid, unsigned int regno, long data);
static long get_debugreg(long pid, unsigned int regno);
static unsigned long get_pseudo_pc(struct task_struct *child);
void deconfigure_bp(long pid);
extern unsigned long cris_signal_return_page;
long get_reg(struct task_struct *task, unsigned int regno)
int put_reg(struct task_struct *task, unsigned int regno, unsigned long data)
void user_enable_single_step(struct task_struct *child)
void user_disable_single_step(struct task_struct *child)
void
ptrace_disable(struct task_struct *child)
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
void do_syscall_trace(void)
static int insn_size(struct task_struct *child, unsigned long pc)
static unsigned long get_pseudo_pc(struct task_struct *child)
static long bp_owner = 0;
void deconfigure_bp(long pid)
static int put_debugreg(long pid, unsigned int regno, long data)
static long get_debugreg(long pid, unsigned int regno)
