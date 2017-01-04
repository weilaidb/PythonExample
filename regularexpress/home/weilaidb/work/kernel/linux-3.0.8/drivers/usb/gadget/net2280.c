#undef	DEBUG
#undef	VERBOSE
#define	DRIVER_DESC		"PLX NET228x USB Peripheral Controller"
#define	DRIVER_VERSION		"2005 Sept 27"
#define	DMA_ADDR_INVALID	(~(dma_addr_t)0)
#define	EP_DONTUSE		13
#define USE_RDK_LEDS
static const char driver_name [] = "net2280";
static const char driver_desc [] = DRIVER_DESC;
static const char ep0name [] = "ep0";
static const char *const ep_name [] = ;
static int use_dma = 1;
static int use_dma_chaining = 0;
module_param (use_dma, bool, S_IRUGO);
module_param (use_dma_chaining, bool, S_IRUGO);
static ushort fifo_mode = 0;
module_param (fifo_mode, ushort, 0644);
static int enable_suspend = 0;
module_param (enable_suspend, bool, S_IRUGO);
#define	DIR_STRING(bAddress) (((bAddress) & USB_DIR_IN) ? "in" : "out")
#if defined(CONFIG_USB_GADGET_DEBUG_FILES) || defined (DEBUG)
static char *type_string (u8 bmAttributes)
#define valid_bit	cpu_to_le32 (1 << VALID_BIT)
#define dma_done_ie	cpu_to_le32 (1 << DMA_DONE_INTERRUPT_ENABLE)
static int
net2280_enable (struct usb_ep *_ep, const struct usb_endpoint_descriptor *desc)
static int handshake (u32 __iomem *ptr, u32 mask, u32 done, int usec)
static const struct usb_ep_ops net2280_ep_ops;
static void ep_reset (struct net2280_regs __iomem *regs, struct net2280_ep *ep)
static void nuke (struct net2280_ep *);
static int net2280_disable (struct usb_ep *_ep)
static struct usb_request *
net2280_alloc_request (struct usb_ep *_ep, gfp_t gfp_flags)
static void
net2280_free_request (struct usb_ep *_ep, struct usb_request *_req)
static void
write_fifo (struct net2280_ep *ep, struct usb_request *req)
static void out_flush (struct net2280_ep *ep)
static int
read_fifo (struct net2280_ep *ep, struct net2280_request *req)
static void
fill_dma_desc (struct net2280_ep *ep, struct net2280_request *req, int valid)
static const u32 dmactl_default =
(1 << DMA_SCATTER_GATHER_DONE_INTERRUPT)
| (1 << DMA_CLEAR_COUNT_ENABLE)
| (POLL_100_USEC << DESCRIPTOR_POLLING_RATE)
| (1 << DMA_VALID_BIT_POLLING_ENABLE)
| (1 << DMA_VALID_BIT_ENABLE)
| (1 << DMA_SCATTER_GATHER_ENABLE)
| (1 << DMA_ENABLE);
static inline void spin_stop_dma (struct net2280_dma_regs __iomem *dma)
static inline void stop_dma (struct net2280_dma_regs __iomem *dma)
static void start_queue (struct net2280_ep *ep, u32 dmactl, u32 td_dma)
static void start_dma (struct net2280_ep *ep, struct net2280_request *req)
static inline void
queue_dma (struct net2280_ep *ep, struct net2280_request *req, int valid)
static void
done (struct net2280_ep *ep, struct net2280_request *req, int status)
static int
net2280_queue (struct usb_ep *_ep, struct usb_request *_req, gfp_t gfp_flags)
static inline void
dma_done (
struct net2280_ep *ep,
struct net2280_request *req,
u32 dmacount,
int status
)
static void restart_dma (struct net2280_ep *ep);
static void scan_dma_completions (struct net2280_ep *ep)
static void restart_dma (struct net2280_ep *ep)
static void abort_dma (struct net2280_ep *ep)
static void nuke (struct net2280_ep *ep)
static int net2280_dequeue (struct usb_ep *_ep, struct usb_request *_req)
static int net2280_fifo_status (struct usb_ep *_ep);
static int
net2280_set_halt_and_wedge(struct usb_ep *_ep, int value, int wedged)
static int
net2280_set_halt(struct usb_ep *_ep, int value)
static int
net2280_set_wedge(struct usb_ep *_ep)
static int
net2280_fifo_status (struct usb_ep *_ep)
static void
net2280_fifo_flush (struct usb_ep *_ep)
static const struct usb_ep_ops net2280_ep_ops = ;
static int net2280_get_frame (struct usb_gadget *_gadget)
static int net2280_wakeup (struct usb_gadget *_gadget)
static int net2280_set_selfpowered (struct usb_gadget *_gadget, int value)
static int net2280_pullup(struct usb_gadget *_gadget, int is_on)
static const struct usb_gadget_ops net2280_ops = ;
static ssize_t
show_function (struct device *_dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR (function, S_IRUGO, show_function, NULL);
static ssize_t net2280_show_registers(struct device *_dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(registers, S_IRUGO, net2280_show_registers, NULL);
static ssize_t
show_queues (struct device *_dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR (queues, S_IRUGO, show_queues, NULL);
#define device_create_file(a,b)	(0)
#define device_remove_file(a,b)	do  while (0)
static void set_fifo_mode (struct net2280 *dev, int mode)
extern int net2280_set_fifo_mode (struct usb_gadget *gadget, int mode);
int net2280_set_fifo_mode (struct usb_gadget *gadget, int mode)
EXPORT_SYMBOL (net2280_set_fifo_mode);
static struct net2280	*the_controller;
static void usb_reset (struct net2280 *dev)
static void usb_reinit (struct net2280 *dev)
static void ep0_start (struct net2280 *dev)
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
static void
stop_activity (struct net2280 *dev, struct usb_gadget_driver *driver)
int usb_gadget_unregister_driver (struct usb_gadget_driver *driver)
EXPORT_SYMBOL (usb_gadget_unregister_driver);
static void handle_ep_small (struct net2280_ep *ep)
static struct net2280_ep *
get_ep_by_addr (struct net2280 *dev, u16 wIndex)
static void handle_stat0_irqs (struct net2280 *dev, u32 stat)
#define DMA_INTERRUPTS ( \
(1 << DMA_D_INTERRUPT) \
| (1 << DMA_C_INTERRUPT) \
| (1 << DMA_B_INTERRUPT) \
| (1 << DMA_A_INTERRUPT))
#define	PCI_ERROR_INTERRUPTS ( \
(1 << PCI_MASTER_ABORT_RECEIVED_INTERRUPT) \
| (1 << PCI_TARGET_ABORT_RECEIVED_INTERRUPT) \
| (1 << PCI_RETRY_ABORT_INTERRUPT))
static void handle_stat1_irqs (struct net2280 *dev, u32 stat)
static irqreturn_t net2280_irq (int irq, void *_dev)
static void gadget_release (struct device *_dev)
static void net2280_remove (struct pci_dev *pdev)
static int net2280_probe (struct pci_dev *pdev, const struct pci_device_id *id)
static void net2280_shutdown (struct pci_dev *pdev)
static const struct pci_device_id pci_ids [] = ;
MODULE_DEVICE_TABLE (pci, pci_ids);
static struct pci_driver net2280_pci_driver = ;
MODULE_DESCRIPTION (DRIVER_DESC);
MODULE_AUTHOR ("David Brownell");
MODULE_LICENSE ("GPL");
static int __init init (void)
module_init (init);
static void __exit cleanup (void)
module_exit (cleanup);
