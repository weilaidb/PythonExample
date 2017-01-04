static void mon_stop(struct mon_bus *mbus);
static void mon_dissolve(struct mon_bus *mbus, struct usb_bus *ubus);
static void mon_bus_drop(struct kref *r);
static void mon_bus_init(struct usb_bus *ubus);
DEFINE_MUTEX(mon_lock);
struct mon_bus mon_bus0;
static LIST_HEAD(mon_buses);
void mon_reader_add(struct mon_bus *mbus, struct mon_reader *r)
void mon_reader_del(struct mon_bus *mbus, struct mon_reader *r)
static void mon_bus_submit(struct mon_bus *mbus, struct urb *urb)
static void mon_submit(struct usb_bus *ubus, struct urb *urb)
static void mon_bus_submit_error(struct mon_bus *mbus, struct urb *urb, int error)
static void mon_submit_error(struct usb_bus *ubus, struct urb *urb, int error)
static void mon_bus_complete(struct mon_bus *mbus, struct urb *urb, int status)
static void mon_complete(struct usb_bus *ubus, struct urb *urb, int status)
static void mon_stop(struct mon_bus *mbus)
static void mon_bus_add(struct usb_bus *ubus)
static void mon_bus_remove(struct usb_bus *ubus)
static int mon_notify(struct notifier_block *self, unsigned long action,
void *dev)
static struct notifier_block mon_nb = ;
static struct usb_mon_operations mon_ops_0 = ;
static void mon_dissolve(struct mon_bus *mbus, struct usb_bus *ubus)
static void mon_bus_drop(struct kref *r)
static void mon_bus_init(struct usb_bus *ubus)
static void mon_bus0_init(void)
struct mon_bus *mon_bus_lookup(unsigned int num)
static int __init mon_init(void)
static void __exit mon_exit(void)
module_init(mon_init);
module_exit(mon_exit);
MODULE_LICENSE("GPL");
