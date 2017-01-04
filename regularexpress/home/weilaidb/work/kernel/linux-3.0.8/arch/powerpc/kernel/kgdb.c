static struct hard_trap_info
hard_trap_info[] = ;
static int computeSignal(unsigned int tt)
static int kgdb_call_nmi_hook(struct pt_regs *regs)
void kgdb_roundup_cpus(unsigned long flags)
static int kgdb_debugger(struct pt_regs *regs)
static int kgdb_handle_breakpoint(struct pt_regs *regs)
static int kgdb_singlestep(struct pt_regs *regs)
static int kgdb_iabr_match(struct pt_regs *regs)
static int kgdb_dabr_match(struct pt_regs *regs)
#define PACK64(ptr, src) do  while (0)
#define PACK32(ptr, src) do  while (0)
void sleeping_thread_to_gdb_regs(unsigned long *gdb_regs, struct task_struct *p)
#define GDB_SIZEOF_REG sizeof(unsigned long)
#define GDB_SIZEOF_REG_U32 sizeof(u32)
#define GDB_SIZEOF_FLOAT_REG sizeof(unsigned long)
#define GDB_SIZEOF_FLOAT_REG sizeof(u64)
struct dbg_reg_def_t dbg_reg_def[DBG_MAX_REG_NUM] =
;
char *dbg_get_reg(int regno, void *mem, struct pt_regs *regs)
int dbg_set_reg(int regno, void *mem, struct pt_regs *regs)
void kgdb_arch_set_pc(struct pt_regs *regs, unsigned long pc)
int kgdb_arch_handle_exception(int vector, int signo, int err_code,
char *remcom_in_buffer, char *remcom_out_buffer,
struct pt_regs *linux_regs)
struct kgdb_arch arch_kgdb_ops = ;
static int kgdb_not_implemented(struct pt_regs *regs)
static void *old__debugger_ipi;
static void *old__debugger;
static void *old__debugger_bpt;
static void *old__debugger_sstep;
static void *old__debugger_iabr_match;
static void *old__debugger_dabr_match;
static void *old__debugger_fault_handler;
int kgdb_arch_init(void)
void kgdb_arch_exit(void)
