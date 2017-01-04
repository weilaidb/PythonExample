#define NFSDBG_FACILITY		NFSDBG_PROC
static int
nfs_rpc_wrapper(struct rpc_clnt *clnt, struct rpc_message *msg, int flags)
#define rpc_call_sync(clnt, msg, flags)	nfs_rpc_wrapper(clnt, msg, flags)
static int
nfs_async_handle_expired_key(struct rpc_task *task)
static int
nfs_proc_get_root(struct nfs_server *server, struct nfs_fh *fhandle,
struct nfs_fsinfo *info)
static int
nfs_proc_getattr(struct nfs_server *server, struct nfs_fh *fhandle,
struct nfs_fattr *fattr)
static int
nfs_proc_setattr(struct dentry *dentry, struct nfs_fattr *fattr,
struct iattr *sattr)
static int
nfs_proc_lookup(struct rpc_clnt *clnt, struct inode *dir, struct qstr *name,
struct nfs_fh *fhandle, struct nfs_fattr *fattr)
static int nfs_proc_readlink(struct inode *inode, struct page *page,
unsigned int pgbase, unsigned int pglen)
struct nfs_createdata ;
static struct nfs_createdata *nfs_alloc_createdata(struct inode *dir,
struct dentry *dentry, struct iattr *sattr)
;
static void nfs_free_createdata(const struct nfs_createdata *data)
static int
nfs_proc_create(struct inode *dir, struct dentry *dentry, struct iattr *sattr,
int flags, struct nfs_open_context *ctx)
static int
nfs_proc_mknod(struct inode *dir, struct dentry *dentry, struct iattr *sattr,
dev_t rdev)
static int
nfs_proc_remove(struct inode *dir, struct qstr *name)
static void
nfs_proc_unlink_setup(struct rpc_message *msg, struct inode *dir)
static int nfs_proc_unlink_done(struct rpc_task *task, struct inode *dir)
static void
nfs_proc_rename_setup(struct rpc_message *msg, struct inode *dir)
static int
nfs_proc_rename_done(struct rpc_task *task, struct inode *old_dir,
struct inode *new_dir)
static int
nfs_proc_rename(struct inode *old_dir, struct qstr *old_name,
struct inode *new_dir, struct qstr *new_name)
static int
nfs_proc_link(struct inode *inode, struct inode *dir, struct qstr *name)
static int
nfs_proc_symlink(struct inode *dir, struct dentry *dentry, struct page *page,
unsigned int len, struct iattr *sattr)
static int
nfs_proc_mkdir(struct inode *dir, struct dentry *dentry, struct iattr *sattr)
static int
nfs_proc_rmdir(struct inode *dir, struct qstr *name)
static int
nfs_proc_readdir(struct dentry *dentry, struct rpc_cred *cred,
u64 cookie, struct page **pages, unsigned int count, int plus)
static int
nfs_proc_statfs(struct nfs_server *server, struct nfs_fh *fhandle,
struct nfs_fsstat *stat)
static int
nfs_proc_fsinfo(struct nfs_server *server, struct nfs_fh *fhandle,
struct nfs_fsinfo *info)
static int
nfs_proc_pathconf(struct nfs_server *server, struct nfs_fh *fhandle,
struct nfs_pathconf *info)
static int nfs_read_done(struct rpc_task *task, struct nfs_read_data *data)
static void nfs_proc_read_setup(struct nfs_read_data *data, struct rpc_message *msg)
static int nfs_write_done(struct rpc_task *task, struct nfs_write_data *data)
static void nfs_proc_write_setup(struct nfs_write_data *data, struct rpc_message *msg)
static void
nfs_proc_commit_setup(struct nfs_write_data *data, struct rpc_message *msg)
static int
nfs_proc_lock(struct file *filp, int cmd, struct file_lock *fl)
#define NFS_LOCK32_OFFSET_MAX ((__s32)0x7fffffffUL)
static int nfs_lock_check_bounds(const struct file_lock *fl)
const struct nfs_rpc_ops nfs_v2_clientops = ;
