#define OCFS2_SYMLINK_H
extern const struct inode_operations ocfs2_symlink_inode_operations;
extern const struct inode_operations ocfs2_fast_symlink_inode_operations;
static inline int ocfs2_inode_is_fast_symlink(struct inode *inode)
