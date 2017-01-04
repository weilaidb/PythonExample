static efs_ino_t efs_find_entry(struct inode *inode, const char *name, int len)
struct dentry *efs_lookup(struct inode *dir, struct dentry *dentry, struct nameidata *nd)
static struct inode *efs_nfs_get_inode(struct super_block *sb, u64 ino,
u32 generation)
struct dentry *efs_fh_to_dentry(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type)
struct dentry *efs_fh_to_parent(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type)
struct dentry *efs_get_parent(struct dentry *child)
