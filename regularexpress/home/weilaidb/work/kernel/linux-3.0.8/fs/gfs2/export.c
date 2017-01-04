#define GFS2_SMALL_FH_SIZE 4
#define GFS2_LARGE_FH_SIZE 8
#define GFS2_OLD_FH_SIZE 10
static int gfs2_encode_fh(struct dentry *dentry, __u32 *p, int *len,
int connectable)
struct get_name_filldir ;
static int get_name_filldir(void *opaque, const char *name, int length,
loff_t offset, u64 inum, unsigned int type)
static int gfs2_get_name(struct dentry *parent, char *name,
struct dentry *child)
static struct dentry *gfs2_get_parent(struct dentry *child)
static struct dentry *gfs2_get_dentry(struct super_block *sb,
struct gfs2_inum_host *inum)
static struct dentry *gfs2_fh_to_dentry(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type)
static struct dentry *gfs2_fh_to_parent(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type)
const struct export_operations gfs2_export_ops = ;
