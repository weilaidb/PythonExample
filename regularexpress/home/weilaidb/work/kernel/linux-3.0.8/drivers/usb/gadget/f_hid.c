static int major, minors;
static struct class *hidg_class;
struct f_hidg ;
static inline struct f_hidg *func_to_hidg(struct usb_function *f)
static struct usb_interface_descriptor hidg_interface_desc = ;
static struct hid_descriptor hidg_desc = ;
static struct usb_endpoint_descriptor hidg_hs_in_ep_desc = ;
static struct usb_descriptor_header *hidg_hs_descriptors[] = ;
static struct usb_endpoint_descriptor hidg_fs_in_ep_desc = ;
static struct usb_descriptor_header *hidg_fs_descriptors[] = ;
static ssize_t f_hidg_read(struct file *file, char __user *buffer,
size_t count, loff_t *ptr)
static void f_hidg_req_complete(struct usb_ep *ep, struct usb_request *req)
static ssize_t f_hidg_write(struct file *file, const char __user *buffer,
size_t count, loff_t *offp)
static unsigned int f_hidg_poll(struct file *file, poll_table *wait)
#undef WRITE_COND
#undef READ_COND
static int f_hidg_release(struct inode *inode, struct file *fd)
static int f_hidg_open(struct inode *inode, struct file *fd)
static void hidg_set_report_complete(struct usb_ep *ep, struct usb_request *req)
static int hidg_setup(struct usb_function *f,
const struct usb_ctrlrequest *ctrl)
static void hidg_disable(struct usb_function *f)
static int hidg_set_alt(struct usb_function *f, unsigned intf, unsigned alt)
const struct file_operations f_hidg_fops = ;
static int __init hidg_bind(struct usb_configuration *c, struct usb_function *f)
static void hidg_unbind(struct usb_configuration *c, struct usb_function *f)
#define CT_FUNC_HID_IDX	0
static struct usb_string ct_func_string_defs[] = ;
static struct usb_gadget_strings ct_func_string_table = ;
static struct usb_gadget_strings *ct_func_strings[] = ;
int __init hidg_bind_config(struct usb_configuration *c,
struct hidg_func_descriptor *fdesc, int index)
int __init ghid_setup(struct usb_gadget *g, int count)
void ghid_cleanup(void)
