extern int __devcgroup_inode_permission(struct inode *inode, int mask);
extern int devcgroup_inode_mknod(int mode, dev_t dev);
static inline int devcgroup_inode_permission(struct inode *inode, int mask)
static inline int devcgroup_inode_permission(struct inode *inode, int mask)
static inline int devcgroup_inode_mknod(int mode, dev_t dev)
