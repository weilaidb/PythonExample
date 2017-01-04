#define __HID_H
#define USB_INTERFACE_CLASS_HID		3
#define USB_INTERFACE_SUBCLASS_BOOT	1
#define USB_INTERFACE_PROTOCOL_KEYBOARD	1
#define USB_INTERFACE_PROTOCOL_MOUSE	2
#define HID_REQ_GET_REPORT		0x01
#define HID_REQ_GET_IDLE		0x02
#define HID_REQ_GET_PROTOCOL		0x03
#define HID_REQ_SET_REPORT		0x09
#define HID_REQ_SET_IDLE		0x0A
#define HID_REQ_SET_PROTOCOL		0x0B
#define HID_DT_HID			(USB_TYPE_CLASS | 0x01)
#define HID_DT_REPORT			(USB_TYPE_CLASS | 0x02)
#define HID_DT_PHYSICAL			(USB_TYPE_CLASS | 0x03)
#define HID_MAX_DESCRIPTOR_SIZE		4096
struct hid_item ;
#define HID_ITEM_FORMAT_SHORT	0
#define HID_ITEM_FORMAT_LONG	1
#define HID_ITEM_TAG_LONG	15
#define HID_ITEM_TYPE_MAIN		0
#define HID_ITEM_TYPE_GLOBAL		1
#define HID_ITEM_TYPE_LOCAL		2
#define HID_ITEM_TYPE_RESERVED		3
#define HID_MAIN_ITEM_TAG_INPUT			8
#define HID_MAIN_ITEM_TAG_OUTPUT		9
#define HID_MAIN_ITEM_TAG_FEATURE		11
#define HID_MAIN_ITEM_TAG_BEGIN_COLLECTION	10
#define HID_MAIN_ITEM_TAG_END_COLLECTION	12
#define HID_MAIN_ITEM_CONSTANT		0x001
#define HID_MAIN_ITEM_VARIABLE		0x002
#define HID_MAIN_ITEM_RELATIVE		0x004
#define HID_MAIN_ITEM_WRAP		0x008
#define HID_MAIN_ITEM_NONLINEAR		0x010
#define HID_MAIN_ITEM_NO_PREFERRED	0x020
#define HID_MAIN_ITEM_NULL_STATE	0x040
#define HID_MAIN_ITEM_VOLATILE		0x080
#define HID_MAIN_ITEM_BUFFERED_BYTE	0x100
#define HID_COLLECTION_PHYSICAL		0
#define HID_COLLECTION_APPLICATION	1
#define HID_COLLECTION_LOGICAL		2
#define HID_GLOBAL_ITEM_TAG_USAGE_PAGE		0
#define HID_GLOBAL_ITEM_TAG_LOGICAL_MINIMUM	1
#define HID_GLOBAL_ITEM_TAG_LOGICAL_MAXIMUM	2
#define HID_GLOBAL_ITEM_TAG_PHYSICAL_MINIMUM	3
#define HID_GLOBAL_ITEM_TAG_PHYSICAL_MAXIMUM	4
#define HID_GLOBAL_ITEM_TAG_UNIT_EXPONENT	5
#define HID_GLOBAL_ITEM_TAG_UNIT		6
#define HID_GLOBAL_ITEM_TAG_REPORT_SIZE		7
#define HID_GLOBAL_ITEM_TAG_REPORT_ID		8
#define HID_GLOBAL_ITEM_TAG_REPORT_COUNT	9
#define HID_GLOBAL_ITEM_TAG_PUSH		10
#define HID_GLOBAL_ITEM_TAG_POP			11
#define HID_LOCAL_ITEM_TAG_USAGE		0
#define HID_LOCAL_ITEM_TAG_USAGE_MINIMUM	1
#define HID_LOCAL_ITEM_TAG_USAGE_MAXIMUM	2
#define HID_LOCAL_ITEM_TAG_DESIGNATOR_INDEX	3
#define HID_LOCAL_ITEM_TAG_DESIGNATOR_MINIMUM	4
#define HID_LOCAL_ITEM_TAG_DESIGNATOR_MAXIMUM	5
#define HID_LOCAL_ITEM_TAG_STRING_INDEX		7
#define HID_LOCAL_ITEM_TAG_STRING_MINIMUM	8
#define HID_LOCAL_ITEM_TAG_STRING_MAXIMUM	9
#define HID_LOCAL_ITEM_TAG_DELIMITER		10
#define HID_USAGE_PAGE		0xffff0000
#define HID_UP_UNDEFINED	0x00000000
#define HID_UP_GENDESK		0x00010000
#define HID_UP_SIMULATION	0x00020000
#define HID_UP_KEYBOARD		0x00070000
#define HID_UP_LED		0x00080000
#define HID_UP_BUTTON		0x00090000
#define HID_UP_ORDINAL		0x000a0000
#define HID_UP_CONSUMER		0x000c0000
#define HID_UP_DIGITIZER	0x000d0000
#define HID_UP_PID		0x000f0000
#define HID_UP_HPVENDOR         0xff7f0000
#define HID_UP_MSVENDOR		0xff000000
#define HID_UP_CUSTOM		0x00ff0000
#define HID_UP_LOGIVENDOR	0xffbc0000
#define HID_USAGE		0x0000ffff
#define HID_GD_POINTER		0x00010001
#define HID_GD_MOUSE		0x00010002
#define HID_GD_JOYSTICK		0x00010004
#define HID_GD_GAMEPAD		0x00010005
#define HID_GD_KEYBOARD		0x00010006
#define HID_GD_KEYPAD		0x00010007
#define HID_GD_MULTIAXIS	0x00010008
#define HID_GD_X		0x00010030
#define HID_GD_Y		0x00010031
#define HID_GD_Z		0x00010032
#define HID_GD_RX		0x00010033
#define HID_GD_RY		0x00010034
#define HID_GD_RZ		0x00010035
#define HID_GD_SLIDER		0x00010036
#define HID_GD_DIAL		0x00010037
#define HID_GD_WHEEL		0x00010038
#define HID_GD_HATSWITCH	0x00010039
#define HID_GD_BUFFER		0x0001003a
#define HID_GD_BYTECOUNT	0x0001003b
#define HID_GD_MOTION		0x0001003c
#define HID_GD_START		0x0001003d
#define HID_GD_SELECT		0x0001003e
#define HID_GD_VX		0x00010040
#define HID_GD_VY		0x00010041
#define HID_GD_VZ		0x00010042
#define HID_GD_VBRX		0x00010043
#define HID_GD_VBRY		0x00010044
#define HID_GD_VBRZ		0x00010045
#define HID_GD_VNO		0x00010046
#define HID_GD_FEATURE		0x00010047
#define HID_GD_UP		0x00010090
#define HID_GD_DOWN		0x00010091
#define HID_GD_RIGHT		0x00010092
#define HID_GD_LEFT		0x00010093
#define HID_DG_DIGITIZER	0x000d0001
#define HID_DG_PEN		0x000d0002
#define HID_DG_LIGHTPEN		0x000d0003
#define HID_DG_TOUCHSCREEN	0x000d0004
#define HID_DG_TOUCHPAD		0x000d0005
#define HID_DG_STYLUS		0x000d0020
#define HID_DG_PUCK		0x000d0021
#define HID_DG_FINGER		0x000d0022
#define HID_DG_TIPPRESSURE	0x000d0030
#define HID_DG_BARRELPRESSURE	0x000d0031
#define HID_DG_INRANGE		0x000d0032
#define HID_DG_TOUCH		0x000d0033
#define HID_DG_UNTOUCH		0x000d0034
#define HID_DG_TAP		0x000d0035
#define HID_DG_TABLETFUNCTIONKEY	0x000d0039
#define HID_DG_PROGRAMCHANGEKEY	0x000d003a
#define HID_DG_INVERT		0x000d003c
#define HID_DG_TIPSWITCH	0x000d0042
#define HID_DG_TIPSWITCH2	0x000d0043
#define HID_DG_BARRELSWITCH	0x000d0044
#define HID_DG_ERASER		0x000d0045
#define HID_DG_TABLETPICK	0x000d0046
#define HID_DG_CONFIDENCE	0x000d0047
#define HID_DG_WIDTH		0x000d0048
#define HID_DG_HEIGHT		0x000d0049
#define HID_DG_CONTACTID	0x000d0051
#define HID_DG_INPUTMODE	0x000d0052
#define HID_DG_DEVICEINDEX	0x000d0053
#define HID_DG_CONTACTCOUNT	0x000d0054
#define HID_DG_CONTACTMAX	0x000d0055
#define HID_INPUT_REPORT	0
#define HID_OUTPUT_REPORT	1
#define HID_FEATURE_REPORT	2
#define HID_CONNECT_HIDINPUT		0x01
#define HID_CONNECT_HIDINPUT_FORCE	0x02
#define HID_CONNECT_HIDRAW		0x04
#define HID_CONNECT_HIDDEV		0x08
#define HID_CONNECT_HIDDEV_FORCE	0x10
#define HID_CONNECT_FF			0x20
#define HID_CONNECT_DEFAULT	(HID_CONNECT_HIDINPUT|HID_CONNECT_HIDRAW| \
HID_CONNECT_HIDDEV|HID_CONNECT_FF)
#define MAX_USBHID_BOOT_QUIRKS 4
#define HID_QUIRK_INVERT			0x00000001
#define HID_QUIRK_NOTOUCH			0x00000002
#define HID_QUIRK_IGNORE			0x00000004
#define HID_QUIRK_NOGET				0x00000008
#define HID_QUIRK_HIDDEV_FORCE			0x00000010
#define HID_QUIRK_BADPAD			0x00000020
#define HID_QUIRK_MULTI_INPUT			0x00000040
#define HID_QUIRK_HIDINPUT_FORCE		0x00000080
#define HID_QUIRK_SKIP_OUTPUT_REPORTS		0x00010000
#define HID_QUIRK_FULLSPEED_INTERVAL		0x10000000
#define HID_QUIRK_NO_INIT_REPORTS		0x20000000
#define HID_QUIRK_NO_IGNORE			0x40000000
#define HID_QUIRK_NO_INPUT_SYNC			0x80000000
struct hid_global ;
#define HID_MAX_USAGES			12288
#define HID_DEFAULT_NUM_COLLECTIONS	16
struct hid_local ;
struct hid_collection ;
struct hid_usage ;
struct hid_input;
struct hid_field ;
#define HID_MAX_FIELDS 128
struct hid_report ;
struct hid_report_enum ;
#define HID_REPORT_TYPES 3
#define HID_MIN_BUFFER_SIZE	64
#define HID_MAX_BUFFER_SIZE	4096
#define HID_CONTROL_FIFO_SIZE	256
#define HID_OUTPUT_FIFO_SIZE	64
struct hid_control_fifo ;
struct hid_output_fifo ;
#define HID_CLAIMED_INPUT	1
#define HID_CLAIMED_HIDDEV	2
#define HID_CLAIMED_HIDRAW	4
#define HID_STAT_ADDED		1
#define HID_STAT_PARSED		2
struct hid_input ;
enum hid_type ;
struct hid_driver;
struct hid_ll_driver;
struct hid_device ;
static inline void *hid_get_drvdata(struct hid_device *hdev)
static inline void hid_set_drvdata(struct hid_device *hdev, void *data)
#define HID_GLOBAL_STACK_SIZE 4
#define HID_COLLECTION_STACK_SIZE 4
struct hid_parser ;
struct hid_class_descriptor  __attribute__ ((packed));
struct hid_descriptor  __attribute__ ((packed));
#define HID_DEVICE(b, ven, prod) \
.bus = (b), \
.vendor = (ven), .product = (prod)
#define HID_USB_DEVICE(ven, prod)	HID_DEVICE(BUS_USB, ven, prod)
#define HID_BLUETOOTH_DEVICE(ven, prod)	HID_DEVICE(BUS_BLUETOOTH, ven, prod)
#define HID_REPORT_ID(rep) \
.report_type = (rep)
#define HID_USAGE_ID(uhid, utype, ucode) \
.usage_hid = (uhid), .usage_type = (utype), .usage_code = (ucode)
#define HID_TERMINATOR		(HID_ANY_ID - 1)
struct hid_report_id ;
struct hid_usage_id ;
struct hid_driver ;
struct hid_ll_driver ;
#define	PM_HINT_FULLON	1<<5
#define PM_HINT_NORMAL	1<<1
#define IS_INPUT_APPLICATION(a) (((a >= 0x00010000) && (a <= 0x00010008)) || (a == 0x00010080) || (a == 0x000c0001) || ((a >= 0x000d0002) && (a <= 0x000d0006)))
extern int hid_debug;
extern int hid_add_device(struct hid_device *);
extern void hid_destroy_device(struct hid_device *);
extern int __must_check __hid_register_driver(struct hid_driver *,
struct module *, const char *mod_name);
static inline int __must_check hid_register_driver(struct hid_driver *driver)
extern void hid_unregister_driver(struct hid_driver *);
extern void hidinput_hid_event(struct hid_device *, struct hid_field *, struct hid_usage *, __s32);
extern void hidinput_report_event(struct hid_device *hid, struct hid_report *report);
extern int hidinput_connect(struct hid_device *hid, unsigned int force);
extern void hidinput_disconnect(struct hid_device *);
int hid_set_field(struct hid_field *, unsigned, __s32);
int hid_input_report(struct hid_device *, int type, u8 *, int, int);
int hidinput_find_field(struct hid_device *hid, unsigned int type, unsigned int code, struct hid_field **field);
void hid_output_report(struct hid_report *report, __u8 *data);
struct hid_device *hid_allocate_device(void);
struct hid_report *hid_register_report(struct hid_device *device, unsigned type, unsigned id);
int hid_parse_report(struct hid_device *hid, __u8 *start, unsigned size);
int hid_check_keys_pressed(struct hid_device *hid);
int hid_connect(struct hid_device *hid, unsigned int connect_mask);
void hid_disconnect(struct hid_device *hid);
static inline void hid_map_usage(struct hid_input *hidinput,
struct hid_usage *usage, unsigned long **bit, int *max,
__u8 type, __u16 c)
static inline void hid_map_usage_clear(struct hid_input *hidinput,
struct hid_usage *usage, unsigned long **bit, int *max,
__u8 type, __u16 c)
static inline int __must_check hid_parse(struct hid_device *hdev)
static inline int __must_check hid_hw_start(struct hid_device *hdev,
unsigned int connect_mask)
static inline void hid_hw_stop(struct hid_device *hdev)
static inline int __must_check hid_hw_open(struct hid_device *hdev)
static inline void hid_hw_close(struct hid_device *hdev)
static inline int hid_hw_power(struct hid_device *hdev, int level)
void hid_report_raw_event(struct hid_device *hid, int type, u8 *data, int size,
int interrupt);
extern int hid_generic_init(void);
extern void hid_generic_exit(void);
u32 usbhid_lookup_quirk(const u16 idVendor, const u16 idProduct);
int usbhid_quirks_init(char **quirks_param);
void usbhid_quirks_exit(void);
void usbhid_set_leds(struct hid_device *hid);
int hid_pidff_init(struct hid_device *hid);
#define hid_pidff_init NULL
#define dbg_hid(format, arg...)						\
do  while (0)
#define hid_printk(level, hid, fmt, arg...)		\
dev_printk(level, &(hid)->dev, fmt, ##arg)
#define hid_emerg(hid, fmt, arg...)			\
dev_emerg(&(hid)->dev, fmt, ##arg)
#define hid_crit(hid, fmt, arg...)			\
dev_crit(&(hid)->dev, fmt, ##arg)
#define hid_alert(hid, fmt, arg...)			\
dev_alert(&(hid)->dev, fmt, ##arg)
#define hid_err(hid, fmt, arg...)			\
dev_err(&(hid)->dev, fmt, ##arg)
#define hid_notice(hid, fmt, arg...)			\
dev_notice(&(hid)->dev, fmt, ##arg)
#define hid_warn(hid, fmt, arg...)			\
dev_warn(&(hid)->dev, fmt, ##arg)
#define hid_info(hid, fmt, arg...)			\
dev_info(&(hid)->dev, fmt, ##arg)
#define hid_dbg(hid, fmt, arg...)			\
dev_dbg(&(hid)->dev, fmt, ##arg)
