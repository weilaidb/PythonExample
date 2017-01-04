struct hwahc ;
static int __hwahc_set_cluster_id(struct hwahc *hwahc, u8 cluster_id)
static int __hwahc_op_set_num_dnts(struct wusbhc *wusbhc, u8 interval, u8 slots)
static int hwahc_op_reset(struct usb_hcd *usb_hcd)
static int hwahc_op_start(struct usb_hcd *usb_hcd)
static void hwahc_op_stop(struct usb_hcd *usb_hcd)
static int hwahc_op_get_frame_number(struct usb_hcd *usb_hcd)
static int hwahc_op_urb_enqueue(struct usb_hcd *usb_hcd, struct urb *urb,
gfp_t gfp)
static int hwahc_op_urb_dequeue(struct usb_hcd *usb_hcd, struct urb *urb,
int status)
static void hwahc_op_endpoint_disable(struct usb_hcd *usb_hcd,
struct usb_host_endpoint *ep)
static int __hwahc_op_wusbhc_start(struct wusbhc *wusbhc)
static void __hwahc_op_wusbhc_stop(struct wusbhc *wusbhc, int delay)
static int __hwahc_op_bwa_set(struct wusbhc *wusbhc, s8 stream_index,
const struct uwb_mas_bm *mas)
static int __hwahc_op_mmcie_add(struct wusbhc *wusbhc, u8 interval,
u8 repeat_cnt, u8 handle,
struct wuie_hdr *wuie)
static int __hwahc_op_mmcie_rm(struct wusbhc *wusbhc, u8 handle)
static int __hwahc_op_dev_info_set(struct wusbhc *wusbhc,
struct wusb_dev *wusb_dev)
static int __hwahc_dev_set_key(struct wusbhc *wusbhc, u8 port_idx, u32 tkid,
const void *key, size_t key_size,
u8 key_idx)
static int __hwahc_op_set_ptk(struct wusbhc *wusbhc, u8 port_idx, u32 tkid,
const void *key, size_t key_size)
static int __hwahc_op_set_gtk(struct wusbhc *wusbhc, u32 tkid,
const void *key, size_t key_size)
static int wa_fill_descr(struct wahc *wa)
static struct hc_driver hwahc_hc_driver = ;
static int hwahc_security_create(struct hwahc *hwahc)
static void hwahc_security_release(struct hwahc *hwahc)
static int hwahc_create(struct hwahc *hwahc, struct usb_interface *iface)
static void hwahc_destroy(struct hwahc *hwahc)
static void hwahc_init(struct hwahc *hwahc)
static int hwahc_probe(struct usb_interface *usb_iface,
const struct usb_device_id *id)
static void hwahc_disconnect(struct usb_interface *usb_iface)
static struct usb_device_id hwahc_id_table[] = ;
MODULE_DEVICE_TABLE(usb, hwahc_id_table);
static struct usb_driver hwahc_driver = ;
static int __init hwahc_driver_init(void)
module_init(hwahc_driver_init);
static void __exit hwahc_driver_exit(void)
module_exit(hwahc_driver_exit);
MODULE_AUTHOR("Inaky Perez-Gonzalez <inaky.perez-gonzalez@intel.com>");
MODULE_DESCRIPTION("Host Wired Adapter USB Host Control Driver");
MODULE_LICENSE("GPL");
