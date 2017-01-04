#define DRIVER_VERSION "v0.6"
#define DRIVER_AUTHOR "Thomas M. Sailer, t.sailer@alumni.ethz.ch"
#define DRIVER_DESC "USB Parport Cable driver for Cables using the Lucent Technologies USS720 Chip"
struct parport_uss720_private ;
struct uss720_async_request ;
static void destroy_priv(struct kref *kref)
static void destroy_async(struct kref *kref)
static void async_complete(struct urb *urb)
static struct uss720_async_request *submit_async_request(struct parport_uss720_private *priv,
__u8 request, __u8 requesttype, __u16 value, __u16 index,
gfp_t mem_flags)
static unsigned int kill_all_async_requests_priv(struct parport_uss720_private *priv)
static int get_1284_register(struct parport *pp, unsigned char reg, unsigned char *val, gfp_t mem_flags)
static int set_1284_register(struct parport *pp, unsigned char reg, unsigned char val, gfp_t mem_flags)
#define ECR_SPP 00
#define ECR_PS2 01
#define ECR_PPF 02
#define ECR_ECP 03
#define ECR_EPP 04
static int change_mode(struct parport *pp, int m)
static int clear_epp_timeout(struct parport *pp)
static void parport_uss720_write_data(struct parport *pp, unsigned char d)
static unsigned char parport_uss720_read_data(struct parport *pp)
static void parport_uss720_write_control(struct parport *pp, unsigned char d)
static unsigned char parport_uss720_read_control(struct parport *pp)
static unsigned char parport_uss720_frob_control(struct parport *pp, unsigned char mask, unsigned char val)
static unsigned char parport_uss720_read_status(struct parport *pp)
static void parport_uss720_disable_irq(struct parport *pp)
static void parport_uss720_enable_irq(struct parport *pp)
static void parport_uss720_data_forward (struct parport *pp)
static void parport_uss720_data_reverse (struct parport *pp)
static void parport_uss720_init_state(struct pardevice *dev, struct parport_state *s)
static void parport_uss720_save_state(struct parport *pp, struct parport_state *s)
static void parport_uss720_restore_state(struct parport *pp, struct parport_state *s)
static size_t parport_uss720_epp_read_data(struct parport *pp, void *buf, size_t length, int flags)
static size_t parport_uss720_epp_write_data(struct parport *pp, const void *buf, size_t length, int flags)
static size_t parport_uss720_epp_read_addr(struct parport *pp, void *buf, size_t length, int flags)
static size_t parport_uss720_epp_write_addr(struct parport *pp, const void *buf, size_t length, int flags)
static size_t parport_uss720_ecp_write_data(struct parport *pp, const void *buffer, size_t len, int flags)
static size_t parport_uss720_ecp_read_data(struct parport *pp, void *buffer, size_t len, int flags)
static size_t parport_uss720_ecp_write_addr(struct parport *pp, const void *buffer, size_t len, int flags)
static size_t parport_uss720_write_compat(struct parport *pp, const void *buffer, size_t len, int flags)
static struct parport_operations parport_uss720_ops =
;
static int uss720_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void uss720_disconnect(struct usb_interface *intf)
static const struct usb_device_id uss720_table[] = ;
MODULE_DEVICE_TABLE (usb, uss720_table);
static struct usb_driver uss720_driver = ;
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
static int __init uss720_init(void)
static void __exit uss720_cleanup(void)
module_init(uss720_init);
module_exit(uss720_cleanup);
