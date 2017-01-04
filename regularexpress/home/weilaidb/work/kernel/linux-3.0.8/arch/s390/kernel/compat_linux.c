long psw_user32_bits	= (PSW_BASE32_BITS | PSW_MASK_DAT | PSW_ASC_HOME |
PSW_MASK_IO | PSW_MASK_EXT | PSW_MASK_MCHECK |
PSW_MASK_PSTATE | PSW_DEFAULT_KEY);
long psw32_user_bits	= (PSW32_BASE_BITS | PSW32_MASK_DAT | PSW32_ASC_HOME |
PSW32_MASK_IO | PSW32_MASK_EXT | PSW32_MASK_MCHECK |
PSW32_MASK_PSTATE);
#undef high2lowuid
#undef high2lowgid
#undef low2highuid
#undef low2highgid
#undef SET_UID16
#undef SET_GID16
#undef NEW_TO_OLD_UID
#undef NEW_TO_OLD_GID
#undef SET_OLDSTAT_UID
#undef SET_OLDSTAT_GID
#undef SET_STAT_UID
#undef SET_STAT_GID
#define high2lowuid(uid) ((uid) > 65535) ? (u16)overflowuid : (u16)(uid)
#define high2lowgid(gid) ((gid) > 65535) ? (u16)overflowgid : (u16)(gid)
#define low2highuid(uid) ((uid) == (u16)-1) ? (uid_t)-1 : (uid_t)(uid)
#define low2highgid(gid) ((gid) == (u16)-1) ? (gid_t)-1 : (gid_t)(gid)
#define SET_UID16(var, uid)	var = high2lowuid(uid)
#define SET_GID16(var, gid)	var = high2lowgid(gid)
#define NEW_TO_OLD_UID(uid)	high2lowuid(uid)
#define NEW_TO_OLD_GID(gid)	high2lowgid(gid)
#define SET_OLDSTAT_UID(stat, uid)	(stat).st_uid = high2lowuid(uid)
#define SET_OLDSTAT_GID(stat, gid)	(stat).st_gid = high2lowgid(gid)
#define SET_STAT_UID(stat, uid)		(stat).st_uid = high2lowuid(uid)
#define SET_STAT_GID(stat, gid)		(stat).st_gid = high2lowgid(gid)
asmlinkage long sys32_chown16(const char __user * filename, u16 user, u16 group)
asmlinkage long sys32_lchown16(const char __user * filename, u16 user, u16 group)
asmlinkage long sys32_fchown16(unsigned int fd, u16 user, u16 group)
asmlinkage long sys32_setregid16(u16 rgid, u16 egid)
asmlinkage long sys32_setgid16(u16 gid)
asmlinkage long sys32_setreuid16(u16 ruid, u16 euid)
asmlinkage long sys32_setuid16(u16 uid)
asmlinkage long sys32_setresuid16(u16 ruid, u16 euid, u16 suid)
asmlinkage long sys32_getresuid16(u16 __user *ruid, u16 __user *euid, u16 __user *suid)
asmlinkage long sys32_setresgid16(u16 rgid, u16 egid, u16 sgid)
asmlinkage long sys32_getresgid16(u16 __user *rgid, u16 __user *egid, u16 __user *sgid)
asmlinkage long sys32_setfsuid16(u16 uid)
asmlinkage long sys32_setfsgid16(u16 gid)
static int groups16_to_user(u16 __user *grouplist, struct group_info *group_info)
static int groups16_from_user(struct group_info *group_info, u16 __user *grouplist)
asmlinkage long sys32_getgroups16(int gidsetsize, u16 __user *grouplist)
asmlinkage long sys32_setgroups16(int gidsetsize, u16 __user *grouplist)
asmlinkage long sys32_getuid16(void)
asmlinkage long sys32_geteuid16(void)
asmlinkage long sys32_getgid16(void)
asmlinkage long sys32_getegid16(void)
asmlinkage long sys32_ipc(u32 call, int first, int second, int third, u32 ptr)
asmlinkage long sys32_truncate64(const char __user * path, unsigned long high, unsigned long low)
asmlinkage long sys32_ftruncate64(unsigned int fd, unsigned long high, unsigned long low)
asmlinkage long sys32_sched_rr_get_interval(compat_pid_t pid,
struct compat_timespec __user *interval)
asmlinkage long sys32_rt_sigprocmask(int how, compat_sigset_t __user *set,
compat_sigset_t __user *oset, size_t sigsetsize)
asmlinkage long sys32_rt_sigpending(compat_sigset_t __user *set,
size_t sigsetsize)
asmlinkage long
sys32_rt_sigqueueinfo(int pid, int sig, compat_siginfo_t __user *uinfo)
asmlinkage long sys32_execve(const char __user *name, compat_uptr_t __user *argv,
compat_uptr_t __user *envp)
asmlinkage long sys32_pread64(unsigned int fd, char __user *ubuf,
size_t count, u32 poshi, u32 poslo)
asmlinkage long sys32_pwrite64(unsigned int fd, const char __user *ubuf,
size_t count, u32 poshi, u32 poslo)
asmlinkage compat_ssize_t sys32_readahead(int fd, u32 offhi, u32 offlo, s32 count)
asmlinkage long sys32_sendfile(int out_fd, int in_fd, compat_off_t __user *offset, size_t count)
asmlinkage long sys32_sendfile64(int out_fd, int in_fd,
compat_loff_t __user *offset, s32 count)
struct stat64_emu31 ;
static int cp_stat64(struct stat64_emu31 __user *ubuf, struct kstat *stat)
asmlinkage long sys32_stat64(const char __user * filename, struct stat64_emu31 __user * statbuf)
asmlinkage long sys32_lstat64(const char __user * filename, struct stat64_emu31 __user * statbuf)
asmlinkage long sys32_fstat64(unsigned long fd, struct stat64_emu31 __user * statbuf)
asmlinkage long sys32_fstatat64(unsigned int dfd, const char __user *filename,
struct stat64_emu31 __user* statbuf, int flag)
struct mmap_arg_struct_emu31 ;
asmlinkage unsigned long old32_mmap(struct mmap_arg_struct_emu31 __user *arg)
asmlinkage long sys32_mmap2(struct mmap_arg_struct_emu31 __user *arg)
asmlinkage long sys32_read(unsigned int fd, char __user * buf, size_t count)
asmlinkage long sys32_write(unsigned int fd, const char __user * buf, size_t count)
asmlinkage long
sys32_fadvise64(int fd, loff_t offset, size_t len, int advise)
struct fadvise64_64_args ;
asmlinkage long
sys32_fadvise64_64(struct fadvise64_64_args __user *args)
