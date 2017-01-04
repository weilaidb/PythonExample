#define  GTCO_VERSION   "2.00.0006"
#define VENDOR_ID_GTCO	      0x078C
#define PID_400               0x400
#define PID_401               0x401
#define PID_1000              0x1000
#define PID_1001              0x1001
#define PID_1002              0x1002
#define REPORT_MAX_SIZE       10
#define MASK_INRANGE 0x20
#define MASK_BUTTON  0x01F
#define  PATHLENGTH     64
static const struct usb_device_id gtco_usbid_table[] = ;
MODULE_DEVICE_TABLE (usb, gtco_usbid_table);
struct gtco ;
struct hid_descriptor
__attribute__ ((packed));
#define HID_DESCRIPTOR_SIZE   9
#define HID_DEVICE_TYPE       33
#define REPORT_DEVICE_TYPE    34
#define PREF_TAG(x)     ((x)>>4)
#define PREF_TYPE(x)    ((x>>2)&0x03)
#define PREF_SIZE(x)    ((x)&0x03)
#define TYPE_MAIN       0
#define TYPE_GLOBAL     1
#define TYPE_LOCAL      2
#define TYPE_RESERVED   3
#define TAG_MAIN_INPUT        0x8
#define TAG_MAIN_OUTPUT       0x9
#define TAG_MAIN_FEATURE      0xB
#define TAG_MAIN_COL_START    0xA
#define TAG_MAIN_COL_END      0xC
#define TAG_GLOB_USAGE        0
#define TAG_GLOB_LOG_MIN      1
#define TAG_GLOB_LOG_MAX      2
#define TAG_GLOB_PHYS_MIN     3
#define TAG_GLOB_PHYS_MAX     4
#define TAG_GLOB_UNIT_EXP     5
#define TAG_GLOB_UNIT         6
#define TAG_GLOB_REPORT_SZ    7
#define TAG_GLOB_REPORT_ID    8
#define TAG_GLOB_REPORT_CNT   9
#define TAG_GLOB_PUSH         10
#define TAG_GLOB_POP          11
#define TAG_GLOB_MAX          12
#define DIGITIZER_USAGE_TIP_PRESSURE   0x30
#define DIGITIZER_USAGE_TILT_X         0x3D
#define DIGITIZER_USAGE_TILT_Y         0x3E
static void parse_hid_report_descriptor(struct gtco *device, char * report,
int length)
static int gtco_input_open(struct input_dev *inputdev)
static void gtco_input_close(struct input_dev *inputdev)
static void gtco_setup_caps(struct input_dev *inputdev)
static void gtco_urb_callback(struct urb *urbinfo)
static int gtco_probe(struct usb_interface *usbinterface,
const struct usb_device_id *id)
static void gtco_disconnect(struct usb_interface *interface)
static struct usb_driver gtco_driverinfo_table = ;
static int __init gtco_init(void)
static void __exit gtco_exit(void)
module_init(gtco_init);
module_exit(gtco_exit);
MODULE_DESCRIPTION("GTCO digitizer USB driver");
MODULE_LICENSE("GPL");
