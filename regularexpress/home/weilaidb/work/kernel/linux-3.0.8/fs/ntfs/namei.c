static struct dentry *ntfs_lookup(struct inode *dir_ino, struct dentry *dent,
struct nameidata *nd)
const struct inode_operations ntfs_dir_inode_ops = ;
static struct dentry *ntfs_get_parent(struct dentry *child_dent)
static struct inode *ntfs_nfs_get_inode(struct super_block *sb,
u64 ino, u32 generation)
static struct dentry *ntfs_fh_to_dentry(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type)
static struct dentry *ntfs_fh_to_parent(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type)
const struct export_operations ntfs_export_ops = ;
