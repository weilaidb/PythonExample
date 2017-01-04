asmlinkage long __sys_clone(unsigned long clone_flags, unsigned long newsp,
void __user *parent_tid, void __user *child_tid,
struct pt_regs *regs)
asmlinkage long __sys_execve(const char __user *filename,
const char __user *const __user *argv,
const char __user *const __user *envp,
struct pt_regs *regs)
int kernel_execve(const char *filename,
const char *const argv[],
const char *const envp[])
EXPORT_SYMBOL(kernel_execve);
SYSCALL_DEFINE6(mmap2, unsigned long, addr, unsigned long, len,
unsigned long, prot, unsigned long, flags,
unsigned long, fd, unsigned long, off_4k)
#undef __SYSCALL
#define __SYSCALL(nr, call)	[nr] = (call),
void *sys_call_table[__NR_syscalls] = ;
