#define EM86_INTERP	"/usr/bin/em86"
#define EM86_I_NAME	"em86"
static int load_em86(struct linux_binprm *bprm,struct pt_regs *regs)
static struct linux_binfmt em86_format = ;
static int __init init_em86_binfmt(void)
static void __exit exit_em86_binfmt(void)
core_initcall(init_em86_binfmt);
module_exit(exit_em86_binfmt);
MODULE_LICENSE("GPL");
