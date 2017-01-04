struct dbg_reg_def_t dbg_reg_def[DBG_MAX_REG_NUM] =
;
char *dbg_get_reg(int regno, void *mem, struct pt_regs *regs)
int dbg_set_reg(int regno, void *mem, struct pt_regs *regs)
void
sleeping_thread_to_gdb_regs(unsigned long *gdb_regs, struct task_struct *task)
void kgdb_arch_set_pc(struct pt_regs *regs, unsigned long pc)
static int compiled_break;
int kgdb_arch_handle_exception(int exception_vector, int signo,
int err_code, char *remcom_in_buffer,
char *remcom_out_buffer,
struct pt_regs *linux_regs)
static int kgdb_brk_fn(struct pt_regs *regs, unsigned int instr)
static int kgdb_compiled_brk_fn(struct pt_regs *regs, unsigned int instr)
static struct undef_hook kgdb_brkpt_hook = ;
static struct undef_hook kgdb_compiled_brkpt_hook = ;
static void kgdb_call_nmi_hook(void *ignored)
void kgdb_roundup_cpus(unsigned long flags)
static int __kgdb_notify(struct die_args *args, unsigned long cmd)
static int
kgdb_notify(struct notifier_block *self, unsigned long cmd, void *ptr)
static struct notifier_block kgdb_notifier = ;
int kgdb_arch_init(void)
void kgdb_arch_exit(void)
struct kgdb_arch arch_kgdb_ops = ;
