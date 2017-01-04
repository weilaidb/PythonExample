#undef VERBOSE
#define	DRIVER_DESC	"Freescale High-Speed USB SOC Device Controller driver"
#define	DRIVER_AUTHOR	"Li Yang/Jiang Bo"
#define	DRIVER_VERSION	"Apr 20, 2007"
#define	DMA_ADDR_INVALID	(~(dma_addr_t)0)
static const char driver_name[] = "fsl-usb2-udc";
static const char driver_desc[] = DRIVER_DESC;
static struct usb_dr_device *dr_regs;
static struct usb_sys_interface *usb_sys_regs;
static struct fsl_udc *udc_controller = NULL;
static const struct usb_endpoint_descriptor
fsl_ep0_desc = ;
static void fsl_ep_fifo_flush(struct usb_ep *_ep);
static u32 _fsl_readl_be(const unsigned __iomem *p)
static u32 _fsl_readl_le(const unsigned __iomem *p)
static void _fsl_writel_be(u32 v, unsigned __iomem *p)
static void _fsl_writel_le(u32 v, unsigned __iomem *p)
static u32 (*_fsl_readl)(const unsigned __iomem *p);
static void (*_fsl_writel)(u32 v, unsigned __iomem *p);
#define fsl_readl(p)		(*_fsl_readl)((p))
#define fsl_writel(v, p)	(*_fsl_writel)((v), (p))
static inline void fsl_set_accessors(struct fsl_usb2_platform_data *pdata)
static inline u32 cpu_to_hc32(const u32 x)
static inline u32 hc32_to_cpu(const u32 x)
static inline void fsl_set_accessors(struct fsl_usb2_platform_data *pdata)
#define fsl_readl(addr)		readl(addr)
#define fsl_writel(val32, addr) writel(val32, addr)
#define cpu_to_hc32(x)		cpu_to_le32(x)
#define hc32_to_cpu(x)		le32_to_cpu(x)
static void done(struct fsl_ep *ep, struct fsl_req *req, int status)
static void nuke(struct fsl_ep *ep, int status)
static int dr_controller_setup(struct fsl_udc *udc)
static void dr_controller_run(struct fsl_udc *udc)
static void dr_controller_stop(struct fsl_udc *udc)
static void dr_ep_setup(unsigned char ep_num, unsigned char dir,
unsigned char ep_type)
static void
dr_ep_change_stall(unsigned char ep_num, unsigned char dir, int value)
static int dr_ep_get_stall(unsigned char ep_num, unsigned char dir)
static void struct_ep_qh_setup(struct fsl_udc *udc, unsigned char ep_num,
unsigned char dir, unsigned char ep_type,
unsigned int max_pkt_len,
unsigned int zlt, unsigned char mult)
static void ep0_setup(struct fsl_udc *udc)
static int fsl_ep_enable(struct usb_ep *_ep,
const struct usb_endpoint_descriptor *desc)
static int fsl_ep_disable(struct usb_ep *_ep)
static struct usb_request *
fsl_alloc_request(struct usb_ep *_ep, gfp_t gfp_flags)
static void fsl_free_request(struct usb_ep *_ep, struct usb_request *_req)
static void fsl_queue_td(struct fsl_ep *ep, struct fsl_req *req)
static struct ep_td_struct *fsl_build_dtd(struct fsl_req *req, unsigned *length,
dma_addr_t *dma, int *is_last)
static int fsl_req_to_dtd(struct fsl_req *req)
static int
fsl_ep_queue(struct usb_ep *_ep, struct usb_request *_req, gfp_t gfp_flags)
static int fsl_ep_dequeue(struct usb_ep *_ep, struct usb_request *_req)
static int fsl_ep_set_halt(struct usb_ep *_ep, int value)
static int fsl_ep_fifo_status(struct usb_ep *_ep)
static void fsl_ep_fifo_flush(struct usb_ep *_ep)
static struct usb_ep_ops fsl_ep_ops = ;
static int fsl_get_frame(struct usb_gadget *gadget)
static int fsl_wakeup(struct usb_gadget *gadget)
static int can_pullup(struct fsl_udc *udc)
static int fsl_vbus_session(struct usb_gadget *gadget, int is_active)
static int fsl_vbus_draw(struct usb_gadget *gadget, unsigned mA)
static int fsl_pullup(struct usb_gadget *gadget, int is_on)
static struct usb_gadget_ops fsl_gadget_ops = ;
static void ep0stall(struct fsl_udc *udc)
static int ep0_prime_status(struct fsl_udc *udc, int direction)
static void udc_reset_ep_queue(struct fsl_udc *udc, u8 pipe)
static void ch9setaddress(struct fsl_udc *udc, u16 value, u16 index, u16 length)
static void ch9getstatus(struct fsl_udc *udc, u8 request_type, u16 value,
u16 index, u16 length)
static void setup_received_irq(struct fsl_udc *udc,
struct usb_ctrlrequest *setup)
static void ep0_req_complete(struct fsl_udc *udc, struct fsl_ep *ep0,
struct fsl_req *req)
static void tripwire_handler(struct fsl_udc *udc, u8 ep_num, u8 *buffer_ptr)
static int process_ep_req(struct fsl_udc *udc, int pipe,
struct fsl_req *curr_req)
static void dtd_complete_irq(struct fsl_udc *udc)
static void port_change_irq(struct fsl_udc *udc)
static void suspend_irq(struct fsl_udc *udc)
static void bus_resume(struct fsl_udc *udc)
static int reset_queues(struct fsl_udc *udc)
static void reset_irq(struct fsl_udc *udc)
static irqreturn_t fsl_udc_irq(int irq, void *_udc)
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
int usb_gadget_unregister_driver(struct usb_gadget_driver *driver)
EXPORT_SYMBOL(usb_gadget_unregister_driver);
static const char proc_filename[] = "driver/fsl_usb2_udc";
static int fsl_proc_read(char *page, char **start, off_t off, int count,
int *eof, void *_dev)
#define create_proc_file()	create_proc_read_entry(proc_filename, \
0, NULL, fsl_proc_read, NULL)
#define remove_proc_file()	remove_proc_entry(proc_filename, NULL)
#define create_proc_file()	do  while (0)
#define remove_proc_file()	do  while (0)
static void fsl_udc_release(struct device *dev)
static int __init struct_udc_setup(struct fsl_udc *udc,
struct platform_device *pdev)
static int __init struct_ep_setup(struct fsl_udc *udc, unsigned char index,
char *name, int link)
static int __init fsl_udc_probe(struct platform_device *pdev)
static int __exit fsl_udc_remove(struct platform_device *pdev)
static int fsl_udc_suspend(struct platform_device *pdev, pm_message_t state)
static int fsl_udc_resume(struct platform_device *pdev)
static int fsl_udc_otg_suspend(struct device *dev, pm_message_t state)
static int fsl_udc_otg_resume(struct device *dev)
static struct platform_driver udc_driver = ;
static int __init udc_init(void)
module_init(udc_init);
static void __exit udc_exit(void)
module_exit(udc_exit);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:fsl-usb2-udc");
