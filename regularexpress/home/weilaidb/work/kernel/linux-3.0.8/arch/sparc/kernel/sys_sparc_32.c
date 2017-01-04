asmlinkage unsigned long sys_getpagesize(void)
#define COLOUR_ALIGN(addr)      (((addr)+SHMLBA-1)&~(SHMLBA-1))
unsigned long arch_get_unmapped_area(struct file *filp, unsigned long addr, unsigned long len, unsigned long pgoff, unsigned long flags)
asmlinkage int sparc_pipe(struct pt_regs *regs)
int sparc_mmap_check(unsigned long addr, unsigned long len)
asmlinkage unsigned long sys_mmap2(unsigned long addr, unsigned long len,
unsigned long prot, unsigned long flags, unsigned long fd,
unsigned long pgoff)
asmlinkage unsigned long sys_mmap(unsigned long addr, unsigned long len,
unsigned long prot, unsigned long flags, unsigned long fd,
unsigned long off)
long sparc_remap_file_pages(unsigned long start, unsigned long size,
unsigned long prot, unsigned long pgoff,
unsigned long flags)
asmlinkage unsigned long
c_sys_nis_syscall (struct pt_regs *regs)
asmlinkage void
sparc_breakpoint (struct pt_regs *regs)
asmlinkage int
sparc_sigaction (int sig, const struct old_sigaction __user *act,
struct old_sigaction __user *oact)
asmlinkage long
sys_rt_sigaction(int sig,
const struct sigaction __user *act,
struct sigaction __user *oact,
void __user *restorer,
size_t sigsetsize)
asmlinkage int sys_getdomainname(char __user *name, int len)
int kernel_execve(const char *filename,
const char *const argv[],
const char *const envp[])
