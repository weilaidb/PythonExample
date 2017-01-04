#define OCFS2_DCACHE_H
extern const struct dentry_operations ocfs2_dentry_ops;
struct ocfs2_dentry_lock ;
int ocfs2_dentry_attach_lock(struct dentry *dentry, struct inode *inode,
u64 parent_blkno);
extern spinlock_t dentry_list_lock;
void ocfs2_dentry_lock_put(struct ocfs2_super *osb,
struct ocfs2_dentry_lock *dl);
void ocfs2_drop_dl_inodes(struct work_struct *work);
void ocfs2_drop_all_dl_inodes(struct ocfs2_super *osb);
struct dentry *ocfs2_find_local_alias(struct inode *inode, u64 parent_blkno,
int skip_unhashed);
void ocfs2_dentry_move(struct dentry *dentry, struct dentry *target,
struct inode *old_dir, struct inode *new_dir);
extern spinlock_t dentry_attach_lock;
void ocfs2_dentry_attach_gen(struct dentry *dentry);
