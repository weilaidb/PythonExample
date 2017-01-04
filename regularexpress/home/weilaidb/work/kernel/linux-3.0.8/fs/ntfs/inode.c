int ntfs_test_inode(struct inode *vi, ntfs_attr *na)
static int ntfs_init_locked_inode(struct inode *vi, ntfs_attr *na)
typedef int (*set_t)(struct inode *, void *);
static int ntfs_read_locked_inode(struct inode *vi);
static int ntfs_read_locked_attr_inode(struct inode *base_vi, struct inode *vi);
static int ntfs_read_locked_index_inode(struct inode *base_vi,
struct inode *vi);
struct inode *ntfs_iget(struct super_block *sb, unsigned long mft_no)
struct inode *ntfs_attr_iget(struct inode *base_vi, ATTR_TYPE type,
ntfschar *name, u32 name_len)
struct inode *ntfs_index_iget(struct inode *base_vi, ntfschar *name,
u32 name_len)
struct inode *ntfs_alloc_big_inode(struct super_block *sb)
static void ntfs_i_callback(struct rcu_head *head)
void ntfs_destroy_big_inode(struct inode *inode)
static inline ntfs_inode *ntfs_alloc_extent_inode(void)
static void ntfs_destroy_extent_inode(ntfs_inode *ni)
static struct lock_class_key attr_list_rl_lock_class;
void __ntfs_init_inode(struct super_block *sb, ntfs_inode *ni)
static struct lock_class_key extent_inode_mrec_lock_key;
inline ntfs_inode *ntfs_new_extent_inode(struct super_block *sb,
unsigned long mft_no)
static int ntfs_is_extended_system_file(ntfs_attr_search_ctx *ctx)
static int ntfs_read_locked_inode(struct inode *vi)
static int ntfs_read_locked_attr_inode(struct inode *base_vi, struct inode *vi)
static int ntfs_read_locked_index_inode(struct inode *base_vi, struct inode *vi)
static struct lock_class_key mft_ni_runlist_lock_key, mft_ni_mrec_lock_key;
int ntfs_read_inode_mount(struct inode *vi)
static void __ntfs_clear_inode(ntfs_inode *ni)
void ntfs_clear_extent_inode(ntfs_inode *ni)
void ntfs_evict_big_inode(struct inode *vi)
int ntfs_show_options(struct seq_file *sf, struct vfsmount *mnt)
static const char *es = "  Leaving inconsistent metadata.  Unmount and run "
"chkdsk.";
int ntfs_truncate(struct inode *vi)
void ntfs_truncate_vfs(struct inode *vi)
int ntfs_setattr(struct dentry *dentry, struct iattr *attr)
int __ntfs_write_inode(struct inode *vi, int sync)
