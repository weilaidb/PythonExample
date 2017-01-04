static void uhci_set_next_interrupt(struct uhci_hcd *uhci)
static inline void uhci_clear_next_interrupt(struct uhci_hcd *uhci)
static void uhci_fsbr_on(struct uhci_hcd *uhci)
static void uhci_fsbr_off(struct uhci_hcd *uhci)
static void uhci_add_fsbr(struct uhci_hcd *uhci, struct urb *urb)
static void uhci_urbp_wants_fsbr(struct uhci_hcd *uhci, struct urb_priv *urbp)
static void uhci_fsbr_timeout(unsigned long _uhci)
static struct uhci_td *uhci_alloc_td(struct uhci_hcd *uhci)
static void uhci_free_td(struct uhci_hcd *uhci, struct uhci_td *td)
static inline void uhci_fill_td(struct uhci_hcd *uhci, struct uhci_td *td,
u32 status, u32 token, u32 buffer)
static void uhci_add_td_to_urbp(struct uhci_td *td, struct urb_priv *urbp)
static void uhci_remove_td_from_urbp(struct uhci_td *td)
static inline void uhci_insert_td_in_frame_list(struct uhci_hcd *uhci,
struct uhci_td *td, unsigned framenum)
static inline void uhci_remove_td_from_frame_list(struct uhci_hcd *uhci,
struct uhci_td *td)
static inline void uhci_remove_tds_from_frame(struct uhci_hcd *uhci,
unsigned int framenum)
static void uhci_unlink_isochronous_tds(struct uhci_hcd *uhci, struct urb *urb)
static struct uhci_qh *uhci_alloc_qh(struct uhci_hcd *uhci,
struct usb_device *udev, struct usb_host_endpoint *hep)
static void uhci_free_qh(struct uhci_hcd *uhci, struct uhci_qh *qh)
static int uhci_cleanup_queue(struct uhci_hcd *uhci, struct uhci_qh *qh,
struct urb *urb)
static void uhci_fixup_toggles(struct uhci_hcd *uhci, struct uhci_qh *qh,
int skip_first)
static inline void link_iso(struct uhci_hcd *uhci, struct uhci_qh *qh)
static void link_interrupt(struct uhci_hcd *uhci, struct uhci_qh *qh)
static void link_async(struct uhci_hcd *uhci, struct uhci_qh *qh)
static void uhci_activate_qh(struct uhci_hcd *uhci, struct uhci_qh *qh)
static void unlink_interrupt(struct uhci_hcd *uhci, struct uhci_qh *qh)
static void unlink_async(struct uhci_hcd *uhci, struct uhci_qh *qh)
static void uhci_unlink_qh(struct uhci_hcd *uhci, struct uhci_qh *qh)
static void uhci_make_qh_idle(struct uhci_hcd *uhci, struct uhci_qh *qh)
static int uhci_highest_load(struct uhci_hcd *uhci, int phase, int period)
static int uhci_check_bandwidth(struct uhci_hcd *uhci, struct uhci_qh *qh)
static void uhci_reserve_bandwidth(struct uhci_hcd *uhci, struct uhci_qh *qh)
static void uhci_release_bandwidth(struct uhci_hcd *uhci, struct uhci_qh *qh)
static inline struct urb_priv *uhci_alloc_urb_priv(struct uhci_hcd *uhci,
struct urb *urb)
static void uhci_free_urb_priv(struct uhci_hcd *uhci,
struct urb_priv *urbp)
static int uhci_map_status(int status, int dir_out)
static int uhci_submit_control(struct uhci_hcd *uhci, struct urb *urb,
struct uhci_qh *qh)
static int uhci_submit_common(struct uhci_hcd *uhci, struct urb *urb,
struct uhci_qh *qh)
static int uhci_submit_bulk(struct uhci_hcd *uhci, struct urb *urb,
struct uhci_qh *qh)
static int uhci_submit_interrupt(struct uhci_hcd *uhci, struct urb *urb,
struct uhci_qh *qh)
static int uhci_fixup_short_transfer(struct uhci_hcd *uhci,
struct uhci_qh *qh, struct urb_priv *urbp)
static int uhci_result_common(struct uhci_hcd *uhci, struct urb *urb)
static int uhci_submit_isochronous(struct uhci_hcd *uhci, struct urb *urb,
struct uhci_qh *qh)
static int uhci_result_isochronous(struct uhci_hcd *uhci, struct urb *urb)
static int uhci_urb_enqueue(struct usb_hcd *hcd,
struct urb *urb, gfp_t mem_flags)
static int uhci_urb_dequeue(struct usb_hcd *hcd, struct urb *urb, int status)
static void uhci_giveback_urb(struct uhci_hcd *uhci, struct uhci_qh *qh,
struct urb *urb, int status)
__releases(uhci->lock)
__acquires(uhci->lock)
#define QH_FINISHED_UNLINKING(qh)			\
(qh->state == QH_STATE_UNLINKING &&	\
uhci->frame_number + uhci->is_stopped != qh->unlink_frame)
static void uhci_scan_qh(struct uhci_hcd *uhci, struct uhci_qh *qh)
static int uhci_advance_check(struct uhci_hcd *uhci, struct uhci_qh *qh)
static void uhci_scan_schedule(struct uhci_hcd *uhci)
