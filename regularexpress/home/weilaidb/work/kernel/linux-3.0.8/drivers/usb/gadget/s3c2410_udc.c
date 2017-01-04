#define DRIVER_DESC	"S3C2410 USB Device Controller Gadget"
#define DRIVER_VERSION	"29 Apr 2007"
#define DRIVER_AUTHOR	"Herbert Pötzl <herbert@13thfloor.at>, " \
"Arnaud Patard <arnaud.patard@rtp-net.org>"
static const char		gadget_name[] = "s3c2410_udc";
static const char		driver_desc[] = DRIVER_DESC;
static struct s3c2410_udc	*the_controller;
static struct clk		*udc_clock;
static struct clk		*usb_bus_clock;
static void __iomem		*base_addr;
static u64			rsrc_start;
static u64			rsrc_len;
static struct dentry		*s3c2410_udc_debugfs_root;
static inline u32 udc_read(u32 reg)
static inline void udc_write(u32 value, u32 reg)
static inline void udc_writeb(void __iomem *base, u32 value, u32 reg)
static struct s3c2410_udc_mach_info *udc_info;
#define DEBUG_NORMAL	1
#define DEBUG_VERBOSE	2
#define USB_S3C2410_DEBUG_LEVEL 0
static uint32_t s3c2410_ticks = 0;
static int dprintk(int level, const char *fmt, ...)
static int dprintk(int level, const char *fmt, ...)
static int s3c2410_udc_debugfs_seq_show(struct seq_file *m, void *p)
static int s3c2410_udc_debugfs_fops_open(struct inode *inode,
struct file *file)
static const struct file_operations s3c2410_udc_debugfs_fops = ;
static inline void s3c2410_udc_clear_ep0_opr(void __iomem *base)
static inline void s3c2410_udc_clear_ep0_sst(void __iomem *base)
static inline void s3c2410_udc_clear_ep0_se(void __iomem *base)
static inline void s3c2410_udc_set_ep0_ipr(void __iomem *base)
static inline void s3c2410_udc_set_ep0_de(void __iomem *base)
inline void s3c2410_udc_set_ep0_ss(void __iomem *b)
static inline void s3c2410_udc_set_ep0_de_out(void __iomem *base)
static inline void s3c2410_udc_set_ep0_sse_out(void __iomem *base)
static inline void s3c2410_udc_set_ep0_de_in(void __iomem *base)
static void s3c2410_udc_done(struct s3c2410_ep *ep,
struct s3c2410_request *req, int status)
static void s3c2410_udc_nuke(struct s3c2410_udc *udc,
struct s3c2410_ep *ep, int status)
static inline void s3c2410_udc_clear_ep_state(struct s3c2410_udc *dev)
static inline int s3c2410_udc_fifo_count_out(void)
static inline int s3c2410_udc_write_packet(int fifo,
struct s3c2410_request *req,
unsigned max)
static int s3c2410_udc_write_fifo(struct s3c2410_ep *ep,
struct s3c2410_request *req)
static inline int s3c2410_udc_read_packet(int fifo, u8 *buf,
struct s3c2410_request *req, unsigned avail)
static int s3c2410_udc_read_fifo(struct s3c2410_ep *ep,
struct s3c2410_request *req)
static int s3c2410_udc_read_fifo_crq(struct usb_ctrlrequest *crq)
static int s3c2410_udc_get_status(struct s3c2410_udc *dev,
struct usb_ctrlrequest *crq)
static int s3c2410_udc_set_halt(struct usb_ep *_ep, int value);
static void s3c2410_udc_handle_ep0_idle(struct s3c2410_udc *dev,
struct s3c2410_ep *ep,
struct usb_ctrlrequest *crq,
u32 ep0csr)
static void s3c2410_udc_handle_ep0(struct s3c2410_udc *dev)
static void s3c2410_udc_handle_ep(struct s3c2410_ep *ep)
static irqreturn_t s3c2410_udc_irq(int dummy, void *_dev)
static inline struct s3c2410_ep *to_s3c2410_ep(struct usb_ep *ep)
static inline struct s3c2410_udc *to_s3c2410_udc(struct usb_gadget *gadget)
static inline struct s3c2410_request *to_s3c2410_req(struct usb_request *req)
static int s3c2410_udc_ep_enable(struct usb_ep *_ep,
const struct usb_endpoint_descriptor *desc)
static int s3c2410_udc_ep_disable(struct usb_ep *_ep)
static struct usb_request *
s3c2410_udc_alloc_request(struct usb_ep *_ep, gfp_t mem_flags)
static void
s3c2410_udc_free_request(struct usb_ep *_ep, struct usb_request *_req)
static int s3c2410_udc_queue(struct usb_ep *_ep, struct usb_request *_req,
gfp_t gfp_flags)
static int s3c2410_udc_dequeue(struct usb_ep *_ep, struct usb_request *_req)
static int s3c2410_udc_set_halt(struct usb_ep *_ep, int value)
static const struct usb_ep_ops s3c2410_ep_ops = ;
static int s3c2410_udc_get_frame(struct usb_gadget *_gadget)
static int s3c2410_udc_wakeup(struct usb_gadget *_gadget)
static int s3c2410_udc_set_selfpowered(struct usb_gadget *gadget, int value)
static void s3c2410_udc_disable(struct s3c2410_udc *dev);
static void s3c2410_udc_enable(struct s3c2410_udc *dev);
static int s3c2410_udc_set_pullup(struct s3c2410_udc *udc, int is_on)
static int s3c2410_udc_vbus_session(struct usb_gadget *gadget, int is_active)
static int s3c2410_udc_pullup(struct usb_gadget *gadget, int is_on)
static irqreturn_t s3c2410_udc_vbus_irq(int irq, void *_dev)
static int s3c2410_vbus_draw(struct usb_gadget *_gadget, unsigned ma)
static const struct usb_gadget_ops s3c2410_ops = ;
static void s3c2410_udc_command(enum s3c2410_udc_cmd_e cmd)
static void s3c2410_udc_disable(struct s3c2410_udc *dev)
static void s3c2410_udc_reinit(struct s3c2410_udc *dev)
static void s3c2410_udc_enable(struct s3c2410_udc *dev)
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
int usb_gadget_unregister_driver(struct usb_gadget_driver *driver)
static struct s3c2410_udc memory = ;
static int s3c2410_udc_probe(struct platform_device *pdev)
static int s3c2410_udc_remove(struct platform_device *pdev)
static int s3c2410_udc_suspend(struct platform_device *pdev, pm_message_t message)
static int s3c2410_udc_resume(struct platform_device *pdev)
#define s3c2410_udc_suspend	NULL
#define s3c2410_udc_resume	NULL
static struct platform_driver udc_driver_2410 = ;
static struct platform_driver udc_driver_2440 = ;
static int __init udc_init(void)
static void __exit udc_exit(void)
EXPORT_SYMBOL(usb_gadget_unregister_driver);
module_init(udc_init);
module_exit(udc_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_VERSION(DRIVER_VERSION);
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:s3c2410-usbgadget");
MODULE_ALIAS("platform:s3c2440-usbgadget");
