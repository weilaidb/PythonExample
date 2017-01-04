asmlinkage int sys_fork(struct pt_regs *regs)
asmlinkage int sys_clone(unsigned long clone_flags, unsigned long newsp,
int __user *parent_tidptr, int tls_val,
int __user *child_tidptr, struct pt_regs *regs)
asmlinkage int sys_vfork(struct pt_regs *regs)
asmlinkage int sys_execve(const char __user *filenamei,
const char __user *const __user *argv,
const char __user *const __user *envp, struct pt_regs *regs)
int kernel_execve(const char *filename,
const char *const argv[],
const char *const envp[])
EXPORT_SYMBOL(kernel_execve);
asmlinkage long sys_arm_fadvise64_64(int fd, int advice,
loff_t offset, loff_t len)
