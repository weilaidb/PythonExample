struct s390_mmap_arg_struct ;
SYSCALL_DEFINE1(mmap2, struct s390_mmap_arg_struct __user *, arg)
SYSCALL_DEFINE5(s390_ipc, uint, call, int, first, unsigned long, second,
unsigned long, third, void __user *, ptr)
SYSCALL_DEFINE1(s390_personality, unsigned int, personality)
SYSCALL_DEFINE5(s390_fadvise64, int, fd, u32, offset_high, u32, offset_low,
size_t, len, int, advice)
struct fadvise64_64_args ;
SYSCALL_DEFINE1(s390_fadvise64_64, struct fadvise64_64_args __user *, args)
SYSCALL_DEFINE(s390_fallocate)(int fd, int mode, loff_t offset,
u32 len_high, u32 len_low)
asmlinkage long SyS_s390_fallocate(long fd, long mode, loff_t offset,
long len_high, long len_low)
SYSCALL_ALIAS(sys_s390_fallocate, SyS_s390_fallocate);
