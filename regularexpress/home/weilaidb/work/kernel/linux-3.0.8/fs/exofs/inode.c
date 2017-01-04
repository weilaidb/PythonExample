#define EXOFS_DBGMSG2(M...) do  while (0)
enum ;
unsigned exofs_max_io_pages(struct exofs_layout *layout,
unsigned expected_pages)
struct page_collect ;
static void _pcol_init(struct page_collect *pcol, unsigned expected_pages,
struct inode *inode)
static void _pcol_reset(struct page_collect *pcol)
static int pcol_try_alloc(struct page_collect *pcol)
static void pcol_free(struct page_collect *pcol)
static int pcol_add_page(struct page_collect *pcol, struct page *page,
unsigned len)
static int update_read_page(struct page *page, int ret)
static void update_write_page(struct page *page, int ret)
static int __readpages_done(struct page_collect *pcol)
static void readpages_done(struct exofs_io_state *ios, void *p)
static void _unlock_pcol_pages(struct page_collect *pcol, int ret, int rw)
static int read_exec(struct page_collect *pcol)
static int readpage_strip(void *data, struct page *page)
static int exofs_readpages(struct file *file, struct address_space *mapping,
struct list_head *pages, unsigned nr_pages)
static int _readpage(struct page *page, bool read_4_write)
static int exofs_readpage(struct file *file, struct page *page)
static void writepages_done(struct exofs_io_state *ios, void *p)
static int write_exec(struct page_collect *pcol)
static int writepage_strip(struct page *page,
struct writeback_control *wbc_unused, void *data)
static int exofs_writepages(struct address_space *mapping,
struct writeback_control *wbc)
static int exofs_writepage(struct page *page, struct writeback_control *wbc)
static void _write_failed(struct inode *inode, loff_t to)
int exofs_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static int exofs_write_begin_export(struct file *file,
struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static int exofs_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static int exofs_releasepage(struct page *page, gfp_t gfp)
static void exofs_invalidatepage(struct page *page, unsigned long offset)
const struct address_space_operations exofs_aops = ;
static inline int exofs_inode_is_fast_symlink(struct inode *inode)
const struct osd_attr g_attr_logical_length = ATTR_DEF(
OSD_APAGE_OBJECT_INFORMATION, OSD_ATTR_OI_LOGICAL_LENGTH, 8);
static int _do_truncate(struct inode *inode, loff_t newsize)
int exofs_setattr(struct dentry *dentry, struct iattr *iattr)
static const struct osd_attr g_attr_inode_file_layout = ATTR_DEF(
EXOFS_APAGE_FS_DATA,
EXOFS_ATTR_INODE_FILE_LAYOUT,
0);
static const struct osd_attr g_attr_inode_dir_layout = ATTR_DEF(
EXOFS_APAGE_FS_DATA,
EXOFS_ATTR_INODE_DIR_LAYOUT,
0);
static int exofs_get_inode(struct super_block *sb, struct exofs_i_info *oi,
struct exofs_fcb *inode)
static void __oi_init(struct exofs_i_info *oi)
struct inode *exofs_iget(struct super_block *sb, unsigned long ino)
int __exofs_wait_obj_created(struct exofs_i_info *oi)
static void create_done(struct exofs_io_state *ios, void *p)
struct inode *exofs_new_inode(struct inode *dir, int mode)
struct updatei_args ;
static void updatei_done(struct exofs_io_state *ios, void *p)
static int exofs_update_inode(struct inode *inode, int do_sync)
int exofs_write_inode(struct inode *inode, struct writeback_control *wbc)
static void delete_done(struct exofs_io_state *ios, void *p)
void exofs_evict_inode(struct inode *inode)
