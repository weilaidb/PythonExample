#define BTRFS_FID_SIZE_NON_CONNECTABLE (offsetof(struct btrfs_fid, \
parent_objectid) / 4)
#define BTRFS_FID_SIZE_CONNECTABLE (offsetof(struct btrfs_fid, \
parent_root_objectid) / 4)
#define BTRFS_FID_SIZE_CONNECTABLE_ROOT (sizeof(struct btrfs_fid) / 4)
static int btrfs_encode_fh(struct dentry *dentry, u32 *fh, int *max_len,
int connectable)
static struct dentry *btrfs_get_dentry(struct super_block *sb, u64 objectid,
u64 root_objectid, u32 generation,
int check_generation)
static struct dentry *btrfs_fh_to_parent(struct super_block *sb, struct fid *fh,
int fh_len, int fh_type)
static struct dentry *btrfs_fh_to_dentry(struct super_block *sb, struct fid *fh,
int fh_len, int fh_type)
static struct dentry *btrfs_get_parent(struct dentry *child)
static int btrfs_get_name(struct dentry *parent, char *name,
struct dentry *child)
const struct export_operations btrfs_export_ops = ;
