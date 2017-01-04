struct usbtest_param ;
#define USBTEST_REQUEST	_IOWR('U', 100, struct usbtest_param)
#define	GENERIC
struct usbtest_info ;
struct usbtest_dev ;
static struct usb_device *testdev_to_usbdev(struct usbtest_dev *test)
#define	INTERRUPT_RATE		1
#define ERROR(tdev, fmt, args...) \
dev_err(&(tdev)->intf->dev , fmt , ## args)
#define WARNING(tdev, fmt, args...) \
dev_warn(&(tdev)->intf->dev , fmt , ## args)
#define GUARD_BYTE	0xA5
static int
get_endpoints(struct usbtest_dev *dev, struct usb_interface *intf)
static void simple_callback(struct urb *urb)
static struct urb *usbtest_alloc_urb(
struct usb_device	*udev,
int			pipe,
unsigned long		bytes,
unsigned		transfer_flags,
unsigned		offset)
static struct urb *simple_alloc_urb(
struct usb_device	*udev,
int			pipe,
unsigned long		bytes)
static unsigned pattern;
static unsigned mod_pattern;
module_param_named(pattern, mod_pattern, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(mod_pattern, "i/o pattern (0 == zeroes)");
static inline void simple_fill_buf(struct urb *urb)
static inline unsigned long buffer_offset(void *buf)
static int check_guard_bytes(struct usbtest_dev *tdev, struct urb *urb)
static int simple_check_buf(struct usbtest_dev *tdev, struct urb *urb)
static void simple_free_urb(struct urb *urb)
static int simple_io(
struct usbtest_dev	*tdev,
struct urb		*urb,
int			iterations,
int			vary,
int			expected,
const char		*label
)
static void free_sglist(struct scatterlist *sg, int nents)
static struct scatterlist *
alloc_sglist(int nents, int max, int vary)
static int perform_sglist(
struct usbtest_dev	*tdev,
unsigned		iterations,
int			pipe,
struct usb_sg_request	*req,
struct scatterlist	*sg,
int			nents
)
static unsigned realworld = 1;
module_param(realworld, uint, 0);
MODULE_PARM_DESC(realworld, "clear to demand stricter spec compliance");
static int get_altsetting(struct usbtest_dev *dev)
static int set_altsetting(struct usbtest_dev *dev, int alternate)
static int is_good_config(struct usbtest_dev *tdev, int len)
static int ch9_postconfig(struct usbtest_dev *dev)
struct ctrl_ctx ;
#define NUM_SUBCASES	15
struct subcase ;
static void ctrl_complete(struct urb *urb)
static int
test_ctrl_queue(struct usbtest_dev *dev, struct usbtest_param *param)
#undef NUM_SUBCASES
static void unlink1_callback(struct urb *urb)
static int unlink1(struct usbtest_dev *dev, int pipe, int size, int async)
static int unlink_simple(struct usbtest_dev *dev, int pipe, int len)
struct queued_ctx ;
static void unlink_queued_callback(struct urb *urb)
static int unlink_queued(struct usbtest_dev *dev, int pipe, unsigned num,
unsigned size)
static int verify_not_halted(struct usbtest_dev *tdev, int ep, struct urb *urb)
static int verify_halted(struct usbtest_dev *tdev, int ep, struct urb *urb)
static int test_halt(struct usbtest_dev *tdev, int ep, struct urb *urb)
static int halt_simple(struct usbtest_dev *dev)
static int ctrl_out(struct usbtest_dev *dev,
unsigned count, unsigned length, unsigned vary, unsigned offset)
struct iso_context ;
static void iso_callback(struct urb *urb)
static struct urb *iso_alloc_urb(
struct usb_device	*udev,
int			pipe,
struct usb_endpoint_descriptor	*desc,
long			bytes,
unsigned offset
)
static int
test_iso_queue(struct usbtest_dev *dev, struct usbtest_param *param,
int pipe, struct usb_endpoint_descriptor *desc, unsigned offset)
static int test_unaligned_bulk(
struct usbtest_dev *tdev,
int pipe,
unsigned length,
int iterations,
unsigned transfer_flags,
const char *label)
static int
usbtest_ioctl(struct usb_interface *intf, unsigned int code, void *buf)
static unsigned force_interrupt;
module_param(force_interrupt, uint, 0);
MODULE_PARM_DESC(force_interrupt, "0 = test default; else interrupt");
static unsigned short vendor;
module_param(vendor, ushort, 0);
MODULE_PARM_DESC(vendor, "vendor code (from usb-if)");
static unsigned short product;
module_param(product, ushort, 0);
MODULE_PARM_DESC(product, "product code (from vendor)");
static int
usbtest_probe(struct usb_interface *intf, const struct usb_device_id *id)
static int usbtest_suspend(struct usb_interface *intf, pm_message_t message)
static int usbtest_resume(struct usb_interface *intf)
static void usbtest_disconnect(struct usb_interface *intf)
static struct usbtest_info ez1_info = ;
static struct usbtest_info ez2_info = ;
static struct usbtest_info fw_info = ;
static struct usbtest_info gz_info = ;
static struct usbtest_info um_info = ;
static struct usbtest_info um2_info = ;
static struct usbtest_info ibot2_info = ;
static struct usbtest_info generic_info = ;
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver usbtest_driver = ;
static int __init usbtest_init(void)
module_init(usbtest_init);
static void __exit usbtest_exit(void)
module_exit(usbtest_exit);
MODULE_DESCRIPTION("USB Core/HCD Testing Driver");
MODULE_LICENSE("GPL");
