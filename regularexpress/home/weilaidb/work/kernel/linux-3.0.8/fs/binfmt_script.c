static int load_script(struct linux_binprm *bprm,struct pt_regs *regs)
static struct linux_binfmt script_format = ;
static int __init init_script_binfmt(void)
static void __exit exit_script_binfmt(void)
core_initcall(init_script_binfmt);
module_exit(exit_script_binfmt);
MODULE_LICENSE("GPL");
