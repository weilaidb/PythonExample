static void wusbhc_devconnect_acked_work(struct work_struct *work);
static void wusb_dev_free(struct wusb_dev *wusb_dev)
static struct wusb_dev *wusb_dev_alloc(struct wusbhc *wusbhc)
static void wusbhc_fill_cack_ie(struct wusbhc *wusbhc)
static struct wusb_dev *wusbhc_cack_add(struct wusbhc *wusbhc,
struct wusb_dn_connect *dnc,
const char *pr_cdid, u8 port_idx)
static void wusbhc_cack_rm(struct wusbhc *wusbhc, struct wusb_dev *wusb_dev)
static
void wusbhc_devconnect_acked(struct wusbhc *wusbhc, struct wusb_dev *wusb_dev)
static void wusbhc_devconnect_acked_work(struct work_struct *work)
static
void wusbhc_devconnect_ack(struct wusbhc *wusbhc, struct wusb_dn_connect *dnc,
const char *pr_cdid)
static void __wusbhc_dev_disconnect(struct wusbhc *wusbhc,
struct wusb_port *port)
static void __wusbhc_keep_alive(struct wusbhc *wusbhc)
static void wusbhc_keep_alive_run(struct work_struct *ws)
static struct wusb_dev *wusbhc_find_dev_by_addr(struct wusbhc *wusbhc, u8 addr)
static void wusbhc_handle_dn_alive(struct wusbhc *wusbhc, struct wusb_dev *wusb_dev)
static void wusbhc_handle_dn_connect(struct wusbhc *wusbhc,
struct wusb_dn_hdr *dn_hdr,
size_t size)
static void wusbhc_handle_dn_disconnect(struct wusbhc *wusbhc, struct wusb_dev *wusb_dev)
void wusbhc_handle_dn(struct wusbhc *wusbhc, u8 srcaddr,
struct wusb_dn_hdr *dn_hdr, size_t size)
EXPORT_SYMBOL_GPL(wusbhc_handle_dn);
void __wusbhc_dev_disable(struct wusbhc *wusbhc, u8 port_idx)
static int wusb_dev_bos_grok(struct usb_device *usb_dev,
struct wusb_dev *wusb_dev,
struct usb_bos_descriptor *bos, size_t desc_size)
static int wusb_dev_bos_add(struct usb_device *usb_dev,
struct wusb_dev *wusb_dev)
static void wusb_dev_bos_rm(struct wusb_dev *wusb_dev)
;
static struct usb_wireless_cap_descriptor wusb_cap_descr_default = ;
static void wusb_dev_add_ncb(struct usb_device *usb_dev)
static void wusb_dev_rm_ncb(struct usb_device *usb_dev)
int wusb_usb_ncb(struct notifier_block *nb, unsigned long val,
void *priv)
struct wusb_dev *__wusb_dev_get_by_usb_dev(struct wusbhc *wusbhc,
struct usb_device *usb_dev)
EXPORT_SYMBOL_GPL(__wusb_dev_get_by_usb_dev);
void wusb_dev_destroy(struct kref *_wusb_dev)
EXPORT_SYMBOL_GPL(wusb_dev_destroy);
int wusbhc_devconnect_create(struct wusbhc *wusbhc)
void wusbhc_devconnect_destroy(struct wusbhc *wusbhc)
int wusbhc_devconnect_start(struct wusbhc *wusbhc)
void wusbhc_devconnect_stop(struct wusbhc *wusbhc)
int wusb_set_dev_addr(struct wusbhc *wusbhc, struct wusb_dev *wusb_dev, u8 addr)
