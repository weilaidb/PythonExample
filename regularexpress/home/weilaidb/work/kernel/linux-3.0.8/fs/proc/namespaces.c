static const struct proc_ns_operations *ns_entries[] = ;
static const struct file_operations ns_file_operations = ;
static struct dentry *proc_ns_instantiate(struct inode *dir,
struct dentry *dentry, struct task_struct *task, const void *ptr)
static int proc_ns_fill_cache(struct file *filp, void *dirent,
filldir_t filldir, struct task_struct *task,
const struct proc_ns_operations *ops)
static int proc_ns_dir_readdir(struct file *filp, void *dirent,
filldir_t filldir)
const struct file_operations proc_ns_dir_operations = ;
static struct dentry *proc_ns_dir_lookup(struct inode *dir,
struct dentry *dentry, struct nameidata *nd)
const struct inode_operations proc_ns_dir_inode_operations = ;
struct file *proc_ns_fget(int fd)
