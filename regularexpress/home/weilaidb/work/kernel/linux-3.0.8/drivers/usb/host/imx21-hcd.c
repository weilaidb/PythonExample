#define DEBUG_LOG_FRAME(imx21, etd, event) \
(etd)->event##_frame = readl((imx21)->regs + USBH_FRMNUB)
#define DEBUG_LOG_FRAME(imx21, etd, event) do  while (0)
static const char hcd_name[] = "imx21-hcd";
static inline struct imx21 *hcd_to_imx21(struct usb_hcd *hcd)
static inline void set_register_bits(struct imx21 *imx21, u32 offset, u32 mask)
static inline void clear_register_bits(struct imx21 *imx21,
u32 offset, u32 mask)
static inline void clear_toggle_bit(struct imx21 *imx21, u32 offset, u32 mask)
static inline void set_toggle_bit(struct imx21 *imx21, u32 offset, u32 mask)
static void etd_writel(struct imx21 *imx21, int etd_num, int dword, u32 value)
static u32 etd_readl(struct imx21 *imx21, int etd_num, int dword)
static inline int wrap_frame(int counter)
static inline int frame_after(int frame, int after)
static int imx21_hc_get_frame(struct usb_hcd *hcd)
static inline bool unsuitable_for_dma(dma_addr_t addr)
static void nonisoc_urb_completed_for_etd(
struct imx21 *imx21, struct etd_priv *etd, int status);
static void schedule_nonisoc_etd(struct imx21 *imx21, struct urb *urb);
static void free_dmem(struct imx21 *imx21, struct etd_priv *etd);
static int alloc_etd(struct imx21 *imx21)
static void disactivate_etd(struct imx21 *imx21, int num)
static void reset_etd(struct imx21 *imx21, int num)
static void free_etd(struct imx21 *imx21, int num)
static void setup_etd_dword0(struct imx21 *imx21,
int etd_num, struct urb *urb,  u8 dir, u16 maxpacket)
static void copy_to_dmem(
struct imx21 *imx21, int dmem_offset, void *src, int count)
static void activate_etd(struct imx21 *imx21, int etd_num, u8 dir)
static int alloc_dmem(struct imx21 *imx21, unsigned int size,
struct usb_host_endpoint *ep)
static void activate_queued_etd(struct imx21 *imx21,
struct etd_priv *etd, u32 dmem_offset)
static void free_dmem(struct imx21 *imx21, struct etd_priv *etd)
static void free_epdmem(struct imx21 *imx21, struct usb_host_endpoint *ep)
static void ep_idle(struct imx21 *imx21, struct ep_priv *ep_priv)
static void urb_done(struct usb_hcd *hcd, struct urb *urb, int status)
__releases(imx21->lock)
__acquires(imx21->lock)
static void nonisoc_urb_completed_for_etd(
struct imx21 *imx21, struct etd_priv *etd, int status)
static void schedule_isoc_etds(struct usb_hcd *hcd,
struct usb_host_endpoint *ep)
static void isoc_etd_done(struct usb_hcd *hcd, int etd_num)
static struct ep_priv *alloc_isoc_ep(
struct imx21 *imx21, struct usb_host_endpoint *ep)
static int alloc_isoc_etds(struct imx21 *imx21, struct ep_priv *ep_priv)
static int imx21_hc_urb_enqueue_isoc(struct usb_hcd *hcd,
struct usb_host_endpoint *ep,
struct urb *urb, gfp_t mem_flags)
static void dequeue_isoc_urb(struct imx21 *imx21,
struct urb *urb, struct ep_priv *ep_priv)
static void schedule_nonisoc_etd(struct imx21 *imx21, struct urb *urb)
static void nonisoc_etd_done(struct usb_hcd *hcd, int etd_num)
static struct ep_priv *alloc_ep(void)
static int imx21_hc_urb_enqueue(struct usb_hcd *hcd,
struct urb *urb, gfp_t mem_flags)
static int imx21_hc_urb_dequeue(struct usb_hcd *hcd, struct urb *urb,
int status)
static void process_etds(struct usb_hcd *hcd, struct imx21 *imx21, int sof)
static irqreturn_t imx21_irq(struct usb_hcd *hcd)
static void imx21_hc_endpoint_disable(struct usb_hcd *hcd,
struct usb_host_endpoint *ep)
static int get_hub_descriptor(struct usb_hcd *hcd,
struct usb_hub_descriptor *desc)
static int imx21_hc_hub_status_data(struct usb_hcd *hcd, char *buf)
static int imx21_hc_hub_control(struct usb_hcd *hcd,
u16 typeReq,
u16 wValue, u16 wIndex, char *buf, u16 wLength)
static int imx21_hc_reset(struct usb_hcd *hcd)
static int __devinit imx21_hc_start(struct usb_hcd *hcd)
static void imx21_hc_stop(struct usb_hcd *hcd)
static struct hc_driver imx21_hc_driver = ;
static struct mx21_usbh_platform_data default_pdata = ;
static int imx21_remove(struct platform_device *pdev)
static int imx21_probe(struct platform_device *pdev)
static struct platform_driver imx21_hcd_driver = ;
static int __init imx21_hcd_init(void)
static void __exit imx21_hcd_cleanup(void)
module_init(imx21_hcd_init);
module_exit(imx21_hcd_cleanup);
MODULE_DESCRIPTION("i.MX21 USB Host controller");
MODULE_AUTHOR("Martin Fuzzey");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:imx21-hcd");
