static int wusbhc_rh_port_reset(struct wusbhc *wusbhc, u8 port_idx)
int wusbhc_rh_status_data(struct usb_hcd *usb_hcd, char *_buf)
EXPORT_SYMBOL_GPL(wusbhc_rh_status_data);
static int wusbhc_rh_get_hub_descr(struct wusbhc *wusbhc, u16 wValue,
u16 wIndex,
struct usb_hub_descriptor *descr,
u16 wLength)
static int wusbhc_rh_clear_hub_feat(struct wusbhc *wusbhc, u16 feature)
static int wusbhc_rh_get_hub_status(struct wusbhc *wusbhc, u32 *buf,
u16 wLength)
static int wusbhc_rh_set_port_feat(struct wusbhc *wusbhc, u16 feature,
u8 selector, u8 port_idx)
static int wusbhc_rh_clear_port_feat(struct wusbhc *wusbhc, u16 feature,
u8 selector, u8 port_idx)
static int wusbhc_rh_get_port_status(struct wusbhc *wusbhc, u16 port_idx,
u32 *_buf, u16 wLength)
int wusbhc_rh_control(struct usb_hcd *usb_hcd, u16 reqntype, u16 wValue,
u16 wIndex, char *buf, u16 wLength)
EXPORT_SYMBOL_GPL(wusbhc_rh_control);
int wusbhc_rh_suspend(struct usb_hcd *usb_hcd)
EXPORT_SYMBOL_GPL(wusbhc_rh_suspend);
int wusbhc_rh_resume(struct usb_hcd *usb_hcd)
EXPORT_SYMBOL_GPL(wusbhc_rh_resume);
int wusbhc_rh_start_port_reset(struct usb_hcd *usb_hcd, unsigned port_idx)
EXPORT_SYMBOL_GPL(wusbhc_rh_start_port_reset);
static void wusb_port_init(struct wusb_port *port)
int wusbhc_rh_create(struct wusbhc *wusbhc)
void wusbhc_rh_destroy(struct wusbhc *wusbhc)
