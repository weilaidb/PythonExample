static int squashfs_new_inode(struct super_block *sb, struct inode *inode,
struct squashfs_base_inode *sqsh_ino)
struct inode *squashfs_iget(struct super_block *sb, long long ino,
unsigned int ino_number)
int squashfs_read_inode(struct inode *inode, long long ino)
const struct inode_operations squashfs_inode_ops = ;
