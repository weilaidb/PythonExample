static int get_dir_index_using_name(struct super_block *sb,
u64 *next_block, int *next_offset, u64 index_start,
int index_offset, int i_count, const char *name,
int len)
static struct dentry *squashfs_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
const struct inode_operations squashfs_dir_inode_ops = ;
