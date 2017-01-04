#define _ASM_TILE_COMPAT_H
#define COMPAT_USER_HZ	100
typedef s32		compat_long_t;
typedef u32		compat_ulong_t;
typedef u32		compat_size_t;
typedef s32		compat_ssize_t;
typedef s32		compat_off_t;
typedef s32		compat_time_t;
typedef s32		compat_clock_t;
typedef u32		compat_ino_t;
typedef u32		compat_caddr_t;
typedef	u32		compat_uptr_t;
typedef __kernel_pid_t compat_pid_t;
typedef __kernel_uid_t __compat_uid_t;
typedef __kernel_gid_t __compat_gid_t;
typedef __kernel_uid32_t __compat_uid32_t;
typedef __kernel_uid32_t __compat_gid32_t;
typedef __kernel_mode_t compat_mode_t;
typedef __kernel_dev_t compat_dev_t;
typedef __kernel_loff_t compat_loff_t;
typedef __kernel_nlink_t compat_nlink_t;
typedef __kernel_ipc_pid_t compat_ipc_pid_t;
typedef __kernel_daddr_t compat_daddr_t;
typedef __kernel_fsid_t	compat_fsid_t;
typedef __kernel_timer_t compat_timer_t;
typedef __kernel_key_t compat_key_t;
typedef int compat_int_t;
typedef s64 compat_s64;
typedef uint compat_uint_t;
typedef u64 compat_u64;
typedef unsigned long compat_elf_greg_t;
#define COMPAT_ELF_NGREG (sizeof(struct pt_regs) / sizeof(compat_elf_greg_t))
typedef compat_elf_greg_t compat_elf_gregset_t[COMPAT_ELF_NGREG];
struct compat_timespec ;
struct compat_timeval ;
#define compat_stat stat
#define compat_statfs statfs
struct compat_sysctl ;
struct compat_flock ;
#define F_GETLK64	12
#define F_SETLK64	13
#define F_SETLKW64	14
struct compat_flock64 ;
#define COMPAT_RLIM_INFINITY		0xffffffff
#define _COMPAT_NSIG		64
#define _COMPAT_NSIG_BPW	32
typedef u32               compat_sigset_word;
#define COMPAT_OFF_T_MAX	0x7fffffff
#define COMPAT_LOFF_T_MAX	0x7fffffffffffffffL
struct compat_ipc64_perm ;
struct compat_semid64_ds ;
struct compat_msqid64_ds ;
struct compat_shmid64_ds ;
static inline void __user *compat_ptr(compat_uptr_t uptr)
static inline compat_uptr_t ptr_to_compat(void __user *uptr)
static inline unsigned long ptr_to_compat_reg(void __user *uptr)
static inline void __user *arch_compat_alloc_user_space(long len)
static inline int is_compat_task(void)
extern int compat_setup_rt_frame(int sig, struct k_sigaction *ka,
siginfo_t *info, sigset_t *set,
struct pt_regs *regs);
struct compat_sigaction;
struct compat_siginfo;
struct compat_sigaltstack;
long compat_sys_execve(const char __user *path,
compat_uptr_t __user *argv,
compat_uptr_t __user *envp, struct pt_regs *);
long compat_sys_rt_sigaction(int sig, struct compat_sigaction __user *act,
struct compat_sigaction __user *oact,
size_t sigsetsize);
long compat_sys_rt_sigqueueinfo(int pid, int sig,
struct compat_siginfo __user *uinfo);
long compat_sys_rt_sigreturn(struct pt_regs *);
long compat_sys_sigaltstack(const struct compat_sigaltstack __user *uss_ptr,
struct compat_sigaltstack __user *uoss_ptr,
struct pt_regs *);
long compat_sys_truncate64(char __user *filename, u32 dummy, u32 low, u32 high);
long compat_sys_ftruncate64(unsigned int fd, u32 dummy, u32 low, u32 high);
long compat_sys_pread64(unsigned int fd, char __user *ubuf, size_t count,
u32 dummy, u32 low, u32 high);
long compat_sys_pwrite64(unsigned int fd, char __user *ubuf, size_t count,
u32 dummy, u32 low, u32 high);
long compat_sys_lookup_dcookie(u32 low, u32 high, char __user *buf, size_t len);
long compat_sys_sync_file_range2(int fd, unsigned int flags,
u32 offset_lo, u32 offset_hi,
u32 nbytes_lo, u32 nbytes_hi);
long compat_sys_fallocate(int fd, int mode,
u32 offset_lo, u32 offset_hi,
u32 len_lo, u32 len_hi);
long compat_sys_sched_rr_get_interval(compat_pid_t pid,
struct compat_timespec __user *interval);
struct compat_msgbuf;
long tile_compat_sys_msgsnd(int msqid,
struct compat_msgbuf __user *msgp,
size_t msgsz, int msgflg);
long tile_compat_sys_msgrcv(int msqid,
struct compat_msgbuf __user *msgp,
size_t msgsz, long msgtyp, int msgflg);
long tile_compat_sys_ptrace(compat_long_t request, compat_long_t pid,
compat_long_t addr, compat_long_t data);
#define compat_sys_flush_cache sys_flush_cache
long _compat_sys_execve(const char __user *path,
const compat_uptr_t __user *argv,
const compat_uptr_t __user *envp);
long _compat_sys_sigaltstack(const struct compat_sigaltstack __user *uss_ptr,
struct compat_sigaltstack __user *uoss_ptr);
long _compat_sys_rt_sigreturn(void);
