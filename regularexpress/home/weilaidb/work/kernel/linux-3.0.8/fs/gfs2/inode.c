struct gfs2_skip_data ;
static int iget_test(struct inode *inode, void *opaque)
static int iget_set(struct inode *inode, void *opaque)
struct inode *gfs2_ilookup(struct super_block *sb, u64 no_addr, int non_block)
static struct inode *gfs2_iget(struct super_block *sb, u64 no_addr,
int non_block)
static void gfs2_set_iop(struct inode *inode)
struct inode *gfs2_inode_lookup(struct super_block *sb, unsigned int type,
u64 no_addr, u64 no_formal_ino, int non_block)
struct inode *gfs2_lookup_by_inum(struct gfs2_sbd *sdp, u64 no_addr,
u64 *no_formal_ino, unsigned int blktype)
struct inode *gfs2_lookup_simple(struct inode *dip, const char *name)
struct inode *gfs2_lookupi(struct inode *dir, const struct qstr *name,
int is_root)
static int create_ok(struct gfs2_inode *dip, const struct qstr *name,
unsigned int mode)
static void munge_mode_uid_gid(struct gfs2_inode *dip, unsigned int *mode,
unsigned int *uid, unsigned int *gid)
static int alloc_dinode(struct gfs2_inode *dip, u64 *no_addr, u64 *generation)
static void gfs2_init_dir(struct buffer_head *dibh,
const struct gfs2_inode *parent)
static void init_dinode(struct gfs2_inode *dip, struct gfs2_glock *gl,
const struct gfs2_inum_host *inum, unsigned int mode,
unsigned int uid, unsigned int gid,
const u64 *generation, dev_t dev, const char *symname,
unsigned size, struct buffer_head **bhp)
static int make_dinode(struct gfs2_inode *dip, struct gfs2_glock *gl,
unsigned int mode, const struct gfs2_inum_host *inum,
const u64 *generation, dev_t dev, const char *symname,
unsigned int size, struct buffer_head **bhp)
static int link_dinode(struct gfs2_inode *dip, const struct qstr *name,
struct gfs2_inode *ip)
static int gfs2_security_init(struct gfs2_inode *dip, struct gfs2_inode *ip,
const struct qstr *qstr)
static int gfs2_create_inode(struct inode *dir, struct dentry *dentry,
unsigned int mode, dev_t dev, const char *symname,
unsigned int size)
static int gfs2_create(struct inode *dir, struct dentry *dentry,
int mode, struct nameidata *nd)
static struct dentry *gfs2_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
static int gfs2_link(struct dentry *old_dentry, struct inode *dir,
struct dentry *dentry)
static int gfs2_unlink_ok(struct gfs2_inode *dip, const struct qstr *name,
const struct gfs2_inode *ip)
static int gfs2_unlink_inode(struct gfs2_inode *dip,
const struct dentry *dentry,
struct buffer_head *bh)
static int gfs2_unlink(struct inode *dir, struct dentry *dentry)
static int gfs2_symlink(struct inode *dir, struct dentry *dentry,
const char *symname)
static int gfs2_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int gfs2_mknod(struct inode *dir, struct dentry *dentry, int mode,
dev_t dev)
static int gfs2_ok_to_move(struct gfs2_inode *this, struct gfs2_inode *to)
static int gfs2_rename(struct inode *odir, struct dentry *odentry,
struct inode *ndir, struct dentry *ndentry)
static void *gfs2_follow_link(struct dentry *dentry, struct nameidata *nd)
static void gfs2_put_link(struct dentry *dentry, struct nameidata *nd, void *p)
int gfs2_permission(struct inode *inode, int mask, unsigned int flags)
static int __gfs2_setattr_simple(struct gfs2_inode *ip, struct iattr *attr)
int gfs2_setattr_simple(struct gfs2_inode *ip, struct iattr *attr)
static int setattr_chown(struct inode *inode, struct iattr *attr)
static int gfs2_setattr(struct dentry *dentry, struct iattr *attr)
static int gfs2_getattr(struct vfsmount *mnt, struct dentry *dentry,
struct kstat *stat)
static int gfs2_setxattr(struct dentry *dentry, const char *name,
const void *data, size_t size, int flags)
static ssize_t gfs2_getxattr(struct dentry *dentry, const char *name,
void *data, size_t size)
static int gfs2_removexattr(struct dentry *dentry, const char *name)
static int gfs2_fiemap(struct inode *inode, struct fiemap_extent_info *fieinfo,
u64 start, u64 len)
const struct inode_operations gfs2_file_iops = ;
const struct inode_operations gfs2_dir_iops = ;
const struct inode_operations gfs2_symlink_iops = ;
