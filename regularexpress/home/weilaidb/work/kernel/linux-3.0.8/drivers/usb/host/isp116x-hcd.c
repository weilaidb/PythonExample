#define USE_PLATFORM_DELAY
#define DRIVER_VERSION	"03 Nov 2005"
#define DRIVER_DESC	"ISP116x USB Host Controller Driver"
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
static const char hcd_name[] = "isp116x-hcd";
static void write_ptddata_to_fifo(struct isp116x *isp116x, void *buf, int len)
static void read_ptddata_from_fifo(struct isp116x *isp116x, void *buf, int len)
static void pack_fifo(struct isp116x *isp116x)
static void unpack_fifo(struct isp116x *isp116x)
static void preproc_atl_queue(struct isp116x *isp116x)
static void finish_request(struct isp116x *isp116x, struct isp116x_ep *ep,
struct urb *urb, int status)
__releases(isp116x->lock) __acquires(isp116x->lock)
static void postproc_atl_queue(struct isp116x *isp116x)
static void start_atl_transfers(struct isp116x *isp116x)
static void finish_atl_transfers(struct isp116x *isp116x)
static irqreturn_t isp116x_irq(struct usb_hcd *hcd)
#define	MAX_PERIODIC_LOAD	600
static int balance(struct isp116x *isp116x, u16 period, u16 load)
static int isp116x_urb_enqueue(struct usb_hcd *hcd,
struct urb *urb,
gfp_t mem_flags)
static int isp116x_urb_dequeue(struct usb_hcd *hcd, struct urb *urb,
int status)
static void isp116x_endpoint_disable(struct usb_hcd *hcd,
struct usb_host_endpoint *hep)
static int isp116x_get_frame(struct usb_hcd *hcd)
static int isp116x_hub_status_data(struct usb_hcd *hcd, char *buf)
static void isp116x_hub_descriptor(struct isp116x *isp116x,
struct usb_hub_descriptor *desc)
static inline void root_port_reset(struct isp116x *isp116x, unsigned port)
static int isp116x_hub_control(struct usb_hcd *hcd,
u16 typeReq,
u16 wValue, u16 wIndex, char *buf, u16 wLength)
static void dump_irq(struct seq_file *s, char *label, u16 mask)
static void dump_int(struct seq_file *s, char *label, u32 mask)
static int isp116x_show_dbg(struct seq_file *s, void *unused)
static int isp116x_open_seq(struct inode *inode, struct file *file)
static const struct file_operations isp116x_debug_fops = ;
static int create_debug_file(struct isp116x *isp116x)
static void remove_debug_file(struct isp116x *isp116x)
#define	create_debug_file(d)	0
#define	remove_debug_file(d)	dowhile(0)
static int isp116x_sw_reset(struct isp116x *isp116x)
static int isp116x_reset(struct usb_hcd *hcd)
static void isp116x_stop(struct usb_hcd *hcd)
static int isp116x_start(struct usb_hcd *hcd)
static int isp116x_bus_suspend(struct usb_hcd *hcd)
static int isp116x_bus_resume(struct usb_hcd *hcd)
#define	isp116x_bus_suspend	NULL
#define	isp116x_bus_resume	NULL
static struct hc_driver isp116x_hc_driver = ;
static int isp116x_remove(struct platform_device *pdev)
static int __devinit isp116x_probe(struct platform_device *pdev)
static int isp116x_suspend(struct platform_device *dev, pm_message_t state)
static int isp116x_resume(struct platform_device *dev)
#define	isp116x_suspend    NULL
#define	isp116x_resume     NULL
MODULE_ALIAS("platform:isp116x-hcd");
static struct platform_driver isp116x_driver = ;
static int __init isp116x_init(void)
module_init(isp116x_init);
static void __exit isp116x_cleanup(void)
module_exit(isp116x_cleanup);
