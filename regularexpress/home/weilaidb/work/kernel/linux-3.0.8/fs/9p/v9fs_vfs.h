#define FS_9P_V9FS_VFS_H
#define P9_LOCK_TIMEOUT (30*HZ)
extern struct file_system_type v9fs_fs_type;
extern const struct address_space_operations v9fs_addr_operations;
extern const struct file_operations v9fs_file_operations;
extern const struct file_operations v9fs_file_operations_dotl;
extern const struct file_operations v9fs_dir_operations;
extern const struct file_operations v9fs_dir_operations_dotl;
extern const struct dentry_operations v9fs_dentry_operations;
extern const struct dentry_operations v9fs_cached_dentry_operations;
extern const struct file_operations v9fs_cached_file_operations;
extern const struct file_operations v9fs_cached_file_operations_dotl;
extern struct kmem_cache *v9fs_inode_cache;
struct inode *v9fs_alloc_inode(struct super_block *sb);
void v9fs_destroy_inode(struct inode *inode);
struct inode *v9fs_get_inode(struct super_block *sb, int mode, dev_t);
int v9fs_init_inode(struct v9fs_session_info *v9ses,
struct inode *inode, int mode, dev_t);
void v9fs_evict_inode(struct inode *inode);
ino_t v9fs_qid2ino(struct p9_qid *qid);
void v9fs_stat2inode(struct p9_wstat *, struct inode *, struct super_block *);
void v9fs_stat2inode_dotl(struct p9_stat_dotl *, struct inode *);
int v9fs_dir_release(struct inode *inode, struct file *filp);
int v9fs_file_open(struct inode *inode, struct file *file);
void v9fs_inode2stat(struct inode *inode, struct p9_wstat *stat);
int v9fs_uflags2omode(int uflags, int extended);
ssize_t v9fs_file_readn(struct file *, char *, char __user *, u32, u64);
ssize_t v9fs_fid_readn(struct p9_fid *, char *, char __user *, u32, u64);
void v9fs_blank_wstat(struct p9_wstat *wstat);
int v9fs_vfs_setattr_dotl(struct dentry *, struct iattr *);
int v9fs_file_fsync_dotl(struct file *filp, int datasync);
ssize_t v9fs_file_write_internal(struct inode *, struct p9_fid *,
const char __user *, size_t, loff_t *, int);
int v9fs_refresh_inode(struct p9_fid *fid, struct inode *inode);
int v9fs_refresh_inode_dotl(struct p9_fid *fid, struct inode *inode);
static inline void v9fs_invalidate_inode_attr(struct inode *inode)
int v9fs_open_to_dotl_flags(int flags);
