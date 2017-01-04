MODULE_DESCRIPTION("Driver for Realtek USB Card Reader");
MODULE_AUTHOR("wwang <wei_wang@realsil.com.cn>");
MODULE_LICENSE("GPL");
MODULE_VERSION("1.03");
static int auto_delink_en = 1;
module_param(auto_delink_en, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(auto_delink_en, "enable auto delink");
struct rts51x_status ;
struct rts51x_chip ;
#define FLIDX_AUTO_DELINK		0x01
#define SCSI_LUN(srb)			((srb)->device->lun)
#define SET_BIT(data, idx)		((data) |= 1 << (idx))
#define CLR_BIT(data, idx)		((data) &= ~(1 << (idx)))
#define CHK_BIT(data, idx)		((data) & (1 << (idx)))
#define SET_AUTO_DELINK(chip)		((chip)->flag |= FLIDX_AUTO_DELINK)
#define CLR_AUTO_DELINK(chip)		((chip)->flag &= ~FLIDX_AUTO_DELINK)
#define CHK_AUTO_DELINK(chip)		((chip)->flag & FLIDX_AUTO_DELINK)
#define RTS51X_GET_VID(chip)		((chip)->vendor_id)
#define RTS51X_GET_PID(chip)		((chip)->product_id)
#define FW_VERSION(chip)		((chip)->status[0].fw_ver)
#define STATUS_LEN(chip)		((chip)->status_len)
#define SUPPORT_DETAILED_TYPE1(chip)	\
CHK_BIT((chip)->status[0].function[0], 1)
#define SUPPORT_OT(chip)		\
CHK_BIT((chip)->status[0].function[0], 2)
#define SUPPORT_OC(chip)		\
CHK_BIT((chip)->status[0].function[0], 3)
#define SUPPORT_AUTO_DELINK(chip)	\
CHK_BIT((chip)->status[0].function[0], 4)
#define SUPPORT_SDIO(chip)		\
CHK_BIT((chip)->status[0].function[1], 0)
#define SUPPORT_DETAILED_TYPE2(chip)	\
CHK_BIT((chip)->status[0].function[1], 1)
#define CHECK_PID(chip, pid)		(RTS51X_GET_PID(chip) == (pid))
#define CHECK_FW_VER(chip, fw_ver)	(FW_VERSION(chip) == (fw_ver))
#define CHECK_ID(chip, pid, fw_ver)	\
(CHECK_PID((chip), (pid)) && CHECK_FW_VER((chip), (fw_ver)))
#define wait_timeout_x(task_state, msecs)	\
do  while (0)
#define wait_timeout(msecs)		\
wait_timeout_x(TASK_INTERRUPTIBLE, (msecs))
static int init_realtek_cr(struct us_data *us);
#define UNUSUAL_DEV(id_vendor, id_product, bcdDeviceMin, bcdDeviceMax, \
vendorName, productName, useProtocol, useTransport, \
initFunction, flags) \
static const struct usb_device_id realtek_cr_ids[] = ;
MODULE_DEVICE_TABLE(usb, realtek_cr_ids);
#undef UNUSUAL_DEV
#define UNUSUAL_DEV(idVendor, idProduct, bcdDeviceMin, bcdDeviceMax, \
vendor_name, product_name, use_protocol, use_transport, \
init_function, Flags) \
static struct us_unusual_dev realtek_cr_unusual_dev_list[] = ;
#undef UNUSUAL_DEV
static int rts51x_bulk_transport(struct us_data *us, u8 lun,
u8 *cmd, int cmd_len, u8 *buf, int buf_len,
enum dma_data_direction dir, int *act_len)
static int rts51x_get_max_lun(struct us_data *us)
static int rts51x_read_mem(struct us_data *us, u16 addr, u8 *data, u16 len)
static int rts51x_write_mem(struct us_data *us, u16 addr, u8 *data, u16 len)
static int rts51x_read_status(struct us_data *us,
u8 lun, u8 *status, int len, int *actlen)
static int rts51x_check_status(struct us_data *us, u8 lun)
static int enable_oscillator(struct us_data *us)
static int do_config_autodelink(struct us_data *us, int enable, int force)
static int config_autodelink_after_power_on(struct us_data *us)
static int config_autodelink_before_power_down(struct us_data *us)
static void realtek_cr_destructor(void *extra)
static void realtek_pm_hook(struct us_data *us, int pm_state)
static int init_realtek_cr(struct us_data *us)
static int realtek_cr_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver realtek_cr_driver = ;
static int __init realtek_cr_init(void)
static void __exit realtek_cr_exit(void)
module_init(realtek_cr_init);
module_exit(realtek_cr_exit);
