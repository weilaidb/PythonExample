#define	__LINUX_USB_COMPOSITE_H
#define USB_GADGET_DELAYED_STATUS       0x7fff
struct usb_configuration;
struct usb_function ;
int usb_add_function(struct usb_configuration *, struct usb_function *);
int usb_function_deactivate(struct usb_function *);
int usb_function_activate(struct usb_function *);
int usb_interface_id(struct usb_configuration *, struct usb_function *);
static inline struct usb_endpoint_descriptor *
ep_choose(struct usb_gadget *g, struct usb_endpoint_descriptor *hs,
struct usb_endpoint_descriptor *fs)
#define	MAX_CONFIG_INTERFACES		16
struct usb_configuration ;
int usb_add_config(struct usb_composite_dev *,
struct usb_configuration *,
int (*)(struct usb_configuration *));
struct usb_composite_driver ;
extern int usb_composite_probe(struct usb_composite_driver *driver,
int (*bind)(struct usb_composite_dev *cdev));
extern void usb_composite_unregister(struct usb_composite_driver *driver);
extern void usb_composite_setup_continue(struct usb_composite_dev *cdev);
struct usb_composite_dev ;
extern int usb_string_id(struct usb_composite_dev *c);
extern int usb_string_ids_tab(struct usb_composite_dev *c,
struct usb_string *str);
extern int usb_string_ids_n(struct usb_composite_dev *c, unsigned n);
#define DBG(d, fmt, args...) \
dev_dbg(&(d)->gadget->dev , fmt , ## args)
#define VDBG(d, fmt, args...) \
dev_vdbg(&(d)->gadget->dev , fmt , ## args)
#define ERROR(d, fmt, args...) \
dev_err(&(d)->gadget->dev , fmt , ## args)
#define WARNING(d, fmt, args...) \
dev_warn(&(d)->gadget->dev , fmt , ## args)
#define INFO(d, fmt, args...) \
dev_info(&(d)->gadget->dev , fmt , ## args)
