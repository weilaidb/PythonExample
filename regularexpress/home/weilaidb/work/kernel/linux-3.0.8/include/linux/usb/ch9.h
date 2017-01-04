#define __LINUX_USB_CH9_H
#define USB_DIR_OUT			0
#define USB_DIR_IN			0x80
#define USB_TYPE_MASK			(0x03 << 5)
#define USB_TYPE_STANDARD		(0x00 << 5)
#define USB_TYPE_CLASS			(0x01 << 5)
#define USB_TYPE_VENDOR			(0x02 << 5)
#define USB_TYPE_RESERVED		(0x03 << 5)
#define USB_RECIP_MASK			0x1f
#define USB_RECIP_DEVICE		0x00
#define USB_RECIP_INTERFACE		0x01
#define USB_RECIP_ENDPOINT		0x02
#define USB_RECIP_OTHER			0x03
#define USB_RECIP_PORT			0x04
#define USB_RECIP_RPIPE		0x05
#define USB_REQ_GET_STATUS		0x00
#define USB_REQ_CLEAR_FEATURE		0x01
#define USB_REQ_SET_FEATURE		0x03
#define USB_REQ_SET_ADDRESS		0x05
#define USB_REQ_GET_DESCRIPTOR		0x06
#define USB_REQ_SET_DESCRIPTOR		0x07
#define USB_REQ_GET_CONFIGURATION	0x08
#define USB_REQ_SET_CONFIGURATION	0x09
#define USB_REQ_GET_INTERFACE		0x0A
#define USB_REQ_SET_INTERFACE		0x0B
#define USB_REQ_SYNCH_FRAME		0x0C
#define USB_REQ_SET_ENCRYPTION		0x0D
#define USB_REQ_GET_ENCRYPTION		0x0E
#define USB_REQ_RPIPE_ABORT		0x0E
#define USB_REQ_SET_HANDSHAKE		0x0F
#define USB_REQ_RPIPE_RESET		0x0F
#define USB_REQ_GET_HANDSHAKE		0x10
#define USB_REQ_SET_CONNECTION		0x11
#define USB_REQ_SET_SECURITY_DATA	0x12
#define USB_REQ_GET_SECURITY_DATA	0x13
#define USB_REQ_SET_WUSB_DATA		0x14
#define USB_REQ_LOOPBACK_DATA_WRITE	0x15
#define USB_REQ_LOOPBACK_DATA_READ	0x16
#define USB_REQ_SET_INTERFACE_DS	0x17
#define USB_DEVICE_SELF_POWERED		0
#define USB_DEVICE_REMOTE_WAKEUP	1
#define USB_DEVICE_TEST_MODE		2
#define USB_DEVICE_BATTERY		2
#define USB_DEVICE_B_HNP_ENABLE		3
#define USB_DEVICE_WUSB_DEVICE		3
#define USB_DEVICE_A_HNP_SUPPORT	4
#define USB_DEVICE_A_ALT_HNP_SUPPORT	5
#define USB_DEVICE_DEBUG_MODE		6
#define	TEST_J		1
#define	TEST_K		2
#define	TEST_SE0_NAK	3
#define	TEST_PACKET	4
#define	TEST_FORCE_EN	5
#define USB_DEVICE_U1_ENABLE	48
#define USB_DEVICE_U2_ENABLE	49
#define USB_DEVICE_LTM_ENABLE	50
#define USB_INTRF_FUNC_SUSPEND	0
#define USB_INTR_FUNC_SUSPEND_OPT_MASK	0xFF00
#define USB_ENDPOINT_HALT		0
#define USB_DEV_STAT_U1_ENABLED		2
#define USB_DEV_STAT_U2_ENABLED		3
#define USB_DEV_STAT_LTM_ENABLED	4
struct usb_ctrlrequest  __attribute__ ((packed));
#define USB_DT_DEVICE			0x01
#define USB_DT_CONFIG			0x02
#define USB_DT_STRING			0x03
#define USB_DT_INTERFACE		0x04
#define USB_DT_ENDPOINT			0x05
#define USB_DT_DEVICE_QUALIFIER		0x06
#define USB_DT_OTHER_SPEED_CONFIG	0x07
#define USB_DT_INTERFACE_POWER		0x08
#define USB_DT_OTG			0x09
#define USB_DT_DEBUG			0x0a
#define USB_DT_INTERFACE_ASSOCIATION	0x0b
#define USB_DT_SECURITY			0x0c
#define USB_DT_KEY			0x0d
#define USB_DT_ENCRYPTION_TYPE		0x0e
#define USB_DT_BOS			0x0f
#define USB_DT_DEVICE_CAPABILITY	0x10
#define USB_DT_WIRELESS_ENDPOINT_COMP	0x11
#define USB_DT_WIRE_ADAPTER		0x21
#define USB_DT_RPIPE			0x22
#define USB_DT_CS_RADIO_CONTROL		0x23
#define USB_DT_PIPE_USAGE		0x24
#define	USB_DT_SS_ENDPOINT_COMP		0x30
#define USB_DT_CS_DEVICE		(USB_TYPE_CLASS | USB_DT_DEVICE)
#define USB_DT_CS_CONFIG		(USB_TYPE_CLASS | USB_DT_CONFIG)
#define USB_DT_CS_STRING		(USB_TYPE_CLASS | USB_DT_STRING)
#define USB_DT_CS_INTERFACE		(USB_TYPE_CLASS | USB_DT_INTERFACE)
#define USB_DT_CS_ENDPOINT		(USB_TYPE_CLASS | USB_DT_ENDPOINT)
struct usb_descriptor_header  __attribute__ ((packed));
struct usb_device_descriptor  __attribute__ ((packed));
#define USB_DT_DEVICE_SIZE		18
#define USB_CLASS_PER_INTERFACE		0
#define USB_CLASS_AUDIO			1
#define USB_CLASS_COMM			2
#define USB_CLASS_HID			3
#define USB_CLASS_PHYSICAL		5
#define USB_CLASS_STILL_IMAGE		6
#define USB_CLASS_PRINTER		7
#define USB_CLASS_MASS_STORAGE		8
#define USB_CLASS_HUB			9
#define USB_CLASS_CDC_DATA		0x0a
#define USB_CLASS_CSCID			0x0b
#define USB_CLASS_CONTENT_SEC		0x0d
#define USB_CLASS_VIDEO			0x0e
#define USB_CLASS_WIRELESS_CONTROLLER	0xe0
#define USB_CLASS_MISC			0xef
#define USB_CLASS_APP_SPEC		0xfe
#define USB_CLASS_VENDOR_SPEC		0xff
#define USB_SUBCLASS_VENDOR_SPEC	0xff
struct usb_config_descriptor  __attribute__ ((packed));
#define USB_DT_CONFIG_SIZE		9
#define USB_CONFIG_ATT_ONE		(1 << 7)
#define USB_CONFIG_ATT_SELFPOWER	(1 << 6)
#define USB_CONFIG_ATT_WAKEUP		(1 << 5)
#define USB_CONFIG_ATT_BATTERY		(1 << 4)
struct usb_string_descriptor  __attribute__ ((packed));
struct usb_interface_descriptor  __attribute__ ((packed));
#define USB_DT_INTERFACE_SIZE		9
struct usb_endpoint_descriptor  __attribute__ ((packed));
#define USB_DT_ENDPOINT_SIZE		7
#define USB_DT_ENDPOINT_AUDIO_SIZE	9
#define USB_ENDPOINT_NUMBER_MASK	0x0f
#define USB_ENDPOINT_DIR_MASK		0x80
#define USB_ENDPOINT_SYNCTYPE		0x0c
#define USB_ENDPOINT_SYNC_NONE		(0 << 2)
#define USB_ENDPOINT_SYNC_ASYNC		(1 << 2)
#define USB_ENDPOINT_SYNC_ADAPTIVE	(2 << 2)
#define USB_ENDPOINT_SYNC_SYNC		(3 << 2)
#define USB_ENDPOINT_XFERTYPE_MASK	0x03
#define USB_ENDPOINT_XFER_CONTROL	0
#define USB_ENDPOINT_XFER_ISOC		1
#define USB_ENDPOINT_XFER_BULK		2
#define USB_ENDPOINT_XFER_INT		3
#define USB_ENDPOINT_MAX_ADJUSTABLE	0x80
static inline int usb_endpoint_num(const struct usb_endpoint_descriptor *epd)
static inline int usb_endpoint_type(const struct usb_endpoint_descriptor *epd)
static inline int usb_endpoint_dir_in(const struct usb_endpoint_descriptor *epd)
static inline int usb_endpoint_dir_out(
const struct usb_endpoint_descriptor *epd)
static inline int usb_endpoint_xfer_bulk(
const struct usb_endpoint_descriptor *epd)
static inline int usb_endpoint_xfer_control(
const struct usb_endpoint_descriptor *epd)
static inline int usb_endpoint_xfer_int(
const struct usb_endpoint_descriptor *epd)
static inline int usb_endpoint_xfer_isoc(
const struct usb_endpoint_descriptor *epd)
static inline int usb_endpoint_is_bulk_in(
const struct usb_endpoint_descriptor *epd)
static inline int usb_endpoint_is_bulk_out(
const struct usb_endpoint_descriptor *epd)
static inline int usb_endpoint_is_int_in(
const struct usb_endpoint_descriptor *epd)
static inline int usb_endpoint_is_int_out(
const struct usb_endpoint_descriptor *epd)
static inline int usb_endpoint_is_isoc_in(
const struct usb_endpoint_descriptor *epd)
static inline int usb_endpoint_is_isoc_out(
const struct usb_endpoint_descriptor *epd)
struct usb_ss_ep_comp_descriptor  __attribute__ ((packed));
#define USB_DT_SS_EP_COMP_SIZE		6
#define USB_SS_MAX_STREAMS(p)		(1 << ((p) & 0x1f))
#define USB_SS_MULT(p)			(1 + ((p) & 0x3))
struct usb_qualifier_descriptor  __attribute__ ((packed));
struct usb_otg_descriptor  __attribute__ ((packed));
#define USB_OTG_SRP		(1 << 0)
#define USB_OTG_HNP		(1 << 1)
struct usb_debug_descriptor  __attribute__((packed));
struct usb_interface_assoc_descriptor  __attribute__ ((packed));
struct usb_security_descriptor  __attribute__((packed));
struct usb_key_descriptor  __attribute__((packed));
struct usb_encryption_descriptor  __attribute__((packed));
struct usb_bos_descriptor  __attribute__((packed));
#define USB_DT_BOS_SIZE		5
struct usb_dev_cap_header  __attribute__((packed));
#define	USB_CAP_TYPE_WIRELESS_USB	1
struct usb_wireless_cap_descriptor  __attribute__((packed));
#define	USB_CAP_TYPE_EXT		2
struct usb_ext_cap_descriptor  __attribute__((packed));
#define USB_DT_USB_EXT_CAP_SIZE	7
#define		USB_SS_CAP_TYPE		3
struct usb_ss_cap_descriptor  __attribute__((packed));
#define USB_DT_USB_SS_CAP_SIZE	10
#define	CONTAINER_ID_TYPE	4
struct usb_ss_container_id_descriptor  __attribute__((packed));
#define USB_DT_USB_SS_CONTN_ID_SIZE	20
struct usb_wireless_ep_comp_descriptor  __attribute__((packed));
struct usb_handshake  __attribute__((packed));
struct usb_connection_context  __attribute__((packed));
enum usb_device_speed ;
enum usb_device_state ;
#define USB_SELF_POWER_VBUS_MAX_DRAW		100
