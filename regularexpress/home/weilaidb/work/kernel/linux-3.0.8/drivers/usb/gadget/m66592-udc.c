MODULE_DESCRIPTION("M66592 USB gadget driver");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Yoshihiro Shimoda");
MODULE_ALIAS("platform:m66592_udc");
#define DRIVER_VERSION	"21 July 2009"
static const char udc_name[] = "m66592_udc";
static const char *m66592_ep_name[] = ;
static void disable_controller(struct m66592 *m66592);
static void irq_ep0_write(struct m66592_ep *ep, struct m66592_request *req);
static void irq_packet_write(struct m66592_ep *ep, struct m66592_request *req);
static int m66592_queue(struct usb_ep *_ep, struct usb_request *_req,
gfp_t gfp_flags);
static void transfer_complete(struct m66592_ep *ep,
struct m66592_request *req, int status);
static inline u16 get_usb_speed(struct m66592 *m66592)
static void enable_pipe_irq(struct m66592 *m66592, u16 pipenum,
unsigned long reg)
static void disable_pipe_irq(struct m66592 *m66592, u16 pipenum,
unsigned long reg)
static void m66592_usb_connect(struct m66592 *m66592)
static void m66592_usb_disconnect(struct m66592 *m66592)
__releases(m66592->lock)
__acquires(m66592->lock)
static inline u16 control_reg_get_pid(struct m66592 *m66592, u16 pipenum)
static inline void control_reg_set_pid(struct m66592 *m66592, u16 pipenum,
u16 pid)
static inline void pipe_start(struct m66592 *m66592, u16 pipenum)
static inline void pipe_stop(struct m66592 *m66592, u16 pipenum)
static inline void pipe_stall(struct m66592 *m66592, u16 pipenum)
static inline u16 control_reg_get(struct m66592 *m66592, u16 pipenum)
static inline void control_reg_sqclr(struct m66592 *m66592, u16 pipenum)
static inline int get_buffer_size(struct m66592 *m66592, u16 pipenum)
static inline void pipe_change(struct m66592 *m66592, u16 pipenum)
static int pipe_buffer_setting(struct m66592 *m66592,
struct m66592_pipe_info *info)
static void pipe_buffer_release(struct m66592 *m66592,
struct m66592_pipe_info *info)
static void pipe_initialize(struct m66592_ep *ep)
static void m66592_ep_setting(struct m66592 *m66592, struct m66592_ep *ep,
const struct usb_endpoint_descriptor *desc,
u16 pipenum, int dma)
static void m66592_ep_release(struct m66592_ep *ep)
static int alloc_pipe_config(struct m66592_ep *ep,
const struct usb_endpoint_descriptor *desc)
static int free_pipe_config(struct m66592_ep *ep)
static void pipe_irq_enable(struct m66592 *m66592, u16 pipenum)
static void pipe_irq_disable(struct m66592 *m66592, u16 pipenum)
static void control_end(struct m66592 *m66592, unsigned ccpl)
static void start_ep0_write(struct m66592_ep *ep, struct m66592_request *req)
static void start_packet_write(struct m66592_ep *ep, struct m66592_request *req)
static void start_packet_read(struct m66592_ep *ep, struct m66592_request *req)
static void start_packet(struct m66592_ep *ep, struct m66592_request *req)
static void start_ep0(struct m66592_ep *ep, struct m66592_request *req)
static void init_controller(struct m66592 *m66592)
static void disable_controller(struct m66592 *m66592)
static void m66592_start_xclock(struct m66592 *m66592)
static void transfer_complete(struct m66592_ep *ep,
struct m66592_request *req, int status)
__releases(m66592->lock)
__acquires(m66592->lock)
static void irq_ep0_write(struct m66592_ep *ep, struct m66592_request *req)
static void irq_packet_write(struct m66592_ep *ep, struct m66592_request *req)
static void irq_packet_read(struct m66592_ep *ep, struct m66592_request *req)
static void irq_pipe_ready(struct m66592 *m66592, u16 status, u16 enb)
static void irq_pipe_empty(struct m66592 *m66592, u16 status, u16 enb)
static void get_status(struct m66592 *m66592, struct usb_ctrlrequest *ctrl)
__releases(m66592->lock)
__acquires(m66592->lock)
static void clear_feature(struct m66592 *m66592, struct usb_ctrlrequest *ctrl)
static void set_feature(struct m66592 *m66592, struct usb_ctrlrequest *ctrl)
static int setup_packet(struct m66592 *m66592, struct usb_ctrlrequest *ctrl)
static void m66592_update_usb_speed(struct m66592 *m66592)
static void irq_device_state(struct m66592 *m66592)
static void irq_control_stage(struct m66592 *m66592)
__releases(m66592->lock)
__acquires(m66592->lock)
static irqreturn_t m66592_irq(int irq, void *_m66592)
static void m66592_timer(unsigned long _m66592)
static int m66592_enable(struct usb_ep *_ep,
const struct usb_endpoint_descriptor *desc)
static int m66592_disable(struct usb_ep *_ep)
static struct usb_request *m66592_alloc_request(struct usb_ep *_ep,
gfp_t gfp_flags)
static void m66592_free_request(struct usb_ep *_ep, struct usb_request *_req)
static int m66592_queue(struct usb_ep *_ep, struct usb_request *_req,
gfp_t gfp_flags)
static int m66592_dequeue(struct usb_ep *_ep, struct usb_request *_req)
static int m66592_set_halt(struct usb_ep *_ep, int value)
static void m66592_fifo_flush(struct usb_ep *_ep)
static struct usb_ep_ops m66592_ep_ops = ;
static struct m66592 *the_controller;
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
int usb_gadget_unregister_driver(struct usb_gadget_driver *driver)
EXPORT_SYMBOL(usb_gadget_unregister_driver);
static int m66592_get_frame(struct usb_gadget *_gadget)
static struct usb_gadget_ops m66592_gadget_ops = ;
static int __exit m66592_remove(struct platform_device *pdev)
static void nop_completion(struct usb_ep *ep, struct usb_request *r)
static int __init m66592_probe(struct platform_device *pdev)
static struct platform_driver m66592_driver = ;
static int __init m66592_udc_init(void)
module_init(m66592_udc_init);
static void __exit m66592_udc_cleanup(void)
module_exit(m66592_udc_cleanup);
