static struct op_powerpc_model *model;
static struct op_counter_config ctr[OP_MAX_COUNTER];
static struct op_system_config sys;
static int op_per_cpu_rc;
static void op_handle_interrupt(struct pt_regs *regs)
static void op_powerpc_cpu_setup(void *dummy)
static int op_powerpc_setup(void)
static void op_powerpc_shutdown(void)
static void op_powerpc_cpu_start(void *dummy)
static int op_powerpc_start(void)
static inline void op_powerpc_cpu_stop(void *dummy)
static void op_powerpc_stop(void)
static int op_powerpc_create_files(struct super_block *sb, struct dentry *root)
int __init oprofile_arch_init(struct oprofile_operations *ops)
void oprofile_arch_exit(void)
