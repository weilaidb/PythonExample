static struct vfsmount *shm_mnt;
#define ENTRIES_PER_PAGE (PAGE_CACHE_SIZE/sizeof(unsigned long))
#define ENTRIES_PER_PAGEPAGE ((unsigned long long)ENTRIES_PER_PAGE*ENTRIES_PER_PAGE)
#define SHMSWP_MAX_INDEX (SHMEM_NR_DIRECT + (ENTRIES_PER_PAGEPAGE/2) * (ENTRIES_PER_PAGE+1))
#define SHMSWP_MAX_BYTES (SHMSWP_MAX_INDEX << PAGE_CACHE_SHIFT)
#define SHMEM_MAX_BYTES  min_t(unsigned long long, SHMSWP_MAX_BYTES, MAX_LFS_FILESIZE)
#define SHMEM_MAX_INDEX  ((unsigned long)((SHMEM_MAX_BYTES+1) >> PAGE_CACHE_SHIFT))
#define BLOCKS_PER_PAGE  (PAGE_CACHE_SIZE/512)
#define VM_ACCT(size)    (PAGE_CACHE_ALIGN(size) >> PAGE_SHIFT)
#define SHMEM_PAGEIN	 VM_READ
#define SHMEM_TRUNCATE	 VM_WRITE
#define LATENCY_LIMIT	 64
#define BOGO_DIRENT_SIZE 20
struct shmem_xattr ;
enum sgp_type ;
static unsigned long shmem_default_max_blocks(void)
static unsigned long shmem_default_max_inodes(void)
static int shmem_getpage(struct inode *inode, unsigned long idx,
struct page **pagep, enum sgp_type sgp, int *type);
static inline struct page *shmem_dir_alloc(gfp_t gfp_mask)
static inline void shmem_dir_free(struct page *page)
static struct page **shmem_dir_map(struct page *page)
static inline void shmem_dir_unmap(struct page **dir)
static swp_entry_t *shmem_swp_map(struct page *page)
static inline void shmem_swp_balance_unmap(void)
static inline void shmem_swp_unmap(swp_entry_t *entry)
static inline struct shmem_sb_info *SHMEM_SB(struct super_block *sb)
static inline int shmem_acct_size(unsigned long flags, loff_t size)
static inline void shmem_unacct_size(unsigned long flags, loff_t size)
static inline int shmem_acct_block(unsigned long flags)
static inline void shmem_unacct_blocks(unsigned long flags, long pages)
static const struct super_operations shmem_ops;
static const struct address_space_operations shmem_aops;
static const struct file_operations shmem_file_operations;
static const struct inode_operations shmem_inode_operations;
static const struct inode_operations shmem_dir_inode_operations;
static const struct inode_operations shmem_special_inode_operations;
static const struct vm_operations_struct shmem_vm_ops;
static struct backing_dev_info shmem_backing_dev_info  __read_mostly = ;
static LIST_HEAD(shmem_swaplist);
static DEFINE_MUTEX(shmem_swaplist_mutex);
static void shmem_free_blocks(struct inode *inode, long pages)
static int shmem_reserve_inode(struct super_block *sb)
static void shmem_free_inode(struct super_block *sb)
static void shmem_recalc_inode(struct inode *inode)
static swp_entry_t *shmem_swp_entry(struct shmem_inode_info *info, unsigned long index, struct page **page)
static void shmem_swp_set(struct shmem_inode_info *info, swp_entry_t *entry, unsigned long value)
static swp_entry_t *shmem_swp_alloc(struct shmem_inode_info *info, unsigned long index, enum sgp_type sgp)
static int shmem_free_swp(swp_entry_t *dir, swp_entry_t *edir,
spinlock_t *punch_lock)
static int shmem_map_and_free_swp(struct page *subdir, int offset,
int limit, struct page ***dir, spinlock_t *punch_lock)
static void shmem_free_pages(struct list_head *next)
void shmem_truncate_range(struct inode *inode, loff_t start, loff_t end)
EXPORT_SYMBOL_GPL(shmem_truncate_range);
static int shmem_setattr(struct dentry *dentry, struct iattr *attr)
static void shmem_evict_inode(struct inode *inode)
static inline int shmem_find_swp(swp_entry_t entry, swp_entry_t *dir, swp_entry_t *edir)
static int shmem_unuse_inode(struct shmem_inode_info *info, swp_entry_t entry, struct page *page)
int shmem_unuse(swp_entry_t entry, struct page *page)
static int shmem_writepage(struct page *page, struct writeback_control *wbc)
static void shmem_show_mpol(struct seq_file *seq, struct mempolicy *mpol)
static struct mempolicy *shmem_get_sbmpol(struct shmem_sb_info *sbinfo)
static struct page *shmem_swapin(swp_entry_t entry, gfp_t gfp,
struct shmem_inode_info *info, unsigned long idx)
static struct page *shmem_alloc_page(gfp_t gfp,
struct shmem_inode_info *info, unsigned long idx)
static inline void shmem_show_mpol(struct seq_file *seq, struct mempolicy *p)
static inline struct page *shmem_swapin(swp_entry_t entry, gfp_t gfp,
struct shmem_inode_info *info, unsigned long idx)
static inline struct page *shmem_alloc_page(gfp_t gfp,
struct shmem_inode_info *info, unsigned long idx)
#if !defined(CONFIG_NUMA) || !defined(CONFIG_TMPFS)
static inline struct mempolicy *shmem_get_sbmpol(struct shmem_sb_info *sbinfo)
static int shmem_getpage(struct inode *inode, unsigned long idx,
struct page **pagep, enum sgp_type sgp, int *type)
static int shmem_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static int shmem_set_policy(struct vm_area_struct *vma, struct mempolicy *new)
static struct mempolicy *shmem_get_policy(struct vm_area_struct *vma,
unsigned long addr)
int shmem_lock(struct file *file, int lock, struct user_struct *user)
static int shmem_mmap(struct file *file, struct vm_area_struct *vma)
static struct inode *shmem_get_inode(struct super_block *sb, const struct inode *dir,
int mode, dev_t dev, unsigned long flags)
static const struct inode_operations shmem_symlink_inode_operations;
static const struct inode_operations shmem_symlink_inline_operations;
static int shmem_readpage(struct file *file, struct page *page)
static int
shmem_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static int
shmem_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static void do_shmem_file_read(struct file *filp, loff_t *ppos, read_descriptor_t *desc, read_actor_t actor)
static ssize_t shmem_file_aio_read(struct kiocb *iocb,
const struct iovec *iov, unsigned long nr_segs, loff_t pos)
static int shmem_statfs(struct dentry *dentry, struct kstatfs *buf)
static int
shmem_mknod(struct inode *dir, struct dentry *dentry, int mode, dev_t dev)
static int shmem_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int shmem_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd)
static int shmem_link(struct dentry *old_dentry, struct inode *dir, struct dentry *dentry)
static int shmem_unlink(struct inode *dir, struct dentry *dentry)
static int shmem_rmdir(struct inode *dir, struct dentry *dentry)
static int shmem_rename(struct inode *old_dir, struct dentry *old_dentry, struct inode *new_dir, struct dentry *new_dentry)
static int shmem_symlink(struct inode *dir, struct dentry *dentry, const char *symname)
static void *shmem_follow_link_inline(struct dentry *dentry, struct nameidata *nd)
static void *shmem_follow_link(struct dentry *dentry, struct nameidata *nd)
static void shmem_put_link(struct dentry *dentry, struct nameidata *nd, void *cookie)
static int shmem_xattr_get(struct dentry *dentry, const char *name,
void *buffer, size_t size)
static int shmem_xattr_set(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags)
static const struct xattr_handler *shmem_xattr_handlers[] = ;
static int shmem_xattr_validate(const char *name)
static ssize_t shmem_getxattr(struct dentry *dentry, const char *name,
void *buffer, size_t size)
static int shmem_setxattr(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags)
static int shmem_removexattr(struct dentry *dentry, const char *name)
static bool xattr_is_trusted(const char *name)
static ssize_t shmem_listxattr(struct dentry *dentry, char *buffer, size_t size)
static const struct inode_operations shmem_symlink_inline_operations = ;
static const struct inode_operations shmem_symlink_inode_operations = ;
static struct dentry *shmem_get_parent(struct dentry *child)
static int shmem_match(struct inode *ino, void *vfh)
static struct dentry *shmem_fh_to_dentry(struct super_block *sb,
struct fid *fid, int fh_len, int fh_type)
static int shmem_encode_fh(struct dentry *dentry, __u32 *fh, int *len,
int connectable)
static const struct export_operations shmem_export_ops = ;
static int shmem_parse_options(char *options, struct shmem_sb_info *sbinfo,
bool remount)
static int shmem_remount_fs(struct super_block *sb, int *flags, char *data)
static int shmem_show_options(struct seq_file *seq, struct vfsmount *vfs)
static void shmem_put_super(struct super_block *sb)
int shmem_fill_super(struct super_block *sb, void *data, int silent)
static struct kmem_cache *shmem_inode_cachep;
static struct inode *shmem_alloc_inode(struct super_block *sb)
static void shmem_i_callback(struct rcu_head *head)
static void shmem_destroy_inode(struct inode *inode)
static void init_once(void *foo)
static int init_inodecache(void)
static void destroy_inodecache(void)
static const struct address_space_operations shmem_aops = ;
static const struct file_operations shmem_file_operations = ;
static const struct inode_operations shmem_inode_operations = ;
static const struct inode_operations shmem_dir_inode_operations = ;
static const struct inode_operations shmem_special_inode_operations = ;
static const struct super_operations shmem_ops = ;
static const struct vm_operations_struct shmem_vm_ops = ;
static struct dentry *shmem_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type tmpfs_fs_type = ;
int __init init_tmpfs(void)
void mem_cgroup_get_shmem_target(struct inode *inode, pgoff_t pgoff,
struct page **pagep, swp_entry_t *ent)
static struct file_system_type tmpfs_fs_type = ;
int __init init_tmpfs(void)
int shmem_unuse(swp_entry_t entry, struct page *page)
int shmem_lock(struct file *file, int lock, struct user_struct *user)
void shmem_truncate_range(struct inode *inode, loff_t start, loff_t end)
EXPORT_SYMBOL_GPL(shmem_truncate_range);
void mem_cgroup_get_shmem_target(struct inode *inode, pgoff_t pgoff,
struct page **pagep, swp_entry_t *ent)
#define shmem_vm_ops				generic_file_vm_ops
#define shmem_file_operations			ramfs_file_operations
#define shmem_get_inode(sb, dir, mode, dev, flags)	ramfs_get_inode(sb, dir, mode, dev)
#define shmem_acct_size(flags, size)		0
#define shmem_unacct_size(flags, size)		do  while (0)
#define SHMEM_MAX_BYTES				MAX_LFS_FILESIZE
struct file *shmem_file_setup(const char *name, loff_t size, unsigned long flags)
EXPORT_SYMBOL_GPL(shmem_file_setup);
int shmem_zero_setup(struct vm_area_struct *vma)
struct page *shmem_read_mapping_page_gfp(struct address_space *mapping,
pgoff_t index, gfp_t gfp)
EXPORT_SYMBOL_GPL(shmem_read_mapping_page_gfp);
