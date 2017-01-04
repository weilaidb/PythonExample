#define to_urb(d) container_of(d, struct urb, kref)
static void urb_destroy(struct kref *kref)
void usb_init_urb(struct urb *urb)
EXPORT_SYMBOL_GPL(usb_init_urb);
struct urb *usb_alloc_urb(int iso_packets, gfp_t mem_flags)
EXPORT_SYMBOL_GPL(usb_alloc_urb);
void usb_free_urb(struct urb *urb)
EXPORT_SYMBOL_GPL(usb_free_urb);
struct urb *usb_get_urb(struct urb *urb)
EXPORT_SYMBOL_GPL(usb_get_urb);
void usb_anchor_urb(struct urb *urb, struct usb_anchor *anchor)
EXPORT_SYMBOL_GPL(usb_anchor_urb);
static void __usb_unanchor_urb(struct urb *urb, struct usb_anchor *anchor)
void usb_unanchor_urb(struct urb *urb)
EXPORT_SYMBOL_GPL(usb_unanchor_urb);
int usb_submit_urb(struct urb *urb, gfp_t mem_flags)
EXPORT_SYMBOL_GPL(usb_submit_urb);
int usb_unlink_urb(struct urb *urb)
EXPORT_SYMBOL_GPL(usb_unlink_urb);
void usb_kill_urb(struct urb *urb)
EXPORT_SYMBOL_GPL(usb_kill_urb);
void usb_poison_urb(struct urb *urb)
EXPORT_SYMBOL_GPL(usb_poison_urb);
void usb_unpoison_urb(struct urb *urb)
EXPORT_SYMBOL_GPL(usb_unpoison_urb);
void usb_kill_anchored_urbs(struct usb_anchor *anchor)
EXPORT_SYMBOL_GPL(usb_kill_anchored_urbs);
void usb_poison_anchored_urbs(struct usb_anchor *anchor)
EXPORT_SYMBOL_GPL(usb_poison_anchored_urbs);
void usb_unpoison_anchored_urbs(struct usb_anchor *anchor)
EXPORT_SYMBOL_GPL(usb_unpoison_anchored_urbs);
void usb_unlink_anchored_urbs(struct usb_anchor *anchor)
EXPORT_SYMBOL_GPL(usb_unlink_anchored_urbs);
int usb_wait_anchor_empty_timeout(struct usb_anchor *anchor,
unsigned int timeout)
EXPORT_SYMBOL_GPL(usb_wait_anchor_empty_timeout);
struct urb *usb_get_from_anchor(struct usb_anchor *anchor)
EXPORT_SYMBOL_GPL(usb_get_from_anchor);
void usb_scuttle_anchored_urbs(struct usb_anchor *anchor)
EXPORT_SYMBOL_GPL(usb_scuttle_anchored_urbs);
int usb_anchor_empty(struct usb_anchor *anchor)
EXPORT_SYMBOL_GPL(usb_anchor_empty);
