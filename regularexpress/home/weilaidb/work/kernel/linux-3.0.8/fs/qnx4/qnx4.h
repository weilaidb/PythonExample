#define QNX4_DEBUG 0
#if QNX4_DEBUG
#define QNX4DEBUG(X) printk X
#define QNX4DEBUG(X) (void) 0
struct qnx4_sb_info ;
struct qnx4_inode_info ;
extern struct inode *qnx4_iget(struct super_block *, unsigned long);
extern struct dentry *qnx4_lookup(struct inode *dir, struct dentry *dentry, struct nameidata *nd);
extern unsigned long qnx4_count_free_blocks(struct super_block *sb);
extern unsigned long qnx4_block_map(struct inode *inode, long iblock);
extern struct buffer_head *qnx4_bread(struct inode *, int, int);
extern const struct inode_operations qnx4_dir_inode_operations;
extern const struct file_operations qnx4_dir_operations;
extern int qnx4_is_free(struct super_block *sb, long block);
static inline struct qnx4_sb_info *qnx4_sb(struct super_block *sb)
static inline struct qnx4_inode_info *qnx4_i(struct inode *inode)
static inline struct qnx4_inode_entry *qnx4_raw_inode(struct inode *inode)
