#define __ASM_GENERIC_SYSCALLS_H
asmlinkage long sys_clone(unsigned long clone_flags, unsigned long newsp,
void __user *parent_tid, void __user *child_tid,
struct pt_regs *regs);
asmlinkage long sys_fork(struct pt_regs *regs);
asmlinkage long sys_vfork(struct pt_regs *regs);
asmlinkage long sys_execve(const char __user *filename,
const char __user *const __user *argv,
const char __user *const __user *envp,
struct pt_regs *regs);
asmlinkage long sys_mmap2(unsigned long addr, unsigned long len,
unsigned long prot, unsigned long flags,
unsigned long fd, unsigned long pgoff);
asmlinkage long sys_mmap(unsigned long addr, unsigned long len,
unsigned long prot, unsigned long flags,
unsigned long fd, off_t pgoff);
asmlinkage long sys_sigaltstack(const stack_t __user *, stack_t __user *,
struct pt_regs *);
asmlinkage long sys_rt_sigreturn(struct pt_regs *regs);
asmlinkage long sys_rt_sigsuspend(sigset_t __user *unewset, size_t sigsetsize);
asmlinkage long sys_rt_sigaction(int sig, const struct sigaction __user *act,
struct sigaction __user *oact, size_t sigsetsize);
