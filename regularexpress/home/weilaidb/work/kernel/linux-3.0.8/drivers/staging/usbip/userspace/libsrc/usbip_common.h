#define _USBIP_COMMON_H
#define USBIDS_FILE "/usr/share/hwdata/usb.ids"
#define VHCI_STATE_PATH "/var/run/vhci_hcd"
enum usb_device_speed ;
enum usbip_device_status;
extern int usbip_use_syslog;
extern int usbip_use_stderr;
extern int usbip_use_debug ;
#define err(fmt, args...)	do  while (0)
#define notice(fmt, args...)	do  while (0)
#define info(fmt, args...)	do  while (0)
#define dbg(fmt, args...)	do  while (0)
#define BUG()	do  while (0)
struct usb_interface  __attribute__((packed));
struct usb_device  __attribute__((packed));
#define to_string(s)	#s
void dump_usb_interface(struct usb_interface *);
void dump_usb_device(struct usb_device *);
int read_usb_device(struct sysfs_device *sdev, struct usb_device *udev);
int read_attr_value(struct sysfs_device *dev, const char *name, const char *format);
int read_usb_interface(struct usb_device *udev, int i, struct usb_interface *uinf);
const char *usbip_speed_string(int num);
const char *usbip_status_string(int32_t status);
int usbip_names_init(char *);
void usbip_names_free(void);
void usbip_names_get_product(char *buff, size_t size, uint16_t vendor, uint16_t product);
void usbip_names_get_class(char *buff, size_t size, uint8_t class, uint8_t subclass, uint8_t protocol);
