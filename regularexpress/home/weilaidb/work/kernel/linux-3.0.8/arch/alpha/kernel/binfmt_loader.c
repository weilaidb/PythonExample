static int load_binary(struct linux_binprm *bprm, struct pt_regs *regs)
static struct linux_binfmt loader_format = ;
static int __init init_loader_binfmt(void)
arch_initcall(init_loader_binfmt);
