static struct vfsmount *rpc_mnt __read_mostly;
static int rpc_mount_count;
static struct file_system_type rpc_pipe_fs_type;
static struct kmem_cache *rpc_inode_cachep __read_mostly;
#define RPC_UPCALL_TIMEOUT (30*HZ)
static void rpc_purge_list(struct rpc_inode *rpci, struct list_head *head,
void (*destroy_msg)(struct rpc_pipe_msg *), int err)
static void
rpc_timeout_upcall_queue(struct work_struct *work)
int
rpc_queue_upcall(struct inode *inode, struct rpc_pipe_msg *msg)
EXPORT_SYMBOL_GPL(rpc_queue_upcall);
static inline void
rpc_inode_setowner(struct inode *inode, void *private)
static void
rpc_close_pipes(struct inode *inode)
static struct inode *
rpc_alloc_inode(struct super_block *sb)
static void
rpc_i_callback(struct rcu_head *head)
static void
rpc_destroy_inode(struct inode *inode)
static int
rpc_pipe_open(struct inode *inode, struct file *filp)
static int
rpc_pipe_release(struct inode *inode, struct file *filp)
static ssize_t
rpc_pipe_read(struct file *filp, char __user *buf, size_t len, loff_t *offset)
static ssize_t
rpc_pipe_write(struct file *filp, const char __user *buf, size_t len, loff_t *offset)
static unsigned int
rpc_pipe_poll(struct file *filp, struct poll_table_struct *wait)
static long
rpc_pipe_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
static const struct file_operations rpc_pipe_fops = ;
static int
rpc_show_info(struct seq_file *m, void *v)
static int
rpc_info_open(struct inode *inode, struct file *file)
static int
rpc_info_release(struct inode *inode, struct file *file)
static const struct file_operations rpc_info_operations = ;
struct rpc_filelist ;
struct vfsmount *rpc_get_mount(void)
EXPORT_SYMBOL_GPL(rpc_get_mount);
void rpc_put_mount(void)
EXPORT_SYMBOL_GPL(rpc_put_mount);
static int rpc_delete_dentry(const struct dentry *dentry)
static const struct dentry_operations rpc_dentry_operations = ;
static struct inode *
rpc_get_inode(struct super_block *sb, umode_t mode)
static int __rpc_create_common(struct inode *dir, struct dentry *dentry,
umode_t mode,
const struct file_operations *i_fop,
void *private)
static int __rpc_create(struct inode *dir, struct dentry *dentry,
umode_t mode,
const struct file_operations *i_fop,
void *private)
static int __rpc_mkdir(struct inode *dir, struct dentry *dentry,
umode_t mode,
const struct file_operations *i_fop,
void *private)
static int __rpc_mkpipe(struct inode *dir, struct dentry *dentry,
umode_t mode,
const struct file_operations *i_fop,
void *private,
const struct rpc_pipe_ops *ops,
int flags)
static int __rpc_rmdir(struct inode *dir, struct dentry *dentry)
static int __rpc_unlink(struct inode *dir, struct dentry *dentry)
static int __rpc_rmpipe(struct inode *dir, struct dentry *dentry)
static struct dentry *__rpc_lookup_create(struct dentry *parent,
struct qstr *name)
static struct dentry *__rpc_lookup_create_exclusive(struct dentry *parent,
struct qstr *name)
static void __rpc_depopulate(struct dentry *parent,
const struct rpc_filelist *files,
int start, int eof)
static void rpc_depopulate(struct dentry *parent,
const struct rpc_filelist *files,
int start, int eof)
static int rpc_populate(struct dentry *parent,
const struct rpc_filelist *files,
int start, int eof,
void *private)
static struct dentry *rpc_mkdir_populate(struct dentry *parent,
struct qstr *name, umode_t mode, void *private,
int (*populate)(struct dentry *, void *), void *args_populate)
static int rpc_rmdir_depopulate(struct dentry *dentry,
void (*depopulate)(struct dentry *))
struct dentry *rpc_mkpipe(struct dentry *parent, const char *name,
void *private, const struct rpc_pipe_ops *ops,
int flags)
EXPORT_SYMBOL_GPL(rpc_mkpipe);
int
rpc_unlink(struct dentry *dentry)
EXPORT_SYMBOL_GPL(rpc_unlink);
enum ;
static const struct rpc_filelist authfiles[] = ;
static int rpc_clntdir_populate(struct dentry *dentry, void *private)
static void rpc_clntdir_depopulate(struct dentry *dentry)
struct dentry *rpc_create_client_dir(struct dentry *dentry,
struct qstr *name,
struct rpc_clnt *rpc_client)
int rpc_remove_client_dir(struct dentry *dentry)
static const struct rpc_filelist cache_pipefs_files[3] = ;
static int rpc_cachedir_populate(struct dentry *dentry, void *private)
static void rpc_cachedir_depopulate(struct dentry *dentry)
struct dentry *rpc_create_cache_dir(struct dentry *parent, struct qstr *name,
mode_t umode, struct cache_detail *cd)
void rpc_remove_cache_dir(struct dentry *dentry)
static const struct super_operations s_ops = ;
#define RPCAUTH_GSSMAGIC 0x67596969
enum ;
static const struct rpc_filelist files[] = ;
static int
rpc_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *
rpc_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type rpc_pipe_fs_type = ;
static void
init_once(void *foo)
int register_rpc_pipefs(void)
void unregister_rpc_pipefs(void)
