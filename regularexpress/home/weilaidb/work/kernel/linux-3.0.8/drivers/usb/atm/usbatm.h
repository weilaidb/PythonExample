#define	_USBATM_H_
#define UDSL_ASSERT(instance, x)	BUG_ON(!(x))
#define UDSL_ASSERT(instance, x)					\
do  while (0)
#define usb_err(instance, format, arg...)	\
dev_err(&(instance)->usb_intf->dev , format , ## arg)
#define usb_info(instance, format, arg...)	\
dev_info(&(instance)->usb_intf->dev , format , ## arg)
#define usb_warn(instance, format, arg...)	\
dev_warn(&(instance)->usb_intf->dev , format , ## arg)
#define usb_dbg(instance, format, arg...)	\
dev_printk(KERN_DEBUG , &(instance)->usb_intf->dev , format , ## arg)
#define usb_dbg(instance, format, arg...)	\
do  while (0)
#define atm_printk(level, instance, format, arg...)	\
printk(level "ATM dev %d: " format ,		\
(instance)->atm_dev->number , ## arg)
#define atm_err(instance, format, arg...)	\
atm_printk(KERN_ERR, instance , format , ## arg)
#define atm_info(instance, format, arg...)	\
atm_printk(KERN_INFO, instance , format , ## arg)
#define atm_warn(instance, format, arg...)	\
atm_printk(KERN_WARNING, instance , format , ## arg)
#define atm_dbg(instance, format, arg...)	\
atm_printk(KERN_DEBUG, instance , format , ## arg)
#define atm_rldbg(instance, format, arg...)	\
if (printk_ratelimit())				\
atm_printk(KERN_DEBUG, instance , format , ## arg)
#define atm_dbg(instance, format, arg...)	\
do  while (0)
#define atm_rldbg(instance, format, arg...)	\
do  while (0)
#define UDSL_SKIP_HEAVY_INIT	(1<<0)
#define UDSL_USE_ISOC		(1<<1)
#define UDSL_IGNORE_EILSEQ	(1<<2)
struct usbatm_data;
struct usbatm_driver ;
extern int usbatm_usb_probe(struct usb_interface *intf, const struct usb_device_id *id,
struct usbatm_driver *driver);
extern void usbatm_usb_disconnect(struct usb_interface *intf);
struct usbatm_channel ;
struct usbatm_data ;
static inline void *to_usbatm_driver_data(struct usb_interface *intf)
