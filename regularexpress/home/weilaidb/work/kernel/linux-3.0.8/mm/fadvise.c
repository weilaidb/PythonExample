SYSCALL_DEFINE(fadvise64_64)(int fd, loff_t offset, loff_t len, int advice)
asmlinkage long SyS_fadvise64_64(long fd, loff_t offset, loff_t len, long advice)
SYSCALL_ALIAS(sys_fadvise64_64, SyS_fadvise64_64);
SYSCALL_DEFINE(fadvise64)(int fd, loff_t offset, size_t len, int advice)
asmlinkage long SyS_fadvise64(long fd, loff_t offset, long len, long advice)
SYSCALL_ALIAS(sys_fadvise64, SyS_fadvise64);
