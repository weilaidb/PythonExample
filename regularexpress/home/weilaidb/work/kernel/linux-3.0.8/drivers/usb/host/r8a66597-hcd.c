MODULE_DESCRIPTION("R8A66597 USB Host Controller Driver");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Yoshihiro Shimoda");
MODULE_ALIAS("platform:r8a66597_hcd");
#define DRIVER_VERSION	"2009-05-26"
static const char hcd_name[] = "r8a66597_hcd";
static void packet_write(struct r8a66597 *r8a66597, u16 pipenum);
static int r8a66597_get_frame(struct usb_hcd *hcd);
static void enable_pipe_irq(struct r8a66597 *r8a66597, u16 pipenum,
unsigned long reg)
static void disable_pipe_irq(struct r8a66597 *r8a66597, u16 pipenum,
unsigned long reg)
static void set_devadd_reg(struct r8a66597 *r8a66597, u8 r8a66597_address,
u16 usbspd, u8 upphub, u8 hubport, int port)
static int r8a66597_clock_enable(struct r8a66597 *r8a66597)
static void r8a66597_clock_disable(struct r8a66597 *r8a66597)
static void r8a66597_enable_port(struct r8a66597 *r8a66597, int port)
static void r8a66597_disable_port(struct r8a66597 *r8a66597, int port)
static int enable_controller(struct r8a66597 *r8a66597)
static void disable_controller(struct r8a66597 *r8a66597)
static int get_parent_r8a66597_address(struct r8a66597 *r8a66597,
struct usb_device *udev)
static int is_child_device(char *devpath)
static int is_hub_limit(char *devpath)
static void get_port_number(struct r8a66597 *r8a66597,
char *devpath, u16 *root_port, u16 *hub_port)
static u16 get_r8a66597_usb_speed(enum usb_device_speed speed)
static void set_child_connect_map(struct r8a66597 *r8a66597, int address)
static void put_child_connect_map(struct r8a66597 *r8a66597, int address)
static void set_pipe_reg_addr(struct r8a66597_pipe *pipe, u8 dma_ch)
static struct r8a66597_device *
get_urb_to_r8a66597_dev(struct r8a66597 *r8a66597, struct urb *urb)
static int make_r8a66597_device(struct r8a66597 *r8a66597,
struct urb *urb, u8 addr)
static u8 alloc_usb_address(struct r8a66597 *r8a66597, struct urb *urb)
static void free_usb_address(struct r8a66597 *r8a66597,
struct r8a66597_device *dev, int reset)
static void r8a66597_reg_wait(struct r8a66597 *r8a66597, unsigned long reg,
u16 mask, u16 loop)
static void pipe_start(struct r8a66597 *r8a66597, struct r8a66597_pipe *pipe)
static void pipe_stop(struct r8a66597 *r8a66597, struct r8a66597_pipe *pipe)
static void clear_all_buffer(struct r8a66597 *r8a66597,
struct r8a66597_pipe *pipe)
static void r8a66597_pipe_toggle(struct r8a66597 *r8a66597,
struct r8a66597_pipe *pipe, int toggle)
static inline unsigned short mbw_value(struct r8a66597 *r8a66597)
static inline void cfifo_change(struct r8a66597 *r8a66597, u16 pipenum)
static inline void fifo_change_from_pipe(struct r8a66597 *r8a66597,
struct r8a66597_pipe *pipe)
static u16 r8a66597_get_pipenum(struct urb *urb, struct usb_host_endpoint *hep)
static u16 get_urb_to_r8a66597_addr(struct r8a66597 *r8a66597, struct urb *urb)
static unsigned short *get_toggle_pointer(struct r8a66597_device *dev,
int urb_pipe)
static void pipe_toggle_set(struct r8a66597 *r8a66597,
struct r8a66597_pipe *pipe,
struct urb *urb, int set)
static void pipe_toggle_save(struct r8a66597 *r8a66597,
struct r8a66597_pipe *pipe,
struct urb *urb)
static void pipe_toggle_restore(struct r8a66597 *r8a66597,
struct r8a66597_pipe *pipe,
struct urb *urb)
static void pipe_buffer_setting(struct r8a66597 *r8a66597,
struct r8a66597_pipe_info *info)
static void pipe_setting(struct r8a66597 *r8a66597, struct r8a66597_td *td)
static u16 get_empty_pipenum(struct r8a66597 *r8a66597,
struct usb_endpoint_descriptor *ep)
static u16 get_r8a66597_type(__u8 type)
static u16 get_bufnum(u16 pipenum)
static u16 get_buf_bsize(u16 pipenum)
static void enable_r8a66597_pipe_dma(struct r8a66597 *r8a66597,
struct r8a66597_device *dev,
struct r8a66597_pipe *pipe,
struct urb *urb)
static void enable_r8a66597_pipe(struct r8a66597 *r8a66597, struct urb *urb,
struct usb_host_endpoint *hep,
struct r8a66597_pipe_info *info)
static void r8a66597_urb_done(struct r8a66597 *r8a66597, struct urb *urb,
int status)
__releases(r8a66597->lock)
__acquires(r8a66597->lock)
static void force_dequeue(struct r8a66597 *r8a66597, u16 pipenum, u16 address)
static void disable_r8a66597_pipe_all(struct r8a66597 *r8a66597,
struct r8a66597_device *dev)
static u16 get_interval(struct urb *urb, __u8 interval)
static unsigned long get_timer_interval(struct urb *urb, __u8 interval)
static void init_pipe_info(struct r8a66597 *r8a66597, struct urb *urb,
struct usb_host_endpoint *hep,
struct usb_endpoint_descriptor *ep)
static void init_pipe_config(struct r8a66597 *r8a66597, struct urb *urb)
static void pipe_irq_enable(struct r8a66597 *r8a66597, struct urb *urb,
u16 pipenum)
static void pipe_irq_disable(struct r8a66597 *r8a66597, u16 pipenum)
static void r8a66597_root_hub_start_polling(struct r8a66597 *r8a66597)
static void start_root_hub_sampling(struct r8a66597 *r8a66597, int port,
int connect)
static void r8a66597_check_syssts(struct r8a66597 *r8a66597, int port,
u16 syssts)
__releases(r8a66597->lock)
__acquires(r8a66597->lock)
static void r8a66597_usb_connect(struct r8a66597 *r8a66597, int port)
static void r8a66597_usb_disconnect(struct r8a66597 *r8a66597, int port)
static void prepare_setup_packet(struct r8a66597 *r8a66597,
struct r8a66597_td *td)
static void prepare_packet_read(struct r8a66597 *r8a66597,
struct r8a66597_td *td)
static void prepare_packet_write(struct r8a66597 *r8a66597,
struct r8a66597_td *td)
static void prepare_status_packet(struct r8a66597 *r8a66597,
struct r8a66597_td *td)
static int is_set_address(unsigned char *setup_packet)
static int start_transfer(struct r8a66597 *r8a66597, struct r8a66597_td *td)
static int check_transfer_finish(struct r8a66597_td *td, struct urb *urb)
static void set_td_timer(struct r8a66597 *r8a66597, struct r8a66597_td *td)
static void finish_request(struct r8a66597 *r8a66597, struct r8a66597_td *td,
u16 pipenum, struct urb *urb, int status)
__releases(r8a66597->lock) __acquires(r8a66597->lock)
static void packet_read(struct r8a66597 *r8a66597, u16 pipenum)
static void packet_write(struct r8a66597 *r8a66597, u16 pipenum)
static void check_next_phase(struct r8a66597 *r8a66597, int status)
static int get_urb_error(struct r8a66597 *r8a66597, u16 pipenum)
static void irq_pipe_ready(struct r8a66597 *r8a66597)
static void irq_pipe_empty(struct r8a66597 *r8a66597)
static void irq_pipe_nrdy(struct r8a66597 *r8a66597)
static irqreturn_t r8a66597_irq(struct usb_hcd *hcd)
static void r8a66597_root_hub_control(struct r8a66597 *r8a66597, int port)
static void r8a66597_interval_timer(unsigned long _r8a66597)
static void r8a66597_td_timer(unsigned long _r8a66597)
static void r8a66597_timer(unsigned long _r8a66597)
static int check_pipe_config(struct r8a66597 *r8a66597, struct urb *urb)
static int r8a66597_start(struct usb_hcd *hcd)
static void r8a66597_stop(struct usb_hcd *hcd)
static void set_address_zero(struct r8a66597 *r8a66597, struct urb *urb)
static struct r8a66597_td *r8a66597_make_td(struct r8a66597 *r8a66597,
struct urb *urb,
struct usb_host_endpoint *hep)
static int r8a66597_urb_enqueue(struct usb_hcd *hcd,
struct urb *urb,
gfp_t mem_flags)
static int r8a66597_urb_dequeue(struct usb_hcd *hcd, struct urb *urb,
int status)
static void r8a66597_endpoint_disable(struct usb_hcd *hcd,
struct usb_host_endpoint *hep)
static int r8a66597_get_frame(struct usb_hcd *hcd)
static void collect_usb_address_map(struct usb_device *udev, unsigned long *map)
static struct r8a66597_device *get_r8a66597_device(struct r8a66597 *r8a66597,
int addr)
static void update_usb_address_map(struct r8a66597 *r8a66597,
struct usb_device *root_hub,
unsigned long *map)
static void r8a66597_check_detect_child(struct r8a66597 *r8a66597,
struct usb_hcd *hcd)
static int r8a66597_hub_status_data(struct usb_hcd *hcd, char *buf)
static void r8a66597_hub_descriptor(struct r8a66597 *r8a66597,
struct usb_hub_descriptor *desc)
static int r8a66597_hub_control(struct usb_hcd *hcd, u16 typeReq, u16 wValue,
u16 wIndex, char *buf, u16 wLength)
#if defined(CONFIG_PM)
static int r8a66597_bus_suspend(struct usb_hcd *hcd)
static int r8a66597_bus_resume(struct usb_hcd *hcd)
#define	r8a66597_bus_suspend	NULL
#define	r8a66597_bus_resume	NULL
static struct hc_driver r8a66597_hc_driver = ;
#if defined(CONFIG_PM)
static int r8a66597_suspend(struct device *dev)
static int r8a66597_resume(struct device *dev)
static const struct dev_pm_ops r8a66597_dev_pm_ops = ;
#define R8A66597_DEV_PM_OPS	(&r8a66597_dev_pm_ops)
#define R8A66597_DEV_PM_OPS	NULL
static int __devexit r8a66597_remove(struct platform_device *pdev)
static int __devinit r8a66597_probe(struct platform_device *pdev)
static struct platform_driver r8a66597_driver = ;
static int __init r8a66597_init(void)
module_init(r8a66597_init);
static void __exit r8a66597_cleanup(void)
module_exit(r8a66597_cleanup);
