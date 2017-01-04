asmlinkage long
sys_mmap2(unsigned long addr, unsigned long len, unsigned long prot,
unsigned long flags, unsigned long fd, unsigned long pgoff)
asmlinkage long
sys_mmap(unsigned long addr, unsigned long len, unsigned long prot,
unsigned long flags, unsigned long fd, off_t offset)
asmlinkage long
score_fork(struct pt_regs *regs)
asmlinkage long
score_clone(struct pt_regs *regs)
asmlinkage long
score_vfork(struct pt_regs *regs)
asmlinkage long
score_execve(struct pt_regs *regs)
int kernel_execve(const char *filename,
const char *const argv[],
const char *const envp[])
