#define _ASM_SPARC64_COMPAT_H
#define COMPAT_USER_HZ		100
#define COMPAT_UTS_MACHINE	"sparc\0\0"
typedef u32		compat_size_t;
typedef s32		compat_ssize_t;
typedef s32		compat_time_t;
typedef s32		compat_clock_t;
typedef s32		compat_pid_t;
typedef u16		__compat_uid_t;
typedef u16		__compat_gid_t;
typedef u32		__compat_uid32_t;
typedef u32		__compat_gid32_t;
typedef u16		compat_mode_t;
typedef u32		compat_ino_t;
typedef u16		compat_dev_t;
typedef s32		compat_off_t;
typedef s64		compat_loff_t;
typedef s16		compat_nlink_t;
typedef u16		compat_ipc_pid_t;
typedef s32		compat_daddr_t;
typedef u32		compat_caddr_t;
typedef __kernel_fsid_t	compat_fsid_t;
typedef s32		compat_key_t;
typedef s32		compat_timer_t;
typedef s32		compat_int_t;
typedef s32		compat_long_t;
typedef s64		compat_s64;
typedef u32		compat_uint_t;
typedef u32		compat_ulong_t;
typedef u64		compat_u64;
struct compat_timespec ;
struct compat_timeval ;
struct compat_stat ;
struct compat_stat64 ;
struct compat_flock ;
#define F_GETLK64	12
#define F_SETLK64	13
#define F_SETLKW64	14
struct compat_flock64 ;
struct compat_statfs ;
#define COMPAT_RLIM_INFINITY 0x7fffffff
typedef u32		compat_old_sigset_t;
#define _COMPAT_NSIG		64
#define _COMPAT_NSIG_BPW	32
typedef u32		compat_sigset_word;
#define COMPAT_OFF_T_MAX	0x7fffffff
#define COMPAT_LOFF_T_MAX	0x7fffffffffffffffL
typedef	u32		compat_uptr_t;
static inline void __user *compat_ptr(compat_uptr_t uptr)
static inline compat_uptr_t ptr_to_compat(void __user *uptr)
static inline void __user *arch_compat_alloc_user_space(long len)
struct compat_ipc64_perm ;
struct compat_semid64_ds ;
struct compat_msqid64_ds ;
struct compat_shmid64_ds ;
static inline int is_compat_task(void)
