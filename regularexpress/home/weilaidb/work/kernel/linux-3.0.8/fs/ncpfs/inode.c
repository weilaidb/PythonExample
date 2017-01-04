#define NCP_DEFAULT_FILE_MODE 0600
#define NCP_DEFAULT_DIR_MODE 0700
#define NCP_DEFAULT_TIME_OUT 10
#define NCP_DEFAULT_RETRY_COUNT 20
static void ncp_evict_inode(struct inode *);
static void ncp_put_super(struct super_block *);
static int  ncp_statfs(struct dentry *, struct kstatfs *);
static int  ncp_show_options(struct seq_file *, struct vfsmount *);
static struct kmem_cache * ncp_inode_cachep;
static struct inode *ncp_alloc_inode(struct super_block *sb)
static void ncp_i_callback(struct rcu_head *head)
static void ncp_destroy_inode(struct inode *inode)
static void init_once(void *foo)
static int init_inodecache(void)
static void destroy_inodecache(void)
static int ncp_remount(struct super_block *sb, int *flags, char* data)
static const struct super_operations ncp_sops =
;
static void ncp_update_dirent(struct inode *inode, struct ncp_entry_info *nwinfo)
void ncp_update_inode(struct inode *inode, struct ncp_entry_info *nwinfo)
static void ncp_update_dates(struct inode *inode, struct nw_info_struct *nwi)
static void ncp_update_attrs(struct inode *inode, struct ncp_entry_info *nwinfo)
void ncp_update_inode2(struct inode* inode, struct ncp_entry_info *nwinfo)
static void ncp_set_attr(struct inode *inode, struct ncp_entry_info *nwinfo)
#if defined(CONFIG_NCPFS_EXTRAS) || defined(CONFIG_NCPFS_NFS_NS)
static const struct inode_operations ncp_symlink_inode_operations = ;
struct inode *
ncp_iget(struct super_block *sb, struct ncp_entry_info *info)
static void
ncp_evict_inode(struct inode *inode)
static void ncp_stop_tasks(struct ncp_server *server)
static int  ncp_show_options(struct seq_file *seq, struct vfsmount *mnt)
static const struct ncp_option ncp_opts[] = ;
static int ncp_parse_options(struct ncp_mount_data_kernel *data, char *options)
static int ncp_fill_super(struct super_block *sb, void *raw_data, int silent)
static void ncp_put_super(struct super_block *sb)
static int ncp_statfs(struct dentry *dentry, struct kstatfs *buf)
int ncp_notify_change(struct dentry *dentry, struct iattr *attr)
static struct dentry *ncp_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type ncp_fs_type = ;
static int __init init_ncp_fs(void)
static void __exit exit_ncp_fs(void)
module_init(init_ncp_fs)
module_exit(exit_ncp_fs)
MODULE_LICENSE("GPL");
