static int usbatm_print_packet(const unsigned char *data, int len);
#define PACKETDEBUG(arg...)	usbatm_print_packet(arg)
#define vdbg(arg...)		dbg(arg)
#define PACKETDEBUG(arg...)
#define vdbg(arg...)
#define DRIVER_AUTHOR	"Johan Verrept, Duncan Sands <duncan.sands@free.fr>"
#define DRIVER_VERSION	"1.10"
#define DRIVER_DESC	"Generic USB ATM/DSL I/O, version " DRIVER_VERSION
static const char usbatm_driver_name[] = "usbatm";
#define UDSL_MAX_RCV_URBS		16
#define UDSL_MAX_SND_URBS		16
#define UDSL_MAX_BUF_SIZE		65536
#define UDSL_DEFAULT_RCV_URBS		4
#define UDSL_DEFAULT_SND_URBS		4
#define UDSL_DEFAULT_RCV_BUF_SIZE	3392
#define UDSL_DEFAULT_SND_BUF_SIZE	3392
#define ATM_CELL_HEADER			(ATM_CELL_SIZE - ATM_CELL_PAYLOAD)
#define THROTTLE_MSECS			100
static unsigned int num_rcv_urbs = UDSL_DEFAULT_RCV_URBS;
static unsigned int num_snd_urbs = UDSL_DEFAULT_SND_URBS;
static unsigned int rcv_buf_bytes = UDSL_DEFAULT_RCV_BUF_SIZE;
static unsigned int snd_buf_bytes = UDSL_DEFAULT_SND_BUF_SIZE;
module_param(num_rcv_urbs, uint, S_IRUGO);
MODULE_PARM_DESC(num_rcv_urbs,
"Number of urbs used for reception (range: 0-"
__MODULE_STRING(UDSL_MAX_RCV_URBS) ", default: "
__MODULE_STRING(UDSL_DEFAULT_RCV_URBS) ")");
module_param(num_snd_urbs, uint, S_IRUGO);
MODULE_PARM_DESC(num_snd_urbs,
"Number of urbs used for transmission (range: 0-"
__MODULE_STRING(UDSL_MAX_SND_URBS) ", default: "
__MODULE_STRING(UDSL_DEFAULT_SND_URBS) ")");
module_param(rcv_buf_bytes, uint, S_IRUGO);
MODULE_PARM_DESC(rcv_buf_bytes,
"Size of the buffers used for reception, in bytes (range: 1-"
__MODULE_STRING(UDSL_MAX_BUF_SIZE) ", default: "
__MODULE_STRING(UDSL_DEFAULT_RCV_BUF_SIZE) ")");
module_param(snd_buf_bytes, uint, S_IRUGO);
MODULE_PARM_DESC(snd_buf_bytes,
"Size of the buffers used for transmission, in bytes (range: 1-"
__MODULE_STRING(UDSL_MAX_BUF_SIZE) ", default: "
__MODULE_STRING(UDSL_DEFAULT_SND_BUF_SIZE) ")");
struct usbatm_vcc_data ;
struct usbatm_control ;
#define UDSL_SKB(x)		((struct usbatm_control *)(x)->cb)
static void usbatm_atm_dev_close(struct atm_dev *atm_dev);
static int usbatm_atm_open(struct atm_vcc *vcc);
static void usbatm_atm_close(struct atm_vcc *vcc);
static int usbatm_atm_ioctl(struct atm_dev *atm_dev, unsigned int cmd, void __user * arg);
static int usbatm_atm_send(struct atm_vcc *vcc, struct sk_buff *skb);
static int usbatm_atm_proc_read(struct atm_dev *atm_dev, loff_t * pos, char *page);
static struct atmdev_ops usbatm_atm_devops = ;
static inline unsigned int usbatm_pdu_length(unsigned int length)
static inline void usbatm_pop(struct atm_vcc *vcc, struct sk_buff *skb)
static struct urb *usbatm_pop_urb(struct usbatm_channel *channel)
static int usbatm_submit_urb(struct urb *urb)
static void usbatm_complete(struct urb *urb)
static inline struct usbatm_vcc_data *usbatm_find_vcc(struct usbatm_data *instance,
short vpi, int vci)
static void usbatm_extract_one_cell(struct usbatm_data *instance, unsigned char *source)
static void usbatm_extract_cells(struct usbatm_data *instance,
unsigned char *source, unsigned int avail_data)
static unsigned int usbatm_write_cells(struct usbatm_data *instance,
struct sk_buff *skb,
u8 *target, unsigned int avail_space)
static void usbatm_rx_process(unsigned long data)
static void usbatm_tx_process(unsigned long data)
static void usbatm_cancel_send(struct usbatm_data *instance,
struct atm_vcc *vcc)
static int usbatm_atm_send(struct atm_vcc *vcc, struct sk_buff *skb)
static void usbatm_destroy_instance(struct kref *kref)
static void usbatm_get_instance(struct usbatm_data *instance)
static void usbatm_put_instance(struct usbatm_data *instance)
static void usbatm_atm_dev_close(struct atm_dev *atm_dev)
static int usbatm_atm_proc_read(struct atm_dev *atm_dev, loff_t * pos, char *page)
static int usbatm_atm_open(struct atm_vcc *vcc)
static void usbatm_atm_close(struct atm_vcc *vcc)
static int usbatm_atm_ioctl(struct atm_dev *atm_dev, unsigned int cmd,
void __user * arg)
static int usbatm_atm_init(struct usbatm_data *instance)
static int usbatm_do_heavy_init(void *arg)
static int usbatm_heavy_init(struct usbatm_data *instance)
static void usbatm_tasklet_schedule(unsigned long data)
static void usbatm_init_channel(struct usbatm_channel *channel)
int usbatm_usb_probe(struct usb_interface *intf, const struct usb_device_id *id,
struct usbatm_driver *driver)
EXPORT_SYMBOL_GPL(usbatm_usb_probe);
void usbatm_usb_disconnect(struct usb_interface *intf)
EXPORT_SYMBOL_GPL(usbatm_usb_disconnect);
static int __init usbatm_usb_init(void)
module_init(usbatm_usb_init);
static void __exit usbatm_usb_exit(void)
module_exit(usbatm_usb_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
MODULE_VERSION(DRIVER_VERSION);
static int usbatm_print_packet(const unsigned char *data, int len)
