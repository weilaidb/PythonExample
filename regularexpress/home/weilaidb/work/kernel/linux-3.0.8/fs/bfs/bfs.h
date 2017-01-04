#define _FS_BFS_BFS_H
struct bfs_sb_info ;
struct bfs_inode_info ;
static inline struct bfs_sb_info *BFS_SB(struct super_block *sb)
static inline struct bfs_inode_info *BFS_I(struct inode *inode)
#define printf(format, args...) \
printk(KERN_ERR "BFS-fs: %s(): " format, __func__, ## args)
extern struct inode *bfs_iget(struct super_block *sb, unsigned long ino);
extern const struct inode_operations bfs_file_inops;
extern const struct file_operations bfs_file_operations;
extern const struct address_space_operations bfs_aops;
extern const struct inode_operations bfs_dir_inops;
extern const struct file_operations bfs_dir_operations;
