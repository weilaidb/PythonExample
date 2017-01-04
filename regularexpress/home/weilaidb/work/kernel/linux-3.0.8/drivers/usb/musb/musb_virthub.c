static void musb_port_suspend(struct musb *musb, bool do_suspend)
static void musb_port_reset(struct musb *musb, bool do_reset)
void musb_root_disconnect(struct musb *musb)
int musb_hub_status_data(struct usb_hcd *hcd, char *buf)
int musb_hub_control(
struct usb_hcd	*hcd,
u16		typeReq,
u16		wValue,
u16		wIndex,
char		*buf,
u16		wLength)
