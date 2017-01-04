struct dbg_reg_def_t dbg_reg_def[DBG_MAX_REG_NUM] =
;
int dbg_set_reg(int regno, void *mem, struct pt_regs *regs)
char *dbg_get_reg(int regno, void *mem, struct pt_regs *regs)
void sleeping_thread_to_gdb_regs(unsigned long *gdb_regs, struct task_struct *p)
static struct hw_breakpoint  breakinfo[HBP_NUM];
static unsigned long early_dr7;
static void kgdb_correct_hw_break(void)
static int hw_break_reserve_slot(int breakno)
static int hw_break_release_slot(int breakno)
static int
kgdb_remove_hw_break(unsigned long addr, int len, enum kgdb_bptype bptype)
static void kgdb_remove_all_hw_break(void)
static int
kgdb_set_hw_break(unsigned long addr, int len, enum kgdb_bptype bptype)
static void kgdb_disable_hw_debug(struct pt_regs *regs)
void kgdb_roundup_cpus(unsigned long flags)
int kgdb_arch_handle_exception(int e_vector, int signo, int err_code,
char *remcomInBuffer, char *remcomOutBuffer,
struct pt_regs *linux_regs)
static inline int
single_step_cont(struct pt_regs *regs, struct die_args *args)
static int was_in_debug_nmi[NR_CPUS];
static int __kgdb_notify(struct die_args *args, unsigned long cmd)
int kgdb_ll_trap(int cmd, const char *str,
struct pt_regs *regs, long err, int trap, int sig)
static int
kgdb_notify(struct notifier_block *self, unsigned long cmd, void *ptr)
static struct notifier_block kgdb_notifier = ;
int kgdb_arch_init(void)
static void kgdb_hw_overflow_handler(struct perf_event *event, int nmi,
struct perf_sample_data *data, struct pt_regs *regs)
void kgdb_arch_late(void)
void kgdb_arch_exit(void)
int kgdb_skipexception(int exception, struct pt_regs *regs)
unsigned long kgdb_arch_pc(int exception, struct pt_regs *regs)
void kgdb_arch_set_pc(struct pt_regs *regs, unsigned long ip)
struct kgdb_arch arch_kgdb_ops = ;
