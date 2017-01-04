#define CREATE_TRACE_POINTS
static struct kmem_cache *ocfs2_inode_cachep = NULL;
struct kmem_cache *ocfs2_dquot_cachep;
struct kmem_cache *ocfs2_qf_chunk_cachep;
struct workqueue_struct *ocfs2_wq = NULL;
static struct dentry *ocfs2_debugfs_root = NULL;
MODULE_AUTHOR("Oracle");
MODULE_LICENSE("GPL");
struct mount_options
;
static int ocfs2_parse_options(struct super_block *sb, char *options,
struct mount_options *mopt,
int is_remount);
static int ocfs2_check_set_options(struct super_block *sb,
struct mount_options *options);
static int ocfs2_show_options(struct seq_file *s, struct vfsmount *mnt);
static void ocfs2_put_super(struct super_block *sb);
static int ocfs2_mount_volume(struct super_block *sb);
static int ocfs2_remount(struct super_block *sb, int *flags, char *data);
static void ocfs2_dismount_volume(struct super_block *sb, int mnt_err);
static int ocfs2_initialize_mem_caches(void);
static void ocfs2_free_mem_caches(void);
static void ocfs2_delete_osb(struct ocfs2_super *osb);
static int ocfs2_statfs(struct dentry *dentry, struct kstatfs *buf);
static int ocfs2_sync_fs(struct super_block *sb, int wait);
static int ocfs2_init_global_system_inodes(struct ocfs2_super *osb);
static int ocfs2_init_local_system_inodes(struct ocfs2_super *osb);
static void ocfs2_release_system_inodes(struct ocfs2_super *osb);
static int ocfs2_check_volume(struct ocfs2_super *osb);
static int ocfs2_verify_volume(struct ocfs2_dinode *di,
struct buffer_head *bh,
u32 sectsize,
struct ocfs2_blockcheck_stats *stats);
static int ocfs2_initialize_super(struct super_block *sb,
struct buffer_head *bh,
int sector_size,
struct ocfs2_blockcheck_stats *stats);
static int ocfs2_get_sector(struct super_block *sb,
struct buffer_head **bh,
int block,
int sect_size);
static struct inode *ocfs2_alloc_inode(struct super_block *sb);
static void ocfs2_destroy_inode(struct inode *inode);
static int ocfs2_susp_quotas(struct ocfs2_super *osb, int unsuspend);
static int ocfs2_enable_quotas(struct ocfs2_super *osb);
static void ocfs2_disable_quotas(struct ocfs2_super *osb);
static const struct super_operations ocfs2_sops = ;
enum ;
static const match_table_t tokens = ;
static int ocfs2_osb_dump(struct ocfs2_super *osb, char *buf, int len)
static int ocfs2_osb_debug_open(struct inode *inode, struct file *file)
static int ocfs2_debug_release(struct inode *inode, struct file *file)
static ssize_t ocfs2_debug_read(struct file *file, char __user *buf,
size_t nbytes, loff_t *ppos)
static int ocfs2_osb_debug_open(struct inode *inode, struct file *file)
static int ocfs2_debug_release(struct inode *inode, struct file *file)
static ssize_t ocfs2_debug_read(struct file *file, char __user *buf,
size_t nbytes, loff_t *ppos)
static const struct file_operations ocfs2_osb_debug_fops = ;
static int ocfs2_sync_fs(struct super_block *sb, int wait)
static int ocfs2_need_system_inode(struct ocfs2_super *osb, int ino)
static int ocfs2_init_global_system_inodes(struct ocfs2_super *osb)
static int ocfs2_init_local_system_inodes(struct ocfs2_super *osb)
static void ocfs2_release_system_inodes(struct ocfs2_super *osb)
static struct inode *ocfs2_alloc_inode(struct super_block *sb)
static void ocfs2_i_callback(struct rcu_head *head)
static void ocfs2_destroy_inode(struct inode *inode)
static unsigned long long ocfs2_max_file_offset(unsigned int bbits,
unsigned int cbits)
static int ocfs2_remount(struct super_block *sb, int *flags, char *data)
static int ocfs2_sb_probe(struct super_block *sb,
struct buffer_head **bh,
int *sector_size,
struct ocfs2_blockcheck_stats *stats)
static int ocfs2_verify_heartbeat(struct ocfs2_super *osb)
static int ocfs2_verify_userspace_stack(struct ocfs2_super *osb,
struct mount_options *mopt)
static int ocfs2_susp_quotas(struct ocfs2_super *osb, int unsuspend)
static int ocfs2_enable_quotas(struct ocfs2_super *osb)
static void ocfs2_disable_quotas(struct ocfs2_super *osb)
static int ocfs2_quota_on(struct super_block *sb, int type, int format_id)
static int ocfs2_quota_off(struct super_block *sb, int type)
static const struct quotactl_ops ocfs2_quotactl_ops = ;
static int ocfs2_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *ocfs2_mount(struct file_system_type *fs_type,
int flags,
const char *dev_name,
void *data)
static void ocfs2_kill_sb(struct super_block *sb)
static struct file_system_type ocfs2_fs_type = ;
static int ocfs2_check_set_options(struct super_block *sb,
struct mount_options *options)
static int ocfs2_parse_options(struct super_block *sb,
char *options,
struct mount_options *mopt,
int is_remount)
static int ocfs2_show_options(struct seq_file *s, struct vfsmount *mnt)
static int __init ocfs2_init(void)
static void __exit ocfs2_exit(void)
static void ocfs2_put_super(struct super_block *sb)
static int ocfs2_statfs(struct dentry *dentry, struct kstatfs *buf)
static void ocfs2_inode_init_once(void *data)
static int ocfs2_initialize_mem_caches(void)
static void ocfs2_free_mem_caches(void)
static int ocfs2_get_sector(struct super_block *sb,
struct buffer_head **bh,
int block,
int sect_size)
static int ocfs2_mount_volume(struct super_block *sb)
static void ocfs2_dismount_volume(struct super_block *sb, int mnt_err)
static int ocfs2_setup_osb_uuid(struct ocfs2_super *osb, const unsigned char *uuid,
unsigned uuid_bytes)
static int ocfs2_journal_addressable(struct ocfs2_super *osb)
static int ocfs2_initialize_super(struct super_block *sb,
struct buffer_head *bh,
int sector_size,
struct ocfs2_blockcheck_stats *stats)
static int ocfs2_verify_volume(struct ocfs2_dinode *di,
struct buffer_head *bh,
u32 blksz,
struct ocfs2_blockcheck_stats *stats)
static int ocfs2_check_volume(struct ocfs2_super *osb)
static void ocfs2_delete_osb(struct ocfs2_super *osb)
static void ocfs2_handle_error(struct super_block *sb)
static char error_buf[1024];
void __ocfs2_error(struct super_block *sb,
const char *function,
const char *fmt, ...)
void __ocfs2_abort(struct super_block* sb,
const char *function,
const char *fmt, ...)
void ocfs2_block_signals(sigset_t *oldset)
void ocfs2_unblock_signals(sigset_t *oldset)
module_init(ocfs2_init);
module_exit(ocfs2_exit);
