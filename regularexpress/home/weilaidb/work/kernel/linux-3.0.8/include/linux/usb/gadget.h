#define __LINUX_USB_GADGET_H
struct usb_ep;
struct usb_request ;
struct usb_ep_ops ;
struct usb_ep ;
static inline int usb_ep_enable(struct usb_ep *ep,
const struct usb_endpoint_descriptor *desc)
static inline int usb_ep_disable(struct usb_ep *ep)
static inline struct usb_request *usb_ep_alloc_request(struct usb_ep *ep,
gfp_t gfp_flags)
static inline void usb_ep_free_request(struct usb_ep *ep,
struct usb_request *req)
static inline int usb_ep_queue(struct usb_ep *ep,
struct usb_request *req, gfp_t gfp_flags)
static inline int usb_ep_dequeue(struct usb_ep *ep, struct usb_request *req)
static inline int usb_ep_set_halt(struct usb_ep *ep)
static inline int usb_ep_clear_halt(struct usb_ep *ep)
static inline int
usb_ep_set_wedge(struct usb_ep *ep)
static inline int usb_ep_fifo_status(struct usb_ep *ep)
static inline void usb_ep_fifo_flush(struct usb_ep *ep)
struct usb_gadget;
struct usb_gadget_ops ;
struct usb_gadget ;
static inline void set_gadget_data(struct usb_gadget *gadget, void *data)
static inline void *get_gadget_data(struct usb_gadget *gadget)
static inline struct usb_gadget *dev_to_usb_gadget(struct device *dev)
#define gadget_for_each_ep(tmp, gadget) \
list_for_each_entry(tmp, &(gadget)->ep_list, ep_list)
static inline int gadget_is_dualspeed(struct usb_gadget *g)
static inline int gadget_is_otg(struct usb_gadget *g)
static inline int usb_gadget_frame_number(struct usb_gadget *gadget)
static inline int usb_gadget_wakeup(struct usb_gadget *gadget)
static inline int usb_gadget_set_selfpowered(struct usb_gadget *gadget)
static inline int usb_gadget_clear_selfpowered(struct usb_gadget *gadget)
static inline int usb_gadget_vbus_connect(struct usb_gadget *gadget)
static inline int usb_gadget_vbus_draw(struct usb_gadget *gadget, unsigned mA)
static inline int usb_gadget_vbus_disconnect(struct usb_gadget *gadget)
static inline int usb_gadget_connect(struct usb_gadget *gadget)
static inline int usb_gadget_disconnect(struct usb_gadget *gadget)
struct usb_gadget_driver ;
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *));
int usb_gadget_unregister_driver(struct usb_gadget_driver *driver);
struct usb_string ;
struct usb_gadget_strings ;
int usb_gadget_get_string(struct usb_gadget_strings *table, int id, u8 *buf);
int usb_descriptor_fillbuf(void *, unsigned,
const struct usb_descriptor_header **);
int usb_gadget_config_buf(const struct usb_config_descriptor *config,
void *buf, unsigned buflen, const struct usb_descriptor_header **desc);
struct usb_descriptor_header **usb_copy_descriptors(
struct usb_descriptor_header **);
struct usb_endpoint_descriptor *usb_find_endpoint(
struct usb_descriptor_header **src,
struct usb_descriptor_header **copy,
struct usb_endpoint_descriptor *match);
static inline void usb_free_descriptors(struct usb_descriptor_header **v)
extern struct usb_ep *usb_ep_autoconfig(struct usb_gadget *,
struct usb_endpoint_descriptor *);
extern void usb_ep_autoconfig_reset(struct usb_gadget *);
