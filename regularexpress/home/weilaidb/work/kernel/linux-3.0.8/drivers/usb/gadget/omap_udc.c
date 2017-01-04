#undef	DEBUG
#undef	VERBOSE
#undef	USB_TRACE
#define	USE_DMA
#define	USE_ISO
#define	DRIVER_DESC	"OMAP UDC driver"
#define	DRIVER_VERSION	"4 October 2004"
#define	DMA_ADDR_INVALID	(~(dma_addr_t)0)
#define OMAP2_DMA_CH(ch)	(((ch) - 1) << 1)
#define OMAP24XX_DMA(name, ch)	(OMAP24XX_DMA_##name + OMAP2_DMA_CH(ch))
static unsigned fifo_mode = 3;
static unsigned fifo_mode = 0;
module_param (fifo_mode, uint, 0);
MODULE_PARM_DESC (fifo_mode, "endpoint configuration");
static unsigned use_dma = 1;
module_param (use_dma, bool, 0);
MODULE_PARM_DESC (use_dma, "enable/disable DMA");
#define	use_dma		0
static const char driver_name [] = "omap_udc";
static const char driver_desc [] = DRIVER_DESC;
static void use_ep(struct omap_ep *ep, u16 select)
static inline void deselect_ep(void)
static void dma_channel_claim(struct omap_ep *ep, unsigned preferred);
static int omap_ep_enable(struct usb_ep *_ep,
const struct usb_endpoint_descriptor *desc)
static void nuke(struct omap_ep *, int status);
static int omap_ep_disable(struct usb_ep *_ep)
static struct usb_request *
omap_alloc_request(struct usb_ep *ep, gfp_t gfp_flags)
static void
omap_free_request(struct usb_ep *ep, struct usb_request *_req)
static void
done(struct omap_ep *ep, struct omap_req *req, int status)
#define UDC_FIFO_FULL		(UDC_NON_ISO_FIFO_FULL | UDC_ISO_FIFO_FULL)
#define UDC_FIFO_UNWRITABLE	(UDC_EP_HALTED | UDC_FIFO_FULL)
#define FIFO_EMPTY	(UDC_NON_ISO_FIFO_EMPTY | UDC_ISO_FIFO_EMPTY)
#define FIFO_UNREADABLE (UDC_EP_HALTED | FIFO_EMPTY)
static inline int
write_packet(u8 *buf, struct omap_req *req, unsigned max)
static int write_fifo(struct omap_ep *ep, struct omap_req *req)
static inline int
read_packet(u8 *buf, struct omap_req *req, unsigned avail)
static int read_fifo(struct omap_ep *ep, struct omap_req *req)
static u16 dma_src_len(struct omap_ep *ep, dma_addr_t start)
static u16 dma_dest_len(struct omap_ep *ep, dma_addr_t start)
static void next_in_dma(struct omap_ep *ep, struct omap_req *req)
static void finish_in_dma(struct omap_ep *ep, struct omap_req *req, int status)
static void next_out_dma(struct omap_ep *ep, struct omap_req *req)
static void
finish_out_dma(struct omap_ep *ep, struct omap_req *req, int status, int one)
static void dma_irq(struct omap_udc *udc, u16 irq_src)
static void dma_error(int lch, u16 ch_status, void *data)
static void dma_channel_claim(struct omap_ep *ep, unsigned channel)
static void dma_channel_release(struct omap_ep *ep)
static int
omap_ep_queue(struct usb_ep *_ep, struct usb_request *_req, gfp_t gfp_flags)
static int omap_ep_dequeue(struct usb_ep *_ep, struct usb_request *_req)
static int omap_ep_set_halt(struct usb_ep *_ep, int value)
static struct usb_ep_ops omap_ep_ops = ;
static int omap_get_frame(struct usb_gadget *gadget)
static int omap_wakeup(struct usb_gadget *gadget)
static int
omap_set_selfpowered(struct usb_gadget *gadget, int is_selfpowered)
static int can_pullup(struct omap_udc *udc)
static void pullup_enable(struct omap_udc *udc)
static void pullup_disable(struct omap_udc *udc)
static struct omap_udc *udc;
static void omap_udc_enable_clock(int enable)
static int omap_vbus_session(struct usb_gadget *gadget, int is_active)
static int omap_vbus_draw(struct usb_gadget *gadget, unsigned mA)
static int omap_pullup(struct usb_gadget *gadget, int is_on)
static struct usb_gadget_ops omap_gadget_ops = ;
static void nuke(struct omap_ep *ep, int status)
static void udc_quiesce(struct omap_udc *udc)
static void update_otg(struct omap_udc *udc)
static void ep0_irq(struct omap_udc *udc, u16 irq_src)
#define OTG_FLAGS (UDC_B_HNP_ENABLE|UDC_A_HNP_SUPPORT|UDC_A_ALT_HNP_SUPPORT)
static void devstate_irq(struct omap_udc *udc, u16 irq_src)
static irqreturn_t omap_udc_irq(int irq, void *_udc)
#define PIO_OUT_TIMEOUT	(jiffies + HZ/3)
#define HALF_FULL(f)	(!((f)&(UDC_NON_ISO_FIFO_FULL|UDC_NON_ISO_FIFO_EMPTY)))
static void pio_out_timer(unsigned long _ep)
static irqreturn_t omap_udc_pio_irq(int irq, void *_dev)
static irqreturn_t omap_udc_iso_irq(int irq, void *_dev)
static inline int machine_without_vbus_sense(void)
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
int usb_gadget_unregister_driver (struct usb_gadget_driver *driver)
EXPORT_SYMBOL(usb_gadget_unregister_driver);
static const char proc_filename[] = "driver/udc";
#define FOURBITS "%s%s%s%s"
#define EIGHTBITS FOURBITS FOURBITS
static void proc_ep_show(struct seq_file *s, struct omap_ep *ep)
static char *trx_mode(unsigned m, int enabled)
static int proc_otg_show(struct seq_file *s)
static int proc_udc_show(struct seq_file *s, void *_)
static int proc_udc_open(struct inode *inode, struct file *file)
static const struct file_operations proc_ops = ;
static void create_proc_file(void)
static void remove_proc_file(void)
static inline void create_proc_file(void)
static inline void remove_proc_file(void)
static unsigned __init
omap_ep_setup(char *name, u8 addr, u8 type,
unsigned buf, unsigned maxp, int dbuf)
static void omap_udc_release(struct device *dev)
static int __init
omap_udc_setup(struct platform_device *odev, struct otg_transceiver *xceiv)
static int __init omap_udc_probe(struct platform_device *pdev)
static int __exit omap_udc_remove(struct platform_device *pdev)
static int omap_udc_suspend(struct platform_device *dev, pm_message_t message)
static int omap_udc_resume(struct platform_device *dev)
static struct platform_driver udc_driver = ;
static int __init udc_init(void)
module_init(udc_init);
static void __exit udc_exit(void)
module_exit(udc_exit);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:omap_udc");
