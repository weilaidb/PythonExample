static void wusbhc_set_gtk_callback(struct urb *urb);
static void wusbhc_gtk_rekey_done_work(struct work_struct *work);
int wusbhc_sec_create(struct wusbhc *wusbhc)
void wusbhc_sec_destroy(struct wusbhc *wusbhc)
static u32 wusbhc_next_tkid(struct wusbhc *wusbhc, struct wusb_dev *wusb_dev)
static void wusbhc_generate_gtk(struct wusbhc *wusbhc)
int wusbhc_sec_start(struct wusbhc *wusbhc)
void wusbhc_sec_stop(struct wusbhc *wusbhc)
const char *wusb_et_name(u8 x)
EXPORT_SYMBOL_GPL(wusb_et_name);
static int wusb_dev_set_encryption(struct usb_device *usb_dev, int value)
static int wusb_dev_set_gtk(struct wusbhc *wusbhc, struct wusb_dev *wusb_dev)
int wusb_dev_sec_add(struct wusbhc *wusbhc,
struct usb_device *usb_dev, struct wusb_dev *wusb_dev)
void wusb_dev_sec_rm(struct wusb_dev *wusb_dev)
int wusb_dev_update_address(struct wusbhc *wusbhc, struct wusb_dev *wusb_dev)
int wusb_dev_4way_handshake(struct wusbhc *wusbhc, struct wusb_dev *wusb_dev,
struct wusb_ckhdid *ck)
static void wusbhc_gtk_rekey_done_work(struct work_struct *work)
static void wusbhc_set_gtk_callback(struct urb *urb)
void wusbhc_gtk_rekey(struct wusbhc *wusbhc)
