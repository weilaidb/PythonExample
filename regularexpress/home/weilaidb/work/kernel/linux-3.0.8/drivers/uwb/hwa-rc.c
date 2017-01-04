#define WUSB_QUIRK_WHCI_CMD_EVT		0x01
struct hwarc ;
struct uwb_rc_evt_beacon_WUSB_0100  __attribute__((packed));
static
int hwarc_filter_evt_beacon_WUSB_0100(struct uwb_rc *rc,
struct uwb_rceb **header,
const size_t buf_size,
size_t *new_size)
struct uwb_rc_evt_drp_avail_WUSB_0100  __attribute__((packed));
static
int hwarc_filter_evt_drp_avail_WUSB_0100(struct uwb_rc *rc,
struct uwb_rceb **header,
const size_t buf_size,
size_t *new_size)
struct uwb_rc_evt_drp_WUSB_0100  __attribute__((packed));
static
int hwarc_filter_evt_drp_WUSB_0100(struct uwb_rc *rc,
struct uwb_rceb **header,
const size_t buf_size,
size_t *new_size)
struct uwb_rc_cmd_scan_WUSB_0100  __attribute__((packed));
static
int hwarc_filter_cmd_scan_WUSB_0100(struct uwb_rc *rc,
struct uwb_rccb **header,
size_t *size)
struct uwb_rc_cmd_set_drp_ie_WUSB_0100  __attribute__((packed));
static
int hwarc_filter_cmd_set_drp_ie_WUSB_0100(struct uwb_rc *rc,
struct uwb_rccb **header,
size_t *size)
static
int hwarc_filter_cmd_WUSB_0100(struct uwb_rc *rc, struct uwb_rccb **header,
size_t *size)
static
int hwarc_filter_cmd(struct uwb_rc *rc, struct uwb_rccb **header,
size_t *size)
static
ssize_t hwarc_get_event_size(struct uwb_rc *rc, const struct uwb_rceb *rceb,
size_t core_size, size_t offset,
const size_t buf_size)
struct uwb_rc_evt_bp_slot_change_WUSB_0100  __attribute__((packed));
static
int hwarc_filter_event_WUSB_0100(struct uwb_rc *rc, struct uwb_rceb **header,
const size_t buf_size, size_t *_real_size,
size_t *_new_size)
static
int hwarc_filter_event(struct uwb_rc *rc, struct uwb_rceb **header,
const size_t buf_size, size_t *_real_size,
size_t *_new_size)
static
int hwarc_cmd(struct uwb_rc *uwb_rc, const struct uwb_rccb *cmd, size_t cmd_size)
static
int hwarc_reset(struct uwb_rc *uwb_rc)
static
void hwarc_neep_cb(struct urb *urb)
static void hwarc_init(struct hwarc *hwarc)
static int hwarc_neep_init(struct uwb_rc *rc)
static void hwarc_neep_release(struct uwb_rc *rc)
static int hwarc_get_version(struct uwb_rc *rc)
static int hwarc_probe(struct usb_interface *iface,
const struct usb_device_id *id)
static void hwarc_disconnect(struct usb_interface *iface)
static int hwarc_pre_reset(struct usb_interface *iface)
static int hwarc_post_reset(struct usb_interface *iface)
static const struct usb_device_id hwarc_id_table[] = ;
MODULE_DEVICE_TABLE(usb, hwarc_id_table);
static struct usb_driver hwarc_driver = ;
static int __init hwarc_driver_init(void)
module_init(hwarc_driver_init);
static void __exit hwarc_driver_exit(void)
module_exit(hwarc_driver_exit);
MODULE_AUTHOR("Inaky Perez-Gonzalez <inaky.perez-gonzalez@intel.com>");
MODULE_DESCRIPTION("Host Wireless Adapter Radio Control Driver");
MODULE_LICENSE("GPL");
