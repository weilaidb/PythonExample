#define __HWAHC_INTERNAL_H__
struct wusbhc;
struct wahc;
extern void wa_urb_enqueue_run(struct work_struct *ws);
struct wa_rpipe ;
struct wahc ;
extern int wa_create(struct wahc *wa, struct usb_interface *iface);
extern void __wa_destroy(struct wahc *wa);
void wa_reset_all(struct wahc *wa);
enum ;
extern int wa_nep_create(struct wahc *, struct usb_interface *);
extern void wa_nep_destroy(struct wahc *);
static inline int wa_nep_arm(struct wahc *wa, gfp_t gfp_mask)
static inline void wa_nep_disarm(struct wahc *wa)
static inline void wa_rpipe_init(struct wahc *wa)
static inline void wa_init(struct wahc *wa)
struct wa_xfer;
extern void rpipe_destroy(struct kref *_rpipe);
static inline
void __rpipe_get(struct wa_rpipe *rpipe)
extern int rpipe_get_by_ep(struct wahc *, struct usb_host_endpoint *,
struct urb *, gfp_t);
static inline void rpipe_put(struct wa_rpipe *rpipe)
extern void rpipe_ep_disable(struct wahc *, struct usb_host_endpoint *);
extern int wa_rpipes_create(struct wahc *);
extern void wa_rpipes_destroy(struct wahc *);
static inline void rpipe_avail_dec(struct wa_rpipe *rpipe)
static inline int rpipe_avail_inc(struct wa_rpipe *rpipe)
extern int wa_urb_enqueue(struct wahc *, struct usb_host_endpoint *,
struct urb *, gfp_t);
extern int wa_urb_dequeue(struct wahc *, struct urb *);
extern void wa_handle_notif_xfer(struct wahc *, struct wa_notif_hdr *);
static inline struct wahc *wa_get(struct wahc *wa)
static inline void wa_put(struct wahc *wa)
static inline int __wa_feature(struct wahc *wa, unsigned op, u16 feature)
static inline int __wa_set_feature(struct wahc *wa, u16 feature)
static inline int __wa_clear_feature(struct wahc *wa, u16 feature)
static inline
s32 __wa_get_status(struct wahc *wa)
static inline s32 __wa_wait_status(struct wahc *wa, u32 mask, u32 value)
static inline int __wa_stop(struct wahc *wa)
