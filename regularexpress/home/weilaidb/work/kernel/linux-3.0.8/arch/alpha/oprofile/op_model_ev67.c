static void
ev67_reg_setup(struct op_register_config *reg,
struct op_counter_config *ctr,
struct op_system_config *sys)
static void
ev67_cpu_setup (void *x)
static void
ev67_reset_ctr(struct op_register_config *reg, unsigned long ctr)
enum profileme_counters ;
static inline void
op_add_pm(unsigned long pc, int kern, unsigned long counter,
struct op_counter_config *ctr, unsigned long event)
static void
ev67_handle_interrupt(unsigned long which, struct pt_regs *regs,
struct op_counter_config *ctr)
struct op_axp_model op_model_ev67 = ;
