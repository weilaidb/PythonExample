asmlinkage int sysm_pipe(nabi_no_regargs volatile struct pt_regs regs)
SYSCALL_DEFINE6(mips_mmap, unsigned long, addr, unsigned long, len,
unsigned long, prot, unsigned long, flags, unsigned long,
fd, off_t, offset)
SYSCALL_DEFINE6(mips_mmap2, unsigned long, addr, unsigned long, len,
unsigned long, prot, unsigned long, flags, unsigned long, fd,
unsigned long, pgoff)
save_static_function(sys_fork);
static int __used noinline
_sys_fork(nabi_no_regargs struct pt_regs regs)
save_static_function(sys_clone);
static int __used noinline
_sys_clone(nabi_no_regargs struct pt_regs regs)
asmlinkage int sys_execve(nabi_no_regargs struct pt_regs regs)
SYSCALL_DEFINE1(set_thread_area, unsigned long, addr)
static inline int mips_atomic_set(struct pt_regs *regs,
unsigned long addr, unsigned long new)
save_static_function(sys_sysmips);
static int __used noinline
_sys_sysmips(nabi_no_regargs struct pt_regs regs)
SYSCALL_DEFINE3(cachectl, char *, addr, int, nbytes, int, op)
asmlinkage void bad_stack(void)
int kernel_execve(const char *filename,
const char *const argv[],
const char *const envp[])
