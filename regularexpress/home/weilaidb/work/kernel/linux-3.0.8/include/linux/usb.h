#define __LINUX_USB_H
#define USB_MAJOR			180
#define USB_DEVICE_MAJOR		189
struct usb_device;
struct usb_driver;
struct wusb_dev;
struct ep_device;
struct usb_host_endpoint ;
struct usb_host_interface ;
enum usb_interface_condition ;
struct usb_interface ;
#define	to_usb_interface(d) container_of(d, struct usb_interface, dev)
static inline void *usb_get_intfdata(struct usb_interface *intf)
static inline void usb_set_intfdata(struct usb_interface *intf, void *data)
struct usb_interface *usb_get_intf(struct usb_interface *intf);
void usb_put_intf(struct usb_interface *intf);
#define USB_MAXINTERFACES	32
#define USB_MAXIADS		(USB_MAXINTERFACES/2)
struct usb_interface_cache ;
#define	ref_to_usb_interface_cache(r) \
container_of(r, struct usb_interface_cache, ref)
#define	altsetting_to_usb_interface_cache(a) \
container_of(a, struct usb_interface_cache, altsetting[0])
struct usb_host_config ;
int __usb_get_extra_descriptor(char *buffer, unsigned size,
unsigned char type, void **ptr);
#define usb_get_extra_descriptor(ifpoint, type, ptr) \
__usb_get_extra_descriptor((ifpoint)->extra, \
(ifpoint)->extralen, \
type, (void **)ptr)
struct usb_devmap ;
struct usb_bus ;
#define USB_MAXCHILDREN		(31)
struct usb_tt;
struct usb_device ;
#define	to_usb_device(d) container_of(d, struct usb_device, dev)
static inline struct usb_device *interface_to_usbdev(struct usb_interface *intf)
extern struct usb_device *usb_get_dev(struct usb_device *dev);
extern void usb_put_dev(struct usb_device *dev);
#define usb_lock_device(udev)		device_lock(&(udev)->dev)
#define usb_unlock_device(udev)		device_unlock(&(udev)->dev)
#define usb_trylock_device(udev)	device_trylock(&(udev)->dev)
extern int usb_lock_device_for_reset(struct usb_device *udev,
const struct usb_interface *iface);
extern int usb_reset_device(struct usb_device *dev);
extern void usb_queue_reset_device(struct usb_interface *dev);
extern void usb_enable_autosuspend(struct usb_device *udev);
extern void usb_disable_autosuspend(struct usb_device *udev);
extern int usb_autopm_get_interface(struct usb_interface *intf);
extern void usb_autopm_put_interface(struct usb_interface *intf);
extern int usb_autopm_get_interface_async(struct usb_interface *intf);
extern void usb_autopm_put_interface_async(struct usb_interface *intf);
extern void usb_autopm_get_interface_no_resume(struct usb_interface *intf);
extern void usb_autopm_put_interface_no_suspend(struct usb_interface *intf);
static inline void usb_mark_last_busy(struct usb_device *udev)
static inline int usb_enable_autosuspend(struct usb_device *udev)
static inline int usb_disable_autosuspend(struct usb_device *udev)
static inline int usb_autopm_get_interface(struct usb_interface *intf)
static inline int usb_autopm_get_interface_async(struct usb_interface *intf)
static inline void usb_autopm_put_interface(struct usb_interface *intf)
static inline void usb_autopm_put_interface_async(struct usb_interface *intf)
static inline void usb_autopm_get_interface_no_resume(
struct usb_interface *intf)
static inline void usb_autopm_put_interface_no_suspend(
struct usb_interface *intf)
static inline void usb_mark_last_busy(struct usb_device *udev)
extern int usb_get_current_frame_number(struct usb_device *usb_dev);
extern int usb_alloc_streams(struct usb_interface *interface,
struct usb_host_endpoint **eps, unsigned int num_eps,
unsigned int num_streams, gfp_t mem_flags);
extern void usb_free_streams(struct usb_interface *interface,
struct usb_host_endpoint **eps, unsigned int num_eps,
gfp_t mem_flags);
extern int usb_driver_claim_interface(struct usb_driver *driver,
struct usb_interface *iface, void *priv);
static inline int usb_interface_claimed(struct usb_interface *iface)
extern void usb_driver_release_interface(struct usb_driver *driver,
struct usb_interface *iface);
const struct usb_device_id *usb_match_id(struct usb_interface *interface,
const struct usb_device_id *id);
extern int usb_match_one_id(struct usb_interface *interface,
const struct usb_device_id *id);
extern struct usb_interface *usb_find_interface(struct usb_driver *drv,
int minor);
extern struct usb_interface *usb_ifnum_to_if(const struct usb_device *dev,
unsigned ifnum);
extern struct usb_host_interface *usb_altnum_to_altsetting(
const struct usb_interface *intf, unsigned int altnum);
extern struct usb_host_interface *usb_find_alt_setting(
struct usb_host_config *config,
unsigned int iface_num,
unsigned int alt_num);
static inline int usb_make_path(struct usb_device *dev, char *buf, size_t size)
#define USB_DEVICE_ID_MATCH_DEVICE \
(USB_DEVICE_ID_MATCH_VENDOR | USB_DEVICE_ID_MATCH_PRODUCT)
#define USB_DEVICE_ID_MATCH_DEV_RANGE \
(USB_DEVICE_ID_MATCH_DEV_LO | USB_DEVICE_ID_MATCH_DEV_HI)
#define USB_DEVICE_ID_MATCH_DEVICE_AND_VERSION \
(USB_DEVICE_ID_MATCH_DEVICE | USB_DEVICE_ID_MATCH_DEV_RANGE)
#define USB_DEVICE_ID_MATCH_DEV_INFO \
(USB_DEVICE_ID_MATCH_DEV_CLASS | \
USB_DEVICE_ID_MATCH_DEV_SUBCLASS | \
USB_DEVICE_ID_MATCH_DEV_PROTOCOL)
#define USB_DEVICE_ID_MATCH_INT_INFO \
(USB_DEVICE_ID_MATCH_INT_CLASS | \
USB_DEVICE_ID_MATCH_INT_SUBCLASS | \
USB_DEVICE_ID_MATCH_INT_PROTOCOL)
#define USB_DEVICE(vend, prod) \
.match_flags = USB_DEVICE_ID_MATCH_DEVICE, \
.idVendor = (vend), \
.idProduct = (prod)
#define USB_DEVICE_VER(vend, prod, lo, hi) \
.match_flags = USB_DEVICE_ID_MATCH_DEVICE_AND_VERSION, \
.idVendor = (vend), \
.idProduct = (prod), \
.bcdDevice_lo = (lo), \
.bcdDevice_hi = (hi)
#define USB_DEVICE_INTERFACE_PROTOCOL(vend, prod, pr) \
.match_flags = USB_DEVICE_ID_MATCH_DEVICE | \
USB_DEVICE_ID_MATCH_INT_PROTOCOL, \
.idVendor = (vend), \
.idProduct = (prod), \
.bInterfaceProtocol = (pr)
#define USB_DEVICE_INFO(cl, sc, pr) \
.match_flags = USB_DEVICE_ID_MATCH_DEV_INFO, \
.bDeviceClass = (cl), \
.bDeviceSubClass = (sc), \
.bDeviceProtocol = (pr)
#define USB_INTERFACE_INFO(cl, sc, pr) \
.match_flags = USB_DEVICE_ID_MATCH_INT_INFO, \
.bInterfaceClass = (cl), \
.bInterfaceSubClass = (sc), \
.bInterfaceProtocol = (pr)
#define USB_DEVICE_AND_INTERFACE_INFO(vend, prod, cl, sc, pr) \
.match_flags = USB_DEVICE_ID_MATCH_INT_INFO \
| USB_DEVICE_ID_MATCH_DEVICE, \
.idVendor = (vend), \
.idProduct = (prod), \
.bInterfaceClass = (cl), \
.bInterfaceSubClass = (sc), \
.bInterfaceProtocol = (pr)
struct usb_dynids ;
struct usb_dynid ;
extern ssize_t usb_store_new_id(struct usb_dynids *dynids,
struct device_driver *driver,
const char *buf, size_t count);
struct usbdrv_wrap ;
struct usb_driver ;
#define	to_usb_driver(d) container_of(d, struct usb_driver, drvwrap.driver)
struct usb_device_driver ;
#define	to_usb_device_driver(d) container_of(d, struct usb_device_driver, \
drvwrap.driver)
extern struct bus_type usb_bus_type;
struct usb_class_driver ;
extern int usb_register_driver(struct usb_driver *, struct module *,
const char *);
static inline int usb_register(struct usb_driver *driver)
extern void usb_deregister(struct usb_driver *);
extern int usb_register_device_driver(struct usb_device_driver *,
struct module *);
extern void usb_deregister_device_driver(struct usb_device_driver *);
extern int usb_register_dev(struct usb_interface *intf,
struct usb_class_driver *class_driver);
extern void usb_deregister_dev(struct usb_interface *intf,
struct usb_class_driver *class_driver);
extern int usb_disabled(void);
#define URB_SHORT_NOT_OK	0x0001
#define URB_ISO_ASAP		0x0002
#define URB_NO_TRANSFER_DMA_MAP	0x0004
#define URB_NO_FSBR		0x0020
#define URB_ZERO_PACKET		0x0040
#define URB_NO_INTERRUPT	0x0080
#define URB_FREE_BUFFER		0x0100
#define URB_DIR_IN		0x0200
#define URB_DIR_OUT		0
#define URB_DIR_MASK		URB_DIR_IN
#define URB_DMA_MAP_SINGLE	0x00010000
#define URB_DMA_MAP_PAGE	0x00020000
#define URB_DMA_MAP_SG		0x00040000
#define URB_MAP_LOCAL		0x00080000
#define URB_SETUP_MAP_SINGLE	0x00100000
#define URB_SETUP_MAP_LOCAL	0x00200000
#define URB_DMA_SG_COMBINED	0x00400000
#define URB_ALIGNED_TEMP_BUFFER	0x00800000
struct usb_iso_packet_descriptor ;
struct urb;
struct usb_anchor ;
static inline void init_usb_anchor(struct usb_anchor *anchor)
typedef void (*usb_complete_t)(struct urb *);
struct urb ;
static inline void usb_fill_control_urb(struct urb *urb,
struct usb_device *dev,
unsigned int pipe,
unsigned char *setup_packet,
void *transfer_buffer,
int buffer_length,
usb_complete_t complete_fn,
void *context)
static inline void usb_fill_bulk_urb(struct urb *urb,
struct usb_device *dev,
unsigned int pipe,
void *transfer_buffer,
int buffer_length,
usb_complete_t complete_fn,
void *context)
static inline void usb_fill_int_urb(struct urb *urb,
struct usb_device *dev,
unsigned int pipe,
void *transfer_buffer,
int buffer_length,
usb_complete_t complete_fn,
void *context,
int interval)
extern void usb_init_urb(struct urb *urb);
extern struct urb *usb_alloc_urb(int iso_packets, gfp_t mem_flags);
extern void usb_free_urb(struct urb *urb);
#define usb_put_urb usb_free_urb
extern struct urb *usb_get_urb(struct urb *urb);
extern int usb_submit_urb(struct urb *urb, gfp_t mem_flags);
extern int usb_unlink_urb(struct urb *urb);
extern void usb_kill_urb(struct urb *urb);
extern void usb_poison_urb(struct urb *urb);
extern void usb_unpoison_urb(struct urb *urb);
extern void usb_kill_anchored_urbs(struct usb_anchor *anchor);
extern void usb_poison_anchored_urbs(struct usb_anchor *anchor);
extern void usb_unpoison_anchored_urbs(struct usb_anchor *anchor);
extern void usb_unlink_anchored_urbs(struct usb_anchor *anchor);
extern void usb_anchor_urb(struct urb *urb, struct usb_anchor *anchor);
extern void usb_unanchor_urb(struct urb *urb);
extern int usb_wait_anchor_empty_timeout(struct usb_anchor *anchor,
unsigned int timeout);
extern struct urb *usb_get_from_anchor(struct usb_anchor *anchor);
extern void usb_scuttle_anchored_urbs(struct usb_anchor *anchor);
extern int usb_anchor_empty(struct usb_anchor *anchor);
static inline int usb_urb_dir_in(struct urb *urb)
static inline int usb_urb_dir_out(struct urb *urb)
void *usb_alloc_coherent(struct usb_device *dev, size_t size,
gfp_t mem_flags, dma_addr_t *dma);
void usb_free_coherent(struct usb_device *dev, size_t size,
void *addr, dma_addr_t dma);
struct scatterlist;
int usb_buffer_map_sg(const struct usb_device *dev, int is_in,
struct scatterlist *sg, int nents);
void usb_buffer_unmap_sg(const struct usb_device *dev, int is_in,
struct scatterlist *sg, int n_hw_ents);
extern int usb_control_msg(struct usb_device *dev, unsigned int pipe,
__u8 request, __u8 requesttype, __u16 value, __u16 index,
void *data, __u16 size, int timeout);
extern int usb_interrupt_msg(struct usb_device *usb_dev, unsigned int pipe,
void *data, int len, int *actual_length, int timeout);
extern int usb_bulk_msg(struct usb_device *usb_dev, unsigned int pipe,
void *data, int len, int *actual_length,
int timeout);
extern int usb_get_descriptor(struct usb_device *dev, unsigned char desctype,
unsigned char descindex, void *buf, int size);
extern int usb_get_status(struct usb_device *dev,
int type, int target, void *data);
extern int usb_string(struct usb_device *dev, int index,
char *buf, size_t size);
extern int usb_clear_halt(struct usb_device *dev, int pipe);
extern int usb_reset_configuration(struct usb_device *dev);
extern int usb_set_interface(struct usb_device *dev, int ifnum, int alternate);
extern void usb_reset_endpoint(struct usb_device *dev, unsigned int epaddr);
extern int usb_driver_set_configuration(struct usb_device *udev, int config);
#define USB_CTRL_GET_TIMEOUT	5000
#define USB_CTRL_SET_TIMEOUT	5000
struct usb_sg_request ;
int usb_sg_init(
struct usb_sg_request	*io,
struct usb_device	*dev,
unsigned		pipe,
unsigned		period,
struct scatterlist	*sg,
int			nents,
size_t			length,
gfp_t			mem_flags
);
void usb_sg_cancel(struct usb_sg_request *io);
void usb_sg_wait(struct usb_sg_request *io);
#define PIPE_ISOCHRONOUS		0
#define PIPE_INTERRUPT			1
#define PIPE_CONTROL			2
#define PIPE_BULK			3
#define usb_pipein(pipe)	((pipe) & USB_DIR_IN)
#define usb_pipeout(pipe)	(!usb_pipein(pipe))
#define usb_pipedevice(pipe)	(((pipe) >> 8) & 0x7f)
#define usb_pipeendpoint(pipe)	(((pipe) >> 15) & 0xf)
#define usb_pipetype(pipe)	(((pipe) >> 30) & 3)
#define usb_pipeisoc(pipe)	(usb_pipetype((pipe)) == PIPE_ISOCHRONOUS)
#define usb_pipeint(pipe)	(usb_pipetype((pipe)) == PIPE_INTERRUPT)
#define usb_pipecontrol(pipe)	(usb_pipetype((pipe)) == PIPE_CONTROL)
#define usb_pipebulk(pipe)	(usb_pipetype((pipe)) == PIPE_BULK)
static inline unsigned int __create_pipe(struct usb_device *dev,
unsigned int endpoint)
#define usb_sndctrlpipe(dev, endpoint)	\
((PIPE_CONTROL << 30) | __create_pipe(dev, endpoint))
#define usb_rcvctrlpipe(dev, endpoint)	\
((PIPE_CONTROL << 30) | __create_pipe(dev, endpoint) | USB_DIR_IN)
#define usb_sndisocpipe(dev, endpoint)	\
((PIPE_ISOCHRONOUS << 30) | __create_pipe(dev, endpoint))
#define usb_rcvisocpipe(dev, endpoint)	\
((PIPE_ISOCHRONOUS << 30) | __create_pipe(dev, endpoint) | USB_DIR_IN)
#define usb_sndbulkpipe(dev, endpoint)	\
((PIPE_BULK << 30) | __create_pipe(dev, endpoint))
#define usb_rcvbulkpipe(dev, endpoint)	\
((PIPE_BULK << 30) | __create_pipe(dev, endpoint) | USB_DIR_IN)
#define usb_sndintpipe(dev, endpoint)	\
((PIPE_INTERRUPT << 30) | __create_pipe(dev, endpoint))
#define usb_rcvintpipe(dev, endpoint)	\
((PIPE_INTERRUPT << 30) | __create_pipe(dev, endpoint) | USB_DIR_IN)
static inline struct usb_host_endpoint *
usb_pipe_endpoint(struct usb_device *dev, unsigned int pipe)
static inline __u16
usb_maxpacket(struct usb_device *udev, int pipe, int is_out)
#define USB_DEVICE_ADD		0x0001
#define USB_DEVICE_REMOVE	0x0002
#define USB_BUS_ADD		0x0003
#define USB_BUS_REMOVE		0x0004
extern void usb_register_notify(struct notifier_block *nb);
extern void usb_unregister_notify(struct notifier_block *nb);
#define dbg(format, arg...)						\
printk(KERN_DEBUG "%s: " format "\n", __FILE__, ##arg)
#define dbg(format, arg...)						\
do  while (0)
#define err(format, arg...)					\
printk(KERN_ERR KBUILD_MODNAME ": " format "\n", ##arg)
extern struct dentry *usb_debug_root;
