#define dprintk(fmt, args...) dowhile(0)
static int get_name(struct vfsmount *mnt, struct dentry *dentry, char *name,
struct dentry *child);
static int exportfs_get_name(struct vfsmount *mnt, struct dentry *dir,
char *name, struct dentry *child)
static struct dentry *
find_acceptable_alias(struct dentry *result,
int (*acceptable)(void *context, struct dentry *dentry),
void *context)
static struct dentry *
find_disconnected_root(struct dentry *dentry)
static int
reconnect_path(struct vfsmount *mnt, struct dentry *target_dir, char *nbuf)
struct getdents_callback ;
static int filldir_one(void * __buf, const char * name, int len,
loff_t pos, u64 ino, unsigned int d_type)
static int get_name(struct vfsmount *mnt, struct dentry *dentry,
char *name, struct dentry *child)
static int export_encode_fh(struct dentry *dentry, struct fid *fid,
int *max_len, int connectable)
int exportfs_encode_fh(struct dentry *dentry, struct fid *fid, int *max_len,
int connectable)
EXPORT_SYMBOL_GPL(exportfs_encode_fh);
struct dentry *exportfs_decode_fh(struct vfsmount *mnt, struct fid *fid,
int fh_len, int fileid_type,
int (*acceptable)(void *, struct dentry *), void *context)
EXPORT_SYMBOL_GPL(exportfs_decode_fh);
MODULE_LICENSE("GPL");
