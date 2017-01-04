static const char driver_name[] = "imx_udc";
static const char ep0name[] = "ep0";
void ep0_chg_stat(const char *label, struct imx_udc_struct *imx_usb,
enum ep0_state stat);
void imx_udc_enable(struct imx_udc_struct *imx_usb)
void imx_udc_disable(struct imx_udc_struct *imx_usb)
void imx_udc_reset(struct imx_udc_struct *imx_usb)
void imx_udc_config(struct imx_udc_struct *imx_usb)
void imx_udc_init_irq(struct imx_udc_struct *imx_usb)
void imx_udc_init_ep(struct imx_udc_struct *imx_usb)
void imx_udc_init_fifo(struct imx_udc_struct *imx_usb)
static void imx_udc_init(struct imx_udc_struct *imx_usb)
void imx_ep_irq_enable(struct imx_ep_struct *imx_ep)
void imx_ep_irq_disable(struct imx_ep_struct *imx_ep)
int imx_ep_empty(struct imx_ep_struct *imx_ep)
unsigned imx_fifo_bcount(struct imx_ep_struct *imx_ep)
void imx_flush(struct imx_ep_struct *imx_ep)
void imx_ep_stall(struct imx_ep_struct *imx_ep)
static int imx_udc_get_frame(struct usb_gadget *_gadget)
static int imx_udc_wakeup(struct usb_gadget *_gadget)
static void ep_add_request(struct imx_ep_struct *imx_ep,
struct imx_request *req)
static void ep_del_request(struct imx_ep_struct *imx_ep,
struct imx_request *req)
static void done(struct imx_ep_struct *imx_ep,
struct imx_request *req, int status)
static void nuke(struct imx_ep_struct *imx_ep, int status)
static int read_packet(struct imx_ep_struct *imx_ep, struct imx_request *req)
static int write_packet(struct imx_ep_struct *imx_ep, struct imx_request *req)
static int read_fifo(struct imx_ep_struct *imx_ep, struct imx_request *req)
static int write_fifo(struct imx_ep_struct *imx_ep, struct imx_request *req)
static int handle_ep(struct imx_ep_struct *imx_ep)
static int handle_ep0(struct imx_ep_struct *imx_ep)
static void handle_ep0_devreq(struct imx_udc_struct *imx_usb)
static int imx_ep_enable(struct usb_ep *usb_ep,
const struct usb_endpoint_descriptor *desc)
static int imx_ep_disable(struct usb_ep *usb_ep)
static struct usb_request *imx_ep_alloc_request
(struct usb_ep *usb_ep, gfp_t gfp_flags)
static void imx_ep_free_request
(struct usb_ep *usb_ep, struct usb_request *usb_req)
static int imx_ep_queue
(struct usb_ep *usb_ep, struct usb_request *usb_req, gfp_t gfp_flags)
static int imx_ep_dequeue(struct usb_ep *usb_ep, struct usb_request *usb_req)
static int imx_ep_set_halt(struct usb_ep *usb_ep, int value)
static int imx_ep_fifo_status(struct usb_ep *usb_ep)
static void imx_ep_fifo_flush(struct usb_ep *usb_ep)
static struct usb_ep_ops imx_ep_ops = ;
void ep0_chg_stat(const char *label,
struct imx_udc_struct *imx_usb, enum ep0_state stat)
static void usb_init_data(struct imx_udc_struct *imx_usb)
static void udc_stop_activity(struct imx_udc_struct *imx_usb,
struct usb_gadget_driver *driver)
static void handle_config(unsigned long data)
static irqreturn_t imx_udc_irq(int irq, void *dev)
static irqreturn_t imx_udc_ctrl_irq(int irq, void *dev)
#define MX1_INT_USBD0 MX1_USBD_INT0
static irqreturn_t imx_udc_bulk_irq(int irq, void *dev)
irq_handler_t intr_handler(int i)
static const struct usb_gadget_ops imx_udc_ops = ;
static struct imx_udc_struct controller = ;
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
int usb_gadget_unregister_driver(struct usb_gadget_driver *driver)
EXPORT_SYMBOL(usb_gadget_unregister_driver);
static int __init imx_udc_probe(struct platform_device *pdev)
static int __exit imx_udc_remove(struct platform_device *pdev)
#define	imx_udc_suspend	NULL
#define	imx_udc_resume	NULL
#define	imx_udc_suspend	NULL
#define	imx_udc_resume	NULL
static struct platform_driver udc_driver = ;
static int __init udc_init(void)
module_init(udc_init);
static void __exit udc_exit(void)
module_exit(udc_exit);
MODULE_DESCRIPTION("IMX USB Device Controller driver");
MODULE_AUTHOR("Darius Augulis <augulis.darius@gmail.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:imx_udc");
