#define DRIVER_VERSION "0.0.50"
#define oxu_dbg(oxu, fmt, args...) \
dev_dbg(oxu_to_hcd(oxu)->self.controller , fmt , ## args)
#define oxu_err(oxu, fmt, args...) \
dev_err(oxu_to_hcd(oxu)->self.controller , fmt , ## args)
#define oxu_info(oxu, fmt, args...) \
dev_info(oxu_to_hcd(oxu)->self.controller , fmt , ## args)
static inline struct usb_hcd *oxu_to_hcd(struct oxu_hcd *oxu)
static inline struct oxu_hcd *hcd_to_oxu(struct usb_hcd *hcd)
#undef OXU_URB_TRACE
#undef OXU_VERBOSE_DEBUG
#define oxu_vdbg			oxu_dbg
#define oxu_vdbg(oxu, fmt, args...)
static int __attribute__((__unused__))
dbg_status_buf(char *buf, unsigned len, const char *label, u32 status)
static int __attribute__((__unused__))
dbg_intr_buf(char *buf, unsigned len, const char *label, u32 enable)
static const char *const fls_strings[] =
;
static int dbg_command_buf(char *buf, unsigned len,
const char *label, u32 command)
static int dbg_port_buf(char *buf, unsigned len, const char *label,
int port, u32 status)
static inline int __attribute__((__unused__))
dbg_status_buf(char *buf, unsigned len, const char *label, u32 status)
static inline int __attribute__((__unused__))
dbg_command_buf(char *buf, unsigned len, const char *label, u32 command)
static inline int __attribute__((__unused__))
dbg_intr_buf(char *buf, unsigned len, const char *label, u32 enable)
static inline int __attribute__((__unused__))
dbg_port_buf(char *buf, unsigned len, const char *label, int port, u32 status)
#define dbg_status(oxu, label, status)
#define dbg_cmd(oxu, label, command)
#define dbg_port(oxu, label, port, status)
static int log2_irq_thresh;
module_param(log2_irq_thresh, int, S_IRUGO);
MODULE_PARM_DESC(log2_irq_thresh, "log2 IRQ latency, 1-64 microframes");
static unsigned park;
module_param(park, uint, S_IRUGO);
MODULE_PARM_DESC(park, "park setting; 1-3 back-to-back async packets");
static int ignore_oc;
module_param(ignore_oc, bool, S_IRUGO);
MODULE_PARM_DESC(ignore_oc, "ignore bogus hardware overcurrent indications");
static void ehci_work(struct oxu_hcd *oxu);
static int oxu_hub_control(struct usb_hcd *hcd,
u16 typeReq, u16 wValue, u16 wIndex,
char *buf, u16 wLength);
static inline u32 oxu_readl(void *base, u32 reg)
static inline void oxu_writel(void *base, u32 reg, u32 val)
static inline void timer_action_done(struct oxu_hcd *oxu,
enum ehci_timer_action action)
static inline void timer_action(struct oxu_hcd *oxu,
enum ehci_timer_action action)
static int handshake(struct oxu_hcd *oxu, void __iomem *ptr,
u32 mask, u32 done, int usec)
static int ehci_halt(struct oxu_hcd *oxu)
static void tdi_reset(struct oxu_hcd *oxu)
static int ehci_reset(struct oxu_hcd *oxu)
static void ehci_quiesce(struct oxu_hcd *oxu)
static int check_reset_complete(struct oxu_hcd *oxu, int index,
u32 __iomem *status_reg, int port_status)
static void ehci_hub_descriptor(struct oxu_hcd *oxu,
struct usb_hub_descriptor *desc)
static int oxu_buf_alloc(struct oxu_hcd *oxu, struct ehci_qtd *qtd, int len)
static void oxu_buf_free(struct oxu_hcd *oxu, struct ehci_qtd *qtd)
static inline void ehci_qtd_init(struct ehci_qtd *qtd, dma_addr_t dma)
static inline void oxu_qtd_free(struct oxu_hcd *oxu, struct ehci_qtd *qtd)
static struct ehci_qtd *ehci_qtd_alloc(struct oxu_hcd *oxu)
static void oxu_qh_free(struct oxu_hcd *oxu, struct ehci_qh *qh)
static void qh_destroy(struct kref *kref)
static struct ehci_qh *oxu_qh_alloc(struct oxu_hcd *oxu)
static inline struct ehci_qh *qh_get(struct ehci_qh *qh)
static inline void qh_put(struct ehci_qh *qh)
static void oxu_murb_free(struct oxu_hcd *oxu, struct oxu_murb *murb)
static struct oxu_murb *oxu_murb_alloc(struct oxu_hcd *oxu)
static void ehci_mem_cleanup(struct oxu_hcd *oxu)
static int ehci_mem_init(struct oxu_hcd *oxu, gfp_t flags)
static int qtd_fill(struct ehci_qtd *qtd, dma_addr_t buf, size_t len,
int token, int maxpacket)
static inline void qh_update(struct oxu_hcd *oxu,
struct ehci_qh *qh, struct ehci_qtd *qtd)
static void qh_refresh(struct oxu_hcd *oxu, struct ehci_qh *qh)
static void qtd_copy_status(struct oxu_hcd *oxu, struct urb *urb,
size_t length, u32 token)
static void ehci_urb_done(struct oxu_hcd *oxu, struct urb *urb)
__releases(oxu->lock)
__acquires(oxu->lock)
static void start_unlink_async(struct oxu_hcd *oxu, struct ehci_qh *qh);
static void unlink_async(struct oxu_hcd *oxu, struct ehci_qh *qh);
static void intr_deschedule(struct oxu_hcd *oxu, struct ehci_qh *qh);
static int qh_schedule(struct oxu_hcd *oxu, struct ehci_qh *qh);
#define HALT_BIT cpu_to_le32(QTD_STS_HALT)
static unsigned qh_completions(struct oxu_hcd *oxu, struct ehci_qh *qh)
#define hb_mult(wMaxPacketSize)		(1 + (((wMaxPacketSize) >> 11) & 0x03))
#define max_packet(wMaxPacketSize)	((wMaxPacketSize) & 0x07ff)
static void qtd_list_free(struct oxu_hcd *oxu,
struct urb *urb, struct list_head *qtd_list)
static struct list_head *qh_urb_transaction(struct oxu_hcd *oxu,
struct urb *urb,
struct list_head *head,
gfp_t flags)
static struct ehci_qh *qh_make(struct oxu_hcd *oxu,
struct urb *urb, gfp_t flags)
static void qh_link_async(struct oxu_hcd *oxu, struct ehci_qh *qh)
#define	QH_ADDR_MASK	cpu_to_le32(0x7f)
static struct ehci_qh *qh_append_tds(struct oxu_hcd *oxu,
struct urb *urb, struct list_head *qtd_list,
int epnum, void	**ptr)
static int submit_async(struct oxu_hcd	*oxu, struct urb *urb,
struct list_head *qtd_list, gfp_t mem_flags)
static void end_unlink_async(struct oxu_hcd *oxu)
static void start_unlink_async(struct oxu_hcd *oxu, struct ehci_qh *qh)
static void scan_async(struct oxu_hcd *oxu)
static union ehci_shadow *periodic_next_shadow(union ehci_shadow *periodic,
__le32 tag)
static void periodic_unlink(struct oxu_hcd *oxu, unsigned frame, void *ptr)
static unsigned short periodic_usecs(struct oxu_hcd *oxu,
unsigned frame, unsigned uframe)
static int enable_periodic(struct oxu_hcd *oxu)
static int disable_periodic(struct oxu_hcd *oxu)
static int qh_link_periodic(struct oxu_hcd *oxu, struct ehci_qh *qh)
static void qh_unlink_periodic(struct oxu_hcd *oxu, struct ehci_qh *qh)
static void intr_deschedule(struct oxu_hcd *oxu, struct ehci_qh *qh)
static int check_period(struct oxu_hcd *oxu,
unsigned frame, unsigned uframe,
unsigned period, unsigned usecs)
static int check_intr_schedule(struct oxu_hcd	*oxu,
unsigned frame, unsigned uframe,
const struct ehci_qh *qh, __le32 *c_maskp)
static int qh_schedule(struct oxu_hcd *oxu, struct ehci_qh *qh)
static int intr_submit(struct oxu_hcd *oxu, struct urb *urb,
struct list_head *qtd_list, gfp_t mem_flags)
static inline int itd_submit(struct oxu_hcd *oxu, struct urb *urb,
gfp_t mem_flags)
static inline int sitd_submit(struct oxu_hcd *oxu, struct urb *urb,
gfp_t mem_flags)
static void scan_periodic(struct oxu_hcd *oxu)
static void ehci_turn_off_all_ports(struct oxu_hcd *oxu)
static void ehci_port_power(struct oxu_hcd *oxu, int is_on)
static void ehci_work(struct oxu_hcd *oxu)
static void unlink_async(struct oxu_hcd *oxu, struct ehci_qh *qh)
static irqreturn_t oxu210_hcd_irq(struct usb_hcd *hcd)
static irqreturn_t oxu_irq(struct usb_hcd *hcd)
static void oxu_watchdog(unsigned long param)
static int oxu_hcd_init(struct usb_hcd *hcd)
static int oxu_reset(struct usb_hcd *hcd)
static int oxu_run(struct usb_hcd *hcd)
static void oxu_stop(struct usb_hcd *hcd)
static void oxu_shutdown(struct usb_hcd *hcd)
static int __oxu_urb_enqueue(struct usb_hcd *hcd, struct urb *urb,
gfp_t mem_flags)
static int oxu_urb_enqueue(struct usb_hcd *hcd, struct urb *urb,
gfp_t mem_flags)
static int oxu_urb_dequeue(struct usb_hcd *hcd, struct urb *urb, int status)
static void oxu_endpoint_disable(struct usb_hcd *hcd,
struct usb_host_endpoint *ep)
static int oxu_get_frame(struct usb_hcd *hcd)
static int oxu_hub_status_data(struct usb_hcd *hcd, char *buf)
static inline unsigned int oxu_port_speed(struct oxu_hcd *oxu,
unsigned int portsc)
#define	PORT_WAKE_BITS	(PORT_WKOC_E|PORT_WKDISC_E|PORT_WKCONN_E)
static int oxu_hub_control(struct usb_hcd *hcd, u16 typeReq,
u16 wValue, u16 wIndex, char *buf, u16 wLength)
static int oxu_bus_suspend(struct usb_hcd *hcd)
static int oxu_bus_resume(struct usb_hcd *hcd)
static int oxu_bus_suspend(struct usb_hcd *hcd)
static int oxu_bus_resume(struct usb_hcd *hcd)
static const struct hc_driver oxu_hc_driver = ;
static void oxu_configuration(struct platform_device *pdev, void *base)
static int oxu_verify_id(struct platform_device *pdev, void *base)
static const struct hc_driver oxu_hc_driver;
static struct usb_hcd *oxu_create(struct platform_device *pdev,
unsigned long memstart, unsigned long memlen,
void *base, int irq, int otg)
static int oxu_init(struct platform_device *pdev,
unsigned long memstart, unsigned long memlen,
void *base, int irq)
static int oxu_drv_probe(struct platform_device *pdev)
static void oxu_remove(struct platform_device *pdev, struct usb_hcd *hcd)
static int oxu_drv_remove(struct platform_device *pdev)
static void oxu_drv_shutdown(struct platform_device *pdev)
static struct platform_driver oxu_driver = ;
static int __init oxu_module_init(void)
static void __exit oxu_module_cleanup(void)
module_init(oxu_module_init);
module_exit(oxu_module_cleanup);
MODULE_DESCRIPTION("Oxford OXU210HP HCD driver - ver. " DRIVER_VERSION);
MODULE_AUTHOR("Rodolfo Giometti <giometti@linux.it>");
MODULE_LICENSE("GPL");
