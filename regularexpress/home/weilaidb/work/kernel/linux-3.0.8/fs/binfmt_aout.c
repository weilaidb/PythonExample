static int load_aout_binary(struct linux_binprm *, struct pt_regs * regs);
static int load_aout_library(struct file*);
static int aout_core_dump(struct coredump_params *cprm);
static struct linux_binfmt aout_format = ;
#define BAD_ADDR(x)	((unsigned long)(x) >= TASK_SIZE)
static int set_brk(unsigned long start, unsigned long end)
static int aout_core_dump(struct coredump_params *cprm)
static unsigned long __user *create_aout_tables(char __user *p, struct linux_binprm * bprm)
static int load_aout_binary(struct linux_binprm * bprm, struct pt_regs * regs)
static int load_aout_library(struct file *file)
static int __init init_aout_binfmt(void)
static void __exit exit_aout_binfmt(void)
core_initcall(init_aout_binfmt);
module_exit(exit_aout_binfmt);
MODULE_LICENSE("GPL");
