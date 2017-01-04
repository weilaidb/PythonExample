#define _LINUX_FS_STACK_H
extern void fsstack_copy_attr_all(struct inode *dest, const struct inode *src);
extern void fsstack_copy_inode_size(struct inode *dst, struct inode *src);
static inline void fsstack_copy_attr_atime(struct inode *dest,
const struct inode *src)
static inline void fsstack_copy_attr_times(struct inode *dest,
const struct inode *src)
