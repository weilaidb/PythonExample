#define __SYSCALL_COMPAT
long compat_sys_truncate64(char __user *filename, u32 dummy, u32 low, u32 high)
long compat_sys_ftruncate64(unsigned int fd, u32 dummy, u32 low, u32 high)
long compat_sys_pread64(unsigned int fd, char __user *ubuf, size_t count,
u32 dummy, u32 low, u32 high)
long compat_sys_pwrite64(unsigned int fd, char __user *ubuf, size_t count,
u32 dummy, u32 low, u32 high)
long compat_sys_lookup_dcookie(u32 low, u32 high, char __user *buf, size_t len)
long compat_sys_sync_file_range2(int fd, unsigned int flags,
u32 offset_lo, u32 offset_hi,
u32 nbytes_lo, u32 nbytes_hi)
long compat_sys_fallocate(int fd, int mode,
u32 offset_lo, u32 offset_hi,
u32 len_lo, u32 len_hi)
long compat_sys_sched_rr_get_interval(compat_pid_t pid,
struct compat_timespec __user *interval)
struct compat_msgbuf ;
long tile_compat_sys_msgsnd(int msqid,
struct compat_msgbuf __user *msgp,
size_t msgsz, int msgflg)
long tile_compat_sys_msgrcv(int msqid,
struct compat_msgbuf __user *msgp,
size_t msgsz, long msgtyp, int msgflg)
#undef __SYSCALL
#define __SYSCALL(nr, call) [nr] = (call),
#define compat_sys_msgrcv tile_compat_sys_msgrcv
#define compat_sys_msgsnd tile_compat_sys_msgsnd
#define compat_sys_fadvise64_64 sys32_fadvise64_64
#define compat_sys_readahead sys32_readahead
#define compat_sys_execve _compat_sys_execve
#define compat_sys_sigaltstack _compat_sys_sigaltstack
#define compat_sys_rt_sigreturn _compat_sys_rt_sigreturn
#define sys_clone _sys_clone
void *compat_sys_call_table[__NR_syscalls] = ;
