static char *ocfs2_fast_symlink_getlink(struct inode *inode,
struct buffer_head **bh)
static int ocfs2_readlink(struct dentry *dentry,
char __user *buffer,
int buflen)
static void *ocfs2_fast_follow_link(struct dentry *dentry,
struct nameidata *nd)
static void ocfs2_fast_put_link(struct dentry *dentry, struct nameidata *nd, void *cookie)
const struct inode_operations ocfs2_symlink_inode_operations = ;
const struct inode_operations ocfs2_fast_symlink_inode_operations = ;
