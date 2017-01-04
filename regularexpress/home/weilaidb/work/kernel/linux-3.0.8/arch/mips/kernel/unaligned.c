#define STR(x)  __STR(x)
#define __STR(x)  #x
enum ;
static u32 unaligned_instructions;
static u32 unaligned_action;
#define unaligned_action UNALIGNED_ACTION_QUIET
extern void show_registers(struct pt_regs *regs);
static void emulate_load_store_insn(struct pt_regs *regs,
void __user *addr, unsigned int __user *pc)
asmlinkage void do_ade(struct pt_regs *regs)
extern struct dentry *mips_debugfs_dir;
static int __init debugfs_unaligned(void)
__initcall(debugfs_unaligned);
