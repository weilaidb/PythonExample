struct nilfs_ifile_info ;
static inline struct nilfs_ifile_info *NILFS_IFILE_I(struct inode *ifile)
int nilfs_ifile_create_inode(struct inode *ifile, ino_t *out_ino,
struct buffer_head **out_bh)
int nilfs_ifile_delete_inode(struct inode *ifile, ino_t ino)
int nilfs_ifile_get_inode_block(struct inode *ifile, ino_t ino,
struct buffer_head **out_bh)
int nilfs_ifile_read(struct super_block *sb, struct nilfs_root *root,
size_t inode_size, struct nilfs_inode *raw_inode,
struct inode **inodep)
