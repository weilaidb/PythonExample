static void cancel_async_set_config(struct usb_device *udev);
struct api_context ;
static void usb_api_blocking_completion(struct urb *urb)
static int usb_start_wait_urb(struct urb *urb, int timeout, int *actual_length)
static int usb_internal_control_msg(struct usb_device *usb_dev,
unsigned int pipe,
struct usb_ctrlrequest *cmd,
void *data, int len, int timeout)
int usb_control_msg(struct usb_device *dev, unsigned int pipe, __u8 request,
__u8 requesttype, __u16 value, __u16 index, void *data,
__u16 size, int timeout)
EXPORT_SYMBOL_GPL(usb_control_msg);
int usb_interrupt_msg(struct usb_device *usb_dev, unsigned int pipe,
void *data, int len, int *actual_length, int timeout)
EXPORT_SYMBOL_GPL(usb_interrupt_msg);
int usb_bulk_msg(struct usb_device *usb_dev, unsigned int pipe,
void *data, int len, int *actual_length, int timeout)
EXPORT_SYMBOL_GPL(usb_bulk_msg);
static void sg_clean(struct usb_sg_request *io)
static void sg_complete(struct urb *urb)
int usb_sg_init(struct usb_sg_request *io, struct usb_device *dev,
unsigned pipe, unsigned	period, struct scatterlist *sg,
int nents, size_t length, gfp_t mem_flags)
EXPORT_SYMBOL_GPL(usb_sg_init);
void usb_sg_wait(struct usb_sg_request *io)
EXPORT_SYMBOL_GPL(usb_sg_wait);
void usb_sg_cancel(struct usb_sg_request *io)
EXPORT_SYMBOL_GPL(usb_sg_cancel);
int usb_get_descriptor(struct usb_device *dev, unsigned char type,
unsigned char index, void *buf, int size)
EXPORT_SYMBOL_GPL(usb_get_descriptor);
static int usb_get_string(struct usb_device *dev, unsigned short langid,
unsigned char index, void *buf, int size)
static void usb_try_string_workarounds(unsigned char *buf, int *length)
static int usb_string_sub(struct usb_device *dev, unsigned int langid,
unsigned int index, unsigned char *buf)
static int usb_get_langid(struct usb_device *dev, unsigned char *tbuf)
int usb_string(struct usb_device *dev, int index, char *buf, size_t size)
EXPORT_SYMBOL_GPL(usb_string);
#define MAX_USB_STRING_SIZE (127 * 3 + 1)
char *usb_cache_string(struct usb_device *udev, int index)
int usb_get_device_descriptor(struct usb_device *dev, unsigned int size)
int usb_get_status(struct usb_device *dev, int type, int target, void *data)
EXPORT_SYMBOL_GPL(usb_get_status);
int usb_clear_halt(struct usb_device *dev, int pipe)
EXPORT_SYMBOL_GPL(usb_clear_halt);
static int create_intf_ep_devs(struct usb_interface *intf)
static void remove_intf_ep_devs(struct usb_interface *intf)
void usb_disable_endpoint(struct usb_device *dev, unsigned int epaddr,
bool reset_hardware)
void usb_reset_endpoint(struct usb_device *dev, unsigned int epaddr)
EXPORT_SYMBOL_GPL(usb_reset_endpoint);
void usb_disable_interface(struct usb_device *dev, struct usb_interface *intf,
bool reset_hardware)
void usb_disable_device(struct usb_device *dev, int skip_ep0)
void usb_enable_endpoint(struct usb_device *dev, struct usb_host_endpoint *ep,
bool reset_ep)
void usb_enable_interface(struct usb_device *dev,
struct usb_interface *intf, bool reset_eps)
int usb_set_interface(struct usb_device *dev, int interface, int alternate)
EXPORT_SYMBOL_GPL(usb_set_interface);
int usb_reset_configuration(struct usb_device *dev)
EXPORT_SYMBOL_GPL(usb_reset_configuration);
static void usb_release_interface(struct device *dev)
static int usb_if_uevent(struct device *dev, struct kobj_uevent_env *env)
static int usb_if_uevent(struct device *dev, struct kobj_uevent_env *env)
struct device_type usb_if_device_type = ;
static struct usb_interface_assoc_descriptor *find_iad(struct usb_device *dev,
struct usb_host_config *config,
u8 inum)
static void __usb_queue_reset_device(struct work_struct *ws)
int usb_set_configuration(struct usb_device *dev, int configuration)
static LIST_HEAD(set_config_list);
static DEFINE_SPINLOCK(set_config_lock);
struct set_config_request ;
static void driver_set_config_work(struct work_struct *work)
static void cancel_async_set_config(struct usb_device *udev)
int usb_driver_set_configuration(struct usb_device *udev, int config)
EXPORT_SYMBOL_GPL(usb_driver_set_configuration);
