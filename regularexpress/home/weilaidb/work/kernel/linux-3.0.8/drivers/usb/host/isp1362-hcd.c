# define ISP1362_DEBUG
# undef ISP1362_DEBUG
#undef BUGGY_PXA2XX_UDC_USBTEST
#undef PTD_TRACE
#undef URB_TRACE
#undef VERBOSE
#undef REGISTERS
#undef CHIP_BUFFER_TEST
static int dbg_level;
module_param(dbg_level, int, 0644);
module_param(dbg_level, int, 0);
#define	STUB_DEBUG_FILE
#define DRIVER_VERSION	"2005-04-04"
#define DRIVER_DESC	"ISP1362 USB Host Controller Driver"
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
static const char hcd_name[] = "isp1362-hcd";
static void isp1362_hc_stop(struct usb_hcd *hcd);
static int isp1362_hc_start(struct usb_hcd *hcd);
static inline void isp1362_enable_int(struct isp1362_hcd *isp1362_hcd, u16 mask)
static inline struct isp1362_ep_queue *get_ptd_queue(struct isp1362_hcd *isp1362_hcd,
u16 offset)
static inline int get_ptd_offset(struct isp1362_ep_queue *epq, u8 index)
static inline u16 max_transfer_size(struct isp1362_ep_queue *epq, size_t size,
int mps)
static int claim_ptd_buffers(struct isp1362_ep_queue *epq,
struct isp1362_ep *ep, u16 len)
static inline void release_ptd_buffers(struct isp1362_ep_queue *epq, struct isp1362_ep *ep)
static void prepare_ptd(struct isp1362_hcd *isp1362_hcd, struct urb *urb,
struct isp1362_ep *ep, struct isp1362_ep_queue *epq,
u16 fno)
static void isp1362_write_ptd(struct isp1362_hcd *isp1362_hcd, struct isp1362_ep *ep,
struct isp1362_ep_queue *epq)
static void isp1362_read_ptd(struct isp1362_hcd *isp1362_hcd, struct isp1362_ep *ep,
struct isp1362_ep_queue *epq)
static void remove_ptd(struct isp1362_hcd *isp1362_hcd, struct isp1362_ep *ep)
static void finish_request(struct isp1362_hcd *isp1362_hcd, struct isp1362_ep *ep,
struct urb *urb, int status)
__releases(isp1362_hcd->lock)
__acquires(isp1362_hcd->lock)
static void postproc_ep(struct isp1362_hcd *isp1362_hcd, struct isp1362_ep *ep)
static void finish_unlinks(struct isp1362_hcd *isp1362_hcd)
static inline void enable_atl_transfers(struct isp1362_hcd *isp1362_hcd, int count)
static inline void enable_intl_transfers(struct isp1362_hcd *isp1362_hcd)
static inline void enable_istl_transfers(struct isp1362_hcd *isp1362_hcd, int flip)
static int submit_req(struct isp1362_hcd *isp1362_hcd, struct urb *urb,
struct isp1362_ep *ep, struct isp1362_ep_queue *epq)
static void start_atl_transfers(struct isp1362_hcd *isp1362_hcd)
static void start_intl_transfers(struct isp1362_hcd *isp1362_hcd)
static inline int next_ptd(struct isp1362_ep_queue *epq, struct isp1362_ep *ep)
static void start_iso_transfers(struct isp1362_hcd *isp1362_hcd)
static void finish_transfers(struct isp1362_hcd *isp1362_hcd, unsigned long done_map,
struct isp1362_ep_queue *epq)
static void finish_iso_transfers(struct isp1362_hcd *isp1362_hcd, struct isp1362_ep_queue *epq)
static irqreturn_t isp1362_irq(struct usb_hcd *hcd)
#define	MAX_PERIODIC_LOAD	900
static int balance(struct isp1362_hcd *isp1362_hcd, u16 interval, u16 load)
static int isp1362_urb_enqueue(struct usb_hcd *hcd,
struct urb *urb,
gfp_t mem_flags)
static int isp1362_urb_dequeue(struct usb_hcd *hcd, struct urb *urb, int status)
static void isp1362_endpoint_disable(struct usb_hcd *hcd, struct usb_host_endpoint *hep)
static int isp1362_get_frame(struct usb_hcd *hcd)
static int isp1362_hub_status_data(struct usb_hcd *hcd, char *buf)
static void isp1362_hub_descriptor(struct isp1362_hcd *isp1362_hcd,
struct usb_hub_descriptor *desc)
static int isp1362_hub_control(struct usb_hcd *hcd, u16 typeReq, u16 wValue,
u16 wIndex, char *buf, u16 wLength)
static int isp1362_bus_suspend(struct usb_hcd *hcd)
static int isp1362_bus_resume(struct usb_hcd *hcd)
#define	isp1362_bus_suspend	NULL
#define	isp1362_bus_resume	NULL
static inline void create_debug_file(struct isp1362_hcd *isp1362_hcd)
static inline void remove_debug_file(struct isp1362_hcd *isp1362_hcd)
static void dump_irq(struct seq_file *s, char *label, u16 mask)
static void dump_int(struct seq_file *s, char *label, u32 mask)
static void dump_ctrl(struct seq_file *s, char *label, u32 mask)
static void dump_regs(struct seq_file *s, struct isp1362_hcd *isp1362_hcd)
static int proc_isp1362_show(struct seq_file *s, void *unused)
static int proc_isp1362_open(struct inode *inode, struct file *file)
static const struct file_operations proc_ops = ;
static const char proc_filename[] = "driver/isp1362";
static void create_debug_file(struct isp1362_hcd *isp1362_hcd)
static void remove_debug_file(struct isp1362_hcd *isp1362_hcd)
static void __isp1362_sw_reset(struct isp1362_hcd *isp1362_hcd)
static void isp1362_sw_reset(struct isp1362_hcd *isp1362_hcd)
static int isp1362_mem_config(struct usb_hcd *hcd)
static int isp1362_hc_reset(struct usb_hcd *hcd)
static void isp1362_hc_stop(struct usb_hcd *hcd)
static int isp1362_chip_test(struct isp1362_hcd *isp1362_hcd)
static int isp1362_hc_start(struct usb_hcd *hcd)
static struct hc_driver isp1362_hc_driver = ;
static int __devexit isp1362_remove(struct platform_device *pdev)
static int __devinit isp1362_probe(struct platform_device *pdev)
static int isp1362_suspend(struct platform_device *pdev, pm_message_t state)
static int isp1362_resume(struct platform_device *pdev)
#define	isp1362_suspend	NULL
#define	isp1362_resume	NULL
static struct platform_driver isp1362_driver = ;
static int __init isp1362_init(void)
module_init(isp1362_init);
static void __exit isp1362_cleanup(void)
module_exit(isp1362_cleanup);
