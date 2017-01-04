static void warn_setuid_and_fcaps_mixed(const char *fname)
int cap_netlink_send(struct sock *sk, struct sk_buff *skb)
int cap_netlink_recv(struct sk_buff *skb, int cap)
EXPORT_SYMBOL(cap_netlink_recv);
int cap_capable(struct task_struct *tsk, const struct cred *cred,
struct user_namespace *targ_ns, int cap, int audit)
int cap_settime(const struct timespec *ts, const struct timezone *tz)
int cap_ptrace_access_check(struct task_struct *child, unsigned int mode)
int cap_ptrace_traceme(struct task_struct *parent)
int cap_capget(struct task_struct *target, kernel_cap_t *effective,
kernel_cap_t *inheritable, kernel_cap_t *permitted)
static inline int cap_inh_is_capped(void)
int cap_capset(struct cred *new,
const struct cred *old,
const kernel_cap_t *effective,
const kernel_cap_t *inheritable,
const kernel_cap_t *permitted)
static inline void bprm_clear_caps(struct linux_binprm *bprm)
int cap_inode_need_killpriv(struct dentry *dentry)
int cap_inode_killpriv(struct dentry *dentry)
static inline int bprm_caps_from_vfs_caps(struct cpu_vfs_cap_data *caps,
struct linux_binprm *bprm,
bool *effective)
int get_vfs_caps_from_disk(const struct dentry *dentry, struct cpu_vfs_cap_data *cpu_caps)
static int get_file_caps(struct linux_binprm *bprm, bool *effective)
int cap_bprm_set_creds(struct linux_binprm *bprm)
int cap_bprm_secureexec(struct linux_binprm *bprm)
int cap_inode_setxattr(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags)
int cap_inode_removexattr(struct dentry *dentry, const char *name)
static inline void cap_emulate_setxuid(struct cred *new, const struct cred *old)
int cap_task_fix_setuid(struct cred *new, const struct cred *old, int flags)
static int cap_safe_nice(struct task_struct *p)
int cap_task_setscheduler(struct task_struct *p)
int cap_task_setioprio(struct task_struct *p, int ioprio)
int cap_task_setnice(struct task_struct *p, int nice)
static long cap_prctl_drop(struct cred *new, unsigned long cap)
int cap_task_prctl(int option, unsigned long arg2, unsigned long arg3,
unsigned long arg4, unsigned long arg5)
int cap_vm_enough_memory(struct mm_struct *mm, long pages)
int cap_file_mmap(struct file *file, unsigned long reqprot,
unsigned long prot, unsigned long flags,
unsigned long addr, unsigned long addr_only)
