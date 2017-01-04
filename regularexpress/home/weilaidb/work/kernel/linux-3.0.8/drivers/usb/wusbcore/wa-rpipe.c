static int __rpipe_get_descr(struct wahc *wa,
struct usb_rpipe_descriptor *descr, u16 index)
static int __rpipe_set_descr(struct wahc *wa,
struct usb_rpipe_descriptor *descr, u16 index)
static void rpipe_init(struct wa_rpipe *rpipe)
static unsigned rpipe_get_idx(struct wahc *wa, unsigned rpipe_idx)
static void rpipe_put_idx(struct wahc *wa, unsigned rpipe_idx)
void rpipe_destroy(struct kref *_rpipe)
EXPORT_SYMBOL_GPL(rpipe_destroy);
static int rpipe_get_idle(struct wa_rpipe **prpipe, struct wahc *wa, u8 crs,
gfp_t gfp)
static int __rpipe_reset(struct wahc *wa, unsigned index)
static struct usb_wireless_ep_comp_descriptor epc0 = ;
static struct usb_wireless_ep_comp_descriptor *rpipe_epc_find(
struct device *dev, struct usb_host_endpoint *ep)
static int rpipe_aim(struct wa_rpipe *rpipe, struct wahc *wa,
struct usb_host_endpoint *ep, struct urb *urb, gfp_t gfp)
static int rpipe_check_aim(const struct wa_rpipe *rpipe, const struct wahc *wa,
const struct usb_host_endpoint *ep,
const struct urb *urb, gfp_t gfp)
#define CONFIG_BUG 0
int rpipe_get_by_ep(struct wahc *wa, struct usb_host_endpoint *ep,
struct urb *urb, gfp_t gfp)
int wa_rpipes_create(struct wahc *wa)
void wa_rpipes_destroy(struct wahc *wa)
void rpipe_ep_disable(struct wahc *wa, struct usb_host_endpoint *ep)
EXPORT_SYMBOL_GPL(rpipe_ep_disable);
