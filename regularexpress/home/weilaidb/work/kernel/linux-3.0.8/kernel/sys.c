# define SET_UNALIGN_CTL(a,b)	(-EINVAL)
# define GET_UNALIGN_CTL(a,b)	(-EINVAL)
# define SET_FPEMU_CTL(a,b)	(-EINVAL)
# define GET_FPEMU_CTL(a,b)	(-EINVAL)
# define SET_FPEXC_CTL(a,b)	(-EINVAL)
# define GET_FPEXC_CTL(a,b)	(-EINVAL)
# define GET_ENDIAN(a,b)	(-EINVAL)
# define SET_ENDIAN(a,b)	(-EINVAL)
# define GET_TSC_CTL(a)		(-EINVAL)
# define SET_TSC_CTL(a)		(-EINVAL)
int overflowuid = DEFAULT_OVERFLOWUID;
int overflowgid = DEFAULT_OVERFLOWGID;
EXPORT_SYMBOL(overflowuid);
EXPORT_SYMBOL(overflowgid);
int fs_overflowuid = DEFAULT_FS_OVERFLOWUID;
int fs_overflowgid = DEFAULT_FS_OVERFLOWUID;
EXPORT_SYMBOL(fs_overflowuid);
EXPORT_SYMBOL(fs_overflowgid);
int C_A_D = 1;
struct pid *cad_pid;
EXPORT_SYMBOL(cad_pid);
void (*pm_power_off_prepare)(void);
static bool set_one_prio_perm(struct task_struct *p)
static int set_one_prio(struct task_struct *p, int niceval, int error)
SYSCALL_DEFINE3(setpriority, int, which, int, who, int, niceval)
SYSCALL_DEFINE2(getpriority, int, which, int, who)
void emergency_restart(void)
EXPORT_SYMBOL_GPL(emergency_restart);
void kernel_restart_prepare(char *cmd)
void kernel_restart(char *cmd)
EXPORT_SYMBOL_GPL(kernel_restart);
static void kernel_shutdown_prepare(enum system_states state)
void kernel_halt(void)
EXPORT_SYMBOL_GPL(kernel_halt);
void kernel_power_off(void)
EXPORT_SYMBOL_GPL(kernel_power_off);
static DEFINE_MUTEX(reboot_mutex);
SYSCALL_DEFINE4(reboot, int, magic1, int, magic2, unsigned int, cmd,
void __user *, arg)
static void deferred_cad(struct work_struct *dummy)
void ctrl_alt_del(void)
SYSCALL_DEFINE2(setregid, gid_t, rgid, gid_t, egid)
SYSCALL_DEFINE1(setgid, gid_t, gid)
static int set_user(struct cred *new)
SYSCALL_DEFINE2(setreuid, uid_t, ruid, uid_t, euid)
SYSCALL_DEFINE1(setuid, uid_t, uid)
SYSCALL_DEFINE3(setresuid, uid_t, ruid, uid_t, euid, uid_t, suid)
SYSCALL_DEFINE3(getresuid, uid_t __user *, ruid, uid_t __user *, euid, uid_t __user *, suid)
SYSCALL_DEFINE3(setresgid, gid_t, rgid, gid_t, egid, gid_t, sgid)
SYSCALL_DEFINE3(getresgid, gid_t __user *, rgid, gid_t __user *, egid, gid_t __user *, sgid)
SYSCALL_DEFINE1(setfsuid, uid_t, uid)
SYSCALL_DEFINE1(setfsgid, gid_t, gid)
void do_sys_times(struct tms *tms)
SYSCALL_DEFINE1(times, struct tms __user *, tbuf)
SYSCALL_DEFINE2(setpgid, pid_t, pid, pid_t, pgid)
SYSCALL_DEFINE1(getpgid, pid_t, pid)
SYSCALL_DEFINE0(getpgrp)
SYSCALL_DEFINE1(getsid, pid_t, pid)
SYSCALL_DEFINE0(setsid)
DECLARE_RWSEM(uts_sem);
#define override_architecture(name) \
(personality(current->personality) == PER_LINUX32 && \
copy_to_user(name->machine, COMPAT_UTS_MACHINE, \
sizeof(COMPAT_UTS_MACHINE)))
#define override_architecture(name)	0
static int override_release(char __user *release, int len)
SYSCALL_DEFINE1(newuname, struct new_utsname __user *, name)
SYSCALL_DEFINE1(uname, struct old_utsname __user *, name)
SYSCALL_DEFINE1(olduname, struct oldold_utsname __user *, name)
SYSCALL_DEFINE2(sethostname, char __user *, name, int, len)
SYSCALL_DEFINE2(gethostname, char __user *, name, int, len)
SYSCALL_DEFINE2(setdomainname, char __user *, name, int, len)
SYSCALL_DEFINE2(getrlimit, unsigned int, resource, struct rlimit __user *, rlim)
SYSCALL_DEFINE2(old_getrlimit, unsigned int, resource,
struct rlimit __user *, rlim)
static inline bool rlim64_is_infinity(__u64 rlim64)
static void rlim_to_rlim64(const struct rlimit *rlim, struct rlimit64 *rlim64)
static void rlim64_to_rlim(const struct rlimit64 *rlim64, struct rlimit *rlim)
int do_prlimit(struct task_struct *tsk, unsigned int resource,
struct rlimit *new_rlim, struct rlimit *old_rlim)
static int check_prlimit_permission(struct task_struct *task)
SYSCALL_DEFINE4(prlimit64, pid_t, pid, unsigned int, resource,
const struct rlimit64 __user *, new_rlim,
struct rlimit64 __user *, old_rlim)
SYSCALL_DEFINE2(setrlimit, unsigned int, resource, struct rlimit __user *, rlim)
static void accumulate_thread_rusage(struct task_struct *t, struct rusage *r)
static void k_getrusage(struct task_struct *p, int who, struct rusage *r)
int getrusage(struct task_struct *p, int who, struct rusage __user *ru)
SYSCALL_DEFINE2(getrusage, int, who, struct rusage __user *, ru)
SYSCALL_DEFINE1(umask, int, mask)
SYSCALL_DEFINE5(prctl, int, option, unsigned long, arg2, unsigned long, arg3,
unsigned long, arg4, unsigned long, arg5)
SYSCALL_DEFINE3(getcpu, unsigned __user *, cpup, unsigned __user *, nodep,
struct getcpu_cache __user *, unused)
char poweroff_cmd[POWEROFF_CMD_PATH_LEN] = "/sbin/poweroff";
static void argv_cleanup(struct subprocess_info *info)
int orderly_poweroff(bool force)
EXPORT_SYMBOL_GPL(orderly_poweroff);
