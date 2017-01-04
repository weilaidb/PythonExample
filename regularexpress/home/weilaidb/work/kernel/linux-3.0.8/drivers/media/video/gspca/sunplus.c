#define MODULE_NAME "sunplus"
MODULE_AUTHOR("Michel Xhaard <mxhaard@users.sourceforge.net>");
MODULE_DESCRIPTION("GSPCA/SPCA5xx USB Camera Driver");
MODULE_LICENSE("GPL");
struct sd ;
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcolors(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcolors(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setautogain(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getautogain(struct gspca_dev *gspca_dev, __s32 *val);
static const struct ctrl sd_ctrls[] = ;
static const struct v4l2_pix_format vga_mode[] = ;
static const struct v4l2_pix_format custom_mode[] = ;
static const struct v4l2_pix_format vga_mode2[] = ;
#define SPCA50X_OFFSET_DATA 10
#define SPCA504_PCCAM600_OFFSET_SNAPSHOT 3
#define SPCA504_PCCAM600_OFFSET_COMPRESS 4
#define SPCA504_PCCAM600_OFFSET_MODE	 5
#define SPCA504_PCCAM600_OFFSET_DATA	 14
#define SPCA533_OFFSET_DATA	16
#define SPCA533_OFFSET_FRAMSEQ	15
#define SPCA536_OFFSET_DATA	4
#define SPCA536_OFFSET_FRAMSEQ	1
struct cmd ;
static const struct cmd spca504_pccam600_init_data[] = ;
static const struct cmd spca504_pccam600_open_data[] = ;
static const struct cmd spca504A_clicksmart420_init_data[] = ;
static const struct cmd spca504A_clicksmart420_open_data[] = ;
static const u8 qtable_creative_pccam[2][64] = ;
static const u8 qtable_spca504_default[2][64] = ;
static void reg_r(struct gspca_dev *gspca_dev,
u8 req,
u16 index,
u16 len)
static void reg_w_1(struct gspca_dev *gspca_dev,
u8 req,
u16 value,
u16 index,
u16 byte)
static void reg_w_riv(struct gspca_dev *gspca_dev,
u8 req, u16 index, u16 value)
static void write_vector(struct gspca_dev *gspca_dev,
const struct cmd *data, int ncmds)
static void setup_qtable(struct gspca_dev *gspca_dev,
const u8 qtable[2][64])
static void spca504_acknowledged_command(struct gspca_dev *gspca_dev,
u8 req, u16 idx, u16 val)
static void spca504_read_info(struct gspca_dev *gspca_dev)
static void spca504A_acknowledged_command(struct gspca_dev *gspca_dev,
u8 req,
u16 idx, u16 val, u8 endcode, u8 count)
static void spca504B_PollingDataReady(struct gspca_dev *gspca_dev)
static void spca504B_WaitCmdStatus(struct gspca_dev *gspca_dev)
static void spca50x_GetFirmware(struct gspca_dev *gspca_dev)
static void spca504B_SetSizeType(struct gspca_dev *gspca_dev)
static void spca504_wait_status(struct gspca_dev *gspca_dev)
static void spca504B_setQtable(struct gspca_dev *gspca_dev)
static void setbrightness(struct gspca_dev *gspca_dev)
static void setcontrast(struct gspca_dev *gspca_dev)
static void setcolors(struct gspca_dev *gspca_dev)
static void init_ctl_reg(struct gspca_dev *gspca_dev)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcolors(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcolors(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setautogain(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getautogain(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_set_jcomp(struct gspca_dev *gspca_dev,
struct v4l2_jpegcompression *jcomp)
static int sd_get_jcomp(struct gspca_dev *gspca_dev,
struct v4l2_jpegcompression *jcomp)
static const struct sd_desc sd_desc = ;
#define BS(bridge, subtype) \
.driver_info = (BRIDGE_ ## bridge << 8) \
| (subtype)
static const struct usb_device_id device_table[] = ;
MODULE_DEVICE_TABLE(usb, device_table);
static int sd_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver sd_driver = ;
static int __init sd_mod_init(void)
static void __exit sd_mod_exit(void)
module_init(sd_mod_init);
module_exit(sd_mod_exit);
