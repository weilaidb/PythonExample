struct ocfs2_inode_handle
;
static struct dentry *ocfs2_get_dentry(struct super_block *sb,
struct ocfs2_inode_handle *handle)
static struct dentry *ocfs2_get_parent(struct dentry *child)
static int ocfs2_encode_fh(struct dentry *dentry, u32 *fh_in, int *max_len,
int connectable)
static struct dentry *ocfs2_fh_to_dentry(struct super_block *sb,
struct fid *fid, int fh_len, int fh_type)
static struct dentry *ocfs2_fh_to_parent(struct super_block *sb,
struct fid *fid, int fh_len, int fh_type)
const struct export_operations ocfs2_export_ops = ;
