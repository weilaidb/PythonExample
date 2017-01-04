static int ehci_get_frame (struct usb_hcd *hcd);
static union ehci_shadow *
periodic_next_shadow(struct ehci_hcd *ehci, union ehci_shadow *periodic,
__hc32 tag)
static __hc32 *
shadow_next_periodic(struct ehci_hcd *ehci, union ehci_shadow *periodic,
__hc32 tag)
static void periodic_unlink (struct ehci_hcd *ehci, unsigned frame, void *ptr)
static unsigned short
periodic_usecs (struct ehci_hcd *ehci, unsigned frame, unsigned uframe)
static int same_tt (struct usb_device *dev1, struct usb_device *dev2)
static inline unsigned char tt_start_uframe(struct ehci_hcd *ehci, __hc32 mask)
static const unsigned char
max_tt_usecs[] = ;
static inline void carryover_tt_bandwidth(unsigned short tt_usecs[8])
static void
periodic_tt_usecs (
struct ehci_hcd *ehci,
struct usb_device *dev,
unsigned frame,
unsigned short tt_usecs[8]
)
static int tt_available (
struct ehci_hcd		*ehci,
unsigned		period,
struct usb_device	*dev,
unsigned		frame,
unsigned		uframe,
u16			usecs
)
static int tt_no_collision (
struct ehci_hcd		*ehci,
unsigned		period,
struct usb_device	*dev,
unsigned		frame,
u32			uf_mask
)
static int enable_periodic (struct ehci_hcd *ehci)
static int disable_periodic (struct ehci_hcd *ehci)
static int qh_link_periodic (struct ehci_hcd *ehci, struct ehci_qh *qh)
static int qh_unlink_periodic(struct ehci_hcd *ehci, struct ehci_qh *qh)
static void intr_deschedule (struct ehci_hcd *ehci, struct ehci_qh *qh)
static int check_period (
struct ehci_hcd *ehci,
unsigned	frame,
unsigned	uframe,
unsigned	period,
unsigned	usecs
)
static int check_intr_schedule (
struct ehci_hcd		*ehci,
unsigned		frame,
unsigned		uframe,
const struct ehci_qh	*qh,
__hc32			*c_maskp
)
static int qh_schedule(struct ehci_hcd *ehci, struct ehci_qh *qh)
static int intr_submit (
struct ehci_hcd		*ehci,
struct urb		*urb,
struct list_head	*qtd_list,
gfp_t			mem_flags
)
static struct ehci_iso_stream *
iso_stream_alloc (gfp_t mem_flags)
static void
iso_stream_init (
struct ehci_hcd		*ehci,
struct ehci_iso_stream	*stream,
struct usb_device	*dev,
int			pipe,
unsigned		interval
)
static void
iso_stream_put(struct ehci_hcd *ehci, struct ehci_iso_stream *stream)
static inline struct ehci_iso_stream *
iso_stream_get (struct ehci_iso_stream *stream)
static struct ehci_iso_stream *
iso_stream_find (struct ehci_hcd *ehci, struct urb *urb)
static struct ehci_iso_sched *
iso_sched_alloc (unsigned packets, gfp_t mem_flags)
static inline void
itd_sched_init(
struct ehci_hcd		*ehci,
struct ehci_iso_sched	*iso_sched,
struct ehci_iso_stream	*stream,
struct urb		*urb
)
static void
iso_sched_free (
struct ehci_iso_stream	*stream,
struct ehci_iso_sched	*iso_sched
)
static int
itd_urb_transaction (
struct ehci_iso_stream	*stream,
struct ehci_hcd		*ehci,
struct urb		*urb,
gfp_t			mem_flags
)
static inline int
itd_slot_ok (
struct ehci_hcd		*ehci,
u32			mod,
u32			uframe,
u8			usecs,
u32			period
)
static inline int
sitd_slot_ok (
struct ehci_hcd		*ehci,
u32			mod,
struct ehci_iso_stream	*stream,
u32			uframe,
struct ehci_iso_sched	*sched,
u32			period_uframes
)
#define SCHEDULE_SLOP	80
static int
iso_stream_schedule (
struct ehci_hcd		*ehci,
struct urb		*urb,
struct ehci_iso_stream	*stream
)
static inline void
itd_init(struct ehci_hcd *ehci, struct ehci_iso_stream *stream,
struct ehci_itd *itd)
static inline void
itd_patch(
struct ehci_hcd		*ehci,
struct ehci_itd		*itd,
struct ehci_iso_sched	*iso_sched,
unsigned		index,
u16			uframe
)
static inline void
itd_link (struct ehci_hcd *ehci, unsigned frame, struct ehci_itd *itd)
static int
itd_link_urb (
struct ehci_hcd		*ehci,
struct urb		*urb,
unsigned		mod,
struct ehci_iso_stream	*stream
)
#define	ISO_ERRS (EHCI_ISOC_BUF_ERR | EHCI_ISOC_BABBLE | EHCI_ISOC_XACTERR)
static unsigned
itd_complete (
struct ehci_hcd	*ehci,
struct ehci_itd	*itd
)
static int itd_submit (struct ehci_hcd *ehci, struct urb *urb,
gfp_t mem_flags)
static inline void
sitd_sched_init(
struct ehci_hcd		*ehci,
struct ehci_iso_sched	*iso_sched,
struct ehci_iso_stream	*stream,
struct urb		*urb
)
static int
sitd_urb_transaction (
struct ehci_iso_stream	*stream,
struct ehci_hcd		*ehci,
struct urb		*urb,
gfp_t			mem_flags
)
static inline void
sitd_patch(
struct ehci_hcd		*ehci,
struct ehci_iso_stream	*stream,
struct ehci_sitd	*sitd,
struct ehci_iso_sched	*iso_sched,
unsigned		index
)
static inline void
sitd_link (struct ehci_hcd *ehci, unsigned frame, struct ehci_sitd *sitd)
static int
sitd_link_urb (
struct ehci_hcd		*ehci,
struct urb		*urb,
unsigned		mod,
struct ehci_iso_stream	*stream
)
#define	SITD_ERRS (SITD_STS_ERR | SITD_STS_DBE | SITD_STS_BABBLE \
| SITD_STS_XACT | SITD_STS_MMF)
static unsigned
sitd_complete (
struct ehci_hcd		*ehci,
struct ehci_sitd	*sitd
)
static int sitd_submit (struct ehci_hcd *ehci, struct urb *urb,
gfp_t mem_flags)
static void free_cached_lists(struct ehci_hcd *ehci)
static void
scan_periodic (struct ehci_hcd *ehci)
