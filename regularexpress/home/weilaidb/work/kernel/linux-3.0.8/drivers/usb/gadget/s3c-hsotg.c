#define DMA_ADDR_INVALID (~((dma_addr_t)0))
#define EP0_MPS_LIMIT	64
struct s3c_hsotg;
struct s3c_hsotg_req;
struct s3c_hsotg_ep ;
#define S3C_HSOTG_EPS	(8+1)
struct s3c_hsotg ;
struct s3c_hsotg_req ;
static inline struct s3c_hsotg_req *our_req(struct usb_request *req)
static inline struct s3c_hsotg_ep *our_ep(struct usb_ep *ep)
static inline struct s3c_hsotg *to_hsotg(struct usb_gadget *gadget)
static inline void __orr32(void __iomem *ptr, u32 val)
static inline void __bic32(void __iomem *ptr, u32 val)
static void s3c_hsotg_dump(struct s3c_hsotg *hsotg);
static inline bool using_dma(struct s3c_hsotg *hsotg)
static void s3c_hsotg_en_gsint(struct s3c_hsotg *hsotg, u32 ints)
static void s3c_hsotg_disable_gsint(struct s3c_hsotg *hsotg, u32 ints)
static void s3c_hsotg_ctrl_epint(struct s3c_hsotg *hsotg,
unsigned int ep, unsigned int dir_in,
unsigned int en)
static void s3c_hsotg_init_fifo(struct s3c_hsotg *hsotg)
static struct usb_request *s3c_hsotg_ep_alloc_request(struct usb_ep *ep,
gfp_t flags)
static inline int is_ep_periodic(struct s3c_hsotg_ep *hs_ep)
static void s3c_hsotg_unmap_dma(struct s3c_hsotg *hsotg,
struct s3c_hsotg_ep *hs_ep,
struct s3c_hsotg_req *hs_req)
static int s3c_hsotg_write_fifo(struct s3c_hsotg *hsotg,
struct s3c_hsotg_ep *hs_ep,
struct s3c_hsotg_req *hs_req)
static unsigned get_ep_limit(struct s3c_hsotg_ep *hs_ep)
static void s3c_hsotg_start_req(struct s3c_hsotg *hsotg,
struct s3c_hsotg_ep *hs_ep,
struct s3c_hsotg_req *hs_req,
bool continuing)
static int s3c_hsotg_map_dma(struct s3c_hsotg *hsotg,
struct s3c_hsotg_ep *hs_ep,
struct usb_request *req)
static int s3c_hsotg_ep_queue(struct usb_ep *ep, struct usb_request *req,
gfp_t gfp_flags)
static void s3c_hsotg_ep_free_request(struct usb_ep *ep,
struct usb_request *req)
static void s3c_hsotg_complete_oursetup(struct usb_ep *ep,
struct usb_request *req)
static struct s3c_hsotg_ep *ep_from_windex(struct s3c_hsotg *hsotg,
u32 windex)
static int s3c_hsotg_send_reply(struct s3c_hsotg *hsotg,
struct s3c_hsotg_ep *ep,
void *buff,
int length)
static int s3c_hsotg_process_req_status(struct s3c_hsotg *hsotg,
struct usb_ctrlrequest *ctrl)
static int s3c_hsotg_ep_sethalt(struct usb_ep *ep, int value);
static struct s3c_hsotg_req *get_ep_head(struct s3c_hsotg_ep *hs_ep)
static int s3c_hsotg_process_req_feature(struct s3c_hsotg *hsotg,
struct usb_ctrlrequest *ctrl)
static void s3c_hsotg_process_control(struct s3c_hsotg *hsotg,
struct usb_ctrlrequest *ctrl)
static void s3c_hsotg_enqueue_setup(struct s3c_hsotg *hsotg);
static void s3c_hsotg_complete_setup(struct usb_ep *ep,
struct usb_request *req)
static void s3c_hsotg_enqueue_setup(struct s3c_hsotg *hsotg)
static void s3c_hsotg_complete_request(struct s3c_hsotg *hsotg,
struct s3c_hsotg_ep *hs_ep,
struct s3c_hsotg_req *hs_req,
int result)
static void s3c_hsotg_complete_request_lock(struct s3c_hsotg *hsotg,
struct s3c_hsotg_ep *hs_ep,
struct s3c_hsotg_req *hs_req,
int result)
static void s3c_hsotg_rx_data(struct s3c_hsotg *hsotg, int ep_idx, int size)
static void s3c_hsotg_send_zlp(struct s3c_hsotg *hsotg,
struct s3c_hsotg_req *req)
static void s3c_hsotg_handle_outdone(struct s3c_hsotg *hsotg,
int epnum, bool was_setup)
static u32 s3c_hsotg_read_frameno(struct s3c_hsotg *hsotg)
static void s3c_hsotg_handle_rx(struct s3c_hsotg *hsotg)
static u32 s3c_hsotg_ep0_mps(unsigned int mps)
static void s3c_hsotg_set_ep_maxpacket(struct s3c_hsotg *hsotg,
unsigned int ep, unsigned int mps)
static void s3c_hsotg_txfifo_flush(struct s3c_hsotg *hsotg, unsigned int idx)
static int s3c_hsotg_trytx(struct s3c_hsotg *hsotg,
struct s3c_hsotg_ep *hs_ep)
static void s3c_hsotg_complete_in(struct s3c_hsotg *hsotg,
struct s3c_hsotg_ep *hs_ep)
static void s3c_hsotg_epint(struct s3c_hsotg *hsotg, unsigned int idx,
int dir_in)
static void s3c_hsotg_irq_enumdone(struct s3c_hsotg *hsotg)
static void kill_all_requests(struct s3c_hsotg *hsotg,
struct s3c_hsotg_ep *ep,
int result, bool force)
#define call_gadget(_hs, _entry) \
if ((_hs)->gadget.speed != USB_SPEED_UNKNOWN &&	\
(_hs)->driver && (_hs)->driver->_entry)	\
(_hs)->driver->_entry(&(_hs)->gadget);
static void s3c_hsotg_disconnect_irq(struct s3c_hsotg *hsotg)
static void s3c_hsotg_irq_fifoempty(struct s3c_hsotg *hsotg, bool periodic)
static struct s3c_hsotg *our_hsotg;
#define IRQ_RETRY_MASK (S3C_GINTSTS_NPTxFEmp | \
S3C_GINTSTS_PTxFEmp |  \
S3C_GINTSTS_RxFLvl)
static irqreturn_t s3c_hsotg_irq(int irq, void *pw)
static int s3c_hsotg_ep_enable(struct usb_ep *ep,
const struct usb_endpoint_descriptor *desc)
static int s3c_hsotg_ep_disable(struct usb_ep *ep)
static bool on_list(struct s3c_hsotg_ep *ep, struct s3c_hsotg_req *test)
static int s3c_hsotg_ep_dequeue(struct usb_ep *ep, struct usb_request *req)
static int s3c_hsotg_ep_sethalt(struct usb_ep *ep, int value)
static struct usb_ep_ops s3c_hsotg_ep_ops = ;
static int s3c_hsotg_corereset(struct s3c_hsotg *hsotg)
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
int usb_gadget_unregister_driver(struct usb_gadget_driver *driver)
EXPORT_SYMBOL(usb_gadget_unregister_driver);
static int s3c_hsotg_gadget_getframe(struct usb_gadget *gadget)
static struct usb_gadget_ops s3c_hsotg_gadget_ops = ;
static void __devinit s3c_hsotg_initep(struct s3c_hsotg *hsotg,
struct s3c_hsotg_ep *hs_ep,
int epnum)
static void s3c_hsotg_otgreset(struct s3c_hsotg *hsotg)
static void s3c_hsotg_init(struct s3c_hsotg *hsotg)
static void s3c_hsotg_dump(struct s3c_hsotg *hsotg)
static int state_show(struct seq_file *seq, void *v)
static int state_open(struct inode *inode, struct file *file)
static const struct file_operations state_fops = ;
static int fifo_show(struct seq_file *seq, void *v)
static int fifo_open(struct inode *inode, struct file *file)
static const struct file_operations fifo_fops = ;
static const char *decode_direction(int is_in)
static int ep_show(struct seq_file *seq, void *v)
static int ep_open(struct inode *inode, struct file *file)
static const struct file_operations ep_fops = ;
static void __devinit s3c_hsotg_create_debug(struct s3c_hsotg *hsotg)
static void __devexit s3c_hsotg_delete_debug(struct s3c_hsotg *hsotg)
static void s3c_hsotg_gate(struct platform_device *pdev, bool on)
static struct s3c_hsotg_plat s3c_hsotg_default_pdata;
static int __devinit s3c_hsotg_probe(struct platform_device *pdev)
static int __devexit s3c_hsotg_remove(struct platform_device *pdev)
#if 1
#define s3c_hsotg_suspend NULL
#define s3c_hsotg_resume NULL
static struct platform_driver s3c_hsotg_driver = ;
static int __init s3c_hsotg_modinit(void)
static void __exit s3c_hsotg_modexit(void)
module_init(s3c_hsotg_modinit);
module_exit(s3c_hsotg_modexit);
MODULE_DESCRIPTION("Samsung S3C USB High-speed/OtG device");
MODULE_AUTHOR("Ben Dooks <ben@simtec.co.uk>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:s3c-hsotg");
