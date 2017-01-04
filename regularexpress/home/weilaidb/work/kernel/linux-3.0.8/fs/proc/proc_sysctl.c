static const struct dentry_operations proc_sys_dentry_operations;
static const struct file_operations proc_sys_file_operations;
static const struct inode_operations proc_sys_inode_operations;
static const struct file_operations proc_sys_dir_file_operations;
static const struct inode_operations proc_sys_dir_operations;
static struct inode *proc_sys_make_inode(struct super_block *sb,
struct ctl_table_header *head, struct ctl_table *table)
static struct ctl_table *find_in_table(struct ctl_table *p, struct qstr *name)
static struct ctl_table_header *grab_header(struct inode *inode)
static struct dentry *proc_sys_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
static ssize_t proc_sys_call_handler(struct file *filp, void __user *buf,
size_t count, loff_t *ppos, int write)
static ssize_t proc_sys_read(struct file *filp, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t proc_sys_write(struct file *filp, const char __user *buf,
size_t count, loff_t *ppos)
static int proc_sys_fill_cache(struct file *filp, void *dirent,
filldir_t filldir,
struct ctl_table_header *head,
struct ctl_table *table)
static int scan(struct ctl_table_header *head, ctl_table *table,
unsigned long *pos, struct file *file,
void *dirent, filldir_t filldir)
static int proc_sys_readdir(struct file *filp, void *dirent, filldir_t filldir)
static int proc_sys_permission(struct inode *inode, int mask,unsigned int flags)
static int proc_sys_setattr(struct dentry *dentry, struct iattr *attr)
static int proc_sys_getattr(struct vfsmount *mnt, struct dentry *dentry, struct kstat *stat)
static const struct file_operations proc_sys_file_operations = ;
static const struct file_operations proc_sys_dir_file_operations = ;
static const struct inode_operations proc_sys_inode_operations = ;
static const struct inode_operations proc_sys_dir_operations = ;
static int proc_sys_revalidate(struct dentry *dentry, struct nameidata *nd)
static int proc_sys_delete(const struct dentry *dentry)
static int proc_sys_compare(const struct dentry *parent,
const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name)
static const struct dentry_operations proc_sys_dentry_operations = ;
int __init proc_sys_init(void)
