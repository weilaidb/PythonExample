#define RT2X00USB_H
#define to_usb_device_intf(d) \
()
#define REGISTER_TIMEOUT		500
#define REGISTER_TIMEOUT_FIRMWARE	1000
#define REGISTER_TIMEOUT16(__datalen)	\
( REGISTER_TIMEOUT * ((__datalen) / sizeof(u16)) )
#define REGISTER_TIMEOUT32(__datalen)	\
( REGISTER_TIMEOUT * ((__datalen) / sizeof(u32)) )
#define CSR_CACHE_SIZE			64
#define USB_VENDOR_REQUEST	( USB_TYPE_VENDOR | USB_RECIP_DEVICE )
#define USB_VENDOR_REQUEST_IN	( USB_DIR_IN | USB_VENDOR_REQUEST )
#define USB_VENDOR_REQUEST_OUT	( USB_DIR_OUT | USB_VENDOR_REQUEST )
enum rt2x00usb_vendor_request ;
enum rt2x00usb_mode_offset ;
int rt2x00usb_vendor_request(struct rt2x00_dev *rt2x00dev,
const u8 request, const u8 requesttype,
const u16 offset, const u16 value,
void *buffer, const u16 buffer_length,
const int timeout);
int rt2x00usb_vendor_request_buff(struct rt2x00_dev *rt2x00dev,
const u8 request, const u8 requesttype,
const u16 offset, void *buffer,
const u16 buffer_length, const int timeout);
int rt2x00usb_vendor_req_buff_lock(struct rt2x00_dev *rt2x00dev,
const u8 request, const u8 requesttype,
const u16 offset, void *buffer,
const u16 buffer_length, const int timeout);
static inline int rt2x00usb_vendor_request_sw(struct rt2x00_dev *rt2x00dev,
const u8 request,
const u16 offset,
const u16 value,
const int timeout)
static inline int rt2x00usb_eeprom_read(struct rt2x00_dev *rt2x00dev,
__le16 *eeprom, const u16 length)
static inline void rt2x00usb_register_read(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
u32 *value)
static inline void rt2x00usb_register_read_lock(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
u32 *value)
static inline void rt2x00usb_register_multiread(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
void *value, const u32 length)
static inline void rt2x00usb_register_write(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
u32 value)
static inline void rt2x00usb_register_write_lock(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
u32 value)
static inline void rt2x00usb_register_multiwrite(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
const void *value,
const u32 length)
int rt2x00usb_regbusy_read(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
const struct rt2x00_field32 field,
u32 *reg);
void rt2x00usb_register_read_async(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
bool (*callback)(struct rt2x00_dev*, int, u32));
void rt2x00usb_disable_radio(struct rt2x00_dev *rt2x00dev);
struct queue_entry_priv_usb ;
struct queue_entry_priv_usb_bcn ;
void rt2x00usb_kick_queue(struct data_queue *queue);
void rt2x00usb_flush_queue(struct data_queue *queue, bool drop);
void rt2x00usb_watchdog(struct rt2x00_dev *rt2x00dev);
void rt2x00usb_clear_entry(struct queue_entry *entry);
int rt2x00usb_initialize(struct rt2x00_dev *rt2x00dev);
void rt2x00usb_uninitialize(struct rt2x00_dev *rt2x00dev);
int rt2x00usb_probe(struct usb_interface *usb_intf,
const struct rt2x00_ops *ops);
void rt2x00usb_disconnect(struct usb_interface *usb_intf);
int rt2x00usb_suspend(struct usb_interface *usb_intf, pm_message_t state);
int rt2x00usb_resume(struct usb_interface *usb_intf);
#define rt2x00usb_suspend	NULL
#define rt2x00usb_resume	NULL
