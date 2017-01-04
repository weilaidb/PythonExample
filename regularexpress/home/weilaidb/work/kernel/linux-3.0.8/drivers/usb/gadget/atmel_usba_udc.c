static struct usba_udc the_udc;
static struct usba_ep *usba_ep;
static int queue_dbg_open(struct inode *inode, struct file *file)
static ssize_t queue_dbg_read(struct file *file, char __user *buf,
size_t nbytes, loff_t *ppos)
static int queue_dbg_release(struct inode *inode, struct file *file)
static int regs_dbg_open(struct inode *inode, struct file *file)
static ssize_t regs_dbg_read(struct file *file, char __user *buf,
size_t nbytes, loff_t *ppos)
static int regs_dbg_release(struct inode *inode, struct file *file)
const struct file_operations queue_dbg_fops = ;
const struct file_operations regs_dbg_fops = ;
static void usba_ep_init_debugfs(struct usba_udc *udc,
struct usba_ep *ep)
static void usba_ep_cleanup_debugfs(struct usba_ep *ep)
static void usba_init_debugfs(struct usba_udc *udc)
static void usba_cleanup_debugfs(struct usba_udc *udc)
static inline void usba_ep_init_debugfs(struct usba_udc *udc,
struct usba_ep *ep)
static inline void usba_ep_cleanup_debugfs(struct usba_ep *ep)
static inline void usba_init_debugfs(struct usba_udc *udc)
static inline void usba_cleanup_debugfs(struct usba_udc *udc)
static int vbus_is_present(struct usba_udc *udc)
#if defined(CONFIG_ARCH_AT91SAM9RL)
static void toggle_bias(int is_on)
static void toggle_bias(int is_on)
static void next_fifo_transaction(struct usba_ep *ep, struct usba_request *req)
static void submit_request(struct usba_ep *ep, struct usba_request *req)
static void submit_next_request(struct usba_ep *ep)
static void send_status(struct usba_udc *udc, struct usba_ep *ep)
static void receive_data(struct usba_ep *ep)
static void
request_complete(struct usba_ep *ep, struct usba_request *req, int status)
static void
request_complete_list(struct usba_ep *ep, struct list_head *list, int status)
static int
usba_ep_enable(struct usb_ep *_ep, const struct usb_endpoint_descriptor *desc)
static int usba_ep_disable(struct usb_ep *_ep)
static struct usb_request *
usba_ep_alloc_request(struct usb_ep *_ep, gfp_t gfp_flags)
static void
usba_ep_free_request(struct usb_ep *_ep, struct usb_request *_req)
static int queue_dma(struct usba_udc *udc, struct usba_ep *ep,
struct usba_request *req, gfp_t gfp_flags)
static int
usba_ep_queue(struct usb_ep *_ep, struct usb_request *_req, gfp_t gfp_flags)
static void
usba_update_req(struct usba_ep *ep, struct usba_request *req, u32 status)
static int stop_dma(struct usba_ep *ep, u32 *pstatus)
static int usba_ep_dequeue(struct usb_ep *_ep, struct usb_request *_req)
static int usba_ep_set_halt(struct usb_ep *_ep, int value)
static int usba_ep_fifo_status(struct usb_ep *_ep)
static void usba_ep_fifo_flush(struct usb_ep *_ep)
static const struct usb_ep_ops usba_ep_ops = ;
static int usba_udc_get_frame(struct usb_gadget *gadget)
static int usba_udc_wakeup(struct usb_gadget *gadget)
static int
usba_udc_set_selfpowered(struct usb_gadget *gadget, int is_selfpowered)
static const struct usb_gadget_ops usba_udc_ops = ;
static struct usb_endpoint_descriptor usba_ep0_desc = ;
static void nop_release(struct device *dev)
static struct usba_udc the_udc = ;
static void reset_all_endpoints(struct usba_udc *udc)
static struct usba_ep *get_ep_by_addr(struct usba_udc *udc, u16 wIndex)
static inline void set_protocol_stall(struct usba_udc *udc, struct usba_ep *ep)
static inline int is_stalled(struct usba_udc *udc, struct usba_ep *ep)
static inline void set_address(struct usba_udc *udc, unsigned int addr)
static int do_test_mode(struct usba_udc *udc)
static inline bool feature_is_dev_remote_wakeup(struct usb_ctrlrequest *crq)
static inline bool feature_is_dev_test_mode(struct usb_ctrlrequest *crq)
static inline bool feature_is_ep_halt(struct usb_ctrlrequest *crq)
static int handle_ep0_setup(struct usba_udc *udc, struct usba_ep *ep,
struct usb_ctrlrequest *crq)
static void usba_control_irq(struct usba_udc *udc, struct usba_ep *ep)
static void usba_ep_irq(struct usba_udc *udc, struct usba_ep *ep)
static void usba_dma_irq(struct usba_udc *udc, struct usba_ep *ep)
static irqreturn_t usba_udc_irq(int irq, void *devid)
static irqreturn_t usba_vbus_irq(int irq, void *devid)
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
int usb_gadget_unregister_driver(struct usb_gadget_driver *driver)
EXPORT_SYMBOL(usb_gadget_unregister_driver);
static int __init usba_udc_probe(struct platform_device *pdev)
static int __exit usba_udc_remove(struct platform_device *pdev)
static struct platform_driver udc_driver = ;
static int __init udc_init(void)
module_init(udc_init);
static void __exit udc_exit(void)
module_exit(udc_exit);
MODULE_DESCRIPTION("Atmel USBA UDC driver");
MODULE_AUTHOR("Haavard Skinnemoen (Atmel)");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:atmel_usba_udc");
