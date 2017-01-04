static void ntfs_end_buffer_async_read(struct buffer_head *bh, int uptodate)
static int ntfs_read_block(struct page *page)
static int ntfs_readpage(struct file *file, struct page *page)
static int ntfs_write_block(struct page *page, struct writeback_control *wbc)
static int ntfs_write_mst_block(struct page *page,
struct writeback_control *wbc)
static int ntfs_writepage(struct page *page, struct writeback_control *wbc)
const struct address_space_operations ntfs_aops = ;
const struct address_space_operations ntfs_mst_aops = ;
void mark_ntfs_record_dirty(struct page *page, const unsigned int ofs)
