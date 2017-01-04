static void
ev4_reg_setup(struct op_register_config *reg,
struct op_counter_config *ctr,
struct op_system_config *sys)
static void
ev4_cpu_setup(void *x)
static void
ev4_handle_interrupt(unsigned long which, struct pt_regs *regs,
struct op_counter_config *ctr)
struct op_axp_model op_model_ev4 = ;
