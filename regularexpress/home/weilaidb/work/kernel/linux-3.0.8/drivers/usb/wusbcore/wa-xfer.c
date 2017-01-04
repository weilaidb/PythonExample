enum ;
enum wa_seg_status ;
static void wa_xfer_delayed_run(struct wa_rpipe *);
struct wa_seg ;
static void wa_seg_init(struct wa_seg *seg)
struct wa_xfer ;
static inline void wa_xfer_init(struct wa_xfer *xfer)
static void wa_xfer_destroy(struct kref *_xfer)
static void wa_xfer_get(struct wa_xfer *xfer)
static void wa_xfer_put(struct wa_xfer *xfer)
static void wa_xfer_giveback(struct wa_xfer *xfer)
static void wa_xfer_completion(struct wa_xfer *xfer)
static unsigned __wa_xfer_is_done(struct wa_xfer *xfer)
static void wa_xfer_id_init(struct wa_xfer *xfer)
static u32 wa_xfer_id(struct wa_xfer *xfer)
static struct wa_xfer *wa_xfer_get_by_id(struct wahc *wa, u32 id)
struct wa_xfer_abort_buffer ;
static void __wa_xfer_abort_cb(struct urb *urb)
static void __wa_xfer_abort(struct wa_xfer *xfer)
static ssize_t __wa_xfer_setup_sizes(struct wa_xfer *xfer,
enum wa_xfer_type *pxfer_type)
static void __wa_xfer_setup_hdr0(struct wa_xfer *xfer,
struct wa_xfer_hdr *xfer_hdr0,
enum wa_xfer_type xfer_type,
size_t xfer_hdr_size)
static void wa_seg_dto_cb(struct urb *urb)
static void wa_seg_cb(struct urb *urb)
static int __wa_xfer_setup_segs(struct wa_xfer *xfer, size_t xfer_hdr_size)
static int __wa_xfer_setup(struct wa_xfer *xfer, struct urb *urb)
static int __wa_seg_submit(struct wa_rpipe *rpipe, struct wa_xfer *xfer,
struct wa_seg *seg)
static void wa_xfer_delayed_run(struct wa_rpipe *rpipe)
static int __wa_xfer_submit(struct wa_xfer *xfer)
static void wa_urb_enqueue_b(struct wa_xfer *xfer)
void wa_urb_enqueue_run(struct work_struct *ws)
EXPORT_SYMBOL_GPL(wa_urb_enqueue_run);
int wa_urb_enqueue(struct wahc *wa, struct usb_host_endpoint *ep,
struct urb *urb, gfp_t gfp)
EXPORT_SYMBOL_GPL(wa_urb_enqueue);
int wa_urb_dequeue(struct wahc *wa, struct urb *urb)
EXPORT_SYMBOL_GPL(wa_urb_dequeue);
static int wa_xfer_status_to_errno(u8 status)
static void wa_xfer_result_chew(struct wahc *wa, struct wa_xfer *xfer)
static void wa_buf_in_cb(struct urb *urb)
static void wa_xfer_result_cb(struct urb *urb)
void wa_handle_notif_xfer(struct wahc *wa, struct wa_notif_hdr *notif_hdr)
