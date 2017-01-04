#define OCFS2_AOPS_H
handle_t *ocfs2_start_walk_page_trans(struct inode *inode,
struct page *page,
unsigned from,
unsigned to);
int ocfs2_map_page_blocks(struct page *page, u64 *p_blkno,
struct inode *inode, unsigned int from,
unsigned int to, int new);
void ocfs2_unlock_and_free_pages(struct page **pages, int num_pages);
int walk_page_buffers(	handle_t *handle,
struct buffer_head *head,
unsigned from,
unsigned to,
int *partial,
int (*fn)(	handle_t *handle,
struct buffer_head *bh));
int ocfs2_write_end_nolock(struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata);
int ocfs2_write_begin_nolock(struct file *filp,
struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata,
struct buffer_head *di_bh, struct page *mmap_page);
int ocfs2_read_inline_data(struct inode *inode, struct page *page,
struct buffer_head *di_bh);
int ocfs2_size_fits_inline_data(struct buffer_head *di_bh, u64 new_size);
int ocfs2_get_block(struct inode *inode, sector_t iblock,
struct buffer_head *bh_result, int create);
#define ocfs2_iocb_is_rw_locked(iocb) \
test_bit(0, (unsigned long *)&iocb->private)
static inline void ocfs2_iocb_set_rw_locked(struct kiocb *iocb, int level)
enum ocfs2_iocb_lock_bits ;
#define ocfs2_iocb_clear_rw_locked(iocb) \
clear_bit(OCFS2_IOCB_RW_LOCK, (unsigned long *)&iocb->private)
#define ocfs2_iocb_rw_locked_level(iocb) \
test_bit(OCFS2_IOCB_RW_LOCK_LEVEL, (unsigned long *)&iocb->private)
#define ocfs2_iocb_set_sem_locked(iocb) \
set_bit(OCFS2_IOCB_SEM, (unsigned long *)&iocb->private)
#define ocfs2_iocb_clear_sem_locked(iocb) \
clear_bit(OCFS2_IOCB_SEM, (unsigned long *)&iocb->private)
#define ocfs2_iocb_is_sem_locked(iocb) \
test_bit(OCFS2_IOCB_SEM, (unsigned long *)&iocb->private)
