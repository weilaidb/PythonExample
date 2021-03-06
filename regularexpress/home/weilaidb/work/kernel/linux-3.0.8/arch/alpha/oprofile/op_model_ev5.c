static void
common_reg_setup(struct op_register_config *reg,
struct op_counter_config *ctr,
struct op_system_config *sys,
int cbox1_ofs, int cbox2_ofs)
static void
ev5_reg_setup(struct op_register_config *reg,
struct op_counter_config *ctr,
struct op_system_config *sys)
static void
pca56_reg_setup(struct op_register_config *reg,
struct op_counter_config *ctr,
struct op_system_config *sys)
static void
ev5_cpu_setup (void *x)
static void
ev5_reset_ctr(struct op_register_config *reg, unsigned long ctr)
static void
ev5_handle_interrupt(unsigned long which, struct pt_regs *regs,
struct op_counter_config *ctr)
struct op_axp_model op_model_ev5 = ;
struct op_axp_model op_model_pca56 = ;
