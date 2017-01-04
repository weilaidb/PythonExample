static int afs_readpage(struct file *file, struct page *page);
static void afs_invalidatepage(struct page *page, unsigned long offset);
static int afs_releasepage(struct page *page, gfp_t gfp_flags);
static int afs_launder_page(struct page *page);
static int afs_readpages(struct file *filp, struct address_space *mapping,
struct list_head *pages, unsigned nr_pages);
const struct file_operations afs_file_operations = ;
const struct inode_operations afs_file_inode_operations = ;
const struct address_space_operations afs_fs_aops = ;
int afs_open(struct inode *inode, struct file *file)
int afs_release(struct inode *inode, struct file *file)
static void afs_file_readpage_read_complete(struct page *page,
void *data,
int error)
int afs_page_filler(void *data, struct page *page)
static int afs_readpage(struct file *file, struct page *page)
static int afs_readpages(struct file *file, struct address_space *mapping,
struct list_head *pages, unsigned nr_pages)
static int afs_launder_page(struct page *page)
static void afs_invalidatepage(struct page *page, unsigned long offset)
static int afs_releasepage(struct page *page, gfp_t gfp_flags)
