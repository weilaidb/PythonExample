static DEFINE_SPINLOCK(udc_lock);
static const struct usb_endpoint_descriptor
ctrl_endpt_out_desc = ;
static const struct usb_endpoint_descriptor
ctrl_endpt_in_desc = ;
static struct ci13xxx *_udc;
#define ISR_MASK   0x1F
static struct  isr_statistics;
static int ffs_nr(u32 x)
static struct  hw_bank;
#define ABS_AHBBURST        (0x0090UL)
#define ABS_AHBMODE         (0x0098UL)
#define ABS_CAPLENGTH       (0x100UL)
#define ABS_HCCPARAMS       (0x108UL)
#define ABS_DCCPARAMS       (0x124UL)
#define ABS_TESTMODE        (hw_bank.lpm ? 0x0FCUL : 0x138UL)
#define CAP_USBCMD          (0x000UL)
#define CAP_USBSTS          (0x004UL)
#define CAP_USBINTR         (0x008UL)
#define CAP_DEVICEADDR      (0x014UL)
#define CAP_ENDPTLISTADDR   (0x018UL)
#define CAP_PORTSC          (0x044UL)
#define CAP_DEVLC           (0x084UL)
#define CAP_USBMODE         (hw_bank.lpm ? 0x0C8UL : 0x068UL)
#define CAP_ENDPTSETUPSTAT  (hw_bank.lpm ? 0x0D8UL : 0x06CUL)
#define CAP_ENDPTPRIME      (hw_bank.lpm ? 0x0DCUL : 0x070UL)
#define CAP_ENDPTFLUSH      (hw_bank.lpm ? 0x0E0UL : 0x074UL)
#define CAP_ENDPTSTAT       (hw_bank.lpm ? 0x0E4UL : 0x078UL)
#define CAP_ENDPTCOMPLETE   (hw_bank.lpm ? 0x0E8UL : 0x07CUL)
#define CAP_ENDPTCTRL       (hw_bank.lpm ? 0x0ECUL : 0x080UL)
#define CAP_LAST            (hw_bank.lpm ? 0x12CUL : 0x0C0UL)
static unsigned hw_ep_max;
static inline int hw_ep_bit(int num, int dir)
static u32 hw_aread(u32 addr, u32 mask)
static void hw_awrite(u32 addr, u32 mask, u32 data)
static u32 hw_cread(u32 addr, u32 mask)
static void hw_cwrite(u32 addr, u32 mask, u32 data)
static u32 hw_ctest_and_clear(u32 addr, u32 mask)
static u32 hw_ctest_and_write(u32 addr, u32 mask, u32 data)
static int hw_device_init(void __iomem *base)
static int hw_device_reset(struct ci13xxx *udc)
static int hw_device_state(u32 dma)
static int hw_ep_flush(int num, int dir)
static int hw_ep_disable(int num, int dir)
static int hw_ep_enable(int num, int dir, int type)
static int hw_ep_get_halt(int num, int dir)
static int hw_test_and_clear_setup_status(int n)
static int hw_ep_prime(int num, int dir, int is_ctrl)
static int hw_ep_set_halt(int num, int dir, int value)
static int hw_intr_clear(int n)
static int hw_intr_force(int n)
static int hw_port_is_high_speed(void)
static u8 hw_port_test_get(void)
static int hw_port_test_set(u8 mode)
static u32 hw_read_intr_enable(void)
static u32 hw_read_intr_status(void)
static size_t hw_register_read(u32 *buf, size_t size)
static int hw_register_write(u16 addr, u32 data)
static int hw_test_and_clear_complete(int n)
static u32 hw_test_and_clear_intr_active(void)
static int hw_test_and_clear_setup_guard(void)
static int hw_test_and_set_setup_guard(void)
static int hw_usb_set_address(u8 value)
static int hw_usb_reset(void)
static ssize_t show_device(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(device, S_IRUSR, show_device, NULL);
static ssize_t show_driver(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(driver, S_IRUSR, show_driver, NULL);
#define DBG_DATA_MSG   64UL
#define DBG_DATA_MAX   128UL
static struct  dbg_data = ;
static void dbg_dec(unsigned *idx)
static void dbg_inc(unsigned *idx)
static void dbg_print(u8 addr, const char *name, int status, const char *extra)
static void dbg_done(u8 addr, const u32 token, int status)
static void dbg_event(u8 addr, const char *name, int status)
static void dbg_queue(u8 addr, const struct usb_request *req, int status)
static void dbg_setup(u8 addr, const struct usb_ctrlrequest *req)
static ssize_t show_events(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t store_events(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(events, S_IRUSR | S_IWUSR, show_events, store_events);
static ssize_t show_inters(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t store_inters(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(inters, S_IRUSR | S_IWUSR, show_inters, store_inters);
static ssize_t show_port_test(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_port_test(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(port_test, S_IRUSR | S_IWUSR,
show_port_test, store_port_test);
static ssize_t show_qheads(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(qheads, S_IRUSR, show_qheads, NULL);
static ssize_t show_registers(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_registers(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(registers, S_IRUSR | S_IWUSR,
show_registers, store_registers);
static ssize_t show_requests(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(requests, S_IRUSR, show_requests, NULL);
__maybe_unused static int dbg_create_files(struct device *dev)
__maybe_unused static int dbg_remove_files(struct device *dev)
static inline u8 _usb_addr(struct ci13xxx_ep *ep)
static int _hardware_enqueue(struct ci13xxx_ep *mEp, struct ci13xxx_req *mReq)
static int _hardware_dequeue(struct ci13xxx_ep *mEp, struct ci13xxx_req *mReq)
static int _ep_nuke(struct ci13xxx_ep *mEp)
__releases(mEp->lock)
__acquires(mEp->lock)
static int _gadget_stop_activity(struct usb_gadget *gadget)
static void isr_reset_handler(struct ci13xxx *udc)
__releases(udc->lock)
__acquires(udc->lock)
static void isr_get_status_complete(struct usb_ep *ep, struct usb_request *req)
static int isr_get_status_response(struct ci13xxx *udc,
struct usb_ctrlrequest *setup)
__releases(mEp->lock)
__acquires(mEp->lock)
static void
isr_setup_status_complete(struct usb_ep *ep, struct usb_request *req)
static int isr_setup_status_phase(struct ci13xxx *udc)
__releases(mEp->lock)
__acquires(mEp->lock)
static int isr_tr_complete_low(struct ci13xxx_ep *mEp)
__releases(mEp->lock)
__acquires(mEp->lock)
static void isr_tr_complete_handler(struct ci13xxx *udc)
__releases(udc->lock)
__acquires(udc->lock)
static int ep_enable(struct usb_ep *ep,
const struct usb_endpoint_descriptor *desc)
static int ep_disable(struct usb_ep *ep)
static struct usb_request *ep_alloc_request(struct usb_ep *ep, gfp_t gfp_flags)
static void ep_free_request(struct usb_ep *ep, struct usb_request *req)
static int ep_queue(struct usb_ep *ep, struct usb_request *req,
gfp_t __maybe_unused gfp_flags)
static int ep_dequeue(struct usb_ep *ep, struct usb_request *req)
static int ep_set_halt(struct usb_ep *ep, int value)
static int ep_set_wedge(struct usb_ep *ep)
static void ep_fifo_flush(struct usb_ep *ep)
static const struct usb_ep_ops usb_ep_ops = ;
static int ci13xxx_vbus_session(struct usb_gadget *_gadget, int is_active)
static int ci13xxx_wakeup(struct usb_gadget *_gadget)
static int ci13xxx_vbus_draw(struct usb_gadget *_gadget, unsigned mA)
static const struct usb_gadget_ops usb_gadget_ops = ;
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
int usb_gadget_unregister_driver(struct usb_gadget_driver *driver)
EXPORT_SYMBOL(usb_gadget_unregister_driver);
static irqreturn_t udc_irq(void)
static void udc_release(struct device *dev)
static int udc_probe(struct ci13xxx_udc_driver *driver, struct device *dev,
void __iomem *regs)
static void udc_remove(void)
