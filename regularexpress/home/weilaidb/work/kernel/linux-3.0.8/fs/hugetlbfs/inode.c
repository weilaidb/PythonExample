static const struct super_operations hugetlbfs_ops;
static const struct address_space_operations hugetlbfs_aops;
const struct file_operations hugetlbfs_file_operations;
static const struct inode_operations hugetlbfs_dir_inode_operations;
static const struct inode_operations hugetlbfs_inode_operations;
static struct backing_dev_info hugetlbfs_backing_dev_info = ;
int sysctl_hugetlb_shm_group;
enum ;
static const match_table_t tokens = ;
static void huge_pagevec_release(struct pagevec *pvec)
static int hugetlbfs_file_mmap(struct file *file, struct vm_area_struct *vma)
static unsigned long
hugetlb_get_unmapped_area(struct file *file, unsigned long addr,
unsigned long len, unsigned long pgoff, unsigned long flags)
static int
hugetlbfs_read_actor(struct page *page, unsigned long offset,
char __user *buf, unsigned long count,
unsigned long size)
static ssize_t hugetlbfs_read(struct file *filp, char __user *buf,
size_t len, loff_t *ppos)
static int hugetlbfs_write_begin(struct file *file,
struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static int hugetlbfs_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static void truncate_huge_page(struct page *page)
static void truncate_hugepages(struct inode *inode, loff_t lstart)
static void hugetlbfs_evict_inode(struct inode *inode)
static inline void
hugetlb_vmtruncate_list(struct prio_tree_root *root, pgoff_t pgoff)
static int hugetlb_vmtruncate(struct inode *inode, loff_t offset)
static int hugetlbfs_setattr(struct dentry *dentry, struct iattr *attr)
static struct inode *hugetlbfs_get_inode(struct super_block *sb, uid_t uid,
gid_t gid, int mode, dev_t dev)
static int hugetlbfs_mknod(struct inode *dir,
struct dentry *dentry, int mode, dev_t dev)
static int hugetlbfs_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int hugetlbfs_create(struct inode *dir, struct dentry *dentry, int mode, struct nameidata *nd)
static int hugetlbfs_symlink(struct inode *dir,
struct dentry *dentry, const char *symname)
static int hugetlbfs_set_page_dirty(struct page *page)
static int hugetlbfs_migrate_page(struct address_space *mapping,
struct page *newpage, struct page *page)
static int hugetlbfs_statfs(struct dentry *dentry, struct kstatfs *buf)
static void hugetlbfs_put_super(struct super_block *sb)
static inline int hugetlbfs_dec_free_inodes(struct hugetlbfs_sb_info *sbinfo)
static void hugetlbfs_inc_free_inodes(struct hugetlbfs_sb_info *sbinfo)
static struct kmem_cache *hugetlbfs_inode_cachep;
static struct inode *hugetlbfs_alloc_inode(struct super_block *sb)
static void hugetlbfs_i_callback(struct rcu_head *head)
static void hugetlbfs_destroy_inode(struct inode *inode)
static const struct address_space_operations hugetlbfs_aops = ;
static void init_once(void *foo)
const struct file_operations hugetlbfs_file_operations = ;
static const struct inode_operations hugetlbfs_dir_inode_operations = ;
static const struct inode_operations hugetlbfs_inode_operations = ;
static const struct super_operations hugetlbfs_ops = ;
static int
hugetlbfs_parse_options(char *options, struct hugetlbfs_config *pconfig)
static int
hugetlbfs_fill_super(struct super_block *sb, void *data, int silent)
int hugetlb_get_quota(struct address_space *mapping, long delta)
void hugetlb_put_quota(struct address_space *mapping, long delta)
static struct dentry *hugetlbfs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type hugetlbfs_fs_type = ;
static struct vfsmount *hugetlbfs_vfsmount;
static int can_do_hugetlb_shm(void)
struct file *hugetlb_file_setup(const char *name, size_t size,
vm_flags_t acctflag,
struct user_struct **user, int creat_flags)
static int __init init_hugetlbfs_fs(void)
static void __exit exit_hugetlbfs_fs(void)
module_init(init_hugetlbfs_fs)
module_exit(exit_hugetlbfs_fs)
MODULE_LICENSE("GPL");
