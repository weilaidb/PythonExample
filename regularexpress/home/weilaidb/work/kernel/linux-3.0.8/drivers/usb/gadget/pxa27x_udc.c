#define	DRIVER_VERSION	"2008-04-18"
#define	DRIVER_DESC	"PXA 27x USB Device Controller driver"
static const char driver_name[] = "pxa27x_udc";
static struct pxa_udc *the_controller;
static void handle_ep(struct pxa_ep *ep);
static int state_dbg_show(struct seq_file *s, void *p)
static int queues_dbg_show(struct seq_file *s, void *p)
static int eps_dbg_show(struct seq_file *s, void *p)
static int eps_dbg_open(struct inode *inode, struct file *file)
static int queues_dbg_open(struct inode *inode, struct file *file)
static int state_dbg_open(struct inode *inode, struct file *file)
static const struct file_operations state_dbg_fops = ;
static const struct file_operations queues_dbg_fops = ;
static const struct file_operations eps_dbg_fops = ;
static void pxa_init_debugfs(struct pxa_udc *udc)
static void pxa_cleanup_debugfs(struct pxa_udc *udc)
static inline void pxa_init_debugfs(struct pxa_udc *udc)
static inline void pxa_cleanup_debugfs(struct pxa_udc *udc)
static int is_match_usb_pxa(struct udc_usb_ep *udc_usb_ep, struct pxa_ep *ep,
int config, int interface, int altsetting)
static struct pxa_ep *find_pxa_ep(struct pxa_udc *udc,
struct udc_usb_ep *udc_usb_ep)
static void update_pxa_ep_matches(struct pxa_udc *udc)
static void pio_irq_enable(struct pxa_ep *ep)
static void pio_irq_disable(struct pxa_ep *ep)
static inline void udc_set_mask_UDCCR(struct pxa_udc *udc, int mask)
static inline void udc_clear_mask_UDCCR(struct pxa_udc *udc, int mask)
static inline void ep_write_UDCCSR(struct pxa_ep *ep, int mask)
static int ep_count_bytes_remain(struct pxa_ep *ep)
static int ep_is_empty(struct pxa_ep *ep)
static int ep_is_full(struct pxa_ep *ep)
static int epout_has_pkt(struct pxa_ep *ep)
static void set_ep0state(struct pxa_udc *udc, int state)
static void ep0_idle(struct pxa_udc *dev)
static void inc_ep_stats_reqs(struct pxa_ep *ep, int is_in)
static void inc_ep_stats_bytes(struct pxa_ep *ep, int count, int is_in)
static __init void pxa_ep_setup(struct pxa_ep *ep)
static __init void pxa_eps_setup(struct pxa_udc *dev)
static struct usb_request *
pxa_ep_alloc_request(struct usb_ep *_ep, gfp_t gfp_flags)
static void pxa_ep_free_request(struct usb_ep *_ep, struct usb_request *_req)
static void ep_add_request(struct pxa_ep *ep, struct pxa27x_request *req)
static void ep_del_request(struct pxa_ep *ep, struct pxa27x_request *req)
static void req_done(struct pxa_ep *ep, struct pxa27x_request *req, int status,
unsigned long *pflags)
static void ep_end_out_req(struct pxa_ep *ep, struct pxa27x_request *req,
unsigned long *pflags)
static void ep0_end_out_req(struct pxa_ep *ep, struct pxa27x_request *req,
unsigned long *pflags)
static void ep_end_in_req(struct pxa_ep *ep, struct pxa27x_request *req,
unsigned long *pflags)
static void ep0_end_in_req(struct pxa_ep *ep, struct pxa27x_request *req,
unsigned long *pflags)
static void nuke(struct pxa_ep *ep, int status)
static int read_packet(struct pxa_ep *ep, struct pxa27x_request *req)
static int write_packet(struct pxa_ep *ep, struct pxa27x_request *req,
unsigned int max)
static int read_fifo(struct pxa_ep *ep, struct pxa27x_request *req)
static int write_fifo(struct pxa_ep *ep, struct pxa27x_request *req)
static int read_ep0_fifo(struct pxa_ep *ep, struct pxa27x_request *req)
static int write_ep0_fifo(struct pxa_ep *ep, struct pxa27x_request *req)
static int pxa_ep_queue(struct usb_ep *_ep, struct usb_request *_req,
gfp_t gfp_flags)
static int pxa_ep_dequeue(struct usb_ep *_ep, struct usb_request *_req)
static int pxa_ep_set_halt(struct usb_ep *_ep, int value)
static int pxa_ep_fifo_status(struct usb_ep *_ep)
static void pxa_ep_fifo_flush(struct usb_ep *_ep)
static int pxa_ep_enable(struct usb_ep *_ep,
const struct usb_endpoint_descriptor *desc)
static int pxa_ep_disable(struct usb_ep *_ep)
static struct usb_ep_ops pxa_ep_ops = ;
static void dplus_pullup(struct pxa_udc *udc, int on)
static int pxa_udc_get_frame(struct usb_gadget *_gadget)
static int pxa_udc_wakeup(struct usb_gadget *_gadget)
static void udc_enable(struct pxa_udc *udc);
static void udc_disable(struct pxa_udc *udc);
static int should_enable_udc(struct pxa_udc *udc)
static int should_disable_udc(struct pxa_udc *udc)
static int pxa_udc_pullup(struct usb_gadget *_gadget, int is_active)
static void udc_enable(struct pxa_udc *udc);
static void udc_disable(struct pxa_udc *udc);
static int pxa_udc_vbus_session(struct usb_gadget *_gadget, int is_active)
static int pxa_udc_vbus_draw(struct usb_gadget *_gadget, unsigned mA)
static const struct usb_gadget_ops pxa_udc_ops = ;
static void udc_disable(struct pxa_udc *udc)
static __init void udc_init_data(struct pxa_udc *dev)
static void udc_enable(struct pxa_udc *udc)
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
static void stop_activity(struct pxa_udc *udc, struct usb_gadget_driver *driver)
int usb_gadget_unregister_driver(struct usb_gadget_driver *driver)
EXPORT_SYMBOL(usb_gadget_unregister_driver);
static void handle_ep0_ctrl_req(struct pxa_udc *udc,
struct pxa27x_request *req)
static void handle_ep0(struct pxa_udc *udc, int fifo_irq, int opc_irq)
static void handle_ep(struct pxa_ep *ep)
static void pxa27x_change_configuration(struct pxa_udc *udc, int config)
static void pxa27x_change_interface(struct pxa_udc *udc, int iface, int alt)
static void irq_handle_data(int irq, struct pxa_udc *udc)
static void irq_udc_suspend(struct pxa_udc *udc)
static void irq_udc_resume(struct pxa_udc *udc)
static void irq_udc_reconfig(struct pxa_udc *udc)
static void irq_udc_reset(struct pxa_udc *udc)
static irqreturn_t pxa_udc_irq(int irq, void *_dev)
static struct pxa_udc memory = ;
static int __init pxa_udc_probe(struct platform_device *pdev)
static int __exit pxa_udc_remove(struct platform_device *_dev)
static void pxa_udc_shutdown(struct platform_device *_dev)
extern void pxa27x_clear_otgph(void);
#define pxa27x_clear_otgph()   do  while (0)
static int pxa_udc_suspend(struct platform_device *_dev, pm_message_t state)
static int pxa_udc_resume(struct platform_device *_dev)
MODULE_ALIAS("platform:pxa27x-udc");
static struct platform_driver udc_driver = ;
static int __init udc_init(void)
module_init(udc_init);
static void __exit udc_exit(void)
module_exit(udc_exit);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR("Robert Jarzmik");
MODULE_LICENSE("GPL");
