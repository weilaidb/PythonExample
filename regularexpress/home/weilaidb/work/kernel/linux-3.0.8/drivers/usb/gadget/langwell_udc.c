#if defined(CONFIG_USB_LANGWELL_OTG)
#define	OTG_TRANSCEIVER
#define	DRIVER_DESC		"Intel Langwell USB Device Controller driver"
#define	DRIVER_VERSION		"16 May 2009"
static const char driver_name[] = "langwell_udc";
static const char driver_desc[] = DRIVER_DESC;
static struct langwell_udc	*the_controller;
static const struct usb_endpoint_descriptor
langwell_ep0_desc = ;
static inline void print_all_registers(struct langwell_udc *dev)
#define	print_all_registers(dev)	do  while (0)
#define	is_in(ep)	(((ep)->ep_num == 0) ? ((ep)->dev->ep0_dir ==	\
USB_DIR_IN) : (usb_endpoint_dir_in((ep)->desc)))
#define	DIR_STRING(ep)	(is_in(ep) ? "in" : "out")
static char *type_string(const struct usb_endpoint_descriptor *desc)
static void ep_reset(struct langwell_ep *ep, unsigned char ep_num,
unsigned char is_in, unsigned char ep_type)
static void ep0_reset(struct langwell_udc *dev)
static int langwell_ep_enable(struct usb_ep *_ep,
const struct usb_endpoint_descriptor *desc)
static void done(struct langwell_ep *ep, struct langwell_request *req,
int status)
static void langwell_ep_fifo_flush(struct usb_ep *_ep);
static void nuke(struct langwell_ep *ep, int status)
static int langwell_ep_disable(struct usb_ep *_ep)
static struct usb_request *langwell_alloc_request(struct usb_ep *_ep,
gfp_t gfp_flags)
static void langwell_free_request(struct usb_ep *_ep,
struct usb_request *_req)
static int queue_dtd(struct langwell_ep *ep, struct langwell_request *req)
static struct langwell_dtd *build_dtd(struct langwell_request *req,
unsigned *length, dma_addr_t *dma, int *is_last)
static int req_to_dtd(struct langwell_request *req)
static int langwell_ep_queue(struct usb_ep *_ep, struct usb_request *_req,
gfp_t gfp_flags)
static int langwell_ep_dequeue(struct usb_ep *_ep, struct usb_request *_req)
static void ep_set_halt(struct langwell_ep *ep, int value)
static int langwell_ep_set_halt(struct usb_ep *_ep, int value)
static int langwell_ep_set_wedge(struct usb_ep *_ep)
static void langwell_ep_fifo_flush(struct usb_ep *_ep)
static const struct usb_ep_ops langwell_ep_ops = ;
static int langwell_get_frame(struct usb_gadget *_gadget)
static void langwell_phy_low_power(struct langwell_udc *dev, bool flag)
static int langwell_wakeup(struct usb_gadget *_gadget)
static int langwell_vbus_session(struct usb_gadget *_gadget, int is_active)
static int langwell_vbus_draw(struct usb_gadget *_gadget, unsigned mA)
static int langwell_pullup(struct usb_gadget *_gadget, int is_on)
static const struct usb_gadget_ops langwell_ops = ;
static int langwell_udc_reset(struct langwell_udc *dev)
static int eps_reinit(struct langwell_udc *dev)
static void langwell_udc_start(struct langwell_udc *dev)
static void langwell_udc_stop(struct langwell_udc *dev)
static void stop_activity(struct langwell_udc *dev,
struct usb_gadget_driver *driver)
static ssize_t show_function(struct device *_dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(function, S_IRUGO, show_function, NULL);
static ssize_t show_langwell_udc(struct device *_dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(langwell_udc, S_IRUGO, show_langwell_udc, NULL);
static ssize_t store_remote_wakeup(struct device *_dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(remote_wakeup, S_IWUSR, NULL, store_remote_wakeup);
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
int usb_gadget_unregister_driver(struct usb_gadget_driver *driver)
EXPORT_SYMBOL(usb_gadget_unregister_driver);
static void setup_tripwire(struct langwell_udc *dev)
static void ep0_stall(struct langwell_udc *dev)
static int prime_status_phase(struct langwell_udc *dev, int dir)
static void set_address(struct langwell_udc *dev, u16 value,
u16 index, u16 length)
static struct langwell_ep *get_ep_by_windex(struct langwell_udc *dev,
u16 wIndex)
static int ep_is_stall(struct langwell_ep *ep)
static void get_status(struct langwell_udc *dev, u8 request_type, u16 value,
u16 index, u16 length)
static void handle_setup_packet(struct langwell_udc *dev,
struct usb_ctrlrequest *setup)
static int process_ep_req(struct langwell_udc *dev, int index,
struct langwell_request *curr_req)
static void ep0_req_complete(struct langwell_udc *dev,
struct langwell_ep *ep0, struct langwell_request *req)
static void handle_trans_complete(struct langwell_udc *dev)
static void handle_port_change(struct langwell_udc *dev)
static void handle_usb_reset(struct langwell_udc *dev)
static void handle_bus_suspend(struct langwell_udc *dev)
static void handle_bus_resume(struct langwell_udc *dev)
static irqreturn_t langwell_irq(int irq, void *_dev)
static void gadget_release(struct device *_dev)
static void sram_init(struct langwell_udc *dev)
static void sram_deinit(struct langwell_udc *dev)
static void langwell_udc_remove(struct pci_dev *pdev)
static int langwell_udc_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static int langwell_udc_suspend(struct pci_dev *pdev, pm_message_t state)
static int langwell_udc_resume(struct pci_dev *pdev)
static void langwell_udc_shutdown(struct pci_dev *pdev)
static const struct pci_device_id pci_ids[] = ;
MODULE_DEVICE_TABLE(pci, pci_ids);
static struct pci_driver langwell_pci_driver = ;
static int __init init(void)
module_init(init);
static void __exit cleanup(void)
module_exit(cleanup);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR("Xiaochen Shen <xiaochen.shen@intel.com>");
MODULE_VERSION(DRIVER_VERSION);
MODULE_LICENSE("GPL");
