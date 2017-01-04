static int xen_blkif_reqs = 64;
module_param_named(reqs, xen_blkif_reqs, int, 0);
MODULE_PARM_DESC(reqs, "Number of blkback requests to allocate");
static unsigned int log_stats;
module_param(log_stats, int, 0644);
struct pending_req ;
#define BLKBACK_INVALID_HANDLE (~0)
struct xen_blkbk ;
static struct xen_blkbk *blkbk;
static inline int vaddr_pagenr(struct pending_req *req, int seg)
#define pending_page(req, seg) pending_pages[vaddr_pagenr(req, seg)]
static inline unsigned long vaddr(struct pending_req *req, int seg)
#define pending_handle(_req, _seg) \
(blkbk->pending_grant_handles[vaddr_pagenr(_req, _seg)])
static int do_block_io_op(struct xen_blkif *blkif);
static int dispatch_rw_block_io(struct xen_blkif *blkif,
struct blkif_request *req,
struct pending_req *pending_req);
static void make_response(struct xen_blkif *blkif, u64 id,
unsigned short op, int st);
static struct pending_req *alloc_req(void)
static void free_req(struct pending_req *req)
static int xen_vbd_translate(struct phys_req *req, struct xen_blkif *blkif,
int operation)
static void xen_vbd_resize(struct xen_blkif *blkif)
static void blkif_notify_work(struct xen_blkif *blkif)
irqreturn_t xen_blkif_be_int(int irq, void *dev_id)
static void print_stats(struct xen_blkif *blkif)
int xen_blkif_schedule(void *arg)
struct seg_buf ;
static void xen_blkbk_unmap(struct pending_req *req)
static int xen_blkbk_map(struct blkif_request *req,
struct pending_req *pending_req,
struct seg_buf seg[])
static void __end_block_io_op(struct pending_req *pending_req, int error)
static void end_block_io_op(struct bio *bio, int error)
static int do_block_io_op(struct xen_blkif *blkif)
static int dispatch_rw_block_io(struct xen_blkif *blkif,
struct blkif_request *req,
struct pending_req *pending_req)
static void make_response(struct xen_blkif *blkif, u64 id,
unsigned short op, int st)
static int __init xen_blkif_init(void)
module_init(xen_blkif_init);
MODULE_LICENSE("Dual BSD/GPL");
