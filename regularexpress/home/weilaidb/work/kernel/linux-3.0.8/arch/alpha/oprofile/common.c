extern struct op_axp_model op_model_ev4 __attribute__((weak));
extern struct op_axp_model op_model_ev5 __attribute__((weak));
extern struct op_axp_model op_model_pca56 __attribute__((weak));
extern struct op_axp_model op_model_ev6 __attribute__((weak));
extern struct op_axp_model op_model_ev67 __attribute__((weak));
static struct op_axp_model *model;
extern void (*perf_irq)(unsigned long, struct pt_regs *);
static void (*save_perf_irq)(unsigned long, struct pt_regs *);
static struct op_counter_config ctr[20];
static struct op_system_config sys;
static struct op_register_config reg;
static void
op_handle_interrupt(unsigned long which, struct pt_regs *regs)
static int
op_axp_setup(void)
static void
op_axp_shutdown(void)
static void
op_axp_cpu_start(void *dummy)
static int
op_axp_start(void)
static inline void
op_axp_cpu_stop(void *dummy)
static void
op_axp_stop(void)
static int
op_axp_create_files(struct super_block *sb, struct dentry *root)
int __init
oprofile_arch_init(struct oprofile_operations *ops)
void
oprofile_arch_exit(void)
