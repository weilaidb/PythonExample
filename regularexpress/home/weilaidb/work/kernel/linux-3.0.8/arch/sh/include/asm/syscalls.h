#define __ASM_SH_SYSCALLS_H
asmlinkage int old_mmap(unsigned long addr, unsigned long len,
unsigned long prot, unsigned long flags,
int fd, unsigned long off);
asmlinkage long sys_mmap2(unsigned long addr, unsigned long len,
unsigned long prot, unsigned long flags,
unsigned long fd, unsigned long pgoff);
# include "syscalls_32.h"
# include "syscalls_64.h"
