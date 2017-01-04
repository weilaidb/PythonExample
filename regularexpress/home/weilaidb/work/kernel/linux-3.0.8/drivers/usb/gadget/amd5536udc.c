#define UDC_MOD_DESCRIPTION		"AMD 5536 UDC - USB Device Controller"
#define UDC_DRIVER_VERSION_STRING	"01.00.0206 - $Revision: #3 $"
static void udc_tasklet_disconnect(unsigned long);
static void empty_req_queue(struct udc_ep *);
static int udc_probe(struct udc *dev);
static void udc_basic_init(struct udc *dev);
static void udc_setup_endpoints(struct udc *dev);
static void udc_soft_reset(struct udc *dev);
static struct udc_request *udc_alloc_bna_dummy(struct udc_ep *ep);
static void udc_free_request(struct usb_ep *usbep, struct usb_request *usbreq);
static int udc_free_dma_chain(struct udc *dev, struct udc_request *req);
static int udc_create_dma_chain(struct udc_ep *ep, struct udc_request *req,
unsigned long buf_len, gfp_t gfp_flags);
static int udc_remote_wakeup(struct udc *dev);
static int udc_pci_probe(struct pci_dev *pdev, const struct pci_device_id *id);
static void udc_pci_remove(struct pci_dev *pdev);
static const char mod_desc[] = UDC_MOD_DESCRIPTION;
static const char name[] = "amd5536udc";
static const struct usb_ep_ops udc_ep_ops;
static union udc_setup_data setup_data;
static struct udc *udc;
static DEFINE_SPINLOCK(udc_irq_spinlock);
static DEFINE_SPINLOCK(udc_stall_spinlock);
static unsigned int udc_rxfifo_pending;
static int soft_reset_occured;
static int soft_reset_after_usbreset_occured;
static struct timer_list udc_timer;
static int stop_timer;
static int set_rde = -1;
static DECLARE_COMPLETION(on_exit);
static struct timer_list udc_pollstall_timer;
static int stop_pollstall_timer;
static DECLARE_COMPLETION(on_pollstall_exit);
static DECLARE_TASKLET(disconnect_tasklet, udc_tasklet_disconnect,
(unsigned long) &udc);
static const char ep0_string[] = "ep0in";
static const char *ep_string[] = ;
static int use_dma = 1;
static int use_dma_ppb = 1;
static int use_dma_ppb_du;
static int use_dma_bufferfill_mode;
static int use_fullspeed;
static unsigned long hs_tx_buf = UDC_EPIN_BUFF_SIZE;
module_param(use_dma, bool, S_IRUGO);
MODULE_PARM_DESC(use_dma, "true for DMA");
module_param(use_dma_ppb, bool, S_IRUGO);
MODULE_PARM_DESC(use_dma_ppb, "true for DMA in packet per buffer mode");
module_param(use_dma_ppb_du, bool, S_IRUGO);
MODULE_PARM_DESC(use_dma_ppb_du,
"true for DMA in packet per buffer mode with descriptor update");
module_param(use_fullspeed, bool, S_IRUGO);
MODULE_PARM_DESC(use_fullspeed, "true for fullspeed only");
static void print_regs(struct udc *dev)
static int udc_mask_unused_interrupts(struct udc *dev)
static int udc_enable_ep0_interrupts(struct udc *dev)
static int udc_enable_dev_setup_interrupts(struct udc *dev)
static int udc_set_txfifo_addr(struct udc_ep *ep)
static u32 cnak_pending;
static void UDC_QUEUE_CNAK(struct udc_ep *ep, unsigned num)
static int
udc_ep_enable(struct usb_ep *usbep, const struct usb_endpoint_descriptor *desc)
static void ep_init(struct udc_regs __iomem *regs, struct udc_ep *ep)
static int udc_ep_disable(struct usb_ep *usbep)
static struct usb_request *
udc_alloc_request(struct usb_ep *usbep, gfp_t gfp)
static void
udc_free_request(struct usb_ep *usbep, struct usb_request *usbreq)
static void udc_init_bna_dummy(struct udc_request *req)
static struct udc_request *udc_alloc_bna_dummy(struct udc_ep *ep)
static void
udc_txfifo_write(struct udc_ep *ep, struct usb_request *req)
static int udc_rxfifo_read_dwords(struct udc *dev, u32 *buf, int dwords)
static int udc_rxfifo_read_bytes(struct udc *dev, u8 *buf, int bytes)
static int
udc_rxfifo_read(struct udc_ep *ep, struct udc_request *req)
static int prep_dma(struct udc_ep *ep, struct udc_request *req, gfp_t gfp)
static void
complete_req(struct udc_ep *ep, struct udc_request *req, int sts)
__releases(ep->dev->lock)
__acquires(ep->dev->lock)
static int udc_free_dma_chain(struct udc *dev, struct udc_request *req)
static struct udc_data_dma *udc_get_last_dma_desc(struct udc_request *req)
static u32 udc_get_ppbdu_rxbytes(struct udc_request *req)
static int udc_create_dma_chain(
struct udc_ep *ep,
struct udc_request *req,
unsigned long buf_len, gfp_t gfp_flags
)
static void udc_set_rde(struct udc *dev)
static int
udc_queue(struct usb_ep *usbep, struct usb_request *usbreq, gfp_t gfp)
static void empty_req_queue(struct udc_ep *ep)
static int udc_dequeue(struct usb_ep *usbep, struct usb_request *usbreq)
static int
udc_set_halt(struct usb_ep *usbep, int halt)
static const struct usb_ep_ops udc_ep_ops = ;
static int udc_get_frame(struct usb_gadget *gadget)
static int udc_wakeup(struct usb_gadget *gadget)
static const struct usb_gadget_ops udc_ops = ;
static void make_ep_lists(struct udc *dev)
static int startup_registers(struct udc *dev)
static void udc_basic_init(struct udc *dev)
static void udc_setup_endpoints(struct udc *dev)
static void usb_connect(struct udc *dev)
static void usb_disconnect(struct udc *dev)
static void udc_tasklet_disconnect(unsigned long par)
static void udc_soft_reset(struct udc *dev)
static void udc_timer_function(unsigned long v)
static void udc_handle_halt_state(struct udc_ep *ep)
static void udc_pollstall_timer_function(unsigned long v)
static void activate_control_endpoints(struct udc *dev)
static int setup_ep0(struct udc *dev)
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
static void
shutdown(struct udc *dev, struct usb_gadget_driver *driver)
__releases(dev->lock)
__acquires(dev->lock)
int usb_gadget_unregister_driver(struct usb_gadget_driver *driver)
EXPORT_SYMBOL(usb_gadget_unregister_driver);
static void udc_process_cnak_queue(struct udc *dev)
static void udc_ep0_set_rde(struct udc *dev)
static irqreturn_t udc_data_out_isr(struct udc *dev, int ep_ix)
static irqreturn_t udc_data_in_isr(struct udc *dev, int ep_ix)
static irqreturn_t udc_control_out_isr(struct udc *dev)
__releases(dev->lock)
__acquires(dev->lock)
static irqreturn_t udc_control_in_isr(struct udc *dev)
static irqreturn_t udc_dev_isr(struct udc *dev, u32 dev_irq)
__releases(dev->lock)
__acquires(dev->lock)
static irqreturn_t udc_irq(int irq, void *pdev)
static void gadget_release(struct device *pdev)
static void udc_remove(struct udc *dev)
static void udc_pci_remove(struct pci_dev *pdev)
static int init_dma_pools(struct udc *dev)
static int udc_pci_probe(
struct pci_dev *pdev,
const struct pci_device_id *id
)
static int udc_probe(struct udc *dev)
static int udc_remote_wakeup(struct udc *dev)
static const struct pci_device_id pci_id[] = ;
MODULE_DEVICE_TABLE(pci, pci_id);
static struct pci_driver udc_pci_driver = ;
static int __init init(void)
module_init(init);
static void __exit cleanup(void)
module_exit(cleanup);
MODULE_DESCRIPTION(UDC_MOD_DESCRIPTION);
MODULE_AUTHOR("Thomas Dahlmann");
MODULE_LICENSE("GPL");
