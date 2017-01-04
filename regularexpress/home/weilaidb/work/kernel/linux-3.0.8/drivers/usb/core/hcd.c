unsigned long usb_hcds_loaded;
EXPORT_SYMBOL_GPL(usb_hcds_loaded);
LIST_HEAD (usb_bus_list);
EXPORT_SYMBOL_GPL (usb_bus_list);
#define USB_MAXBUS		64
struct usb_busmap ;
static struct usb_busmap busmap;
DEFINE_MUTEX(usb_bus_list_lock);
EXPORT_SYMBOL_GPL (usb_bus_list_lock);
static DEFINE_SPINLOCK(hcd_root_hub_lock);
static DEFINE_SPINLOCK(hcd_urb_list_lock);
static DEFINE_SPINLOCK(hcd_urb_unlink_lock);
DECLARE_WAIT_QUEUE_HEAD(usb_kill_urb_queue);
static inline int is_root_hub(struct usb_device *udev)
#define KERNEL_REL	((LINUX_VERSION_CODE >> 16) & 0x0ff)
#define KERNEL_VER	((LINUX_VERSION_CODE >> 8) & 0x0ff)
static const u8 usb3_rh_dev_descriptor[18] = ;
static const u8 usb2_rh_dev_descriptor [18] = ;
static const u8 usb11_rh_dev_descriptor [18] = ;
static const u8 fs_rh_config_descriptor [] = ;
static const u8 hs_rh_config_descriptor [] = ;
static const u8 ss_rh_config_descriptor[] = ;
static unsigned
ascii2desc(char const *s, u8 *buf, unsigned len)
static unsigned
rh_string(int id, struct usb_hcd const *hcd, u8 *data, unsigned len)
static int rh_call_control (struct usb_hcd *hcd, struct urb *urb)
void usb_hcd_poll_rh_status(struct usb_hcd *hcd)
EXPORT_SYMBOL_GPL(usb_hcd_poll_rh_status);
static void rh_timer_func (unsigned long _hcd)
static int rh_queue_status (struct usb_hcd *hcd, struct urb *urb)
static int rh_urb_enqueue (struct usb_hcd *hcd, struct urb *urb)
static int usb_rh_urb_dequeue(struct usb_hcd *hcd, struct urb *urb, int status)
static ssize_t usb_host_authorized_default_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t usb_host_authorized_default_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static DEVICE_ATTR(authorized_default, 0644,
usb_host_authorized_default_show,
usb_host_authorized_default_store);
static struct attribute *usb_bus_attrs[] = ;
static struct attribute_group usb_bus_attr_group = ;
static void usb_bus_init (struct usb_bus *bus)
static int usb_register_bus(struct usb_bus *bus)
static void usb_deregister_bus (struct usb_bus *bus)
static int register_root_hub(struct usb_hcd *hcd)
long usb_calc_bus_time (int speed, int is_input, int isoc, int bytecount)
EXPORT_SYMBOL_GPL(usb_calc_bus_time);
int usb_hcd_link_urb_to_ep(struct usb_hcd *hcd, struct urb *urb)
EXPORT_SYMBOL_GPL(usb_hcd_link_urb_to_ep);
int usb_hcd_check_unlink_urb(struct usb_hcd *hcd, struct urb *urb,
int status)
EXPORT_SYMBOL_GPL(usb_hcd_check_unlink_urb);
void usb_hcd_unlink_urb_from_ep(struct usb_hcd *hcd, struct urb *urb)
EXPORT_SYMBOL_GPL(usb_hcd_unlink_urb_from_ep);
static int hcd_alloc_coherent(struct usb_bus *bus,
gfp_t mem_flags, dma_addr_t *dma_handle,
void **vaddr_handle, size_t size,
enum dma_data_direction dir)
static void hcd_free_coherent(struct usb_bus *bus, dma_addr_t *dma_handle,
void **vaddr_handle, size_t size,
enum dma_data_direction dir)
void usb_hcd_unmap_urb_setup_for_dma(struct usb_hcd *hcd, struct urb *urb)
EXPORT_SYMBOL_GPL(usb_hcd_unmap_urb_setup_for_dma);
static void unmap_urb_for_dma(struct usb_hcd *hcd, struct urb *urb)
void usb_hcd_unmap_urb_for_dma(struct usb_hcd *hcd, struct urb *urb)
EXPORT_SYMBOL_GPL(usb_hcd_unmap_urb_for_dma);
static int map_urb_for_dma(struct usb_hcd *hcd, struct urb *urb,
gfp_t mem_flags)
int usb_hcd_map_urb_for_dma(struct usb_hcd *hcd, struct urb *urb,
gfp_t mem_flags)
EXPORT_SYMBOL_GPL(usb_hcd_map_urb_for_dma);
int usb_hcd_submit_urb (struct urb *urb, gfp_t mem_flags)
static int unlink1(struct usb_hcd *hcd, struct urb *urb, int status)
int usb_hcd_unlink_urb (struct urb *urb, int status)
void usb_hcd_giveback_urb(struct usb_hcd *hcd, struct urb *urb, int status)
EXPORT_SYMBOL_GPL(usb_hcd_giveback_urb);
void usb_hcd_flush_endpoint(struct usb_device *udev,
struct usb_host_endpoint *ep)
int usb_hcd_alloc_bandwidth(struct usb_device *udev,
struct usb_host_config *new_config,
struct usb_host_interface *cur_alt,
struct usb_host_interface *new_alt)
void usb_hcd_disable_endpoint(struct usb_device *udev,
struct usb_host_endpoint *ep)
void usb_hcd_reset_endpoint(struct usb_device *udev,
struct usb_host_endpoint *ep)
int usb_alloc_streams(struct usb_interface *interface,
struct usb_host_endpoint **eps, unsigned int num_eps,
unsigned int num_streams, gfp_t mem_flags)
EXPORT_SYMBOL_GPL(usb_alloc_streams);
void usb_free_streams(struct usb_interface *interface,
struct usb_host_endpoint **eps, unsigned int num_eps,
gfp_t mem_flags)
EXPORT_SYMBOL_GPL(usb_free_streams);
void usb_hcd_synchronize_unlinks(struct usb_device *udev)
int usb_hcd_get_frame_number (struct usb_device *udev)
int hcd_bus_suspend(struct usb_device *rhdev, pm_message_t msg)
int hcd_bus_resume(struct usb_device *rhdev, pm_message_t msg)
static void hcd_resume_work(struct work_struct *work)
void usb_hcd_resume_root_hub (struct usb_hcd *hcd)
EXPORT_SYMBOL_GPL(usb_hcd_resume_root_hub);
int usb_bus_start_enum(struct usb_bus *bus, unsigned port_num)
EXPORT_SYMBOL_GPL(usb_bus_start_enum);
irqreturn_t usb_hcd_irq (int irq, void *__hcd)
EXPORT_SYMBOL_GPL(usb_hcd_irq);
void usb_hc_died (struct usb_hcd *hcd)
EXPORT_SYMBOL_GPL (usb_hc_died);
struct usb_hcd *usb_create_shared_hcd(const struct hc_driver *driver,
struct device *dev, const char *bus_name,
struct usb_hcd *primary_hcd)
EXPORT_SYMBOL_GPL(usb_create_shared_hcd);
struct usb_hcd *usb_create_hcd(const struct hc_driver *driver,
struct device *dev, const char *bus_name)
EXPORT_SYMBOL_GPL(usb_create_hcd);
static void hcd_release (struct kref *kref)
struct usb_hcd *usb_get_hcd (struct usb_hcd *hcd)
EXPORT_SYMBOL_GPL(usb_get_hcd);
void usb_put_hcd (struct usb_hcd *hcd)
EXPORT_SYMBOL_GPL(usb_put_hcd);
int usb_hcd_is_primary_hcd(struct usb_hcd *hcd)
EXPORT_SYMBOL_GPL(usb_hcd_is_primary_hcd);
static int usb_hcd_request_irqs(struct usb_hcd *hcd,
unsigned int irqnum, unsigned long irqflags)
int usb_add_hcd(struct usb_hcd *hcd,
unsigned int irqnum, unsigned long irqflags)
EXPORT_SYMBOL_GPL(usb_add_hcd);
void usb_remove_hcd(struct usb_hcd *hcd)
EXPORT_SYMBOL_GPL(usb_remove_hcd);
void
usb_hcd_platform_shutdown(struct platform_device* dev)
EXPORT_SYMBOL_GPL(usb_hcd_platform_shutdown);
#if defined(CONFIG_USB_MON) || defined(CONFIG_USB_MON_MODULE)
struct usb_mon_operations *mon_ops;
int usb_mon_register (struct usb_mon_operations *ops)
EXPORT_SYMBOL_GPL (usb_mon_register);
void usb_mon_deregister (void)
EXPORT_SYMBOL_GPL (usb_mon_deregister);
