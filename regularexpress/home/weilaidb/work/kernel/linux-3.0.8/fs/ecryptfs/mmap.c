struct page *ecryptfs_get_locked_page(struct inode *inode, loff_t index)
static int ecryptfs_writepage(struct page *page, struct writeback_control *wbc)
static void strip_xattr_flag(char *page_virt,
struct ecryptfs_crypt_stat *crypt_stat)
static int
ecryptfs_copy_up_encrypted_with_header(struct page *page,
struct ecryptfs_crypt_stat *crypt_stat)
static int ecryptfs_readpage(struct file *file, struct page *page)
static int fill_zeros_to_end_of_page(struct page *page, unsigned int to)
static int ecryptfs_write_begin(struct file *file,
struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static int ecryptfs_write_inode_size_to_header(struct inode *ecryptfs_inode)
struct kmem_cache *ecryptfs_xattr_cache;
static int ecryptfs_write_inode_size_to_xattr(struct inode *ecryptfs_inode)
int ecryptfs_write_inode_size_to_metadata(struct inode *ecryptfs_inode)
static int ecryptfs_write_end(struct file *file,
struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static sector_t ecryptfs_bmap(struct address_space *mapping, sector_t block)
const struct address_space_operations ecryptfs_aops = ;
