MODULE_AUTHOR("Miklos Szeredi <miklos@szeredi.hu>");
MODULE_DESCRIPTION("Filesystem in Userspace");
MODULE_LICENSE("GPL");
static struct kmem_cache *fuse_inode_cachep;
struct list_head fuse_conn_list;
DEFINE_MUTEX(fuse_mutex);
static int set_global_limit(const char *val, struct kernel_param *kp);
unsigned max_user_bgreq;
module_param_call(max_user_bgreq, set_global_limit, param_get_uint,
&max_user_bgreq, 0644);
__MODULE_PARM_TYPE(max_user_bgreq, "uint");
MODULE_PARM_DESC(max_user_bgreq,
"Global limit for the maximum number of backgrounded requests an "
"unprivileged user can set");
unsigned max_user_congthresh;
module_param_call(max_user_congthresh, set_global_limit, param_get_uint,
&max_user_congthresh, 0644);
__MODULE_PARM_TYPE(max_user_congthresh, "uint");
MODULE_PARM_DESC(max_user_congthresh,
"Global limit for the maximum congestion threshold an "
"unprivileged user can set");
#define FUSE_SUPER_MAGIC 0x65735546
#define FUSE_DEFAULT_BLKSIZE 512
#define FUSE_DEFAULT_MAX_BACKGROUND 12
#define FUSE_DEFAULT_CONGESTION_THRESHOLD (FUSE_DEFAULT_MAX_BACKGROUND * 3 / 4)
struct fuse_mount_data ;
struct fuse_forget_link *fuse_alloc_forget()
static struct inode *fuse_alloc_inode(struct super_block *sb)
static void fuse_i_callback(struct rcu_head *head)
static void fuse_destroy_inode(struct inode *inode)
static void fuse_evict_inode(struct inode *inode)
static int fuse_remount_fs(struct super_block *sb, int *flags, char *data)
void fuse_change_attributes_common(struct inode *inode, struct fuse_attr *attr,
u64 attr_valid)
void fuse_change_attributes(struct inode *inode, struct fuse_attr *attr,
u64 attr_valid, u64 attr_version)
static void fuse_init_inode(struct inode *inode, struct fuse_attr *attr)
int fuse_inode_eq(struct inode *inode, void *_nodeidp)
static int fuse_inode_set(struct inode *inode, void *_nodeidp)
struct inode *fuse_iget(struct super_block *sb, u64 nodeid,
int generation, struct fuse_attr *attr,
u64 attr_valid, u64 attr_version)
int fuse_reverse_inval_inode(struct super_block *sb, u64 nodeid,
loff_t offset, loff_t len)
static void fuse_umount_begin(struct super_block *sb)
static void fuse_send_destroy(struct fuse_conn *fc)
static void fuse_bdi_destroy(struct fuse_conn *fc)
void fuse_conn_kill(struct fuse_conn *fc)
EXPORT_SYMBOL_GPL(fuse_conn_kill);
static void fuse_put_super(struct super_block *sb)
static void convert_fuse_statfs(struct kstatfs *stbuf, struct fuse_kstatfs *attr)
static int fuse_statfs(struct dentry *dentry, struct kstatfs *buf)
enum ;
static const match_table_t tokens = ;
static int parse_fuse_opt(char *opt, struct fuse_mount_data *d, int is_bdev)
static int fuse_show_options(struct seq_file *m, struct vfsmount *mnt)
void fuse_conn_init(struct fuse_conn *fc)
EXPORT_SYMBOL_GPL(fuse_conn_init);
void fuse_conn_put(struct fuse_conn *fc)
EXPORT_SYMBOL_GPL(fuse_conn_put);
struct fuse_conn *fuse_conn_get(struct fuse_conn *fc)
EXPORT_SYMBOL_GPL(fuse_conn_get);
static struct inode *fuse_get_root_inode(struct super_block *sb, unsigned mode)
struct fuse_inode_handle ;
static struct dentry *fuse_get_dentry(struct super_block *sb,
struct fuse_inode_handle *handle)
static int fuse_encode_fh(struct dentry *dentry, u32 *fh, int *max_len,
int connectable)
static struct dentry *fuse_fh_to_dentry(struct super_block *sb,
struct fid *fid, int fh_len, int fh_type)
static struct dentry *fuse_fh_to_parent(struct super_block *sb,
struct fid *fid, int fh_len, int fh_type)
static struct dentry *fuse_get_parent(struct dentry *child)
static const struct export_operations fuse_export_operations = ;
static const struct super_operations fuse_super_operations = ;
static void sanitize_global_limit(unsigned *limit)
static int set_global_limit(const char *val, struct kernel_param *kp)
static void process_init_limits(struct fuse_conn *fc, struct fuse_init_out *arg)
static void process_init_reply(struct fuse_conn *fc, struct fuse_req *req)
static void fuse_send_init(struct fuse_conn *fc, struct fuse_req *req)
static void fuse_free_conn(struct fuse_conn *fc)
static int fuse_bdi_init(struct fuse_conn *fc, struct super_block *sb)
static int fuse_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *fuse_mount(struct file_system_type *fs_type,
int flags, const char *dev_name,
void *raw_data)
static void fuse_kill_sb_anon(struct super_block *sb)
static struct file_system_type fuse_fs_type = ;
static struct dentry *fuse_mount_blk(struct file_system_type *fs_type,
int flags, const char *dev_name,
void *raw_data)
static void fuse_kill_sb_blk(struct super_block *sb)
static struct file_system_type fuseblk_fs_type = ;
static inline int register_fuseblk(void)
static inline void unregister_fuseblk(void)
static inline int register_fuseblk(void)
static inline void unregister_fuseblk(void)
static void fuse_inode_init_once(void *foo)
static int __init fuse_fs_init(void)
static void fuse_fs_cleanup(void)
static struct kobject *fuse_kobj;
static struct kobject *connections_kobj;
static int fuse_sysfs_init(void)
static void fuse_sysfs_cleanup(void)
static int __init fuse_init(void)
static void __exit fuse_exit(void)
module_init(fuse_init);
module_exit(fuse_exit);
