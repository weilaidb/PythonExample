#define NVSYNC		37
#define to_ioend_wq(v)	(&xfs_ioend_wq[((unsigned long)v) % NVSYNC])
static wait_queue_head_t xfs_ioend_wq[NVSYNC];
void __init
xfs_ioend_init(void)
void
xfs_ioend_wait(
xfs_inode_t	*ip)
STATIC void
xfs_ioend_wake(
xfs_inode_t	*ip)
void
xfs_count_page_state(
struct page		*page,
int			*delalloc,
int			*unwritten)
STATIC struct block_device *
xfs_find_bdev_for_inode(
struct inode		*inode)
STATIC void
xfs_destroy_ioend(
xfs_ioend_t		*ioend)
STATIC xfs_fsize_t
xfs_ioend_new_eof(
xfs_ioend_t		*ioend)
STATIC int
xfs_setfilesize(
xfs_ioend_t		*ioend)
STATIC void
xfs_finish_ioend(
struct xfs_ioend	*ioend)
STATIC void
xfs_end_io(
struct work_struct *work)
STATIC void
xfs_finish_ioend_sync(
struct xfs_ioend	*ioend)
STATIC xfs_ioend_t *
xfs_alloc_ioend(
struct inode		*inode,
unsigned int		type)
STATIC int
xfs_map_blocks(
struct inode		*inode,
loff_t			offset,
struct xfs_bmbt_irec	*imap,
int			type,
int			nonblocking)
STATIC int
xfs_imap_valid(
struct inode		*inode,
struct xfs_bmbt_irec	*imap,
xfs_off_t		offset)
STATIC void
xfs_end_bio(
struct bio		*bio,
int			error)
STATIC void
xfs_submit_ioend_bio(
struct writeback_control *wbc,
xfs_ioend_t		*ioend,
struct bio		*bio)
STATIC struct bio *
xfs_alloc_ioend_bio(
struct buffer_head	*bh)
STATIC void
xfs_start_buffer_writeback(
struct buffer_head	*bh)
STATIC void
xfs_start_page_writeback(
struct page		*page,
int			clear_dirty,
int			buffers)
static inline int bio_add_buffer(struct bio *bio, struct buffer_head *bh)
STATIC void
xfs_submit_ioend(
struct writeback_control *wbc,
xfs_ioend_t		*ioend)
STATIC void
xfs_cancel_ioend(
xfs_ioend_t		*ioend)
STATIC void
xfs_add_to_ioend(
struct inode		*inode,
struct buffer_head	*bh,
xfs_off_t		offset,
unsigned int		type,
xfs_ioend_t		**result,
int			need_ioend)
STATIC void
xfs_map_buffer(
struct inode		*inode,
struct buffer_head	*bh,
struct xfs_bmbt_irec	*imap,
xfs_off_t		offset)
STATIC void
xfs_map_at_offset(
struct inode		*inode,
struct buffer_head	*bh,
struct xfs_bmbt_irec	*imap,
xfs_off_t		offset)
STATIC int
xfs_is_delayed_page(
struct page		*page,
unsigned int		type)
STATIC int
xfs_convert_page(
struct inode		*inode,
struct page		*page,
loff_t			tindex,
struct xfs_bmbt_irec	*imap,
xfs_ioend_t		**ioendp,
struct writeback_control *wbc)
STATIC void
xfs_cluster_write(
struct inode		*inode,
pgoff_t			tindex,
struct xfs_bmbt_irec	*imap,
xfs_ioend_t		**ioendp,
struct writeback_control *wbc,
pgoff_t			tlast)
STATIC void
xfs_vm_invalidatepage(
struct page		*page,
unsigned long		offset)
STATIC void
xfs_aops_discard_page(
struct page		*page)
STATIC int
xfs_vm_writepage(
struct page		*page,
struct writeback_control *wbc)
STATIC int
xfs_vm_writepages(
struct address_space	*mapping,
struct writeback_control *wbc)
STATIC int
xfs_vm_releasepage(
struct page		*page,
gfp_t			gfp_mask)
STATIC int
__xfs_get_blocks(
struct inode		*inode,
sector_t		iblock,
struct buffer_head	*bh_result,
int			create,
int			direct)
int
xfs_get_blocks(
struct inode		*inode,
sector_t		iblock,
struct buffer_head	*bh_result,
int			create)
STATIC int
xfs_get_blocks_direct(
struct inode		*inode,
sector_t		iblock,
struct buffer_head	*bh_result,
int			create)
STATIC void
xfs_end_io_direct_write(
struct kiocb		*iocb,
loff_t			offset,
ssize_t			size,
void			*private,
int			ret,
bool			is_async)
STATIC ssize_t
xfs_vm_direct_IO(
int			rw,
struct kiocb		*iocb,
const struct iovec	*iov,
loff_t			offset,
unsigned long		nr_segs)
STATIC void
xfs_vm_write_failed(
struct address_space	*mapping,
loff_t			to)
STATIC int
xfs_vm_write_begin(
struct file		*file,
struct address_space	*mapping,
loff_t			pos,
unsigned		len,
unsigned		flags,
struct page		**pagep,
void			**fsdata)
STATIC int
xfs_vm_write_end(
struct file		*file,
struct address_space	*mapping,
loff_t			pos,
unsigned		len,
unsigned		copied,
struct page		*page,
void			*fsdata)
STATIC sector_t
xfs_vm_bmap(
struct address_space	*mapping,
sector_t		block)
STATIC int
xfs_vm_readpage(
struct file		*unused,
struct page		*page)
STATIC int
xfs_vm_readpages(
struct file		*unused,
struct address_space	*mapping,
struct list_head	*pages,
unsigned		nr_pages)
const struct address_space_operations xfs_address_space_operations = ;
