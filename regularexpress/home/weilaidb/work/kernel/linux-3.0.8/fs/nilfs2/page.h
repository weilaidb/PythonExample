#define _NILFS_PAGE_H
enum ;
BUFFER_FNS(NILFS_Node, nilfs_node)
BUFFER_FNS(NILFS_Volatile, nilfs_volatile)
BUFFER_FNS(NILFS_Checked, nilfs_checked)
BUFFER_FNS(NILFS_Redirected, nilfs_redirected)
int __nilfs_clear_page_dirty(struct page *);
struct buffer_head *nilfs_grab_buffer(struct inode *, struct address_space *,
unsigned long, unsigned long);
void nilfs_forget_buffer(struct buffer_head *);
void nilfs_copy_buffer(struct buffer_head *, struct buffer_head *);
int nilfs_page_buffers_clean(struct page *);
void nilfs_page_bug(struct page *);
int nilfs_copy_dirty_pages(struct address_space *, struct address_space *);
void nilfs_copy_back_pages(struct address_space *, struct address_space *);
void nilfs_clear_dirty_pages(struct address_space *);
void nilfs_mapping_init(struct address_space *mapping, struct inode *inode,
struct backing_dev_info *bdi);
unsigned nilfs_page_count_clean_buffers(struct page *, unsigned, unsigned);
unsigned long nilfs_find_uncommitted_extent(struct inode *inode,
sector_t start_blk,
sector_t *blkoff);
#define NILFS_PAGE_BUG(page, m, a...) \
do  while (0)
static inline struct buffer_head *
nilfs_page_get_nth_block(struct page *page, unsigned int count)
