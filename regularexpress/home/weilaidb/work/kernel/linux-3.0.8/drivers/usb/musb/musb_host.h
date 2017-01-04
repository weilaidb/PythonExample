#define _MUSB_HOST_H
static inline struct usb_hcd *musb_to_hcd(struct musb *musb)
static inline struct musb *hcd_to_musb(struct usb_hcd *hcd)
struct musb_qh ;
static inline struct musb_qh *first_qh(struct list_head *q)
extern void musb_root_disconnect(struct musb *musb);
struct usb_hcd;
extern int musb_hub_status_data(struct usb_hcd *hcd, char *buf);
extern int musb_hub_control(struct usb_hcd *hcd,
u16 typeReq, u16 wValue, u16 wIndex,
char *buf, u16 wLength);
extern const struct hc_driver musb_hc_driver;
static inline struct urb *next_urb(struct musb_qh *qh)
