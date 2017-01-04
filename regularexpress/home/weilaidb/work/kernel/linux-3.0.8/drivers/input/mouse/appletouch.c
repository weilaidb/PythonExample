struct atp_info ;
static void atp_complete_geyser_1_2(struct urb *urb);
static void atp_complete_geyser_3_4(struct urb *urb);
static const struct atp_info fountain_info = ;
static const struct atp_info geyser1_info = ;
static const struct atp_info geyser2_info = ;
static const struct atp_info geyser3_info = ;
static const struct atp_info geyser4_info = ;
#define ATP_DEVICE(prod, info)					\
static struct usb_device_id atp_table[] = ;
MODULE_DEVICE_TABLE(usb, atp_table);
#define ATP_XSENSORS	26
#define ATP_YSENSORS	16
#define ATP_FUZZ	16
#define ATP_PRESSURE	300
#define ATP_THRESHOLD	 5
#define ATP_GEYSER_MODE_READ_REQUEST_ID		1
#define ATP_GEYSER_MODE_WRITE_REQUEST_ID	9
#define ATP_GEYSER_MODE_REQUEST_VALUE		0x300
#define ATP_GEYSER_MODE_REQUEST_INDEX		0
#define ATP_GEYSER_MODE_VENDOR_VALUE		0x04
enum atp_status_bits ;
struct atp ;
#define dbg_dump(msg, tab) \
if (debug > 1)
#define dprintk(format, a...)						\
do  while (0)
MODULE_AUTHOR("Johannes Berg");
MODULE_AUTHOR("Stelian Pop");
MODULE_AUTHOR("Frank Arnold");
MODULE_AUTHOR("Michael Hanselmann");
MODULE_AUTHOR("Sven Anders");
MODULE_DESCRIPTION("Apple PowerBook and MacBook USB touchpad driver");
MODULE_LICENSE("GPL");
static int threshold = ATP_THRESHOLD;
module_param(threshold, int, 0644);
MODULE_PARM_DESC(threshold, "Discard any change in data from a sensor"
" (the trackpad has many of these sensors)"
" less than this value.");
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Activate debugging output");
static int atp_geyser_init(struct usb_device *udev)
static void atp_reinit(struct work_struct *work)
static int atp_calculate_abs(int *xy_sensors, int nb_sensors, int fact,
int *z, int *fingers)
static inline void atp_report_fingers(struct input_dev *input, int fingers)
#define ATP_URB_STATUS_SUCCESS		0
#define ATP_URB_STATUS_ERROR		1
#define ATP_URB_STATUS_ERROR_FATAL	2
static int atp_status_check(struct urb *urb)
static void atp_detect_size(struct atp *dev)
static void atp_complete_geyser_1_2(struct urb *urb)
static void atp_complete_geyser_3_4(struct urb *urb)
static int atp_open(struct input_dev *input)
static void atp_close(struct input_dev *input)
static int atp_handle_geyser(struct atp *dev)
static int atp_probe(struct usb_interface *iface,
const struct usb_device_id *id)
static void atp_disconnect(struct usb_interface *iface)
static int atp_recover(struct atp *dev)
static int atp_suspend(struct usb_interface *iface, pm_message_t message)
static int atp_resume(struct usb_interface *iface)
static int atp_reset_resume(struct usb_interface *iface)
static struct usb_driver atp_driver = ;
static int __init atp_init(void)
static void __exit atp_exit(void)
module_init(atp_init);
module_exit(atp_exit);
