asmlinkage
void unexpected_fpu_exception(struct pt_regs *regs, enum exception_code code)
int dump_fpu(struct pt_regs *regs, elf_fpregset_t *fpreg)
