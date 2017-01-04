#define	DRIVER_VERSION	"30-June-2007"
#define	DRIVER_DESC	"PXA 25x USB Device Controller driver"
static const char driver_name [] = "pxa25x_udc";
static const char ep0name [] = "ep0";
#error "Can't configure both IXP and PXA"
#define clk_get(dev,name)	NULL
#define clk_enable(clk)		do  while (0)
#define clk_disable(clk)	do  while (0)
#define clk_put(clk)		do  while (0)
#define SIZE_STR	" (small)"
#define SIZE_STR	""
static void pxa25x_ep_fifo_flush (struct usb_ep *ep);
static void nuke (struct pxa25x_ep *, int status);
static void pullup_off(void)
static void pullup_on(void)
static void pio_irq_enable(int bEndpointAddress)
static void pio_irq_disable(int bEndpointAddress)
#define UDCCR_MASK_BITS         (UDCCR_REM | UDCCR_SRM | UDCCR_UDE)
static inline void udc_set_mask_UDCCR(int mask)
static inline void udc_clear_mask_UDCCR(int mask)
static inline void udc_ack_int_UDCCR(int mask)
static int pxa25x_ep_enable (struct usb_ep *_ep,
const struct usb_endpoint_descriptor *desc)
static int pxa25x_ep_disable (struct usb_ep *_ep)
static struct usb_request *
pxa25x_ep_alloc_request (struct usb_ep *_ep, gfp_t gfp_flags)
static void
pxa25x_ep_free_request (struct usb_ep *_ep, struct usb_request *_req)
static void done(struct pxa25x_ep *ep, struct pxa25x_request *req, int status)
static inline void ep0_idle (struct pxa25x_udc *dev)
static int
write_packet(volatile u32 *uddr, struct pxa25x_request *req, unsigned max)
static int
write_fifo (struct pxa25x_ep *ep, struct pxa25x_request *req)
static inline
void ep0start(struct pxa25x_udc *dev, u32 flags, const char *tag)
static int
write_ep0_fifo (struct pxa25x_ep *ep, struct pxa25x_request *req)
static int
read_fifo (struct pxa25x_ep *ep, struct pxa25x_request *req)
static int
read_ep0_fifo (struct pxa25x_ep *ep, struct pxa25x_request *req)
static int
pxa25x_ep_queue(struct usb_ep *_ep, struct usb_request *_req, gfp_t gfp_flags)
static void nuke(struct pxa25x_ep *ep, int status)
static int pxa25x_ep_dequeue(struct usb_ep *_ep, struct usb_request *_req)
static int pxa25x_ep_set_halt(struct usb_ep *_ep, int value)
static int pxa25x_ep_fifo_status(struct usb_ep *_ep)
static void pxa25x_ep_fifo_flush(struct usb_ep *_ep)
static struct usb_ep_ops pxa25x_ep_ops = ;
static int pxa25x_udc_get_frame(struct usb_gadget *_gadget)
static int pxa25x_udc_wakeup(struct usb_gadget *_gadget)
static void stop_activity(struct pxa25x_udc *, struct usb_gadget_driver *);
static void udc_enable (struct pxa25x_udc *);
static void udc_disable(struct pxa25x_udc *);
static int pullup(struct pxa25x_udc *udc)
static int pxa25x_udc_vbus_session(struct usb_gadget *_gadget, int is_active)
static int pxa25x_udc_pullup(struct usb_gadget *_gadget, int is_active)
static int pxa25x_udc_vbus_draw(struct usb_gadget *_gadget, unsigned mA)
static const struct usb_gadget_ops pxa25x_udc_ops = ;
static int
udc_seq_show(struct seq_file *m, void *_d)
static int
udc_debugfs_open(struct inode *inode, struct file *file)
static const struct file_operations debug_fops = ;
#define create_debug_files(dev) \
do  while (0)
#define remove_debug_files(dev) \
do  while (0)
#define create_debug_files(dev) do  while (0)
#define remove_debug_files(dev) do  while (0)
static void udc_disable(struct pxa25x_udc *dev)
static void udc_reinit(struct pxa25x_udc *dev)
static void udc_enable (struct pxa25x_udc *dev)
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
static void
stop_activity(struct pxa25x_udc *dev, struct usb_gadget_driver *driver)
int usb_gadget_unregister_driver(struct usb_gadget_driver *driver)
EXPORT_SYMBOL(usb_gadget_unregister_driver);
static irqreturn_t
lubbock_vbus_irq(int irq, void *_dev)
static inline void clear_ep_state (struct pxa25x_udc *dev)
static void udc_watchdog(unsigned long _dev)
static void handle_ep0 (struct pxa25x_udc *dev)
static void handle_ep(struct pxa25x_ep *ep)
static irqreturn_t
pxa25x_udc_irq(int irq, void *_dev)
static void nop_release (struct device *dev)
static struct pxa25x_udc memory = ;
#define CP15R0_VENDOR_MASK	0xffffe000
#if	defined(CONFIG_ARCH_PXA)
#define CP15R0_XSCALE_VALUE	0x69052000
#elif	defined(CONFIG_ARCH_IXP4XX)
#define CP15R0_XSCALE_VALUE	0x69054000
#define CP15R0_PROD_MASK	0x000003f0
#define PXA25x			0x00000100
#define PXA210			0x00000120
#define CP15R0_REV_MASK		0x0000000f
#define CP15R0_PRODREV_MASK	(CP15R0_PROD_MASK | CP15R0_REV_MASK)
#define PXA255_A0		0x00000106
#define PXA250_C0		0x00000105
#define PXA250_B2		0x00000104
#define PXA250_B1		0x00000103
#define PXA250_B0		0x00000102
#define PXA250_A1		0x00000101
#define PXA250_A0		0x00000100
#define PXA210_C0		0x00000125
#define PXA210_B2		0x00000124
#define PXA210_B1		0x00000123
#define PXA210_B0		0x00000122
#define IXP425_A0		0x000001c1
#define IXP425_B0		0x000001f1
#define IXP465_AD		0x00000200
static int __init pxa25x_udc_probe(struct platform_device *pdev)
static void pxa25x_udc_shutdown(struct platform_device *_dev)
static int __exit pxa25x_udc_remove(struct platform_device *pdev)
static int pxa25x_udc_suspend(struct platform_device *dev, pm_message_t state)
static int pxa25x_udc_resume(struct platform_device *dev)
#define	pxa25x_udc_suspend	NULL
#define	pxa25x_udc_resume	NULL
static struct platform_driver udc_driver = ;
static int __init udc_init(void)
module_init(udc_init);
static void __exit udc_exit(void)
module_exit(udc_exit);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR("Frank Becker, Robert Schwebel, David Brownell");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pxa25x-udc");
