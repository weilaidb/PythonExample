asmlinkage long microblaze_vfork(struct pt_regs *regs)
asmlinkage long microblaze_clone(int flags, unsigned long stack,
struct pt_regs *regs)
asmlinkage long microblaze_execve(const char __user *filenamei,
const char __user *const __user *argv,
const char __user *const __user *envp,
struct pt_regs *regs)
asmlinkage long sys_mmap(unsigned long addr, unsigned long len,
unsigned long prot, unsigned long flags,
unsigned long fd, off_t pgoff)
int kernel_execve(const char *filename,
const char *const argv[],
const char *const envp[])
