static struct dentry *
isofs_export_iget(struct super_block *sb,
unsigned long block,
unsigned long offset,
__u32 generation)
static struct dentry *isofs_export_get_parent(struct dentry *child)
static int
isofs_export_encode_fh(struct dentry *dentry,
__u32 *fh32,
int *max_len,
int connectable)
struct isofs_fid ;
static struct dentry *isofs_fh_to_dentry(struct super_block *sb,
struct fid *fid, int fh_len, int fh_type)
static struct dentry *isofs_fh_to_parent(struct super_block *sb,
struct fid *fid, int fh_len, int fh_type)
const struct export_operations isofs_export_ops = ;
