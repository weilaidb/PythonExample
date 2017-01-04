long sys_fork(void)
long sys_vfork(void)
long old_mmap(unsigned long addr, unsigned long len,
unsigned long prot, unsigned long flags,
unsigned long fd, unsigned long offset)
int kernel_execve(const char *filename,
const char *const argv[],
const char *const envp[])
