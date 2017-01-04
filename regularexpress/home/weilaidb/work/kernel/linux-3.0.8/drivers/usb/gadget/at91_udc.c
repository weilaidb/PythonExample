#undef	VERBOSE_DEBUG
#undef	PACKET_TRACE
#define	DRIVER_VERSION	"3 May 2006"
static const char driver_name [] = "at91_udc";
static const char ep0name[] = "ep0";
#define VBUS_POLL_TIMEOUT	msecs_to_jiffies(1000)
#define at91_udp_read(udc, reg) \
__raw_readl((udc)->udp_baseaddr + (reg))
#define at91_udp_write(udc, reg, val) \
__raw_writel((val), (udc)->udp_baseaddr + (reg))
static const char debug_filename[] = "driver/udc";
#define FOURBITS "%s%s%s%s"
#define EIGHTBITS FOURBITS FOURBITS
static void proc_ep_show(struct seq_file *s, struct at91_ep *ep)
static void proc_irq_show(struct seq_file *s, const char *label, u32 mask)
static int proc_udc_show(struct seq_file *s, void *unused)
static int proc_udc_open(struct inode *inode, struct file *file)
static const struct file_operations proc_ops = ;
static void create_debug_file(struct at91_udc *udc)
static void remove_debug_file(struct at91_udc *udc)
static inline void create_debug_file(struct at91_udc *udc)
static inline void remove_debug_file(struct at91_udc *udc)
static void done(struct at91_ep *ep, struct at91_request *req, int status)
#define	RX_DATA_READY	(AT91_UDP_RX_DATA_BK0 | AT91_UDP_RX_DATA_BK1)
#define	SET_FX	(AT91_UDP_TXPKTRDY)
#define	CLR_FX	(RX_DATA_READY | AT91_UDP_RXSETUP \
| AT91_UDP_STALLSENT | AT91_UDP_TXCOMP)
static int read_fifo (struct at91_ep *ep, struct at91_request *req)
static int write_fifo(struct at91_ep *ep, struct at91_request *req)
static void nuke(struct at91_ep *ep, int status)
static int at91_ep_enable(struct usb_ep *_ep,
const struct usb_endpoint_descriptor *desc)
static int at91_ep_disable (struct usb_ep * _ep)
static struct usb_request *
at91_ep_alloc_request(struct usb_ep *_ep, gfp_t gfp_flags)
static void at91_ep_free_request(struct usb_ep *_ep, struct usb_request *_req)
static int at91_ep_queue(struct usb_ep *_ep,
struct usb_request *_req, gfp_t gfp_flags)
static int at91_ep_dequeue(struct usb_ep *_ep, struct usb_request *_req)
static int at91_ep_set_halt(struct usb_ep *_ep, int value)
static const struct usb_ep_ops at91_ep_ops = ;
static int at91_get_frame(struct usb_gadget *gadget)
static int at91_wakeup(struct usb_gadget *gadget)
static void udc_reinit(struct at91_udc *udc)
static void stop_activity(struct at91_udc *udc)
static void clk_on(struct at91_udc *udc)
static void clk_off(struct at91_udc *udc)
static void pullup(struct at91_udc *udc, int is_on)
static int at91_vbus_session(struct usb_gadget *gadget, int is_active)
static int at91_pullup(struct usb_gadget *gadget, int is_on)
static int at91_set_selfpowered(struct usb_gadget *gadget, int is_on)
static const struct usb_gadget_ops at91_udc_ops = ;
static int handle_ep(struct at91_ep *ep)
union setup ;
static void handle_setup(struct at91_udc *udc, struct at91_ep *ep, u32 csr)
static void handle_ep0(struct at91_udc *udc)
static irqreturn_t at91_udc_irq (int irq, void *_udc)
static void nop_release(struct device *dev)
static struct at91_udc controller = ;
static void at91_vbus_update(struct at91_udc *udc, unsigned value)
static irqreturn_t at91_vbus_irq(int irq, void *_udc)
static void at91_vbus_timer_work(struct work_struct *work)
static void at91_vbus_timer(unsigned long data)
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
int usb_gadget_unregister_driver (struct usb_gadget_driver *driver)
EXPORT_SYMBOL (usb_gadget_unregister_driver);
static void at91udc_shutdown(struct platform_device *dev)
static int __init at91udc_probe(struct platform_device *pdev)
static int __exit at91udc_remove(struct platform_device *pdev)
static int at91udc_suspend(struct platform_device *pdev, pm_message_t mesg)
static int at91udc_resume(struct platform_device *pdev)
#define	at91udc_suspend	NULL
#define	at91udc_resume	NULL
static struct platform_driver at91_udc_driver = ;
static int __init udc_init_module(void)
module_init(udc_init_module);
static void __exit udc_exit_module(void)
module_exit(udc_exit_module);
MODULE_DESCRIPTION("AT91 udc driver");
MODULE_AUTHOR("Thomas Rathbone, David Brownell");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:at91_udc");
