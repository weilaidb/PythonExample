struct task_struct *fpu_state_owner;
asmlinkage void fpu_disabled_in_kernel(struct pt_regs *regs)
asmlinkage void fpu_exception(struct pt_regs *regs, enum exception_code code)
int fpu_setup_sigcontext(struct fpucontext *fpucontext)
void fpu_kill_state(struct task_struct *tsk)
int fpu_restore_sigcontext(struct fpucontext *fpucontext)
int dump_fpu(struct pt_regs *regs, elf_fpregset_t *fpreg)
