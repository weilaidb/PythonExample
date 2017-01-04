unsigned long
arch_get_unmapped_area (struct file *filp, unsigned long addr, unsigned long len,
unsigned long pgoff, unsigned long flags)
asmlinkage long
ia64_getpriority (int which, int who)
asmlinkage unsigned long
sys_getpagesize (void)
asmlinkage unsigned long
ia64_brk (unsigned long brk)
asmlinkage long
sys_ia64_pipe (void)
int ia64_mmap_check(unsigned long addr, unsigned long len,
unsigned long flags)
asmlinkage unsigned long
sys_mmap2 (unsigned long addr, unsigned long len, int prot, int flags, int fd, long pgoff)
asmlinkage unsigned long
sys_mmap (unsigned long addr, unsigned long len, int prot, int flags, int fd, long off)
asmlinkage unsigned long
ia64_mremap (unsigned long addr, unsigned long old_len, unsigned long new_len, unsigned long flags,
unsigned long new_addr)
asmlinkage long
sys_pciconfig_read (unsigned long bus, unsigned long dfn, unsigned long off, unsigned long len,
void *buf)
asmlinkage long
sys_pciconfig_write (unsigned long bus, unsigned long dfn, unsigned long off, unsigned long len,
void *buf)
