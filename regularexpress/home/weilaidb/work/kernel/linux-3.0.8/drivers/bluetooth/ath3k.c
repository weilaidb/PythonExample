#define VERSION "1.0"
#define ATH3K_DNLOAD				0x01
#define ATH3K_GETSTATE				0x05
#define ATH3K_SET_NORMAL_MODE			0x07
#define ATH3K_GETVERSION			0x09
#define USB_REG_SWITCH_VID_PID			0x0a
#define ATH3K_MODE_MASK				0x3F
#define ATH3K_NORMAL_MODE			0x0E
#define ATH3K_PATCH_UPDATE			0x80
#define ATH3K_SYSCFG_UPDATE			0x40
#define ATH3K_XTAL_FREQ_26M			0x00
#define ATH3K_XTAL_FREQ_40M			0x01
#define ATH3K_XTAL_FREQ_19P2			0x02
#define ATH3K_NAME_LEN				0xFF
struct ath3k_version ;
static struct usb_device_id ath3k_table[] = ;
MODULE_DEVICE_TABLE(usb, ath3k_table);
#define BTUSB_ATH3012		0x80
static struct usb_device_id ath3k_blist_tbl[] = ;
#define USB_REQ_DFU_DNLOAD	1
#define BULK_SIZE		4096
#define FW_HDR_SIZE		20
static int ath3k_load_firmware(struct usb_device *udev,
const struct firmware *firmware)
static int ath3k_get_state(struct usb_device *udev, unsigned char *state)
static int ath3k_get_version(struct usb_device *udev,
struct ath3k_version *version)
static int ath3k_load_fwfile(struct usb_device *udev,
const struct firmware *firmware)
static int ath3k_switch_pid(struct usb_device *udev)
static int ath3k_set_normal_mode(struct usb_device *udev)
static int ath3k_load_patch(struct usb_device *udev)
static int ath3k_load_syscfg(struct usb_device *udev)
static int ath3k_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void ath3k_disconnect(struct usb_interface *intf)
static struct usb_driver ath3k_driver = ;
static int __init ath3k_init(void)
static void __exit ath3k_exit(void)
module_init(ath3k_init);
module_exit(ath3k_exit);
MODULE_AUTHOR("Atheros Communications");
MODULE_DESCRIPTION("Atheros AR30xx firmware driver");
MODULE_VERSION(VERSION);
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("ath3k-1.fw");
