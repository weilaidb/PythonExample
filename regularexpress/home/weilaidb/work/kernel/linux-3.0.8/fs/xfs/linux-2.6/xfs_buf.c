static kmem_zone_t *xfs_buf_zone;
STATIC int xfsbufd(void *);
STATIC void xfs_buf_delwri_queue(xfs_buf_t *, int);
static struct workqueue_struct *xfslogd_workqueue;
struct workqueue_struct *xfsdatad_workqueue;
struct workqueue_struct *xfsconvertd_workqueue;
# define XB_SET_OWNER(bp)	((bp)->b_last_holder = current->pid)
# define XB_CLEAR_OWNER(bp)	((bp)->b_last_holder = -1)
# define XB_GET_OWNER(bp)	((bp)->b_last_holder)
# define XB_SET_OWNER(bp)	do  while (0)
# define XB_CLEAR_OWNER(bp)	do  while (0)
# define XB_GET_OWNER(bp)	do  while (0)
#define xb_to_gfp(flags) \
((((flags) & XBF_READ_AHEAD) ? __GFP_NORETRY : \
((flags) & XBF_DONT_BLOCK) ? GFP_NOFS : GFP_KERNEL) | __GFP_NOWARN)
#define xb_to_km(flags) \
(((flags) & XBF_DONT_BLOCK) ? KM_NOFS : KM_SLEEP)
#define xfs_buf_allocate(flags) \
kmem_zone_alloc(xfs_buf_zone, xb_to_km(flags))
#define xfs_buf_deallocate(bp) \
kmem_zone_free(xfs_buf_zone, (bp));
static inline int
xfs_buf_is_vmapped(
struct xfs_buf	*bp)
static inline int
xfs_buf_vmap_len(
struct xfs_buf	*bp)
STATIC void
xfs_buf_lru_add(
struct xfs_buf	*bp)
STATIC void
xfs_buf_lru_del(
struct xfs_buf	*bp)
void
xfs_buf_stale(
struct xfs_buf	*bp)
STATIC void
_xfs_buf_initialize(
xfs_buf_t		*bp,
xfs_buftarg_t		*target,
xfs_off_t		range_base,
size_t			range_length,
xfs_buf_flags_t		flags)
STATIC int
_xfs_buf_get_pages(
xfs_buf_t		*bp,
int			page_count,
xfs_buf_flags_t		flags)
STATIC void
_xfs_buf_free_pages(
xfs_buf_t	*bp)
void
xfs_buf_free(
xfs_buf_t		*bp)
STATIC int
xfs_buf_allocate_memory(
xfs_buf_t		*bp,
uint			flags)
STATIC int
_xfs_buf_map_pages(
xfs_buf_t		*bp,
uint			flags)
xfs_buf_t *
_xfs_buf_find(
xfs_buftarg_t		*btp,
xfs_off_t		ioff,
size_t			isize,
xfs_buf_flags_t		flags,
xfs_buf_t		*new_bp)
xfs_buf_t *
xfs_buf_get(
xfs_buftarg_t		*target,
xfs_off_t		ioff,
size_t			isize,
xfs_buf_flags_t		flags)
STATIC int
_xfs_buf_read(
xfs_buf_t		*bp,
xfs_buf_flags_t		flags)
xfs_buf_t *
xfs_buf_read(
xfs_buftarg_t		*target,
xfs_off_t		ioff,
size_t			isize,
xfs_buf_flags_t		flags)
void
xfs_buf_readahead(
xfs_buftarg_t		*target,
xfs_off_t		ioff,
size_t			isize)
struct xfs_buf *
xfs_buf_read_uncached(
struct xfs_mount	*mp,
struct xfs_buftarg	*target,
xfs_daddr_t		daddr,
size_t			length,
int			flags)
xfs_buf_t *
xfs_buf_get_empty(
size_t			len,
xfs_buftarg_t		*target)
void
xfs_buf_set_empty(
struct xfs_buf		*bp,
size_t			len)
static inline struct page *
mem_to_page(
void			*addr)
int
xfs_buf_associate_memory(
xfs_buf_t		*bp,
void			*mem,
size_t			len)
xfs_buf_t *
xfs_buf_get_uncached(
struct xfs_buftarg	*target,
size_t			len,
int			flags)
void
xfs_buf_hold(
xfs_buf_t		*bp)
void
xfs_buf_rele(
xfs_buf_t		*bp)
int
xfs_buf_cond_lock(
xfs_buf_t		*bp)
int
xfs_buf_lock_value(
xfs_buf_t		*bp)
void
xfs_buf_lock(
xfs_buf_t		*bp)
void
xfs_buf_unlock(
xfs_buf_t		*bp)
STATIC void
xfs_buf_wait_unpin(
xfs_buf_t		*bp)
STATIC void
xfs_buf_iodone_work(
struct work_struct	*work)
void
xfs_buf_ioend(
xfs_buf_t		*bp,
int			schedule)
void
xfs_buf_ioerror(
xfs_buf_t		*bp,
int			error)
int
xfs_bwrite(
struct xfs_mount	*mp,
struct xfs_buf		*bp)
void
xfs_bdwrite(
void			*mp,
struct xfs_buf		*bp)
STATIC int
xfs_bioerror(
xfs_buf_t *bp)
STATIC int
xfs_bioerror_relse(
struct xfs_buf	*bp)
int
xfs_bdstrat_cb(
struct xfs_buf	*bp)
void
xfsbdstrat(
struct xfs_mount	*mp,
struct xfs_buf		*bp)
STATIC void
_xfs_buf_ioend(
xfs_buf_t		*bp,
int			schedule)
STATIC void
xfs_buf_bio_end_io(
struct bio		*bio,
int			error)
STATIC void
_xfs_buf_ioapply(
xfs_buf_t		*bp)
int
xfs_buf_iorequest(
xfs_buf_t		*bp)
int
xfs_buf_iowait(
xfs_buf_t		*bp)
xfs_caddr_t
xfs_buf_offset(
xfs_buf_t		*bp,
size_t			offset)
void
xfs_buf_iomove(
xfs_buf_t		*bp,
size_t			boff,
size_t			bsize,
void			*data,
xfs_buf_rw_t		mode)
void
xfs_wait_buftarg(
struct xfs_buftarg	*btp)
int
xfs_buftarg_shrink(
struct shrinker		*shrink,
struct shrink_control	*sc)
void
xfs_free_buftarg(
struct xfs_mount	*mp,
struct xfs_buftarg	*btp)
STATIC int
xfs_setsize_buftarg_flags(
xfs_buftarg_t		*btp,
unsigned int		blocksize,
unsigned int		sectorsize,
int			verbose)
STATIC int
xfs_setsize_buftarg_early(
xfs_buftarg_t		*btp,
struct block_device	*bdev)
int
xfs_setsize_buftarg(
xfs_buftarg_t		*btp,
unsigned int		blocksize,
unsigned int		sectorsize)
STATIC int
xfs_alloc_delwrite_queue(
xfs_buftarg_t		*btp,
const char		*fsname)
xfs_buftarg_t *
xfs_alloc_buftarg(
struct xfs_mount	*mp,
struct block_device	*bdev,
int			external,
const char		*fsname)
STATIC void
xfs_buf_delwri_queue(
xfs_buf_t		*bp,
int			unlock)
void
xfs_buf_delwri_dequeue(
xfs_buf_t		*bp)
void
xfs_buf_delwri_promote(
struct xfs_buf	*bp)
STATIC void
xfs_buf_runall_queues(
struct workqueue_struct	*queue)
STATIC int
xfs_buf_delwri_split(
xfs_buftarg_t	*target,
struct list_head *list,
unsigned long	age)
static int
xfs_buf_cmp(
void		*priv,
struct list_head *a,
struct list_head *b)
void
xfs_buf_delwri_sort(
xfs_buftarg_t	*target,
struct list_head *list)
STATIC int
xfsbufd(
void		*data)
int
xfs_flush_buftarg(
xfs_buftarg_t	*target,
int		wait)
int __init
xfs_buf_init(void)
void
xfs_buf_terminate(void)
struct list_head *
xfs_get_buftarg_list(void)
