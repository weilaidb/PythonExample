#define	DRIVER_DESC		"TC86C001 USB Device Controller"
#define	DRIVER_VERSION		"30-Oct 2003"
#define	DMA_ADDR_INVALID	(~(dma_addr_t)0)
static const char driver_name [] = "goku_udc";
static const char driver_desc [] = DRIVER_DESC;
MODULE_AUTHOR("source@mvista.com");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
static unsigned use_dma = 1;
static void nuke(struct goku_ep *, int status);
static inline void
command(struct goku_udc_regs __iomem *regs, int command, unsigned epnum)
static int
goku_ep_enable(struct usb_ep *_ep, const struct usb_endpoint_descriptor *desc)
static void ep_reset(struct goku_udc_regs __iomem *regs, struct goku_ep *ep)
static int goku_ep_disable(struct usb_ep *_ep)
static struct usb_request *
goku_alloc_request(struct usb_ep *_ep, gfp_t gfp_flags)
static void
goku_free_request(struct usb_ep *_ep, struct usb_request *_req)
static void
done(struct goku_ep *ep, struct goku_request *req, int status)
static inline int
write_packet(u32 __iomem *fifo, u8 *buf, struct goku_request *req, unsigned max)
static int write_fifo(struct goku_ep *ep, struct goku_request *req)
static int read_fifo(struct goku_ep *ep, struct goku_request *req)
static inline void
pio_irq_enable(struct goku_udc *dev,
struct goku_udc_regs __iomem *regs, int epnum)
static inline void
pio_irq_disable(struct goku_udc *dev,
struct goku_udc_regs __iomem *regs, int epnum)
static inline void
pio_advance(struct goku_ep *ep)
static int start_dma(struct goku_ep *ep, struct goku_request *req)
static void dma_advance(struct goku_udc *dev, struct goku_ep *ep)
static void abort_dma(struct goku_ep *ep, int status)
static int
goku_queue(struct usb_ep *_ep, struct usb_request *_req, gfp_t gfp_flags)
static void nuke(struct goku_ep *ep, int status)
static int goku_dequeue(struct usb_ep *_ep, struct usb_request *_req)
static void goku_clear_halt(struct goku_ep *ep)
static int goku_set_halt(struct usb_ep *_ep, int value)
static int goku_fifo_status(struct usb_ep *_ep)
static void goku_fifo_flush(struct usb_ep *_ep)
static struct usb_ep_ops goku_ep_ops = ;
static int goku_get_frame(struct usb_gadget *_gadget)
static const struct usb_gadget_ops goku_ops = ;
static inline char *dmastr(void)
static const char proc_node_name [] = "driver/udc";
#define FOURBITS "%s%s%s%s"
#define EIGHTBITS FOURBITS FOURBITS
static void
dump_intmask(const char *label, u32 mask, char **next, unsigned *size)
static int
udc_proc_read(char *buffer, char **start, off_t off, int count,
int *eof, void *_dev)
static void udc_reinit (struct goku_udc *dev)
static void udc_reset(struct goku_udc *dev)
static void ep0_start(struct goku_udc *dev)
static void udc_enable(struct goku_udc *dev)
static struct goku_udc	*the_controller;
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
static void
stop_activity(struct goku_udc *dev, struct usb_gadget_driver *driver)
int usb_gadget_unregister_driver(struct usb_gadget_driver *driver)
EXPORT_SYMBOL(usb_gadget_unregister_driver);
static void ep0_setup(struct goku_udc *dev)
#define ACK(irqbit)
static irqreturn_t goku_irq(int irq, void *_dev)
#undef ACK
static void gadget_release(struct device *_dev)
static void goku_remove(struct pci_dev *pdev)
static int goku_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static const struct pci_device_id pci_ids[] = ;
MODULE_DEVICE_TABLE (pci, pci_ids);
static struct pci_driver goku_pci_driver = ;
static int __init init (void)
module_init (init);
static void __exit cleanup (void)
module_exit (cleanup);
