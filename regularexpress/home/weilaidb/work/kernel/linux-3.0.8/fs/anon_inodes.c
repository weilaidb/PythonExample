static struct vfsmount *anon_inode_mnt __read_mostly;
static struct inode *anon_inode_inode;
static const struct file_operations anon_inode_fops;
static char *anon_inodefs_dname(struct dentry *dentry, char *buffer, int buflen)
static const struct dentry_operations anon_inodefs_dentry_operations = ;
static struct dentry *anon_inodefs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type anon_inode_fs_type = ;
static int anon_set_page_dirty(struct page *page)
;
static const struct address_space_operations anon_aops = ;
struct file *anon_inode_getfile(const char *name,
const struct file_operations *fops,
void *priv, int flags)
EXPORT_SYMBOL_GPL(anon_inode_getfile);
int anon_inode_getfd(const char *name, const struct file_operations *fops,
void *priv, int flags)
EXPORT_SYMBOL_GPL(anon_inode_getfd);
static struct inode *anon_inode_mkinode(void)
static int __init anon_inode_init(void)
fs_initcall(anon_inode_init);
