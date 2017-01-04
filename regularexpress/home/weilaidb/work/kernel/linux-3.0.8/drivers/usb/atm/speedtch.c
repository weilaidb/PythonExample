#define DRIVER_AUTHOR	"Johan Verrept, Duncan Sands <duncan.sands@free.fr>"
#define DRIVER_VERSION	"1.10"
#define DRIVER_DESC	"Alcatel SpeedTouch USB driver version " DRIVER_VERSION
static const char speedtch_driver_name[] = "speedtch";
#define CTRL_TIMEOUT 2000
#define DATA_TIMEOUT 2000
#define OFFSET_7	0
#define OFFSET_b	1
#define OFFSET_d	9
#define OFFSET_e	13
#define OFFSET_f	14
#define SIZE_7		1
#define SIZE_b		8
#define SIZE_d		4
#define SIZE_e		1
#define SIZE_f		1
#define MIN_POLL_DELAY		5000
#define MAX_POLL_DELAY		60000
#define RESUBMIT_DELAY		1000
#define DEFAULT_BULK_ALTSETTING	1
#define DEFAULT_ISOC_ALTSETTING	3
#define DEFAULT_DL_512_FIRST	0
#define DEFAULT_ENABLE_ISOC	0
#define DEFAULT_SW_BUFFERING	0
static unsigned int altsetting = 0;
static int dl_512_first = DEFAULT_DL_512_FIRST;
static int enable_isoc = DEFAULT_ENABLE_ISOC;
static int sw_buffering = DEFAULT_SW_BUFFERING;
#define DEFAULT_B_MAX_DSL	8128
#define DEFAULT_MODEM_MODE	11
#define MODEM_OPTION_LENGTH	16
static const unsigned char DEFAULT_MODEM_OPTION[MODEM_OPTION_LENGTH] = ;
static unsigned int BMaxDSL = DEFAULT_B_MAX_DSL;
static unsigned char ModemMode = DEFAULT_MODEM_MODE;
static unsigned char ModemOption[MODEM_OPTION_LENGTH];
static unsigned int num_ModemOption;
module_param(altsetting, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(altsetting,
"Alternative setting for data interface (bulk_default: "
__MODULE_STRING(DEFAULT_BULK_ALTSETTING) "; isoc_default: "
__MODULE_STRING(DEFAULT_ISOC_ALTSETTING) ")");
module_param(dl_512_first, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(dl_512_first,
"Read 512 bytes before sending firmware (default: "
__MODULE_STRING(DEFAULT_DL_512_FIRST) ")");
module_param(enable_isoc, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(enable_isoc,
"Use isochronous transfers if available (default: "
__MODULE_STRING(DEFAULT_ENABLE_ISOC) ")");
module_param(sw_buffering, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(sw_buffering,
"Enable software buffering (default: "
__MODULE_STRING(DEFAULT_SW_BUFFERING) ")");
module_param(BMaxDSL, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(BMaxDSL,
"default: " __MODULE_STRING(DEFAULT_B_MAX_DSL));
module_param(ModemMode, byte, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(ModemMode,
"default: " __MODULE_STRING(DEFAULT_MODEM_MODE));
module_param_array(ModemOption, byte, &num_ModemOption, S_IRUGO);
MODULE_PARM_DESC(ModemOption, "default: 0x10,0x00,0x00,0x00,0x20");
#define INTERFACE_DATA		1
#define ENDPOINT_INT		0x81
#define ENDPOINT_BULK_DATA	0x07
#define ENDPOINT_ISOC_DATA	0x07
#define ENDPOINT_FIRMWARE	0x05
struct speedtch_params ;
struct speedtch_instance_data ;
static void speedtch_set_swbuff(struct speedtch_instance_data *instance, int state)
static void speedtch_test_sequence(struct speedtch_instance_data *instance)
static int speedtch_upload_firmware(struct speedtch_instance_data *instance,
const struct firmware *fw1,
const struct firmware *fw2)
static int speedtch_find_firmware(struct usbatm_data *usbatm, struct usb_interface *intf,
int phase, const struct firmware **fw_p)
static int speedtch_heavy_init(struct usbatm_data *usbatm, struct usb_interface *intf)
static int speedtch_read_status(struct speedtch_instance_data *instance)
static int speedtch_start_synchro(struct speedtch_instance_data *instance)
static void speedtch_check_status(struct work_struct *work)
static void speedtch_status_poll(unsigned long data)
static void speedtch_resubmit_int(unsigned long data)
static void speedtch_handle_int(struct urb *int_urb)
static int speedtch_atm_start(struct usbatm_data *usbatm, struct atm_dev *atm_dev)
static void speedtch_atm_stop(struct usbatm_data *usbatm, struct atm_dev *atm_dev)
static int speedtch_pre_reset(struct usb_interface *intf)
static int speedtch_post_reset(struct usb_interface *intf)
static struct usb_device_id speedtch_usb_ids[] = ;
MODULE_DEVICE_TABLE(usb, speedtch_usb_ids);
static int speedtch_usb_probe(struct usb_interface *, const struct usb_device_id *);
static struct usb_driver speedtch_usb_driver = ;
static void speedtch_release_interfaces(struct usb_device *usb_dev,
int num_interfaces)
static int speedtch_bind(struct usbatm_data *usbatm,
struct usb_interface *intf,
const struct usb_device_id *id)
static void speedtch_unbind(struct usbatm_data *usbatm, struct usb_interface *intf)
static struct usbatm_driver speedtch_usbatm_driver = ;
static int speedtch_usb_probe(struct usb_interface *intf, const struct usb_device_id *id)
static int __init speedtch_usb_init(void)
static void __exit speedtch_usb_cleanup(void)
module_init(speedtch_usb_init);
module_exit(speedtch_usb_cleanup);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
MODULE_VERSION(DRIVER_VERSION);
