#undef	VERBOSE
#undef	PACKET_TRACE
MODULE_DESCRIPTION("SL811HS USB Host Controller Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:sl811-hcd");
#define DRIVER_VERSION	"19 May 2005"
#	define	STUB_DEBUG_FILE
#undef	USE_B
#define	QUIRK3
static const char hcd_name[] = "sl811-hcd";
static void port_power(struct sl811 *sl811, int is_on)
static void setup_packet(
struct sl811		*sl811,
struct sl811h_ep	*ep,
struct urb		*urb,
u8			bank,
u8			control
)
static void status_packet(
struct sl811		*sl811,
struct sl811h_ep	*ep,
struct urb		*urb,
u8			bank,
u8			control
)
static void in_packet(
struct sl811		*sl811,
struct sl811h_ep	*ep,
struct urb		*urb,
u8			bank,
u8			control
)
static void out_packet(
struct sl811		*sl811,
struct sl811h_ep	*ep,
struct urb		*urb,
u8			bank,
u8			control
)
static inline void sofirq_on(struct sl811 *sl811)
static inline void sofirq_off(struct sl811 *sl811)
static struct sl811h_ep	*start(struct sl811 *sl811, u8 bank)
#define MIN_JIFFIES	((msecs_to_jiffies(2) > 1) ? msecs_to_jiffies(2) : 2)
static inline void start_transfer(struct sl811 *sl811)
static void finish_request(
struct sl811		*sl811,
struct sl811h_ep	*ep,
struct urb		*urb,
int			status
) __releases(sl811->lock) __acquires(sl811->lock)
static void
done(struct sl811 *sl811, struct sl811h_ep *ep, u8 bank)
static inline u8 checkdone(struct sl811 *sl811)
static irqreturn_t sl811h_irq(struct usb_hcd *hcd)
#define	MAX_PERIODIC_LOAD	500
static int balance(struct sl811 *sl811, u16 period, u16 load)
static int sl811h_urb_enqueue(
struct usb_hcd		*hcd,
struct urb		*urb,
gfp_t			mem_flags
)
static int sl811h_urb_dequeue(struct usb_hcd *hcd, struct urb *urb, int status)
static void
sl811h_endpoint_disable(struct usb_hcd *hcd, struct usb_host_endpoint *hep)
static int
sl811h_get_frame(struct usb_hcd *hcd)
static int
sl811h_hub_status_data(struct usb_hcd *hcd, char *buf)
static void
sl811h_hub_descriptor (
struct sl811			*sl811,
struct usb_hub_descriptor	*desc
)
static void
sl811h_timer(unsigned long _sl811)
static int
sl811h_hub_control(
struct usb_hcd	*hcd,
u16		typeReq,
u16		wValue,
u16		wIndex,
char		*buf,
u16		wLength
)
static int
sl811h_bus_suspend(struct usb_hcd *hcd)
static int
sl811h_bus_resume(struct usb_hcd *hcd)
#define	sl811h_bus_suspend	NULL
#define	sl811h_bus_resume	NULL
static inline void create_debug_file(struct sl811 *sl811)
static inline void remove_debug_file(struct sl811 *sl811)
static void dump_irq(struct seq_file *s, char *label, u8 mask)
static int proc_sl811h_show(struct seq_file *s, void *unused)
static int proc_sl811h_open(struct inode *inode, struct file *file)
static const struct file_operations proc_ops = ;
static const char proc_filename[] = "driver/sl811h";
static void create_debug_file(struct sl811 *sl811)
static void remove_debug_file(struct sl811 *sl811)
static void
sl811h_stop(struct usb_hcd *hcd)
static int
sl811h_start(struct usb_hcd *hcd)
static struct hc_driver sl811h_hc_driver = ;
static int __devexit
sl811h_remove(struct platform_device *dev)
static int __devinit
sl811h_probe(struct platform_device *dev)
static int
sl811h_suspend(struct platform_device *dev, pm_message_t state)
static int
sl811h_resume(struct platform_device *dev)
#define	sl811h_suspend	NULL
#define	sl811h_resume	NULL
struct platform_driver sl811h_driver = ;
EXPORT_SYMBOL(sl811h_driver);
static int __init sl811h_init(void)
module_init(sl811h_init);
static void __exit sl811h_cleanup(void)
module_exit(sl811h_cleanup);
