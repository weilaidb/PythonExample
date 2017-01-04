static unsigned char oprofile_running;
static u64 mmcr0_val;
static u64 mmcr1_val;
static u64 reset_value[OP_MAX_COUNTER];
static inline u64 ctr_read(unsigned int i)
static inline void ctr_write(unsigned int i, u64 val)
static int pa6t_reg_setup(struct op_counter_config *ctr,
struct op_system_config *sys,
int num_ctrs)
static int pa6t_cpu_setup(struct op_counter_config *ctr)
static int pa6t_start(struct op_counter_config *ctr)
static void pa6t_stop(void)
static void pa6t_handle_interrupt(struct pt_regs *regs,
struct op_counter_config *ctr)
struct op_powerpc_model op_model_pa6t = ;
