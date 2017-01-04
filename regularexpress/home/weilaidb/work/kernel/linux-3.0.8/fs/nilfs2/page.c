#define NILFS_BUFFER_INHERENT_BITS  \
((1UL << BH_Uptodate) | (1UL << BH_Mapped) | (1UL << BH_NILFS_Node) | \
(1UL << BH_NILFS_Volatile) | (1UL << BH_NILFS_Checked))
static struct buffer_head *
__nilfs_get_page_block(struct page *page, unsigned long block, pgoff_t index,
int blkbits, unsigned long b_state)
struct buffer_head *nilfs_grab_buffer(struct inode *inode,
struct address_space *mapping,
unsigned long blkoff,
unsigned long b_state)
void nilfs_forget_buffer(struct buffer_head *bh)
void nilfs_copy_buffer(struct buffer_head *dbh, struct buffer_head *sbh)
int nilfs_page_buffers_clean(struct page *page)
void nilfs_page_bug(struct page *page)
static void nilfs_copy_page(struct page *dst, struct page *src, int copy_dirty)
int nilfs_copy_dirty_pages(struct address_space *dmap,
struct address_space *smap)
void nilfs_copy_back_pages(struct address_space *dmap,
struct address_space *smap)
void nilfs_clear_dirty_pages(struct address_space *mapping)
unsigned nilfs_page_count_clean_buffers(struct page *page,
unsigned from, unsigned to)
void nilfs_mapping_init(struct address_space *mapping, struct inode *inode,
struct backing_dev_info *bdi)
int __nilfs_clear_page_dirty(struct page *page)
unsigned long nilfs_find_uncommitted_extent(struct inode *inode,
sector_t start_blk,
sector_t *blkoff)
