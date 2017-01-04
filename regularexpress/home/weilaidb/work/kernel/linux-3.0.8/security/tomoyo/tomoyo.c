static int tomoyo_cred_alloc_blank(struct cred *new, gfp_t gfp)
static int tomoyo_cred_prepare(struct cred *new, const struct cred *old,
gfp_t gfp)
static void tomoyo_cred_transfer(struct cred *new, const struct cred *old)
static void tomoyo_cred_free(struct cred *cred)
static int tomoyo_bprm_set_creds(struct linux_binprm *bprm)
static int tomoyo_bprm_check_security(struct linux_binprm *bprm)
static int tomoyo_path_truncate(struct path *path)
static int tomoyo_path_unlink(struct path *parent, struct dentry *dentry)
static int tomoyo_path_mkdir(struct path *parent, struct dentry *dentry,
int mode)
static int tomoyo_path_rmdir(struct path *parent, struct dentry *dentry)
static int tomoyo_path_symlink(struct path *parent, struct dentry *dentry,
const char *old_name)
static int tomoyo_path_mknod(struct path *parent, struct dentry *dentry,
int mode, unsigned int dev)
static int tomoyo_path_link(struct dentry *old_dentry, struct path *new_dir,
struct dentry *new_dentry)
static int tomoyo_path_rename(struct path *old_parent,
struct dentry *old_dentry,
struct path *new_parent,
struct dentry *new_dentry)
static int tomoyo_file_fcntl(struct file *file, unsigned int cmd,
unsigned long arg)
static int tomoyo_dentry_open(struct file *f, const struct cred *cred)
static int tomoyo_file_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int tomoyo_path_chmod(struct dentry *dentry, struct vfsmount *mnt,
mode_t mode)
static int tomoyo_path_chown(struct path *path, uid_t uid, gid_t gid)
static int tomoyo_path_chroot(struct path *path)
static int tomoyo_sb_mount(char *dev_name, struct path *path,
char *type, unsigned long flags, void *data)
static int tomoyo_sb_umount(struct vfsmount *mnt, int flags)
static int tomoyo_sb_pivotroot(struct path *old_path, struct path *new_path)
static struct security_operations tomoyo_security_ops = ;
struct srcu_struct tomoyo_ss;
static int __init tomoyo_init(void)
security_initcall(tomoyo_init);
