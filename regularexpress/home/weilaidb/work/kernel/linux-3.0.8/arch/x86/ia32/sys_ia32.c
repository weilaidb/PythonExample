#define AA(__x)		((unsigned long)(__x))
asmlinkage long sys32_truncate64(const char __user *filename,
unsigned long offset_low,
unsigned long offset_high)
asmlinkage long sys32_ftruncate64(unsigned int fd, unsigned long offset_low,
unsigned long offset_high)
static int cp_stat64(struct stat64 __user *ubuf, struct kstat *stat)
asmlinkage long sys32_stat64(const char __user *filename,
struct stat64 __user *statbuf)
asmlinkage long sys32_lstat64(const char __user *filename,
struct stat64 __user *statbuf)
asmlinkage long sys32_fstat64(unsigned int fd, struct stat64 __user *statbuf)
asmlinkage long sys32_fstatat(unsigned int dfd, const char __user *filename,
struct stat64 __user *statbuf, int flag)
struct mmap_arg_struct32 ;
asmlinkage long sys32_mmap(struct mmap_arg_struct32 __user *arg)
asmlinkage long sys32_mprotect(unsigned long start, size_t len,
unsigned long prot)
asmlinkage long sys32_rt_sigaction(int sig, struct sigaction32 __user *act,
struct sigaction32 __user *oact,
unsigned int sigsetsize)
asmlinkage long sys32_sigaction(int sig, struct old_sigaction32 __user *act,
struct old_sigaction32 __user *oact)
asmlinkage long sys32_rt_sigprocmask(int how, compat_sigset_t __user *set,
compat_sigset_t __user *oset,
unsigned int sigsetsize)
asmlinkage long sys32_alarm(unsigned int seconds)
asmlinkage long sys32_waitpid(compat_pid_t pid, unsigned int *stat_addr,
int options)
asmlinkage long sys32_sysfs(int option, u32 arg1, u32 arg2)
asmlinkage long sys32_sched_rr_get_interval(compat_pid_t pid,
struct compat_timespec __user *interval)
asmlinkage long sys32_rt_sigpending(compat_sigset_t __user *set,
compat_size_t sigsetsize)
asmlinkage long sys32_rt_sigqueueinfo(int pid, int sig,
compat_siginfo_t __user *uinfo)
asmlinkage long sys32_pread(unsigned int fd, char __user *ubuf, u32 count,
u32 poslo, u32 poshi)
asmlinkage long sys32_pwrite(unsigned int fd, const char __user *ubuf,
u32 count, u32 poslo, u32 poshi)
asmlinkage long sys32_personality(unsigned long personality)
asmlinkage long sys32_sendfile(int out_fd, int in_fd,
compat_off_t __user *offset, s32 count)
asmlinkage long sys32_execve(const char __user *name, compat_uptr_t __user *argv,
compat_uptr_t __user *envp, struct pt_regs *regs)
asmlinkage long sys32_clone(unsigned int clone_flags, unsigned int newsp,
struct pt_regs *regs)
long sys32_lseek(unsigned int fd, int offset, unsigned int whence)
long sys32_kill(int pid, int sig)
long sys32_fadvise64_64(int fd, __u32 offset_low, __u32 offset_high,
__u32 len_low, __u32 len_high, int advice)
long sys32_vm86_warning(void)
long sys32_lookup_dcookie(u32 addr_low, u32 addr_high,
char __user *buf, size_t len)
asmlinkage ssize_t sys32_readahead(int fd, unsigned off_lo, unsigned off_hi,
size_t count)
asmlinkage long sys32_sync_file_range(int fd, unsigned off_low, unsigned off_hi,
unsigned n_low, unsigned n_hi,  int flags)
asmlinkage long sys32_fadvise64(int fd, unsigned offset_lo, unsigned offset_hi,
size_t len, int advice)
asmlinkage long sys32_fallocate(int fd, int mode, unsigned offset_lo,
unsigned offset_hi, unsigned len_lo,
unsigned len_hi)
asmlinkage long sys32_fanotify_mark(int fanotify_fd, unsigned int flags,
u32 mask_lo, u32 mask_hi,
int fd, const char  __user *pathname)
