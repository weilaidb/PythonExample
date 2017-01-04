static void
ev6_reg_setup(struct op_register_config *reg,
struct op_counter_config *ctr,
struct op_system_config *sys)
static void
ev6_cpu_setup (void *x)
static void
ev6_reset_ctr(struct op_register_config *reg, unsigned long ctr)
static void
ev6_handle_interrupt(unsigned long which, struct pt_regs *regs,
struct op_counter_config *ctr)
struct op_axp_model op_model_ev6 = ;
