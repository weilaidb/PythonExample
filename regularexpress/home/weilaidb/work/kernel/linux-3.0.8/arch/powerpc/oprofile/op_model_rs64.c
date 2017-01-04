#define dbg(args...)
static void ctrl_write(unsigned int i, unsigned int val)
static unsigned long reset_value[OP_MAX_COUNTER];
static int num_counters;
static int rs64_reg_setup(struct op_counter_config *ctr,
struct op_system_config *sys,
int num_ctrs)
static int rs64_cpu_setup(struct op_counter_config *ctr)
static int rs64_start(struct op_counter_config *ctr)
static void rs64_stop(void)
static void rs64_handle_interrupt(struct pt_regs *regs,
struct op_counter_config *ctr)
struct op_powerpc_model op_model_rs64 = ;
