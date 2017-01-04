#define _HIDRAW_H
struct hidraw_report_descriptor ;
struct hidraw_devinfo ;
#define HIDIOCGRDESCSIZE	_IOR('H', 0x01, int)
#define HIDIOCGRDESC		_IOR('H', 0x02, struct hidraw_report_descriptor)
#define HIDIOCGRAWINFO		_IOR('H', 0x03, struct hidraw_devinfo)
#define HIDIOCGRAWNAME(len)     _IOC(_IOC_READ, 'H', 0x04, len)
#define HIDIOCGRAWPHYS(len)     _IOC(_IOC_READ, 'H', 0x05, len)
#define HIDIOCSFEATURE(len)    _IOC(_IOC_WRITE|_IOC_READ, 'H', 0x06, len)
#define HIDIOCGFEATURE(len)    _IOC(_IOC_WRITE|_IOC_READ, 'H', 0x07, len)
#define HIDRAW_FIRST_MINOR 0
#define HIDRAW_MAX_DEVICES 64
#define HIDRAW_BUFFER_SIZE 64
struct hidraw ;
struct hidraw_report ;
struct hidraw_list ;
int hidraw_init(void);
void hidraw_exit(void);
void hidraw_report_event(struct hid_device *, u8 *, int);
int hidraw_connect(struct hid_device *);
void hidraw_disconnect(struct hid_device *);
static inline int hidraw_init(void)
static inline void hidraw_exit(void)
static inline void hidraw_report_event(struct hid_device *hid, u8 *data, int len)
static inline int hidraw_connect(struct hid_device *hid)
static inline void hidraw_disconnect(struct hid_device *hid)
