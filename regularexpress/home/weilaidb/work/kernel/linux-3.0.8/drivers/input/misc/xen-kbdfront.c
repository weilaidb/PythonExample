#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
struct xenkbd_info ;
static int xenkbd_remove(struct xenbus_device *);
static int xenkbd_connect_backend(struct xenbus_device *, struct xenkbd_info *);
static void xenkbd_disconnect_backend(struct xenkbd_info *);
static irqreturn_t input_handler(int rq, void *dev_id)
static int __devinit xenkbd_probe(struct xenbus_device *dev,
const struct xenbus_device_id *id)
static int xenkbd_resume(struct xenbus_device *dev)
static int xenkbd_remove(struct xenbus_device *dev)
static int xenkbd_connect_backend(struct xenbus_device *dev,
struct xenkbd_info *info)
static void xenkbd_disconnect_backend(struct xenkbd_info *info)
static void xenkbd_backend_changed(struct xenbus_device *dev,
enum xenbus_state backend_state)
static const struct xenbus_device_id xenkbd_ids[] = ;
static struct xenbus_driver xenkbd_driver = ;
static int __init xenkbd_init(void)
static void __exit xenkbd_cleanup(void)
module_init(xenkbd_init);
module_exit(xenkbd_cleanup);
MODULE_DESCRIPTION("Xen virtual keyboard/pointer device frontend");
MODULE_LICENSE("GPL");
MODULE_ALIAS("xen:vkbd");
