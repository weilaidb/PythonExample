int apparmor_initialized __initdata;
static void apparmor_cred_free(struct cred *cred)
static int apparmor_cred_alloc_blank(struct cred *cred, gfp_t gfp)
static int apparmor_cred_prepare(struct cred *new, const struct cred *old,
gfp_t gfp)
static void apparmor_cred_transfer(struct cred *new, const struct cred *old)
static int apparmor_ptrace_access_check(struct task_struct *child,
unsigned int mode)
static int apparmor_ptrace_traceme(struct task_struct *parent)
static int apparmor_capget(struct task_struct *target, kernel_cap_t *effective,
kernel_cap_t *inheritable, kernel_cap_t *permitted)
static int apparmor_capable(struct task_struct *task, const struct cred *cred,
struct user_namespace *ns, int cap, int audit)
static int common_perm(int op, struct path *path, u32 mask,
struct path_cond *cond)
static int common_perm_dir_dentry(int op, struct path *dir,
struct dentry *dentry, u32 mask,
struct path_cond *cond)
static int common_perm_mnt_dentry(int op, struct vfsmount *mnt,
struct dentry *dentry, u32 mask)
static int common_perm_rm(int op, struct path *dir,
struct dentry *dentry, u32 mask)
static int common_perm_create(int op, struct path *dir, struct dentry *dentry,
u32 mask, umode_t mode)
static int apparmor_path_unlink(struct path *dir, struct dentry *dentry)
static int apparmor_path_mkdir(struct path *dir, struct dentry *dentry,
int mode)
static int apparmor_path_rmdir(struct path *dir, struct dentry *dentry)
static int apparmor_path_mknod(struct path *dir, struct dentry *dentry,
int mode, unsigned int dev)
static int apparmor_path_truncate(struct path *path)
static int apparmor_path_symlink(struct path *dir, struct dentry *dentry,
const char *old_name)
static int apparmor_path_link(struct dentry *old_dentry, struct path *new_dir,
struct dentry *new_dentry)
static int apparmor_path_rename(struct path *old_dir, struct dentry *old_dentry,
struct path *new_dir, struct dentry *new_dentry)
static int apparmor_path_chmod(struct dentry *dentry, struct vfsmount *mnt,
mode_t mode)
static int apparmor_path_chown(struct path *path, uid_t uid, gid_t gid)
static int apparmor_inode_getattr(struct vfsmount *mnt, struct dentry *dentry)
static int apparmor_dentry_open(struct file *file, const struct cred *cred)
static int apparmor_file_alloc_security(struct file *file)
static void apparmor_file_free_security(struct file *file)
static int common_file_perm(int op, struct file *file, u32 mask)
static int apparmor_file_permission(struct file *file, int mask)
static int apparmor_file_lock(struct file *file, unsigned int cmd)
static int common_mmap(int op, struct file *file, unsigned long prot,
unsigned long flags)
static int apparmor_file_mmap(struct file *file, unsigned long reqprot,
unsigned long prot, unsigned long flags,
unsigned long addr, unsigned long addr_only)
static int apparmor_file_mprotect(struct vm_area_struct *vma,
unsigned long reqprot, unsigned long prot)
static int apparmor_getprocattr(struct task_struct *task, char *name,
char **value)
static int apparmor_setprocattr(struct task_struct *task, char *name,
void *value, size_t size)
static int apparmor_task_setrlimit(struct task_struct *task,
unsigned int resource, struct rlimit *new_rlim)
static struct security_operations apparmor_ops = ;
static int param_set_aabool(const char *val, const struct kernel_param *kp);
static int param_get_aabool(char *buffer, const struct kernel_param *kp);
#define param_check_aabool(name, p) __param_check(name, p, int)
static struct kernel_param_ops param_ops_aabool = ;
static int param_set_aauint(const char *val, const struct kernel_param *kp);
static int param_get_aauint(char *buffer, const struct kernel_param *kp);
#define param_check_aauint(name, p) __param_check(name, p, int)
static struct kernel_param_ops param_ops_aauint = ;
static int param_set_aalockpolicy(const char *val, const struct kernel_param *kp);
static int param_get_aalockpolicy(char *buffer, const struct kernel_param *kp);
#define param_check_aalockpolicy(name, p) __param_check(name, p, int)
static struct kernel_param_ops param_ops_aalockpolicy = ;
static int param_set_audit(const char *val, struct kernel_param *kp);
static int param_get_audit(char *buffer, struct kernel_param *kp);
static int param_set_mode(const char *val, struct kernel_param *kp);
static int param_get_mode(char *buffer, struct kernel_param *kp);
enum profile_mode aa_g_profile_mode = APPARMOR_ENFORCE;
module_param_call(mode, param_set_mode, param_get_mode,
&aa_g_profile_mode, S_IRUSR | S_IWUSR);
int aa_g_debug;
module_param_named(debug, aa_g_debug, aabool, S_IRUSR | S_IWUSR);
enum audit_mode aa_g_audit;
module_param_call(audit, param_set_audit, param_get_audit,
&aa_g_audit, S_IRUSR | S_IWUSR);
int aa_g_audit_header = 1;
module_param_named(audit_header, aa_g_audit_header, aabool,
S_IRUSR | S_IWUSR);
int aa_g_lock_policy;
module_param_named(lock_policy, aa_g_lock_policy, aalockpolicy,
S_IRUSR | S_IWUSR);
int aa_g_logsyscall;
module_param_named(logsyscall, aa_g_logsyscall, aabool, S_IRUSR | S_IWUSR);
unsigned int aa_g_path_max = 2 * PATH_MAX;
module_param_named(path_max, aa_g_path_max, aauint, S_IRUSR | S_IWUSR);
int aa_g_paranoid_load = 1;
module_param_named(paranoid_load, aa_g_paranoid_load, aabool,
S_IRUSR | S_IWUSR);
static unsigned int apparmor_enabled = CONFIG_SECURITY_APPARMOR_BOOTPARAM_VALUE;
module_param_named(enabled, apparmor_enabled, aabool, S_IRUSR);
static int __init apparmor_enabled_setup(char *str)
__setup("apparmor=", apparmor_enabled_setup);
static int param_set_aalockpolicy(const char *val, const struct kernel_param *kp)
static int param_get_aalockpolicy(char *buffer, const struct kernel_param *kp)
static int param_set_aabool(const char *val, const struct kernel_param *kp)
static int param_get_aabool(char *buffer, const struct kernel_param *kp)
static int param_set_aauint(const char *val, const struct kernel_param *kp)
static int param_get_aauint(char *buffer, const struct kernel_param *kp)
static int param_get_audit(char *buffer, struct kernel_param *kp)
static int param_set_audit(const char *val, struct kernel_param *kp)
static int param_get_mode(char *buffer, struct kernel_param *kp)
static int param_set_mode(const char *val, struct kernel_param *kp)
static int __init set_init_cxt(void)
static int __init apparmor_init(void)
security_initcall(apparmor_init);
