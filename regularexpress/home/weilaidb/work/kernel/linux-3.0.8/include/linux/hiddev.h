#define _HIDDEV_H
struct hiddev_event ;
struct hiddev_devinfo ;
struct hiddev_collection_info ;
#define HID_STRING_SIZE 256
struct hiddev_string_descriptor ;
struct hiddev_report_info ;
#define HID_REPORT_ID_UNKNOWN 0xffffffff
#define HID_REPORT_ID_FIRST   0x00000100
#define HID_REPORT_ID_NEXT    0x00000200
#define HID_REPORT_ID_MASK    0x000000ff
#define HID_REPORT_ID_MAX     0x000000ff
#define HID_REPORT_TYPE_INPUT	1
#define HID_REPORT_TYPE_OUTPUT	2
#define HID_REPORT_TYPE_FEATURE	3
#define HID_REPORT_TYPE_MIN     1
#define HID_REPORT_TYPE_MAX     3
struct hiddev_field_info ;
#define HID_FIELD_CONSTANT		0x001
#define HID_FIELD_VARIABLE		0x002
#define HID_FIELD_RELATIVE		0x004
#define HID_FIELD_WRAP			0x008
#define HID_FIELD_NONLINEAR		0x010
#define HID_FIELD_NO_PREFERRED		0x020
#define HID_FIELD_NULL_STATE		0x040
#define HID_FIELD_VOLATILE		0x080
#define HID_FIELD_BUFFERED_BYTE		0x100
struct hiddev_usage_ref ;
#define HID_MAX_MULTI_USAGES 1024
struct hiddev_usage_ref_multi ;
#define HID_FIELD_INDEX_NONE 0xffffffff
#define HID_VERSION		0x010004
#define HIDIOCGVERSION		_IOR('H', 0x01, int)
#define HIDIOCAPPLICATION	_IO('H', 0x02)
#define HIDIOCGDEVINFO		_IOR('H', 0x03, struct hiddev_devinfo)
#define HIDIOCGSTRING		_IOR('H', 0x04, struct hiddev_string_descriptor)
#define HIDIOCINITREPORT	_IO('H', 0x05)
#define HIDIOCGNAME(len)	_IOC(_IOC_READ, 'H', 0x06, len)
#define HIDIOCGREPORT		_IOW('H', 0x07, struct hiddev_report_info)
#define HIDIOCSREPORT		_IOW('H', 0x08, struct hiddev_report_info)
#define HIDIOCGREPORTINFO	_IOWR('H', 0x09, struct hiddev_report_info)
#define HIDIOCGFIELDINFO	_IOWR('H', 0x0A, struct hiddev_field_info)
#define HIDIOCGUSAGE		_IOWR('H', 0x0B, struct hiddev_usage_ref)
#define HIDIOCSUSAGE		_IOW('H', 0x0C, struct hiddev_usage_ref)
#define HIDIOCGUCODE		_IOWR('H', 0x0D, struct hiddev_usage_ref)
#define HIDIOCGFLAG		_IOR('H', 0x0E, int)
#define HIDIOCSFLAG		_IOW('H', 0x0F, int)
#define HIDIOCGCOLLECTIONINDEX	_IOW('H', 0x10, struct hiddev_usage_ref)
#define HIDIOCGCOLLECTIONINFO	_IOWR('H', 0x11, struct hiddev_collection_info)
#define HIDIOCGPHYS(len)	_IOC(_IOC_READ, 'H', 0x12, len)
#define HIDIOCGUSAGES		_IOWR('H', 0x13, struct hiddev_usage_ref_multi)
#define HIDIOCSUSAGES		_IOW('H', 0x14, struct hiddev_usage_ref_multi)
#define HIDDEV_FLAG_UREF	0x1
#define HIDDEV_FLAG_REPORT	0x2
#define HIDDEV_FLAGS		0x3
struct hid_device;
struct hid_usage;
struct hid_field;
struct hid_report;
int hiddev_connect(struct hid_device *hid, unsigned int force);
void hiddev_disconnect(struct hid_device *);
void hiddev_hid_event(struct hid_device *hid, struct hid_field *field,
struct hid_usage *usage, __s32 value);
void hiddev_report_event(struct hid_device *hid, struct hid_report *report);
static inline int hiddev_connect(struct hid_device *hid,
unsigned int force)
static inline void hiddev_disconnect(struct hid_device *hid)
static inline void hiddev_hid_event(struct hid_device *hid, struct hid_field *field,
struct hid_usage *usage, __s32 value)
static inline void hiddev_report_event(struct hid_device *hid, struct hid_report *report)
