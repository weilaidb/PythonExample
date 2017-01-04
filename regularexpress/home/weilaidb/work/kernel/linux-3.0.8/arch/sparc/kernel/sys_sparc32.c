asmlinkage long compat_sys_ipc(u32 call, u32 first, u32 second, u32 third, compat_uptr_t ptr, u32 fifth)
asmlinkage long sys32_truncate64(const char __user * path, unsigned long high, unsigned long low)
asmlinkage long sys32_ftruncate64(unsigned int fd, unsigned long high, unsigned long low)
static int cp_compat_stat64(struct kstat *stat,
struct compat_stat64 __user *statbuf)
asmlinkage long compat_sys_stat64(const char __user * filename,
struct compat_stat64 __user *statbuf)
asmlinkage long compat_sys_lstat64(const char __user * filename,
struct compat_stat64 __user *statbuf)
asmlinkage long compat_sys_fstat64(unsigned int fd,
struct compat_stat64 __user * statbuf)
asmlinkage long compat_sys_fstatat64(unsigned int dfd,
const char __user *filename,
struct compat_stat64 __user * statbuf, int flag)
asmlinkage long compat_sys_sysfs(int option, u32 arg1, u32 arg2)
asmlinkage long compat_sys_sched_rr_get_interval(compat_pid_t pid, struct compat_timespec __user *interval)
asmlinkage long compat_sys_rt_sigprocmask(int how,
compat_sigset_t __user *set,
compat_sigset_t __user *oset,
compat_size_t sigsetsize)
asmlinkage long sys32_rt_sigpending(compat_sigset_t __user *set,
compat_size_t sigsetsize)
asmlinkage long compat_sys_rt_sigqueueinfo(int pid, int sig,
struct compat_siginfo __user *uinfo)
asmlinkage long compat_sys_sigaction(int sig, struct old_sigaction32 __user *act,
struct old_sigaction32 __user *oact)
asmlinkage long compat_sys_rt_sigaction(int sig,
struct sigaction32 __user *act,
struct sigaction32 __user *oact,
void __user *restorer,
compat_size_t sigsetsize)
asmlinkage long sparc32_execve(struct pt_regs *regs)
asmlinkage long sys32_init_module(void __user *umod, u32 len,
const char __user *uargs)
asmlinkage long sys32_delete_module(const char __user *name_user,
unsigned int flags)
asmlinkage long sys32_init_module(const char __user *name_user,
struct module __user *mod_user)
asmlinkage long sys32_delete_module(const char __user *name_user)
asmlinkage compat_ssize_t sys32_pread64(unsigned int fd,
char __user *ubuf,
compat_size_t count,
unsigned long poshi,
unsigned long poslo)
asmlinkage compat_ssize_t sys32_pwrite64(unsigned int fd,
char __user *ubuf,
compat_size_t count,
unsigned long poshi,
unsigned long poslo)
asmlinkage long compat_sys_readahead(int fd,
unsigned long offhi,
unsigned long offlo,
compat_size_t count)
long compat_sys_fadvise64(int fd,
unsigned long offhi,
unsigned long offlo,
compat_size_t len, int advice)
long compat_sys_fadvise64_64(int fd,
unsigned long offhi, unsigned long offlo,
unsigned long lenhi, unsigned long lenlo,
int advice)
asmlinkage long compat_sys_sendfile(int out_fd, int in_fd,
compat_off_t __user *offset,
compat_size_t count)
asmlinkage long compat_sys_sendfile64(int out_fd, int in_fd,
compat_loff_t __user *offset,
compat_size_t count)
asmlinkage long sparc32_open(const char __user *filename,
int flags, int mode)
long sys32_lookup_dcookie(unsigned long cookie_high,
unsigned long cookie_low,
char __user *buf, size_t len)
long compat_sync_file_range(int fd, unsigned long off_high, unsigned long off_low, unsigned long nb_high, unsigned long nb_low, int flags)
asmlinkage long compat_sys_fallocate(int fd, int mode, u32 offhi, u32 offlo,
u32 lenhi, u32 lenlo)
