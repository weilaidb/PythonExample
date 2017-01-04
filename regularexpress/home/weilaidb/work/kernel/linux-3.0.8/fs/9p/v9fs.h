#define FS_9P_V9FS_H
#define	V9FS_ACCESS_ANY (V9FS_ACCESS_SINGLE | \
V9FS_ACCESS_USER |   \
V9FS_ACCESS_CLIENT)
#define V9FS_ACCESS_MASK V9FS_ACCESS_ANY
#define V9FS_ACL_MASK V9FS_POSIX_ACL
enum p9_session_flags ;
enum p9_cache_modes ;
struct v9fs_session_info ;
#define V9FS_INO_INVALID_ATTR 0x01
struct v9fs_inode ;
static inline struct v9fs_inode *V9FS_I(const struct inode *inode)
struct p9_fid *v9fs_session_init(struct v9fs_session_info *, const char *,
char *);
extern void v9fs_session_close(struct v9fs_session_info *v9ses);
extern void v9fs_session_cancel(struct v9fs_session_info *v9ses);
extern void v9fs_session_begin_cancel(struct v9fs_session_info *v9ses);
extern struct dentry *v9fs_vfs_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nameidata);
extern int v9fs_vfs_unlink(struct inode *i, struct dentry *d);
extern int v9fs_vfs_rmdir(struct inode *i, struct dentry *d);
extern int v9fs_vfs_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry);
extern void v9fs_vfs_put_link(struct dentry *dentry, struct nameidata *nd,
void *p);
extern struct inode *v9fs_inode_from_fid(struct v9fs_session_info *v9ses,
struct p9_fid *fid,
struct super_block *sb, int new);
extern const struct inode_operations v9fs_dir_inode_operations_dotl;
extern const struct inode_operations v9fs_file_inode_operations_dotl;
extern const struct inode_operations v9fs_symlink_inode_operations_dotl;
extern struct inode *v9fs_inode_from_fid_dotl(struct v9fs_session_info *v9ses,
struct p9_fid *fid,
struct super_block *sb, int new);
#define V9FS_PORT	564
#define V9FS_DEFUSER	"nobody"
#define V9FS_DEFANAME	""
#define V9FS_DEFUID	(-2)
#define V9FS_DEFGID	(-2)
static inline struct v9fs_session_info *v9fs_inode2v9ses(struct inode *inode)
static inline struct v9fs_session_info *v9fs_dentry2v9ses(struct dentry *dentry)
static inline int v9fs_proto_dotu(struct v9fs_session_info *v9ses)
static inline int v9fs_proto_dotl(struct v9fs_session_info *v9ses)
static inline struct inode *
v9fs_get_inode_from_fid(struct v9fs_session_info *v9ses, struct p9_fid *fid,
struct super_block *sb)
static inline struct inode *
v9fs_get_new_inode_from_fid(struct v9fs_session_info *v9ses, struct p9_fid *fid,
struct super_block *sb)
