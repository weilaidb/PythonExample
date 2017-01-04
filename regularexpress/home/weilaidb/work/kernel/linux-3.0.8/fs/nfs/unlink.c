struct nfs_unlinkdata ;
static void
nfs_free_unlinkdata(struct nfs_unlinkdata *data)
#define NAME_ALLOC_LEN(len)	((len+16) & ~15)
static int nfs_copy_dname(struct dentry *dentry, struct nfs_unlinkdata *data)
static void nfs_free_dname(struct nfs_unlinkdata *data)
static void nfs_dec_sillycount(struct inode *dir)
static void nfs_async_unlink_done(struct rpc_task *task, void *calldata)
static void nfs_async_unlink_release(void *calldata)
#if defined(CONFIG_NFS_V4_1)
void nfs_unlink_prepare(struct rpc_task *task, void *calldata)
static const struct rpc_call_ops nfs_unlink_ops = ;
static int nfs_do_call_unlink(struct dentry *parent, struct inode *dir, struct nfs_unlinkdata *data)
static int nfs_call_unlink(struct dentry *dentry, struct nfs_unlinkdata *data)
void nfs_block_sillyrename(struct dentry *dentry)
void nfs_unblock_sillyrename(struct dentry *dentry)
static int
nfs_async_unlink(struct inode *dir, struct dentry *dentry)
void
nfs_complete_unlink(struct dentry *dentry, struct inode *inode)
static void
nfs_cancel_async_unlink(struct dentry *dentry)
struct nfs_renamedata ;
static void nfs_async_rename_done(struct rpc_task *task, void *calldata)
static void nfs_async_rename_release(void *calldata)
#if defined(CONFIG_NFS_V4_1)
static void nfs_rename_prepare(struct rpc_task *task, void *calldata)
static const struct rpc_call_ops nfs_rename_ops = ;
static struct rpc_task *
nfs_async_rename(struct inode *old_dir, struct inode *new_dir,
struct dentry *old_dentry, struct dentry *new_dentry)
int
nfs_sillyrename(struct inode *dir, struct dentry *dentry)
