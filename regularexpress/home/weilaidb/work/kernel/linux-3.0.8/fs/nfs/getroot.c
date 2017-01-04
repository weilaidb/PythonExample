#define NFSDBG_FACILITY		NFSDBG_CLIENT
static int nfs_superblock_set_dummy_root(struct super_block *sb, struct inode *inode)
struct dentry *nfs_get_root(struct super_block *sb, struct nfs_fh *mntfh,
const char *devname)
int nfs4_get_rootfh(struct nfs_server *server, struct nfs_fh *mntfh)
struct dentry *nfs4_get_root(struct super_block *sb, struct nfs_fh *mntfh,
const char *devname)
