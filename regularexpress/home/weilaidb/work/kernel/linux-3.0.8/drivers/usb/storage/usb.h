#define _USB_H_
struct us_data;
struct scsi_cmnd;
struct us_unusual_dev ;
#define US_FLIDX_URB_ACTIVE	0
#define US_FLIDX_SG_ACTIVE	1
#define US_FLIDX_ABORTING	2
#define US_FLIDX_DISCONNECTING	3
#define US_FLIDX_RESETTING	4
#define US_FLIDX_TIMED_OUT	5
#define US_FLIDX_DONT_SCAN	6
#define US_FLIDX_REDO_READ10	7
#define US_FLIDX_READ10_WORKED	8
#define USB_STOR_STRING_LEN 32
#define US_IOBUF_SIZE		64
#define US_SENSE_SIZE		18
typedef int (*trans_cmnd)(struct scsi_cmnd *, struct us_data*);
typedef int (*trans_reset)(struct us_data*);
typedef void (*proto_cmnd)(struct scsi_cmnd*, struct us_data*);
typedef void (*extra_data_destructor)(void *);
typedef void (*pm_hook)(struct us_data *, int);
#define US_SUSPEND	0
#define US_RESUME	1
struct us_data ;
static inline struct Scsi_Host *us_to_host(struct us_data *us)
static inline struct us_data *host_to_us(struct Scsi_Host *host)
extern void fill_inquiry_response(struct us_data *us,
unsigned char *data, unsigned int data_len);
#define scsi_unlock(host)	spin_unlock_irq(host->host_lock)
#define scsi_lock(host)		spin_lock_irq(host->host_lock)
extern int usb_stor_suspend(struct usb_interface *iface, pm_message_t message);
extern int usb_stor_resume(struct usb_interface *iface);
extern int usb_stor_reset_resume(struct usb_interface *iface);
#define usb_stor_suspend	NULL
#define usb_stor_resume		NULL
#define usb_stor_reset_resume	NULL
extern int usb_stor_pre_reset(struct usb_interface *iface);
extern int usb_stor_post_reset(struct usb_interface *iface);
extern int usb_stor_probe1(struct us_data **pus,
struct usb_interface *intf,
const struct usb_device_id *id,
struct us_unusual_dev *unusual_dev);
extern int usb_stor_probe2(struct us_data *us);
extern void usb_stor_disconnect(struct usb_interface *intf);
