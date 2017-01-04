#define SWIMS_USB_REQUEST_SetSwocMode	0x0B
#define SWIMS_USB_REQUEST_GetSwocInfo	0x0A
#define SWIMS_USB_INDEX_SetMode		0x0000
#define SWIMS_SET_MODE_Modem		0x0001
#define TRU_NORMAL 			0x01
#define TRU_FORCE_MS 			0x02
#define TRU_FORCE_MODEM 		0x03
static unsigned int swi_tru_install = 1;
module_param(swi_tru_install, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(swi_tru_install, "TRU-Install mode (1=Full Logic (def),"
" 2=Force CD-Rom, 3=Force Modem)");
struct swoc_info  __attribute__((__packed__));
static bool containsFullLinuxPackage(struct swoc_info *swocInfo)
static int sierra_set_ms_mode(struct usb_device *udev, __u16 eSWocMode)
static int sierra_get_swoc_info(struct usb_device *udev,
struct swoc_info *swocInfo)
static void debug_swoc(struct swoc_info *swocInfo)
static ssize_t show_truinst(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(truinst, S_IRUGO, show_truinst, NULL);
int sierra_ms_init(struct us_data *us)
