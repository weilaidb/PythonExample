struct ceph_nfs_fh  __attribute__ ((packed));
struct ceph_nfs_confh  __attribute__ ((packed));
static int ceph_encode_fh(struct dentry *dentry, u32 *rawfh, int *max_len,
int connectable)
static struct dentry *__fh_to_dentry(struct super_block *sb,
struct ceph_nfs_fh *fh)
static struct dentry *__cfh_to_dentry(struct super_block *sb,
struct ceph_nfs_confh *cfh)
static struct dentry *ceph_fh_to_dentry(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type)
static struct dentry *ceph_fh_to_parent(struct super_block *sb,
struct fid *fid,
int fh_len, int fh_type)
const struct export_operations ceph_export_ops = ;
