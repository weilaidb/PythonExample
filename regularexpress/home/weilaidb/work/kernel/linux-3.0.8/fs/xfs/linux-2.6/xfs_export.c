static int xfs_fileid_length(int fileid_type)
STATIC int
xfs_fs_encode_fh(
struct dentry		*dentry,
__u32			*fh,
int			*max_len,
int			connectable)
STATIC struct inode *
xfs_nfs_get_inode(
struct super_block	*sb,
u64			ino,
u32			generation)
STATIC struct dentry *
xfs_fs_fh_to_dentry(struct super_block *sb, struct fid *fid,
int fh_len, int fileid_type)
STATIC struct dentry *
xfs_fs_fh_to_parent(struct super_block *sb, struct fid *fid,
int fh_len, int fileid_type)
STATIC struct dentry *
xfs_fs_get_parent(
struct dentry		*child)
STATIC int
xfs_fs_nfs_commit_metadata(
struct inode		*inode)
const struct export_operations xfs_export_operations = ;
