#define pr_fmt(fmt) "hw-breakpoint: " fmt
static DEFINE_PER_CPU(struct perf_event *, bp_on_reg[ARM_MAX_BRP]);
static DEFINE_PER_CPU(struct perf_event *, wp_on_reg[ARM_MAX_WRP]);
static int core_num_brps;
static int core_num_reserved_brps;
static int core_num_wrps;
static u8 debug_arch;
static u8 max_watchpoint_len;
#define READ_WB_REG_CASE(OP2, M, VAL)		\
case ((OP2 << 4) + M):			\
ARM_DBG_READ(c ## M, OP2, VAL); \
break
#define WRITE_WB_REG_CASE(OP2, M, VAL)		\
case ((OP2 << 4) + M):			\
ARM_DBG_WRITE(c ## M, OP2, VAL);\
break
#define GEN_READ_WB_REG_CASES(OP2, VAL)		\
READ_WB_REG_CASE(OP2, 0, VAL);		\
READ_WB_REG_CASE(OP2, 1, VAL);		\
READ_WB_REG_CASE(OP2, 2, VAL);		\
READ_WB_REG_CASE(OP2, 3, VAL);		\
READ_WB_REG_CASE(OP2, 4, VAL);		\
READ_WB_REG_CASE(OP2, 5, VAL);		\
READ_WB_REG_CASE(OP2, 6, VAL);		\
READ_WB_REG_CASE(OP2, 7, VAL);		\
READ_WB_REG_CASE(OP2, 8, VAL);		\
READ_WB_REG_CASE(OP2, 9, VAL);		\
READ_WB_REG_CASE(OP2, 10, VAL);		\
READ_WB_REG_CASE(OP2, 11, VAL);		\
READ_WB_REG_CASE(OP2, 12, VAL);		\
READ_WB_REG_CASE(OP2, 13, VAL);		\
READ_WB_REG_CASE(OP2, 14, VAL);		\
READ_WB_REG_CASE(OP2, 15, VAL)
#define GEN_WRITE_WB_REG_CASES(OP2, VAL)	\
WRITE_WB_REG_CASE(OP2, 0, VAL);		\
WRITE_WB_REG_CASE(OP2, 1, VAL);		\
WRITE_WB_REG_CASE(OP2, 2, VAL);		\
WRITE_WB_REG_CASE(OP2, 3, VAL);		\
WRITE_WB_REG_CASE(OP2, 4, VAL);		\
WRITE_WB_REG_CASE(OP2, 5, VAL);		\
WRITE_WB_REG_CASE(OP2, 6, VAL);		\
WRITE_WB_REG_CASE(OP2, 7, VAL);		\
WRITE_WB_REG_CASE(OP2, 8, VAL);		\
WRITE_WB_REG_CASE(OP2, 9, VAL);		\
WRITE_WB_REG_CASE(OP2, 10, VAL);	\
WRITE_WB_REG_CASE(OP2, 11, VAL);	\
WRITE_WB_REG_CASE(OP2, 12, VAL);	\
WRITE_WB_REG_CASE(OP2, 13, VAL);	\
WRITE_WB_REG_CASE(OP2, 14, VAL);	\
WRITE_WB_REG_CASE(OP2, 15, VAL)
static u32 read_wb_reg(int n)
static void write_wb_reg(int n, u32 val)
static u8 get_debug_arch(void)
u8 arch_get_debug_arch(void)
static int debug_arch_supported(void)
static int get_num_brp_resources(void)
static int core_has_mismatch_brps(void)
static int get_num_wrps(void)
static int get_num_reserved_brps(void)
static int get_num_brps(void)
static int enable_monitor_mode(void)
int hw_breakpoint_slots(int type)
static u8 get_max_wp_len(void)
u8 arch_get_max_wp_len(void)
int arch_install_hw_breakpoint(struct perf_event *bp)
void arch_uninstall_hw_breakpoint(struct perf_event *bp)
static int get_hbp_len(u8 hbp_len)
int arch_check_bp_in_kernelspace(struct perf_event *bp)
int arch_bp_generic_fields(struct arch_hw_breakpoint_ctrl ctrl,
int *gen_len, int *gen_type)
static int arch_build_bp_info(struct perf_event *bp)
int arch_validate_hwbkpt_settings(struct perf_event *bp)
static void enable_single_step(struct perf_event *bp, u32 addr)
static void disable_single_step(struct perf_event *bp)
static void watchpoint_handler(unsigned long unknown, struct pt_regs *regs)
static void watchpoint_single_step_handler(unsigned long pc)
static void breakpoint_handler(unsigned long unknown, struct pt_regs *regs)
static int hw_breakpoint_pending(unsigned long addr, unsigned int fsr,
struct pt_regs *regs)
static void reset_ctrl_regs(void *info)
static int __cpuinit dbg_reset_notify(struct notifier_block *self,
unsigned long action, void *cpu)
static struct notifier_block __cpuinitdata dbg_reset_nb = ;
static int __init arch_hw_breakpoint_init(void)
arch_initcall(arch_hw_breakpoint_init);
void hw_breakpoint_pmu_read(struct perf_event *bp)
int hw_breakpoint_exceptions_notify(struct notifier_block *unused,
unsigned long val, void *data)
