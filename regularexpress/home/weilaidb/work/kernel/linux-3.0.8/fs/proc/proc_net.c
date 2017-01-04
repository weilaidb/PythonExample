static struct net *get_proc_net(const struct inode *inode)
int seq_open_net(struct inode *ino, struct file *f,
const struct seq_operations *ops, int size)
EXPORT_SYMBOL_GPL(seq_open_net);
int single_open_net(struct inode *inode, struct file *file,
int (*show)(struct seq_file *, void *))
EXPORT_SYMBOL_GPL(single_open_net);
int seq_release_net(struct inode *ino, struct file *f)
EXPORT_SYMBOL_GPL(seq_release_net);
int single_release_net(struct inode *ino, struct file *f)
EXPORT_SYMBOL_GPL(single_release_net);
static struct net *get_proc_task_net(struct inode *dir)
static struct dentry *proc_tgid_net_lookup(struct inode *dir,
struct dentry *dentry, struct nameidata *nd)
static int proc_tgid_net_getattr(struct vfsmount *mnt, struct dentry *dentry,
struct kstat *stat)
const struct inode_operations proc_net_inode_operations = ;
static int proc_tgid_net_readdir(struct file *filp, void *dirent,
filldir_t filldir)
const struct file_operations proc_net_operations = ;
struct proc_dir_entry *proc_net_fops_create(struct net *net,
const char *name, mode_t mode, const struct file_operations *fops)
EXPORT_SYMBOL_GPL(proc_net_fops_create);
void proc_net_remove(struct net *net, const char *name)
EXPORT_SYMBOL_GPL(proc_net_remove);
static __net_init int proc_net_ns_init(struct net *net)
static __net_exit void proc_net_ns_exit(struct net *net)
static struct pernet_operations __net_initdata proc_net_ns_ops = ;
int __init proc_net_init(void)
