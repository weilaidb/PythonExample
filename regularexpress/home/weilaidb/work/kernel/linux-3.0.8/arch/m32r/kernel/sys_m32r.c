asmlinkage int sys_tas(int __user *addr)
asmlinkage int sys_cacheflush(void *addr, int bytes, int cache)
asmlinkage int sys_cachectl(char *addr, int nbytes, int op)
int kernel_execve(const char *filename,
const char *const argv[],
const char *const envp[])
