#undef USB_TRACE
#define DRIVER_DESC     "Freescale QE/CPM USB Device Controller driver"
#define DRIVER_AUTHOR   "Xie XiaoBo"
#define DRIVER_VERSION  "1.0"
#define DMA_ADDR_INVALID        (~(dma_addr_t)0)
static const char driver_name[] = "fsl_qe_udc";
static const char driver_desc[] = DRIVER_DESC;
static const char *const ep_name[] = ;
static struct usb_endpoint_descriptor qe_ep0_desc = ;
static struct qe_udc *udc_controller;
static void done(struct qe_ep *ep, struct qe_req *req, int status)
static void nuke(struct qe_ep *ep, int status)
static int qe_eprx_stall_change(struct qe_ep *ep, int value)
static int qe_eptx_stall_change(struct qe_ep *ep, int value)
static int qe_ep0_stall(struct qe_udc *udc)
static int qe_eprx_nack(struct qe_ep *ep)
static int qe_eprx_normal(struct qe_ep *ep)
static int qe_ep_cmd_stoptx(struct qe_ep *ep)
static int qe_ep_cmd_restarttx(struct qe_ep *ep)
static int qe_ep_flushtxfifo(struct qe_ep *ep)
static int qe_ep_filltxfifo(struct qe_ep *ep)
static int qe_epbds_reset(struct qe_udc *udc, int pipe_num)
static int qe_ep_reset(struct qe_udc *udc, int pipe_num)
static int qe_ep_toggledata01(struct qe_ep *ep)
static int qe_ep_bd_init(struct qe_udc *udc, unsigned char pipe_num)
static int qe_ep_rxbd_update(struct qe_ep *ep)
static int qe_ep_register_init(struct qe_udc *udc, unsigned char pipe_num)
static int qe_ep_init(struct qe_udc *udc,
unsigned char pipe_num,
const struct usb_endpoint_descriptor *desc)
static inline void qe_usb_enable(void)
static inline void qe_usb_disable(void)
static void recycle_one_rxbd(struct qe_ep *ep)
static void recycle_rxbds(struct qe_ep *ep, unsigned char stopatnext)
static void ep_recycle_rxbds(struct qe_ep *ep)
static void setup_received_handle(struct qe_udc *udc,
struct usb_ctrlrequest *setup);
static int qe_ep_rxframe_handle(struct qe_ep *ep);
static void ep0_req_complete(struct qe_udc *udc, struct qe_req *req);
static int ep0_setup_handle(struct qe_udc *udc)
static int qe_ep0_rx(struct qe_udc *udc)
static int qe_ep_rxframe_handle(struct qe_ep *ep)
static void ep_rx_tasklet(unsigned long data)
static int qe_ep_rx(struct qe_ep *ep)
static int qe_ep_tx(struct qe_ep *ep, struct qe_frame *frame)
static int txcomplete(struct qe_ep *ep, unsigned char restart)
static int qe_usb_senddata(struct qe_ep *ep, struct qe_frame *frame)
static int sendnulldata(struct qe_ep *ep, struct qe_frame *frame, uint infor)
static int frame_create_tx(struct qe_ep *ep, struct qe_frame *frame)
static int ep0_prime_status(struct qe_udc *udc, int direction)
static void ep0_req_complete(struct qe_udc *udc, struct qe_req *req)
static int ep0_txcomplete(struct qe_ep *ep, unsigned char restart)
static int ep0_txframe_handle(struct qe_ep *ep)
static int qe_ep0_txconf(struct qe_ep *ep)
static int ep_txframe_handle(struct qe_ep *ep)
static int qe_ep_txconf(struct qe_ep *ep)
static int ep_req_send(struct qe_ep *ep, struct qe_req *req)
static int ep_req_rx(struct qe_ep *ep, struct qe_req *req)
static int ep_req_receive(struct qe_ep *ep, struct qe_req *req)
static int qe_ep_enable(struct usb_ep *_ep,
const struct usb_endpoint_descriptor *desc)
static int qe_ep_disable(struct usb_ep *_ep)
static struct usb_request *qe_alloc_request(struct usb_ep *_ep,	gfp_t gfp_flags)
static void qe_free_request(struct usb_ep *_ep, struct usb_request *_req)
static int __qe_ep_queue(struct usb_ep *_ep, struct usb_request *_req)
static int qe_ep_queue(struct usb_ep *_ep, struct usb_request *_req,
gfp_t gfp_flags)
static int qe_ep_dequeue(struct usb_ep *_ep, struct usb_request *_req)
static int qe_ep_set_halt(struct usb_ep *_ep, int value)
static struct usb_ep_ops qe_ep_ops = ;
static int qe_get_frame(struct usb_gadget *gadget)
static int qe_wakeup(struct usb_gadget *gadget)
static int qe_vbus_session(struct usb_gadget *gadget, int is_active)
static int qe_vbus_draw(struct usb_gadget *gadget, unsigned mA)
static int qe_pullup(struct usb_gadget *gadget, int is_on)
static struct usb_gadget_ops qe_gadget_ops = ;
static int udc_reset_ep_queue(struct qe_udc *udc, u8 pipe)
static int reset_queues(struct qe_udc *udc)
static void ch9setaddress(struct qe_udc *udc, u16 value, u16 index,
u16 length)
static void ownercomplete(struct usb_ep *_ep, struct usb_request *_req)
static void ch9getstatus(struct qe_udc *udc, u8 request_type, u16 value,
u16 index, u16 length)
static void setup_received_handle(struct qe_udc *udc,
struct usb_ctrlrequest *setup)
static void suspend_irq(struct qe_udc *udc)
static void resume_irq(struct qe_udc *udc)
static void idle_irq(struct qe_udc *udc)
static int reset_irq(struct qe_udc *udc)
static int bsy_irq(struct qe_udc *udc)
static int txe_irq(struct qe_udc *udc)
static int tx_irq(struct qe_udc *udc)
static void rx_irq(struct qe_udc *udc)
static irqreturn_t qe_udc_irq(int irq, void *_udc)
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
int usb_gadget_unregister_driver(struct usb_gadget_driver *driver)
EXPORT_SYMBOL(usb_gadget_unregister_driver);
static struct qe_udc __devinit *qe_udc_config(struct platform_device *ofdev)
static int __devinit qe_udc_reg_init(struct qe_udc *udc)
static int __devinit qe_ep_config(struct qe_udc *udc, unsigned char pipe_num)
static void qe_udc_release(struct device *dev)
static const struct of_device_id qe_udc_match[];
static int __devinit qe_udc_probe(struct platform_device *ofdev)
static int qe_udc_suspend(struct platform_device *dev, pm_message_t state)
static int qe_udc_resume(struct platform_device *dev)
static int __devexit qe_udc_remove(struct platform_device *ofdev)
static const struct of_device_id qe_udc_match[] __devinitconst = ;
MODULE_DEVICE_TABLE(of, qe_udc_match);
static struct platform_driver udc_driver = ;
static int __init qe_udc_init(void)
static void __exit qe_udc_exit(void)
module_init(qe_udc_init);
module_exit(qe_udc_exit);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_LICENSE("GPL");
