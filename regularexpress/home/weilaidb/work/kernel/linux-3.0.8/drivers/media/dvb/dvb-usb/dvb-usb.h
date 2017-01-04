#define __DVB_USB_H__
#define dprintk(var,level,args...) \
do  while (0)
#define debug_dump(b,l,func)
#define DVB_USB_DEBUG_STATUS
#define dprintk(args...)
#define debug_dump(b,l,func)
#define DVB_USB_DEBUG_STATUS " (debugging is not enabled)"
#define DVB_USB_LOG_PREFIX "dvb-usb (please define a log prefix)"
#undef err
#define err(format, arg...)  printk(KERN_ERR     DVB_USB_LOG_PREFIX ": " format "\n" , ## arg)
#undef info
#define info(format, arg...) printk(KERN_INFO    DVB_USB_LOG_PREFIX ": " format "\n" , ## arg)
#undef warn
#define warn(format, arg...) printk(KERN_WARNING DVB_USB_LOG_PREFIX ": " format "\n" , ## arg)
struct dvb_usb_device_description ;
static inline u8 rc5_custom(struct rc_map_table *key)
static inline u8 rc5_data(struct rc_map_table *key)
static inline u8 rc5_scan(struct rc_map_table *key)
struct dvb_usb_device;
struct dvb_usb_adapter;
struct usb_data_stream;
struct usb_data_stream_properties ;
struct dvb_usb_adapter_properties ;
struct dvb_rc_legacy ;
struct dvb_rc ;
enum dvb_usb_mode ;
#define MAX_NO_OF_ADAPTER_PER_DEVICE 2
struct dvb_usb_device_properties ;
#define MAX_NO_URBS_FOR_DATA_STREAM 10
struct usb_data_stream ;
struct dvb_usb_adapter ;
struct dvb_usb_device ;
extern int dvb_usb_device_init(struct usb_interface *,
struct dvb_usb_device_properties *,
struct module *, struct dvb_usb_device **,
short *adapter_nums);
extern void dvb_usb_device_exit(struct usb_interface *);
extern int dvb_usb_generic_rw(struct dvb_usb_device *, u8 *, u16, u8 *, u16,int);
extern int dvb_usb_generic_write(struct dvb_usb_device *, u8 *, u16);
extern int dvb_usb_nec_rc_key_to_event(struct dvb_usb_device *, u8[], u32 *, int *);
struct hexline ;
extern int usb_cypress_load_firmware(struct usb_device *udev, const struct firmware *fw, int type);
extern int dvb_usb_get_hexline(const struct firmware *fw, struct hexline *hx, int *pos);
