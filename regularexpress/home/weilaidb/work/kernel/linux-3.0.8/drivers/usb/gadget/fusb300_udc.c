MODULE_DESCRIPTION("FUSB300  USB gadget driver");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Yuan Hsin Chen <yhchen@faraday-tech.com>");
MODULE_ALIAS("platform:fusb300_udc");
#define DRIVER_VERSION	"20 October 2010"
static const char udc_name[] = "fusb300_udc";
static const char * const fusb300_ep_name[] = ;
static void done(struct fusb300_ep *ep, struct fusb300_request *req,
int status);
static void fusb300_enable_bit(struct fusb300 *fusb300, u32 offset,
u32 value)
static void fusb300_disable_bit(struct fusb300 *fusb300, u32 offset,
u32 value)
static void fusb300_ep_setting(struct fusb300_ep *ep,
struct fusb300_ep_info info)
static int fusb300_ep_release(struct fusb300_ep *ep)
static void fusb300_set_fifo_entry(struct fusb300 *fusb300,
u32 ep)
static void fusb300_set_start_entry(struct fusb300 *fusb300,
u8 ep)
static void fusb300_set_epaddrofs(struct fusb300 *fusb300,
struct fusb300_ep_info info)
static void ep_fifo_setting(struct fusb300 *fusb300,
struct fusb300_ep_info info)
static void fusb300_set_eptype(struct fusb300 *fusb300,
struct fusb300_ep_info info)
static void fusb300_set_epdir(struct fusb300 *fusb300,
struct fusb300_ep_info info)
static void fusb300_set_ep_active(struct fusb300 *fusb300,
u8 ep)
static void fusb300_set_epmps(struct fusb300 *fusb300,
struct fusb300_ep_info info)
static void fusb300_set_interval(struct fusb300 *fusb300,
struct fusb300_ep_info info)
static void fusb300_set_bwnum(struct fusb300 *fusb300,
struct fusb300_ep_info info)
static void set_ep_reg(struct fusb300 *fusb300,
struct fusb300_ep_info info)
static int config_ep(struct fusb300_ep *ep,
const struct usb_endpoint_descriptor *desc)
static int fusb300_enable(struct usb_ep *_ep,
const struct usb_endpoint_descriptor *desc)
static int fusb300_disable(struct usb_ep *_ep)
static struct usb_request *fusb300_alloc_request(struct usb_ep *_ep,
gfp_t gfp_flags)
static void fusb300_free_request(struct usb_ep *_ep, struct usb_request *_req)
static int enable_fifo_int(struct fusb300_ep *ep)
static int disable_fifo_int(struct fusb300_ep *ep)
static void fusb300_set_cxlen(struct fusb300 *fusb300, u32 length)
static void fusb300_wrcxf(struct fusb300_ep *ep,
struct fusb300_request *req)
static void fusb300_set_epnstall(struct fusb300 *fusb300, u8 ep)
static void fusb300_clear_epnstall(struct fusb300 *fusb300, u8 ep)
static void ep0_queue(struct fusb300_ep *ep, struct fusb300_request *req)
static int fusb300_queue(struct usb_ep *_ep, struct usb_request *_req,
gfp_t gfp_flags)
static int fusb300_dequeue(struct usb_ep *_ep, struct usb_request *_req)
static int fusb300_set_halt_and_wedge(struct usb_ep *_ep, int value, int wedge)
static int fusb300_set_halt(struct usb_ep *_ep, int value)
static int fusb300_set_wedge(struct usb_ep *_ep)
static void fusb300_fifo_flush(struct usb_ep *_ep)
static struct usb_ep_ops fusb300_ep_ops = ;
static void fusb300_clear_int(struct fusb300 *fusb300, u32 offset,
u32 value)
static void fusb300_reset(void)
static void fusb300_set_cxstall(struct fusb300 *fusb300)
static void fusb300_set_cxdone(struct fusb300 *fusb300)
void fusb300_rdcxf(struct fusb300 *fusb300,
u8 *buffer, u32 length)
static void fusb300_rdfifo(struct fusb300_ep *ep,
struct fusb300_request *req,
u32 length)
static void fusb300_wrfifo(struct fusb300_ep *ep,
struct fusb300_request *req)
static u8 fusb300_get_epnstall(struct fusb300 *fusb300, u8 ep)
static u8 fusb300_get_cxstall(struct fusb300 *fusb300)
static void request_error(struct fusb300 *fusb300)
static void get_status(struct fusb300 *fusb300, struct usb_ctrlrequest *ctrl)
__releases(fusb300->lock)
__acquires(fusb300->lock)
static void set_feature(struct fusb300 *fusb300, struct usb_ctrlrequest *ctrl)
static void fusb300_clear_seqnum(struct fusb300 *fusb300, u8 ep)
static void clear_feature(struct fusb300 *fusb300, struct usb_ctrlrequest *ctrl)
static void fusb300_set_dev_addr(struct fusb300 *fusb300, u16 addr)
static void set_address(struct fusb300 *fusb300, struct usb_ctrlrequest *ctrl)
#define UVC_COPY_DESCRIPTORS(mem, src) \
do  while (0)
static void fusb300_ep0_complete(struct usb_ep *ep,
struct usb_request *req)
static int setup_packet(struct fusb300 *fusb300, struct usb_ctrlrequest *ctrl)
static void fusb300_set_ep_bycnt(struct fusb300_ep *ep, u32 bycnt)
static void done(struct fusb300_ep *ep, struct fusb300_request *req,
int status)
void fusb300_fill_idma_prdtbl(struct fusb300_ep *ep,
struct fusb300_request *req)
static void fusb300_wait_idma_finished(struct fusb300_ep *ep)
static void  fusb300_set_idma(struct fusb300_ep *ep,
struct fusb300_request *req)
static void in_ep_fifo_handler(struct fusb300_ep *ep)
static void out_ep_fifo_handler(struct fusb300_ep *ep)
static void check_device_mode(struct fusb300 *fusb300)
static void fusb300_ep0out(struct fusb300 *fusb300)
static void fusb300_ep0in(struct fusb300 *fusb300)
static void fusb300_grp2_handler(void)
static void fusb300_grp3_handler(void)
static void fusb300_grp4_handler(void)
static void fusb300_grp5_handler(void)
static irqreturn_t fusb300_irq(int irq, void *_fusb300)
static void fusb300_set_u2_timeout(struct fusb300 *fusb300,
u32 time)
static void fusb300_set_u1_timeout(struct fusb300 *fusb300,
u32 time)
static void init_controller(struct fusb300 *fusb300)
static struct fusb300 *the_controller;
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
int usb_gadget_unregister_driver(struct usb_gadget_driver *driver)
EXPORT_SYMBOL(usb_gadget_unregister_driver);
static int fusb300_udc_pullup(struct usb_gadget *_gadget, int is_active)
static struct usb_gadget_ops fusb300_gadget_ops = ;
static int __exit fusb300_remove(struct platform_device *pdev)
static int __init fusb300_probe(struct platform_device *pdev)
static struct platform_driver fusb300_driver = ;
static int __init fusb300_udc_init(void)
module_init(fusb300_udc_init);
static void __exit fusb300_udc_cleanup(void)
module_exit(fusb300_udc_cleanup);
