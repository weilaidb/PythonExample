#define __MUSB_GADGET_H
enum buffer_map_state ;
struct musb_request ;
static inline struct musb_request *to_musb_request(struct usb_request *req)
extern struct usb_request *
musb_alloc_request(struct usb_ep *ep, gfp_t gfp_flags);
extern void musb_free_request(struct usb_ep *ep, struct usb_request *req);
struct musb_ep ;
static inline struct musb_ep *to_musb_ep(struct usb_ep *ep)
static inline struct musb_request *next_request(struct musb_ep *ep)
extern void musb_g_tx(struct musb *musb, u8 epnum);
extern void musb_g_rx(struct musb *musb, u8 epnum);
extern const struct usb_ep_ops musb_g_ep0_ops;
extern int musb_gadget_setup(struct musb *);
extern void musb_gadget_cleanup(struct musb *);
extern void musb_g_giveback(struct musb_ep *, struct usb_request *, int);
extern void musb_ep_restart(struct musb *, struct musb_request *);
