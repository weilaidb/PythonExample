#define DRIVER_AUTHOR "Tobias Lorenz <tobias.lorenz@gmx.net>"
#define DRIVER_KERNEL_VERSION KERNEL_VERSION(1, 0, 10)
#define DRIVER_CARD "Silicon Labs Si470x FM Radio Receiver"
#define DRIVER_DESC "USB radio driver for Si470x FM Radio Receivers"
#define DRIVER_VERSION "1.0.10"
static struct usb_device_id si470x_usb_driver_id_table[] = ;
MODULE_DEVICE_TABLE(usb, si470x_usb_driver_id_table);
static int radio_nr = -1;
module_param(radio_nr, int, 0444);
MODULE_PARM_DESC(radio_nr, "Radio Nr");
static unsigned int usb_timeout = 500;
module_param(usb_timeout, uint, 0644);
MODULE_PARM_DESC(usb_timeout, "USB timeout (ms): *500*");
static unsigned int rds_buf = 100;
module_param(rds_buf, uint, 0444);
MODULE_PARM_DESC(rds_buf, "RDS buffer entries: *100*");
static unsigned short max_rds_errors = 1;
module_param(max_rds_errors, ushort, 0644);
MODULE_PARM_DESC(max_rds_errors, "RDS maximum block errors: *1*");
#define REGISTER_REPORT_SIZE	(RADIO_REGISTER_SIZE + 1)
#define REGISTER_REPORT(reg)	((reg) + 1)
#define ENTIRE_REPORT_SIZE	(RADIO_REGISTER_NUM * RADIO_REGISTER_SIZE + 1)
#define ENTIRE_REPORT		17
#define RDS_REPORT_SIZE		(RDS_REGISTER_NUM * RADIO_REGISTER_SIZE + 1)
#define RDS_REPORT		18
#define LED_REPORT_SIZE		3
#define LED_REPORT		19
#define STREAM_REPORT_SIZE	3
#define STREAM_REPORT		19
#define SCRATCH_PAGE_SIZE	63
#define SCRATCH_REPORT_SIZE	(SCRATCH_PAGE_SIZE + 1)
#define SCRATCH_REPORT		20
#define WRITE_REPORT_SIZE	4
#define WRITE_REPORT		19
#define FLASH_REPORT_SIZE	64
#define FLASH_REPORT		20
#define CRC_REPORT_SIZE		3
#define CRC_REPORT		21
#define RESPONSE_REPORT_SIZE	2
#define RESPONSE_REPORT		22
#define UNUSED_REPORT		23
#define RADIO_SW_VERSION_NOT_BOOTLOADABLE	6
#define RADIO_SW_VERSION			7
#define RADIO_HW_VERSION			1
#define LED_COMMAND		0x35
#define NO_CHANGE_LED		0x00
#define ALL_COLOR_LED		0x01
#define BLINK_GREEN_LED		0x02
#define BLINK_RED_LED		0x04
#define BLINK_ORANGE_LED	0x10
#define SOLID_GREEN_LED		0x20
#define SOLID_RED_LED		0x40
#define SOLID_ORANGE_LED	0x80
#define STREAM_COMMAND	0x36
#define STREAM_VIDPID	0x00
#define STREAM_AUDIO	0xff
#define UNIQUE_BL_ID		0x34
#define FLASH_DATA_MASK		0x55
#define GET_SW_VERSION_COMMAND	0x00
#define SET_PAGE_COMMAND	0x01
#define ERASE_PAGE_COMMAND	0x02
#define WRITE_PAGE_COMMAND	0x03
#define CRC_ON_PAGE_COMMAND	0x04
#define READ_FLASH_BYTE_COMMAND	0x05
#define RESET_DEVICE_COMMAND	0x06
#define GET_HW_VERSION_COMMAND	0x07
#define BLANK			0xff
#define COMMAND_OK		0x01
#define COMMAND_FAILED		0x02
#define COMMAND_PENDING		0x03
static int si470x_get_report(struct si470x_device *radio, void *buf, int size)
static int si470x_set_report(struct si470x_device *radio, void *buf, int size)
int si470x_get_register(struct si470x_device *radio, int regnr)
int si470x_set_register(struct si470x_device *radio, int regnr)
static int si470x_get_all_registers(struct si470x_device *radio)
static int si470x_set_led_state(struct si470x_device *radio,
unsigned char led_state)
static int si470x_get_scratch_page_versions(struct si470x_device *radio)
int si470x_disconnect_check(struct si470x_device *radio)
static void si470x_int_in_callback(struct urb *urb)
int si470x_fops_open(struct file *file)
int si470x_fops_release(struct file *file)
int si470x_vidioc_querycap(struct file *file, void *priv,
struct v4l2_capability *capability)
static int si470x_usb_driver_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static int si470x_usb_driver_suspend(struct usb_interface *intf,
pm_message_t message)
static int si470x_usb_driver_resume(struct usb_interface *intf)
static void si470x_usb_driver_disconnect(struct usb_interface *intf)
static struct usb_driver si470x_usb_driver = ;
static int __init si470x_module_init(void)
static void __exit si470x_module_exit(void)
module_init(si470x_module_init);
module_exit(si470x_module_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_VERSION(DRIVER_VERSION);
