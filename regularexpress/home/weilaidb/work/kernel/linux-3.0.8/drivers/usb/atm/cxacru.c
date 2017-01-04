#define DRIVER_AUTHOR	"Roman Kagan, David Woodhouse, Duncan Sands, Simon Arlott"
#define DRIVER_VERSION	"0.4"
#define DRIVER_DESC	"Conexant AccessRunner ADSL USB modem driver"
static const char cxacru_driver_name[] = "cxacru";
#define CXACRU_EP_CMD		0x01
#define CXACRU_EP_DATA		0x02
#define CMD_PACKET_SIZE		64
#define CMD_MAX_CONFIG		((CMD_PACKET_SIZE / 4 - 1) / 2)
#define PLLFCLK_ADDR	0x00350068
#define PLLBCLK_ADDR	0x0035006c
#define SDRAMEN_ADDR	0x00350010
#define FW_ADDR		0x00801000
#define BR_ADDR		0x00180600
#define SIG_ADDR	0x00180500
#define BR_STACK_ADDR	0x00187f10
#define SDRAM_ENA	0x1
#define CMD_TIMEOUT	2000
#define POLL_INTERVAL	1
enum cxacru_fw_request ;
enum cxacru_cm_request ;
enum cxacru_cm_flash ;
enum cxacru_cm_status ;
enum cxacru_info_idx ;
enum cxacru_poll_state ;
struct cxacru_modem_type ;
struct cxacru_data ;
static int cxacru_cm(struct cxacru_data *instance, enum cxacru_cm_request cm,
u8 *wdata, int wsize, u8 *rdata, int rsize);
static void cxacru_poll_status(struct work_struct *work);
#define CXACRU__ATTR_INIT(_name) \
static DEVICE_ATTR(_name, S_IRUGO, cxacru_sysfs_show_##_name, NULL)
#define CXACRU_CMD_INIT(_name) \
static DEVICE_ATTR(_name, S_IWUSR | S_IRUGO, \
cxacru_sysfs_show_##_name, cxacru_sysfs_store_##_name)
#define CXACRU_SET_INIT(_name) \
static DEVICE_ATTR(_name, S_IWUSR, \
NULL, cxacru_sysfs_store_##_name)
#define CXACRU_ATTR_INIT(_value, _type, _name) \
static ssize_t cxacru_sysfs_show_##_name(struct device *dev, \
struct device_attribute *attr, char *buf) \
\
CXACRU__ATTR_INIT(_name)
#define CXACRU_ATTR_CREATE(_v, _t, _name) CXACRU_DEVICE_CREATE_FILE(_name)
#define CXACRU_CMD_CREATE(_name)          CXACRU_DEVICE_CREATE_FILE(_name)
#define CXACRU_SET_CREATE(_name)          CXACRU_DEVICE_CREATE_FILE(_name)
#define CXACRU__ATTR_CREATE(_name)        CXACRU_DEVICE_CREATE_FILE(_name)
#define CXACRU_ATTR_REMOVE(_v, _t, _name) CXACRU_DEVICE_REMOVE_FILE(_name)
#define CXACRU_CMD_REMOVE(_name)          CXACRU_DEVICE_REMOVE_FILE(_name)
#define CXACRU_SET_REMOVE(_name)          CXACRU_DEVICE_REMOVE_FILE(_name)
#define CXACRU__ATTR_REMOVE(_name)        CXACRU_DEVICE_REMOVE_FILE(_name)
static ssize_t cxacru_sysfs_showattr_u32(u32 value, char *buf)
static ssize_t cxacru_sysfs_showattr_s8(s8 value, char *buf)
static ssize_t cxacru_sysfs_showattr_dB(s16 value, char *buf)
static ssize_t cxacru_sysfs_showattr_bool(u32 value, char *buf)
static ssize_t cxacru_sysfs_showattr_LINK(u32 value, char *buf)
static ssize_t cxacru_sysfs_showattr_LINE(u32 value, char *buf)
static ssize_t cxacru_sysfs_showattr_MODU(u32 value, char *buf)
static ssize_t cxacru_sysfs_show_mac_address(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t cxacru_sysfs_show_adsl_state(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t cxacru_sysfs_store_adsl_state(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t cxacru_sysfs_store_adsl_config(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
#define CXACRU_ALL_FILES(_action) \
CXACRU_ATTR_##_action(CXINF_DOWNSTREAM_RATE,           u32,  downstream_rate); \
CXACRU_ATTR_##_action(CXINF_UPSTREAM_RATE,             u32,  upstream_rate); \
CXACRU_ATTR_##_action(CXINF_LINK_STATUS,               LINK, link_status); \
CXACRU_ATTR_##_action(CXINF_LINE_STATUS,               LINE, line_status); \
CXACRU__ATTR_##_action(                                      mac_address); \
CXACRU_ATTR_##_action(CXINF_UPSTREAM_SNR_MARGIN,       dB,   upstream_snr_margin); \
CXACRU_ATTR_##_action(CXINF_DOWNSTREAM_SNR_MARGIN,     dB,   downstream_snr_margin); \
CXACRU_ATTR_##_action(CXINF_UPSTREAM_ATTENUATION,      dB,   upstream_attenuation); \
CXACRU_ATTR_##_action(CXINF_DOWNSTREAM_ATTENUATION,    dB,   downstream_attenuation); \
CXACRU_ATTR_##_action(CXINF_TRANSMITTER_POWER,         s8,   transmitter_power); \
CXACRU_ATTR_##_action(CXINF_UPSTREAM_BITS_PER_FRAME,   u32,  upstream_bits_per_frame); \
CXACRU_ATTR_##_action(CXINF_DOWNSTREAM_BITS_PER_FRAME, u32,  downstream_bits_per_frame); \
CXACRU_ATTR_##_action(CXINF_STARTUP_ATTEMPTS,          u32,  startup_attempts); \
CXACRU_ATTR_##_action(CXINF_UPSTREAM_CRC_ERRORS,       u32,  upstream_crc_errors); \
CXACRU_ATTR_##_action(CXINF_DOWNSTREAM_CRC_ERRORS,     u32,  downstream_crc_errors); \
CXACRU_ATTR_##_action(CXINF_UPSTREAM_FEC_ERRORS,       u32,  upstream_fec_errors); \
CXACRU_ATTR_##_action(CXINF_DOWNSTREAM_FEC_ERRORS,     u32,  downstream_fec_errors); \
CXACRU_ATTR_##_action(CXINF_UPSTREAM_HEC_ERRORS,       u32,  upstream_hec_errors); \
CXACRU_ATTR_##_action(CXINF_DOWNSTREAM_HEC_ERRORS,     u32,  downstream_hec_errors); \
CXACRU_ATTR_##_action(CXINF_LINE_STARTABLE,            bool, line_startable); \
CXACRU_ATTR_##_action(CXINF_MODULATION,                MODU, modulation); \
CXACRU_ATTR_##_action(CXINF_ADSL_HEADEND,              u32,  adsl_headend); \
CXACRU_ATTR_##_action(CXINF_ADSL_HEADEND_ENVIRONMENT,  u32,  adsl_headend_environment); \
CXACRU_ATTR_##_action(CXINF_CONTROLLER_VERSION,        u32,  adsl_controller_version); \
CXACRU_CMD_##_action(                                        adsl_state); \
CXACRU_SET_##_action(                                        adsl_config);
CXACRU_ALL_FILES(INIT);
static void cxacru_blocking_completion(struct urb *urb)
static void cxacru_timeout_kill(unsigned long data)
static int cxacru_start_wait_urb(struct urb *urb, struct completion *done,
int *actual_length)
static int cxacru_cm(struct cxacru_data *instance, enum cxacru_cm_request cm,
u8 *wdata, int wsize, u8 *rdata, int rsize)
static int cxacru_cm_get_array(struct cxacru_data *instance, enum cxacru_cm_request cm,
u32 *data, int size)
static int cxacru_card_status(struct cxacru_data *instance)
static void cxacru_remove_device_files(struct usbatm_data *usbatm_instance,
struct atm_dev *atm_dev)
static int cxacru_atm_start(struct usbatm_data *usbatm_instance,
struct atm_dev *atm_dev)
static void cxacru_poll_status(struct work_struct *work)
static int cxacru_fw(struct usb_device *usb_dev, enum cxacru_fw_request fw,
u8 code1, u8 code2, u32 addr, const u8 *data, int size)
static void cxacru_upload_firmware(struct cxacru_data *instance,
const struct firmware *fw,
const struct firmware *bp)
static int cxacru_find_firmware(struct cxacru_data *instance,
char *phase, const struct firmware **fw_p)
static int cxacru_heavy_init(struct usbatm_data *usbatm_instance,
struct usb_interface *usb_intf)
static int cxacru_bind(struct usbatm_data *usbatm_instance,
struct usb_interface *intf, const struct usb_device_id *id)
static void cxacru_unbind(struct usbatm_data *usbatm_instance,
struct usb_interface *intf)
static const struct cxacru_modem_type cxacru_cafe = ;
static const struct cxacru_modem_type cxacru_cb00 = ;
static const struct usb_device_id cxacru_usb_ids[] = ;
MODULE_DEVICE_TABLE(usb, cxacru_usb_ids);
static struct usbatm_driver cxacru_driver = ;
static int cxacru_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver cxacru_usb_driver = ;
static int __init cxacru_init(void)
static void __exit cxacru_cleanup(void)
module_init(cxacru_init);
module_exit(cxacru_cleanup);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
MODULE_VERSION(DRIVER_VERSION);
