static struct hard_trap_info  hard_trap_info[] = ;
struct dbg_reg_def_t dbg_reg_def[DBG_MAX_REG_NUM] =
;
int dbg_set_reg(int regno, void *mem, struct pt_regs *regs)
char *dbg_get_reg(int regno, void *mem, struct pt_regs *regs)
void arch_kgdb_breakpoint(void)
static void kgdb_call_nmi_hook(void *ignored)
void kgdb_roundup_cpus(unsigned long flags)
static int compute_signal(int tt)
void sleeping_thread_to_gdb_regs(unsigned long *gdb_regs, struct task_struct *p)
void kgdb_arch_set_pc(struct pt_regs *regs, unsigned long pc)
static int kgdb_mips_notify(struct notifier_block *self, unsigned long cmd,
void *ptr)
int kgdb_ll_trap(int cmd, const char *str,
struct pt_regs *regs, long err, int trap, int sig)
static struct notifier_block kgdb_notifier = ;
int kgdb_arch_handle_exception(int vector, int signo, int err_code,
char *remcom_in_buffer, char *remcom_out_buffer,
struct pt_regs *regs)
struct kgdb_arch arch_kgdb_ops;
int kgdb_arch_init(void)
void kgdb_arch_exit(void)
