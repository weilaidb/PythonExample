static int proc_test_super(struct super_block *sb, void *data)
static int proc_set_super(struct super_block *sb, void *data)
static struct dentry *proc_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static void proc_kill_sb(struct super_block *sb)
static struct file_system_type proc_fs_type = ;
void __init proc_root_init(void)
static int proc_root_getattr(struct vfsmount *mnt, struct dentry *dentry, struct kstat *stat
)
static struct dentry *proc_root_lookup(struct inode * dir, struct dentry * dentry, struct nameidata *nd)
static int proc_root_readdir(struct file * filp,
void * dirent, filldir_t filldir)
static const struct file_operations proc_root_operations = ;
static const struct inode_operations proc_root_inode_operations = ;
struct proc_dir_entry proc_root = ;
int pid_ns_prepare_proc(struct pid_namespace *ns)
void pid_ns_release_proc(struct pid_namespace *ns)
