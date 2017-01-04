SYSCALL_DEFINE1(osf_brk, unsigned long, brk)
SYSCALL_DEFINE4(osf_set_program_attributes, unsigned long, text_start,
unsigned long, text_len, unsigned long, bss_start,
unsigned long, bss_len)
#define NAME_OFFSET	offsetof (struct osf_dirent, d_name)
struct osf_dirent ;
struct osf_dirent_callback ;
static int
osf_filldir(void *__buf, const char *name, int namlen, loff_t offset,
u64 ino, unsigned int d_type)
SYSCALL_DEFINE4(osf_getdirentries, unsigned int, fd,
struct osf_dirent __user *, dirent, unsigned int, count,
long __user *, basep)
#undef NAME_OFFSET
SYSCALL_DEFINE6(osf_mmap, unsigned long, addr, unsigned long, len,
unsigned long, prot, unsigned long, flags, unsigned long, fd,
unsigned long, off)
struct osf_statfs ;
static int
linux_to_osf_statfs(struct kstatfs *linux_stat, struct osf_statfs __user *osf_stat,
unsigned long bufsiz)
SYSCALL_DEFINE3(osf_statfs, const char __user *, pathname,
struct osf_statfs __user *, buffer, unsigned long, bufsiz)
SYSCALL_DEFINE3(osf_fstatfs, unsigned long, fd,
struct osf_statfs __user *, buffer, unsigned long, bufsiz)
struct ufs_args ;
struct cdfs_args ;
struct procfs_args ;
static int
osf_ufs_mount(char *dirname, struct ufs_args __user *args, int flags)
static int
osf_cdfs_mount(char *dirname, struct cdfs_args __user *args, int flags)
static int
osf_procfs_mount(char *dirname, struct procfs_args __user *args, int flags)
SYSCALL_DEFINE4(osf_mount, unsigned long, typenr, const char __user *, path,
int, flag, void __user *, data)
SYSCALL_DEFINE1(osf_utsname, char __user *, name)
SYSCALL_DEFINE0(getpagesize)
SYSCALL_DEFINE0(getdtablesize)
SYSCALL_DEFINE2(osf_getdomainname, char __user *, name, int, namelen)
#define PLE_PROPAGATE_ON_COPY		0x1
#define PLE_FLAG_MASK			0x1
#define PLE_FLAG_ALL			-1
struct proplistname_args ;
union pl_args ;
enum pl_code ;
SYSCALL_DEFINE2(osf_proplist_syscall, enum pl_code, code,
union pl_args __user *, args)
SYSCALL_DEFINE2(osf_sigstack, struct sigstack __user *, uss,
struct sigstack __user *, uoss)
SYSCALL_DEFINE3(osf_sysinfo, int, command, char __user *, buf, long, count)
SYSCALL_DEFINE5(osf_getsysinfo, unsigned long, op, void __user *, buffer,
unsigned long, nbytes, int __user *, start, void __user *, arg)
SYSCALL_DEFINE5(osf_setsysinfo, unsigned long, op, void __user *, buffer,
unsigned long, nbytes, int __user *, start, void __user *, arg)
extern struct timezone sys_tz;
struct timeval32
;
struct itimerval32
;
static inline long
get_tv32(struct timeval *o, struct timeval32 __user *i)
static inline long
put_tv32(struct timeval32 __user *o, struct timeval *i)
static inline long
get_it32(struct itimerval *o, struct itimerval32 __user *i)
static inline long
put_it32(struct itimerval32 __user *o, struct itimerval *i)
static inline void
jiffies_to_timeval32(unsigned long jiffies, struct timeval32 *value)
SYSCALL_DEFINE2(osf_gettimeofday, struct timeval32 __user *, tv,
struct timezone __user *, tz)
SYSCALL_DEFINE2(osf_settimeofday, struct timeval32 __user *, tv,
struct timezone __user *, tz)
SYSCALL_DEFINE2(osf_getitimer, int, which, struct itimerval32 __user *, it)
SYSCALL_DEFINE3(osf_setitimer, int, which, struct itimerval32 __user *, in,
struct itimerval32 __user *, out)
SYSCALL_DEFINE2(osf_utimes, const char __user *, filename,
struct timeval32 __user *, tvs)
SYSCALL_DEFINE5(osf_select, int, n, fd_set __user *, inp, fd_set __user *, outp,
fd_set __user *, exp, struct timeval32 __user *, tvp)
struct rusage32 ;
SYSCALL_DEFINE2(osf_getrusage, int, who, struct rusage32 __user *, ru)
SYSCALL_DEFINE4(osf_wait4, pid_t, pid, int __user *, ustatus, int, options,
struct rusage32 __user *, ur)
SYSCALL_DEFINE2(osf_usleep_thread, struct timeval32 __user *, sleep,
struct timeval32 __user *, remain)
struct timex32 ;
SYSCALL_DEFINE1(old_adjtimex, struct timex32 __user *, txc_p)
static unsigned long
arch_get_unmapped_area_1(unsigned long addr, unsigned long len,
unsigned long limit)
unsigned long
arch_get_unmapped_area(struct file *filp, unsigned long addr,
unsigned long len, unsigned long pgoff,
unsigned long flags)
static int
osf_fix_iov_len(const struct iovec __user *iov, unsigned long count)
SYSCALL_DEFINE3(osf_readv, unsigned long, fd,
const struct iovec __user *, vector, unsigned long, count)
SYSCALL_DEFINE3(osf_writev, unsigned long, fd,
const struct iovec __user *, vector, unsigned long, count)
