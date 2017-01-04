static int kgdb_break_asap;
struct debuggerinfo_struct kgdb_info[NR_CPUS];
int				kgdb_connected;
EXPORT_SYMBOL_GPL(kgdb_connected);
int			kgdb_io_module_registered;
static int			exception_level;
struct kgdb_io		*dbg_io_ops;
static DEFINE_SPINLOCK(kgdb_registration_lock);
static int kgdb_con_registered;
static int kgdb_use_con;
bool dbg_is_early = true;
int dbg_switch_cpu;
int dbg_kdb_mode = 1;
static int __init opt_kgdb_con(char *str)
early_param("kgdbcon", opt_kgdb_con);
module_param(kgdb_use_con, int, 0644);
static struct kgdb_bkpt		kgdb_break[KGDB_MAX_BREAKPOINTS] = ;
atomic_t			kgdb_active = ATOMIC_INIT(-1);
EXPORT_SYMBOL_GPL(kgdb_active);
static DEFINE_RAW_SPINLOCK(dbg_master_lock);
static DEFINE_RAW_SPINLOCK(dbg_slave_lock);
static atomic_t			masters_in_kgdb;
static atomic_t			slaves_in_kgdb;
static atomic_t			kgdb_break_tasklet_var;
atomic_t			kgdb_setting_breakpoint;
struct task_struct		*kgdb_usethread;
struct task_struct		*kgdb_contthread;
int				kgdb_single_step;
static pid_t			kgdb_sstep_pid;
atomic_t			kgdb_cpu_doing_single_step = ATOMIC_INIT(-1);
static int kgdb_do_roundup = 1;
static int __init opt_nokgdbroundup(char *str)
early_param("nokgdbroundup", opt_nokgdbroundup);
int __weak kgdb_arch_set_breakpoint(unsigned long addr, char *saved_instr)
int __weak kgdb_arch_remove_breakpoint(unsigned long addr, char *bundle)
int __weak kgdb_validate_break_address(unsigned long addr)
unsigned long __weak kgdb_arch_pc(int exception, struct pt_regs *regs)
int __weak kgdb_arch_init(void)
int __weak kgdb_skipexception(int exception, struct pt_regs *regs)
static void kgdb_flush_swbreak_addr(unsigned long addr)
int dbg_activate_sw_breakpoints(void)
int dbg_set_sw_break(unsigned long addr)
int dbg_deactivate_sw_breakpoints(void)
int dbg_remove_sw_break(unsigned long addr)
int kgdb_isremovedbreak(unsigned long addr)
int dbg_remove_all_break(void)
static int kgdb_io_ready(int print_wait)
static int kgdb_reenter_check(struct kgdb_state *ks)
static void dbg_touch_watchdogs(void)
static int kgdb_cpu_enter(struct kgdb_state *ks, struct pt_regs *regs,
int exception_state)
int
kgdb_handle_exception(int evector, int signo, int ecode, struct pt_regs *regs)
int kgdb_nmicallback(int cpu, void *regs)
static void kgdb_console_write(struct console *co, const char *s,
unsigned count)
static struct console kgdbcons = ;
static void sysrq_handle_dbg(int key)
static struct sysrq_key_op sysrq_dbg_op = ;
static int kgdb_panic_event(struct notifier_block *self,
unsigned long val,
void *data)
static struct notifier_block kgdb_panic_event_nb = ;
void __weak kgdb_arch_late(void)
void __init dbg_late_init(void)
static void kgdb_register_callbacks(void)
static void kgdb_unregister_callbacks(void)
static void kgdb_tasklet_bpt(unsigned long ing)
static DECLARE_TASKLET(kgdb_tasklet_breakpoint, kgdb_tasklet_bpt, 0);
void kgdb_schedule_breakpoint(void)
EXPORT_SYMBOL_GPL(kgdb_schedule_breakpoint);
static void kgdb_initial_breakpoint(void)
int kgdb_register_io_module(struct kgdb_io *new_dbg_io_ops)
EXPORT_SYMBOL_GPL(kgdb_register_io_module);
void kgdb_unregister_io_module(struct kgdb_io *old_dbg_io_ops)
EXPORT_SYMBOL_GPL(kgdb_unregister_io_module);
int dbg_io_get_char(void)
void kgdb_breakpoint(void)
EXPORT_SYMBOL_GPL(kgdb_breakpoint);
static int __init opt_kgdb_wait(char *str)
early_param("kgdbwait", opt_kgdb_wait);
