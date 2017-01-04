static long long squashfs_inode_lookup(struct super_block *sb, int ino_num)
static struct dentry *squashfs_export_iget(struct super_block *sb,
unsigned int ino_num)
static struct dentry *squashfs_fh_to_dentry(struct super_block *sb,
struct fid *fid, int fh_len, int fh_type)
static struct dentry *squashfs_fh_to_parent(struct super_block *sb,
struct fid *fid, int fh_len, int fh_type)
static struct dentry *squashfs_get_parent(struct dentry *child)
__le64 *squashfs_read_inode_lookup_table(struct super_block *sb,
u64 lookup_table_start, u64 next_table, unsigned int inodes)
const struct export_operations squashfs_export_ops = ;
