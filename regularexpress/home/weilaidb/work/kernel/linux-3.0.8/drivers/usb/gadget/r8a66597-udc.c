#define DRIVER_VERSION	"2009-08-18"
static const char udc_name[] = "r8a66597_udc";
static const char *r8a66597_ep_name[] = ;
static void init_controller(struct r8a66597 *r8a66597);
static void disable_controller(struct r8a66597 *r8a66597);
static void irq_ep0_write(struct r8a66597_ep *ep, struct r8a66597_request *req);
static void irq_packet_write(struct r8a66597_ep *ep,
struct r8a66597_request *req);
static int r8a66597_queue(struct usb_ep *_ep, struct usb_request *_req,
gfp_t gfp_flags);
static void transfer_complete(struct r8a66597_ep *ep,
struct r8a66597_request *req, int status);
static inline u16 get_usb_speed(struct r8a66597 *r8a66597)
static void enable_pipe_irq(struct r8a66597 *r8a66597, u16 pipenum,
unsigned long reg)
static void disable_pipe_irq(struct r8a66597 *r8a66597, u16 pipenum,
unsigned long reg)
static void r8a66597_usb_connect(struct r8a66597 *r8a66597)
static void r8a66597_usb_disconnect(struct r8a66597 *r8a66597)
__releases(r8a66597->lock)
__acquires(r8a66597->lock)
static inline u16 control_reg_get_pid(struct r8a66597 *r8a66597, u16 pipenum)
static inline void control_reg_set_pid(struct r8a66597 *r8a66597, u16 pipenum,
u16 pid)
static inline void pipe_start(struct r8a66597 *r8a66597, u16 pipenum)
static inline void pipe_stop(struct r8a66597 *r8a66597, u16 pipenum)
static inline void pipe_stall(struct r8a66597 *r8a66597, u16 pipenum)
static inline u16 control_reg_get(struct r8a66597 *r8a66597, u16 pipenum)
static inline void control_reg_sqclr(struct r8a66597 *r8a66597, u16 pipenum)
static inline int get_buffer_size(struct r8a66597 *r8a66597, u16 pipenum)
static inline unsigned short mbw_value(struct r8a66597 *r8a66597)
static inline void pipe_change(struct r8a66597 *r8a66597, u16 pipenum)
static int pipe_buffer_setting(struct r8a66597 *r8a66597,
struct r8a66597_pipe_info *info)
static void pipe_buffer_release(struct r8a66597 *r8a66597,
struct r8a66597_pipe_info *info)
static void pipe_initialize(struct r8a66597_ep *ep)
static void r8a66597_ep_setting(struct r8a66597 *r8a66597,
struct r8a66597_ep *ep,
const struct usb_endpoint_descriptor *desc,
u16 pipenum, int dma)
static void r8a66597_ep_release(struct r8a66597_ep *ep)
static int alloc_pipe_config(struct r8a66597_ep *ep,
const struct usb_endpoint_descriptor *desc)
static int free_pipe_config(struct r8a66597_ep *ep)
static void pipe_irq_enable(struct r8a66597 *r8a66597, u16 pipenum)
static void pipe_irq_disable(struct r8a66597 *r8a66597, u16 pipenum)
static void control_end(struct r8a66597 *r8a66597, unsigned ccpl)
static void start_ep0_write(struct r8a66597_ep *ep,
struct r8a66597_request *req)
static void start_packet_write(struct r8a66597_ep *ep,
struct r8a66597_request *req)
static void start_packet_read(struct r8a66597_ep *ep,
struct r8a66597_request *req)
static void start_packet(struct r8a66597_ep *ep, struct r8a66597_request *req)
static void start_ep0(struct r8a66597_ep *ep, struct r8a66597_request *req)
static void init_controller(struct r8a66597 *r8a66597)
static void disable_controller(struct r8a66597 *r8a66597)
static void r8a66597_start_xclock(struct r8a66597 *r8a66597)
static struct r8a66597_request *get_request_from_ep(struct r8a66597_ep *ep)
static void transfer_complete(struct r8a66597_ep *ep,
struct r8a66597_request *req, int status)
__releases(r8a66597->lock)
__acquires(r8a66597->lock)
static void irq_ep0_write(struct r8a66597_ep *ep, struct r8a66597_request *req)
static void irq_packet_write(struct r8a66597_ep *ep,
struct r8a66597_request *req)
static void irq_packet_read(struct r8a66597_ep *ep,
struct r8a66597_request *req)
static void irq_pipe_ready(struct r8a66597 *r8a66597, u16 status, u16 enb)
static void irq_pipe_empty(struct r8a66597 *r8a66597, u16 status, u16 enb)
static void get_status(struct r8a66597 *r8a66597, struct usb_ctrlrequest *ctrl)
__releases(r8a66597->lock)
__acquires(r8a66597->lock)
static void clear_feature(struct r8a66597 *r8a66597,
struct usb_ctrlrequest *ctrl)
static void set_feature(struct r8a66597 *r8a66597, struct usb_ctrlrequest *ctrl)
static int setup_packet(struct r8a66597 *r8a66597, struct usb_ctrlrequest *ctrl)
static void r8a66597_update_usb_speed(struct r8a66597 *r8a66597)
static void irq_device_state(struct r8a66597 *r8a66597)
static void irq_control_stage(struct r8a66597 *r8a66597)
__releases(r8a66597->lock)
__acquires(r8a66597->lock)
static irqreturn_t r8a66597_irq(int irq, void *_r8a66597)
static void r8a66597_timer(unsigned long _r8a66597)
static int r8a66597_enable(struct usb_ep *_ep,
const struct usb_endpoint_descriptor *desc)
static int r8a66597_disable(struct usb_ep *_ep)
static struct usb_request *r8a66597_alloc_request(struct usb_ep *_ep,
gfp_t gfp_flags)
static void r8a66597_free_request(struct usb_ep *_ep, struct usb_request *_req)
static int r8a66597_queue(struct usb_ep *_ep, struct usb_request *_req,
gfp_t gfp_flags)
static int r8a66597_dequeue(struct usb_ep *_ep, struct usb_request *_req)
static int r8a66597_set_halt(struct usb_ep *_ep, int value)
static int r8a66597_set_wedge(struct usb_ep *_ep)
static void r8a66597_fifo_flush(struct usb_ep *_ep)
static struct usb_ep_ops r8a66597_ep_ops = ;
static struct r8a66597 *the_controller;
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
int usb_gadget_unregister_driver(struct usb_gadget_driver *driver)
EXPORT_SYMBOL(usb_gadget_unregister_driver);
static int r8a66597_get_frame(struct usb_gadget *_gadget)
static struct usb_gadget_ops r8a66597_gadget_ops = ;
static int __exit r8a66597_remove(struct platform_device *pdev)
static void nop_completion(struct usb_ep *ep, struct usb_request *r)
static int __init r8a66597_probe(struct platform_device *pdev)
static struct platform_driver r8a66597_driver = ;
static int __init r8a66597_udc_init(void)
module_init(r8a66597_udc_init);
static void __exit r8a66597_udc_cleanup(void)
module_exit(r8a66597_udc_cleanup);
MODULE_DESCRIPTION("R8A66597 USB gadget driver");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Yoshihiro Shimoda");
