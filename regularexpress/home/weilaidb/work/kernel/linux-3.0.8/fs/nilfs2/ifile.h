#define _NILFS_IFILE_H
static inline struct nilfs_inode *
nilfs_ifile_map_inode(struct inode *ifile, ino_t ino, struct buffer_head *ibh)
static inline void nilfs_ifile_unmap_inode(struct inode *ifile, ino_t ino,
struct buffer_head *ibh)
int nilfs_ifile_create_inode(struct inode *, ino_t *, struct buffer_head **);
int nilfs_ifile_delete_inode(struct inode *, ino_t);
int nilfs_ifile_get_inode_block(struct inode *, ino_t, struct buffer_head **);
int nilfs_ifile_read(struct super_block *sb, struct nilfs_root *root,
size_t inode_size, struct nilfs_inode *raw_inode,
struct inode **inodep);
