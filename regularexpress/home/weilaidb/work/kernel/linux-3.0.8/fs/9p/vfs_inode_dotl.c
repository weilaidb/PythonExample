static int
v9fs_vfs_mknod_dotl(struct inode *dir, struct dentry *dentry, int omode,
dev_t rdev);
static gid_t v9fs_get_fsgid_for_create(struct inode *dir_inode)
static struct dentry *v9fs_dentry_from_dir_inode(struct inode *inode)
static int v9fs_test_inode_dotl(struct inode *inode, void *data)
static int v9fs_test_new_inode_dotl(struct inode *inode, void *data)
static int v9fs_set_inode_dotl(struct inode *inode,  void *data)
static struct inode *v9fs_qid_iget_dotl(struct super_block *sb,
struct p9_qid *qid,
struct p9_fid *fid,
struct p9_stat_dotl *st,
int new)
struct inode *
v9fs_inode_from_fid_dotl(struct v9fs_session_info *v9ses, struct p9_fid *fid,
struct super_block *sb, int new)
struct dotl_openflag_map ;
static int v9fs_mapped_dotl_flags(int flags)
int v9fs_open_to_dotl_flags(int flags)
static int
v9fs_vfs_create_dotl(struct inode *dir, struct dentry *dentry, int omode,
struct nameidata *nd)
static int v9fs_vfs_mkdir_dotl(struct inode *dir,
struct dentry *dentry, int omode)
static int
v9fs_vfs_getattr_dotl(struct vfsmount *mnt, struct dentry *dentry,
struct kstat *stat)
int v9fs_vfs_setattr_dotl(struct dentry *dentry, struct iattr *iattr)
void
v9fs_stat2inode_dotl(struct p9_stat_dotl *stat, struct inode *inode)
static int
v9fs_vfs_symlink_dotl(struct inode *dir, struct dentry *dentry,
const char *symname)
static int
v9fs_vfs_link_dotl(struct dentry *old_dentry, struct inode *dir,
struct dentry *dentry)
static int
v9fs_vfs_mknod_dotl(struct inode *dir, struct dentry *dentry, int omode,
dev_t rdev)
static void *
v9fs_vfs_follow_link_dotl(struct dentry *dentry, struct nameidata *nd)
int v9fs_refresh_inode_dotl(struct p9_fid *fid, struct inode *inode)
const struct inode_operations v9fs_dir_inode_operations_dotl = ;
const struct inode_operations v9fs_file_inode_operations_dotl = ;
const struct inode_operations v9fs_symlink_inode_operations_dotl = ;
