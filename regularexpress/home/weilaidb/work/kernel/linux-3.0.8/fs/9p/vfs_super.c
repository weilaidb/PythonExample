static const struct super_operations v9fs_super_ops, v9fs_super_ops_dotl;
static int v9fs_set_super(struct super_block *s, void *data)
static void
v9fs_fill_super(struct super_block *sb, struct v9fs_session_info *v9ses,
int flags, void *data)
static struct dentry *v9fs_mount(struct file_system_type *fs_type, int flags,
const char *dev_name, void *data)
static void v9fs_kill_super(struct super_block *s)
static void
v9fs_umount_begin(struct super_block *sb)
static int v9fs_statfs(struct dentry *dentry, struct kstatfs *buf)
static int v9fs_drop_inode(struct inode *inode)
static int v9fs_write_inode(struct inode *inode,
struct writeback_control *wbc)
static int v9fs_write_inode_dotl(struct inode *inode,
struct writeback_control *wbc)
static const struct super_operations v9fs_super_ops = ;
static const struct super_operations v9fs_super_ops_dotl = ;
struct file_system_type v9fs_fs_type = ;
