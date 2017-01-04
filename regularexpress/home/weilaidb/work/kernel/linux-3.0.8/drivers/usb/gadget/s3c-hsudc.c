#define S3C_HSUDC_REG(x)	(x)
#define S3C_IR				S3C_HSUDC_REG(0x00)
#define S3C_EIR				S3C_HSUDC_REG(0x04)
#define S3C_EIR_EP0			(1<<0)
#define S3C_EIER			S3C_HSUDC_REG(0x08)
#define S3C_FAR				S3C_HSUDC_REG(0x0c)
#define S3C_FNR				S3C_HSUDC_REG(0x10)
#define S3C_EDR				S3C_HSUDC_REG(0x14)
#define S3C_TR				S3C_HSUDC_REG(0x18)
#define S3C_SSR				S3C_HSUDC_REG(0x1c)
#define S3C_SSR_DTZIEN_EN		(0xff8f)
#define S3C_SSR_ERR			(0xff80)
#define S3C_SSR_VBUSON			(1 << 8)
#define S3C_SSR_HSP			(1 << 4)
#define S3C_SSR_SDE			(1 << 3)
#define S3C_SSR_RESUME			(1 << 2)
#define S3C_SSR_SUSPEND			(1 << 1)
#define S3C_SSR_RESET			(1 << 0)
#define S3C_SCR				S3C_HSUDC_REG(0x20)
#define S3C_SCR_DTZIEN_EN		(1 << 14)
#define S3C_SCR_RRD_EN			(1 << 5)
#define S3C_SCR_SUS_EN			(1 << 1)
#define S3C_SCR_RST_EN			(1 << 0)
#define S3C_EP0SR			S3C_HSUDC_REG(0x24)
#define S3C_EP0SR_EP0_LWO		(1 << 6)
#define S3C_EP0SR_STALL			(1 << 4)
#define S3C_EP0SR_TX_SUCCESS		(1 << 1)
#define S3C_EP0SR_RX_SUCCESS		(1 << 0)
#define S3C_EP0CR			S3C_HSUDC_REG(0x28)
#define S3C_BR(_x)			S3C_HSUDC_REG(0x60 + (_x * 4))
#define S3C_ESR				S3C_HSUDC_REG(0x2c)
#define S3C_ESR_FLUSH			(1 << 6)
#define S3C_ESR_STALL			(1 << 5)
#define S3C_ESR_LWO			(1 << 4)
#define S3C_ESR_PSIF_ONE		(1 << 2)
#define S3C_ESR_PSIF_TWO		(2 << 2)
#define S3C_ESR_TX_SUCCESS		(1 << 1)
#define S3C_ESR_RX_SUCCESS		(1 << 0)
#define S3C_ECR				S3C_HSUDC_REG(0x30)
#define S3C_ECR_DUEN			(1 << 7)
#define S3C_ECR_FLUSH			(1 << 6)
#define S3C_ECR_STALL			(1 << 1)
#define S3C_ECR_IEMS			(1 << 0)
#define S3C_BRCR			S3C_HSUDC_REG(0x34)
#define S3C_BWCR			S3C_HSUDC_REG(0x38)
#define S3C_MPR				S3C_HSUDC_REG(0x3c)
#define WAIT_FOR_SETUP			(0)
#define DATA_STATE_XMIT			(1)
#define DATA_STATE_RECV			(2)
struct s3c_hsudc_ep ;
struct s3c_hsudc_req ;
struct s3c_hsudc ;
#define ep_maxpacket(_ep)	((_ep)->ep.maxpacket)
#define ep_is_in(_ep)		((_ep)->bEndpointAddress & USB_DIR_IN)
#define ep_index(_ep)		((_ep)->bEndpointAddress & \
USB_ENDPOINT_NUMBER_MASK)
static struct s3c_hsudc *the_controller;
static const char driver_name[] = "s3c-udc";
static const char ep0name[] = "ep0-control";
static inline struct s3c_hsudc_req *our_req(struct usb_request *req)
static inline struct s3c_hsudc_ep *our_ep(struct usb_ep *ep)
static inline struct s3c_hsudc *to_hsudc(struct usb_gadget *gadget)
static inline void set_index(struct s3c_hsudc *hsudc, int ep_addr)
static inline void __orr32(void __iomem *ptr, u32 val)
static void s3c_hsudc_init_phy(void)
static void s3c_hsudc_uninit_phy(void)
static void s3c_hsudc_complete_request(struct s3c_hsudc_ep *hsep,
struct s3c_hsudc_req *hsreq, int status)
static void s3c_hsudc_nuke_ep(struct s3c_hsudc_ep *hsep, int status)
static void s3c_hsudc_stop_activity(struct s3c_hsudc *hsudc,
struct usb_gadget_driver *driver)
static void s3c_hsudc_read_setup_pkt(struct s3c_hsudc *hsudc, u16 *buf)
static int s3c_hsudc_write_fifo(struct s3c_hsudc_ep *hsep,
struct s3c_hsudc_req *hsreq)
static int s3c_hsudc_read_fifo(struct s3c_hsudc_ep *hsep,
struct s3c_hsudc_req *hsreq)
static void s3c_hsudc_epin_intr(struct s3c_hsudc *hsudc, u32 ep_idx)
static void s3c_hsudc_epout_intr(struct s3c_hsudc *hsudc, u32 ep_idx)
static int s3c_hsudc_set_halt(struct usb_ep *_ep, int value)
static int s3c_hsudc_set_wedge(struct usb_ep *_ep)
static int s3c_hsudc_handle_reqfeat(struct s3c_hsudc *hsudc,
struct usb_ctrlrequest *ctrl)
static void s3c_hsudc_process_req_status(struct s3c_hsudc *hsudc,
struct usb_ctrlrequest *ctrl)
static void s3c_hsudc_process_setup(struct s3c_hsudc *hsudc)
static void s3c_hsudc_handle_ep0_intr(struct s3c_hsudc *hsudc)
static int s3c_hsudc_ep_enable(struct usb_ep *_ep,
const struct usb_endpoint_descriptor *desc)
static int s3c_hsudc_ep_disable(struct usb_ep *_ep)
static struct usb_request *s3c_hsudc_alloc_request(struct usb_ep *_ep,
gfp_t gfp_flags)
static void s3c_hsudc_free_request(struct usb_ep *ep, struct usb_request *_req)
static int s3c_hsudc_queue(struct usb_ep *_ep, struct usb_request *_req,
gfp_t gfp_flags)
static int s3c_hsudc_dequeue(struct usb_ep *_ep, struct usb_request *_req)
static struct usb_ep_ops s3c_hsudc_ep_ops = ;
static void s3c_hsudc_initep(struct s3c_hsudc *hsudc,
struct s3c_hsudc_ep *hsep, int epnum)
static void s3c_hsudc_setup_ep(struct s3c_hsudc *hsudc)
static void s3c_hsudc_reconfig(struct s3c_hsudc *hsudc)
static irqreturn_t s3c_hsudc_irq(int irq, void *_dev)
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
int usb_gadget_unregister_driver(struct usb_gadget_driver *driver)
EXPORT_SYMBOL(usb_gadget_unregister_driver);
static inline u32 s3c_hsudc_read_frameno(struct s3c_hsudc *hsudc)
static int s3c_hsudc_gadget_getframe(struct usb_gadget *gadget)
static struct usb_gadget_ops s3c_hsudc_gadget_ops = ;
static int s3c_hsudc_probe(struct platform_device *pdev)
static struct platform_driver s3c_hsudc_driver = ;
static int __init s3c_hsudc_modinit(void)
static void __exit s3c_hsudc_modexit(void)
module_init(s3c_hsudc_modinit);
module_exit(s3c_hsudc_modexit);
MODULE_DESCRIPTION("Samsung S3C24XX USB high-speed controller driver");
MODULE_AUTHOR("Thomas Abraham <thomas.ab@samsung.com>");
MODULE_LICENSE("GPL");
