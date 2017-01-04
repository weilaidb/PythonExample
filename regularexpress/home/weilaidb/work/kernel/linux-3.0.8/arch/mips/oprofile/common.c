extern struct op_mips_model op_model_mipsxx_ops __weak;
extern struct op_mips_model op_model_rm9000_ops __weak;
extern struct op_mips_model op_model_loongson2_ops __weak;
static struct op_mips_model *model;
static struct op_counter_config ctr[20];
static int op_mips_setup(void)
static int op_mips_create_files(struct super_block *sb, struct dentry *root)
static int op_mips_start(void)
static void op_mips_stop(void)
int __init oprofile_arch_init(struct oprofile_operations *ops)
void oprofile_arch_exit(void)
