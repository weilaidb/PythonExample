static const struct inode_operations v9fs_dir_inode_operations;
static const struct inode_operations v9fs_dir_inode_operations_dotu;
static const struct inode_operations v9fs_file_inode_operations;
static const struct inode_operations v9fs_symlink_inode_operations;
static int unixmode2p9mode(struct v9fs_session_info *v9ses, int mode)
static int p9mode2unixmode(struct v9fs_session_info *v9ses,
struct p9_wstat *stat, dev_t *rdev)
int v9fs_uflags2omode(int uflags, int extended)
void
v9fs_blank_wstat(struct p9_wstat *wstat)
struct inode *v9fs_alloc_inode(struct super_block *sb)
static void v9fs_i_callback(struct rcu_head *head)
void v9fs_destroy_inode(struct inode *inode)
int v9fs_init_inode(struct v9fs_session_info *v9ses,
struct inode *inode, int mode, dev_t rdev)
struct inode *v9fs_get_inode(struct super_block *sb, int mode, dev_t rdev)
void v9fs_evict_inode(struct inode *inode)
static int v9fs_test_inode(struct inode *inode, void *data)
static int v9fs_test_new_inode(struct inode *inode, void *data)
static int v9fs_set_inode(struct inode *inode,  void *data)
static struct inode *v9fs_qid_iget(struct super_block *sb,
struct p9_qid *qid,
struct p9_wstat *st,
int new)
struct inode *
v9fs_inode_from_fid(struct v9fs_session_info *v9ses, struct p9_fid *fid,
struct super_block *sb, int new)
static int v9fs_remove(struct inode *dir, struct dentry *file, int rmdir)
static struct p9_fid *
v9fs_create(struct v9fs_session_info *v9ses, struct inode *dir,
struct dentry *dentry, char *extension, u32 perm, u8 mode)
static int
v9fs_vfs_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd)
static int v9fs_vfs_mkdir(struct inode *dir, struct dentry *dentry, int mode)
struct dentry *v9fs_vfs_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nameidata)
int v9fs_vfs_unlink(struct inode *i, struct dentry *d)
int v9fs_vfs_rmdir(struct inode *i, struct dentry *d)
int
v9fs_vfs_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
static int
v9fs_vfs_getattr(struct vfsmount *mnt, struct dentry *dentry,
struct kstat *stat)
static int v9fs_vfs_setattr(struct dentry *dentry, struct iattr *iattr)
void
v9fs_stat2inode(struct p9_wstat *stat, struct inode *inode,
struct super_block *sb)
ino_t v9fs_qid2ino(struct p9_qid *qid)
static int v9fs_readlink(struct dentry *dentry, char *buffer, int buflen)
static void *v9fs_vfs_follow_link(struct dentry *dentry, struct nameidata *nd)
void
v9fs_vfs_put_link(struct dentry *dentry, struct nameidata *nd, void *p)
static int v9fs_vfs_mkspecial(struct inode *dir, struct dentry *dentry,
int mode, const char *extension)
static int
v9fs_vfs_symlink(struct inode *dir, struct dentry *dentry, const char *symname)
static int
v9fs_vfs_link(struct dentry *old_dentry, struct inode *dir,
struct dentry *dentry)
static int
v9fs_vfs_mknod(struct inode *dir, struct dentry *dentry, int mode, dev_t rdev)
int v9fs_refresh_inode(struct p9_fid *fid, struct inode *inode)
static const struct inode_operations v9fs_dir_inode_operations_dotu = ;
static const struct inode_operations v9fs_dir_inode_operations = ;
static const struct inode_operations v9fs_file_inode_operations = ;
static const struct inode_operations v9fs_symlink_inode_operations = ;
