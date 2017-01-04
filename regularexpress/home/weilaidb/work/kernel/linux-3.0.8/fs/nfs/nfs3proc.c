#define NFSDBG_FACILITY		NFSDBG_PROC
static int
nfs3_rpc_wrapper(struct rpc_clnt *clnt, struct rpc_message *msg, int flags)
#define rpc_call_sync(clnt, msg, flags)	nfs3_rpc_wrapper(clnt, msg, flags)
static int
nfs3_async_handle_jukebox(struct rpc_task *task, struct inode *inode)
static int
do_proc_get_root(struct rpc_clnt *client, struct nfs_fh *fhandle,
struct nfs_fsinfo *info)
static int
nfs3_proc_get_root(struct nfs_server *server, struct nfs_fh *fhandle,
struct nfs_fsinfo *info)
static int
nfs3_proc_getattr(struct nfs_server *server, struct nfs_fh *fhandle,
struct nfs_fattr *fattr)
static int
nfs3_proc_setattr(struct dentry *dentry, struct nfs_fattr *fattr,
struct iattr *sattr)
static int
nfs3_proc_lookup(struct rpc_clnt *clnt, struct inode *dir, struct qstr *name,
struct nfs_fh *fhandle, struct nfs_fattr *fattr)
static int nfs3_proc_access(struct inode *inode, struct nfs_access_entry *entry)
static int nfs3_proc_readlink(struct inode *inode, struct page *page,
unsigned int pgbase, unsigned int pglen)
struct nfs3_createdata ;
static struct nfs3_createdata *nfs3_alloc_createdata(void)
static int nfs3_do_create(struct inode *dir, struct dentry *dentry, struct nfs3_createdata *data)
static void nfs3_free_createdata(struct nfs3_createdata *data)
static int
nfs3_proc_create(struct inode *dir, struct dentry *dentry, struct iattr *sattr,
int flags, struct nfs_open_context *ctx)
static int
nfs3_proc_remove(struct inode *dir, struct qstr *name)
static void
nfs3_proc_unlink_setup(struct rpc_message *msg, struct inode *dir)
static int
nfs3_proc_unlink_done(struct rpc_task *task, struct inode *dir)
static void
nfs3_proc_rename_setup(struct rpc_message *msg, struct inode *dir)
static int
nfs3_proc_rename_done(struct rpc_task *task, struct inode *old_dir,
struct inode *new_dir)
static int
nfs3_proc_rename(struct inode *old_dir, struct qstr *old_name,
struct inode *new_dir, struct qstr *new_name)
static int
nfs3_proc_link(struct inode *inode, struct inode *dir, struct qstr *name)
static int
nfs3_proc_symlink(struct inode *dir, struct dentry *dentry, struct page *page,
unsigned int len, struct iattr *sattr)
static int
nfs3_proc_mkdir(struct inode *dir, struct dentry *dentry, struct iattr *sattr)
static int
nfs3_proc_rmdir(struct inode *dir, struct qstr *name)
static int
nfs3_proc_readdir(struct dentry *dentry, struct rpc_cred *cred,
u64 cookie, struct page **pages, unsigned int count, int plus)
static int
nfs3_proc_mknod(struct inode *dir, struct dentry *dentry, struct iattr *sattr,
dev_t rdev)
static int
nfs3_proc_statfs(struct nfs_server *server, struct nfs_fh *fhandle,
struct nfs_fsstat *stat)
static int
do_proc_fsinfo(struct rpc_clnt *client, struct nfs_fh *fhandle,
struct nfs_fsinfo *info)
static int
nfs3_proc_fsinfo(struct nfs_server *server, struct nfs_fh *fhandle,
struct nfs_fsinfo *info)
static int
nfs3_proc_pathconf(struct nfs_server *server, struct nfs_fh *fhandle,
struct nfs_pathconf *info)
static int nfs3_read_done(struct rpc_task *task, struct nfs_read_data *data)
static void nfs3_proc_read_setup(struct nfs_read_data *data, struct rpc_message *msg)
static int nfs3_write_done(struct rpc_task *task, struct nfs_write_data *data)
static void nfs3_proc_write_setup(struct nfs_write_data *data, struct rpc_message *msg)
static int nfs3_commit_done(struct rpc_task *task, struct nfs_write_data *data)
static void nfs3_proc_commit_setup(struct nfs_write_data *data, struct rpc_message *msg)
static int
nfs3_proc_lock(struct file *filp, int cmd, struct file_lock *fl)
const struct nfs_rpc_ops nfs_v3_clientops = ;
