#define A(__x) ((unsigned long)(__x))
#define AA(__x) ((unsigned long)((int)__x))
#define merge_64(r1, r2) ((((r1) & 0xffffffffUL) << 32) + ((r2) & 0xffffffffUL))
#define merge_64(r1, r2) ((((r2) & 0xffffffffUL) << 32) + ((r1) & 0xffffffffUL))
SYSCALL_DEFINE6(32_mmap2, unsigned long, addr, unsigned long, len,
unsigned long, prot, unsigned long, flags, unsigned long, fd,
unsigned long, pgoff)
asmlinkage int sys32_execve(nabi_no_regargs struct pt_regs regs)
#define RLIM_INFINITY32	0x7fffffff
#define RESOURCE32(x) ((x > RLIM_INFINITY32) ? RLIM_INFINITY32 : x)
struct rlimit32 ;
SYSCALL_DEFINE4(32_truncate64, const char __user *, path,
unsigned long, __dummy, unsigned long, a2, unsigned long, a3)
SYSCALL_DEFINE4(32_ftruncate64, unsigned long, fd, unsigned long, __dummy,
unsigned long, a2, unsigned long, a3)
SYSCALL_DEFINE5(32_llseek, unsigned int, fd, unsigned int, offset_high,
unsigned int, offset_low, loff_t __user *, result,
unsigned int, origin)
SYSCALL_DEFINE6(32_pread, unsigned long, fd, char __user *, buf, size_t, count,
unsigned long, unused, unsigned long, a4, unsigned long, a5)
SYSCALL_DEFINE6(32_pwrite, unsigned int, fd, const char __user *, buf,
size_t, count, u32, unused, u64, a4, u64, a5)
SYSCALL_DEFINE2(32_sched_rr_get_interval, compat_pid_t, pid,
struct compat_timespec __user *, interval)
SYSCALL_DEFINE6(32_ipc, u32, call, long, first, long, second, long, third,
unsigned long, ptr, unsigned long, fifth)
SYSCALL_DEFINE6(32_ipc, u32, call, int, first, int, second, int, third,
u32, ptr, u32, fifth)
SYSCALL_DEFINE4(n32_semctl, int, semid, int, semnum, int, cmd, u32, arg)
SYSCALL_DEFINE4(n32_msgsnd, int, msqid, u32, msgp, unsigned int, msgsz,
int, msgflg)
SYSCALL_DEFINE5(n32_msgrcv, int, msqid, u32, msgp, size_t, msgsz,
int, msgtyp, int, msgflg)
SYSCALL_DEFINE1(32_personality, unsigned long, personality)
SYSCALL_DEFINE4(32_sendfile, long, out_fd, long, in_fd,
compat_off_t __user *, offset, s32, count)
asmlinkage ssize_t sys32_readahead(int fd, u32 pad0, u64 a2, u64 a3,
size_t count)
asmlinkage long sys32_sync_file_range(int fd, int __pad,
unsigned long a2, unsigned long a3,
unsigned long a4, unsigned long a5,
int flags)
asmlinkage long sys32_fadvise64_64(int fd, int __pad,
unsigned long a2, unsigned long a3,
unsigned long a4, unsigned long a5,
int flags)
asmlinkage long sys32_fallocate(int fd, int mode, unsigned offset_a2,
unsigned offset_a3, unsigned len_a4, unsigned len_a5)
save_static_function(sys32_clone);
static int noinline __used
_sys32_clone(nabi_no_regargs struct pt_regs regs)
asmlinkage long sys32_lookup_dcookie(u32 a0, u32 a1, char __user *buf,
size_t len)
SYSCALL_DEFINE6(32_fanotify_mark, int, fanotify_fd, unsigned int, flags,
u64, a3, u64, a4, int, dfd, const char  __user *, pathname)
