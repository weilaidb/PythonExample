static struct thread_info *kgdb_sstep_thread;
u8 *kgdb_sstep_bp_addr[2];
u8 kgdb_sstep_bp[2];
void pt_regs_to_gdb_regs(unsigned long *gdb_regs, struct pt_regs *regs)
void sleeping_thread_to_gdb_regs(unsigned long *gdb_regs, struct task_struct *p)
void gdb_regs_to_pt_regs(unsigned long *gdb_regs, struct pt_regs *regs)
struct kgdb_arch arch_kgdb_ops = ;
static const unsigned char mn10300_kgdb_insn_sizes[256] =
;
static int kgdb_arch_do_singlestep(struct pt_regs *regs)
static bool kgdb_arch_undo_singlestep(struct pt_regs *regs)
void free_thread_info(struct thread_info *ti)
int kgdb_arch_handle_exception(int vector, int signo, int err_code,
char *remcom_in_buffer, char *remcom_out_buffer,
struct pt_regs *regs)
int debugger_intercept(enum exception_code excep, int signo, int si_code,
struct pt_regs *regs)
int at_debugger_breakpoint(struct pt_regs *regs)
int kgdb_arch_init(void)
void kgdb_arch_exit(void)
void debugger_nmi_interrupt(struct pt_regs *regs, enum exception_code code)
void kgdb_roundup_cpus(unsigned long flags)
