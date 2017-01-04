asmlinkage long ppc32_select(u32 n, compat_ulong_t __user *inp,
compat_ulong_t __user *outp, compat_ulong_t __user *exp,
compat_uptr_t tvp_x)
asmlinkage long compat_sys_sysfs(u32 option, u32 arg1, u32 arg2)
long compat_sys_ipc(u32 call, u32 first, u32 second, u32 third, compat_uptr_t ptr,
u32 fifth)
asmlinkage long compat_sys_sendfile(u32 out_fd, u32 in_fd, compat_off_t __user * offset, u32 count)
asmlinkage int compat_sys_sendfile64(int out_fd, int in_fd, compat_loff_t __user *offset, s32 count)
long compat_sys_execve(unsigned long a0, unsigned long a1, unsigned long a2,
unsigned long a3, unsigned long a4, unsigned long a5,
struct pt_regs *regs)
asmlinkage long compat_sys_prctl(u32 option, u32 arg2, u32 arg3, u32 arg4, u32 arg5)
asmlinkage long compat_sys_sched_rr_get_interval(u32 pid, struct compat_timespec __user *interval)
asmlinkage long compat_sys_access(const char __user * filename, u32 mode)
asmlinkage long compat_sys_creat(const char __user * pathname, u32 mode)
asmlinkage long compat_sys_waitpid(u32 pid, unsigned int __user * stat_addr, u32 options)
asmlinkage long compat_sys_getgroups(u32 gidsetsize, gid_t __user *grouplist)
asmlinkage long compat_sys_getpgid(u32 pid)
asmlinkage long compat_sys_getsid(u32 pid)
asmlinkage long compat_sys_kill(u32 pid, u32 sig)
asmlinkage long compat_sys_mkdir(const char __user * pathname, u32 mode)
long compat_sys_nice(u32 increment)
off_t ppc32_lseek(unsigned int fd, u32 offset, unsigned int origin)
long compat_sys_truncate(const char __user * path, u32 length)
long compat_sys_ftruncate(int fd, u32 length)
asmlinkage long compat_sys_readlink(const char __user * path, char __user * buf, u32 bufsiz)
asmlinkage long compat_sys_sched_get_priority_max(u32 policy)
asmlinkage long compat_sys_sched_get_priority_min(u32 policy)
asmlinkage long compat_sys_sched_getparam(u32 pid, struct sched_param __user *param)
asmlinkage long compat_sys_sched_getscheduler(u32 pid)
asmlinkage long compat_sys_sched_setparam(u32 pid, struct sched_param __user *param)
asmlinkage long compat_sys_sched_setscheduler(u32 pid, u32 policy, struct sched_param __user *param)
asmlinkage long compat_sys_setdomainname(char __user *name, u32 len)
asmlinkage long compat_sys_setgroups(u32 gidsetsize, gid_t __user *grouplist)
asmlinkage long compat_sys_sethostname(char __user *name, u32 len)
asmlinkage long compat_sys_setpgid(u32 pid, u32 pgid)
long compat_sys_getpriority(u32 which, u32 who)
long compat_sys_setpriority(u32 which, u32 who, u32 niceval)
long compat_sys_ioprio_get(u32 which, u32 who)
long compat_sys_ioprio_set(u32 which, u32 who, u32 ioprio)
asmlinkage long compat_sys_ssetmask(u32 newmask)
asmlinkage long compat_sys_syslog(u32 type, char __user * buf, u32 len)
asmlinkage long compat_sys_umask(u32 mask)
unsigned long compat_sys_mmap2(unsigned long addr, size_t len,
unsigned long prot, unsigned long flags,
unsigned long fd, unsigned long pgoff)
long compat_sys_tgkill(u32 tgid, u32 pid, int sig)
compat_ssize_t compat_sys_pread64(unsigned int fd, char __user *ubuf, compat_size_t count,
u32 reg6, u32 poshi, u32 poslo)
compat_ssize_t compat_sys_pwrite64(unsigned int fd, const char __user *ubuf, compat_size_t count,
u32 reg6, u32 poshi, u32 poslo)
compat_ssize_t compat_sys_readahead(int fd, u32 r4, u32 offhi, u32 offlo, u32 count)
asmlinkage int compat_sys_truncate64(const char __user * path, u32 reg4,
unsigned long high, unsigned long low)
asmlinkage long compat_sys_fallocate(int fd, int mode, u32 offhi, u32 offlo,
u32 lenhi, u32 lenlo)
asmlinkage int compat_sys_ftruncate64(unsigned int fd, u32 reg4, unsigned long high,
unsigned long low)
long ppc32_lookup_dcookie(u32 cookie_high, u32 cookie_low, char __user *buf,
size_t len)
long ppc32_fadvise64(int fd, u32 unused, u32 offset_high, u32 offset_low,
size_t len, int advice)
asmlinkage long compat_sys_add_key(const char __user *_type,
const char __user *_description,
const void __user *_payload,
u32 plen,
u32 ringid)
asmlinkage long compat_sys_request_key(const char __user *_type,
const char __user *_description,
const char __user *_callout_info,
u32 destringid)
asmlinkage long compat_sys_sync_file_range2(int fd, unsigned int flags,
unsigned offset_hi, unsigned offset_lo,
unsigned nbytes_hi, unsigned nbytes_lo)
asmlinkage long compat_sys_fanotify_mark(int fanotify_fd, unsigned int flags,
unsigned mask_hi, unsigned mask_lo,
int dfd, const char __user *pathname)
