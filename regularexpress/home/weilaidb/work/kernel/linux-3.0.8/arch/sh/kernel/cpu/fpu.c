int init_fpu(struct task_struct *tsk)
void __fpu_state_restore(void)
void fpu_state_restore(struct pt_regs *regs)
BUILD_TRAP_HANDLER(fpu_state_restore)
