#define MODULE_NAME "spca505"
MODULE_AUTHOR("Michel Xhaard <mxhaard@users.sourceforge.net>");
MODULE_DESCRIPTION("GSPCA/SPCA505 USB Camera Driver");
MODULE_LICENSE("GPL");
struct sd ;
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val);
static const struct ctrl sd_ctrls[] = ;
static const struct v4l2_pix_format vga_mode[] = ;
#define SPCA50X_OFFSET_DATA 10
#define SPCA50X_REG_USB 0x02
#define SPCA50X_USB_CTRL 0x00
#define SPCA50X_CUSB_ENABLE 0x01
#define SPCA50X_REG_GLOBAL 0x03
#define SPCA50X_GMISC0_IDSEL 0x01
#define SPCA50X_GLOBAL_MISC0 0x00
#define SPCA50X_GLOBAL_MISC1 0x01
#define SPCA50X_GLOBAL_MISC3 0x03
#define SPCA50X_GMISC3_SAA7113RST 0x20
#define SPCA50X_REG_COMPRESS 0x04
static const u8 spca505_init_data[][3] = ;
static const u8 spca505_open_data_ccd[][3] = ;
#define initial_brightness 0x7f
static const u8 spca505b_init_data[][3] = ;
static const u8 spca505b_open_data_ccd[][3] = ;
static int reg_write(struct usb_device *dev,
u16 req, u16 index, u16 value)
static int reg_read(struct gspca_dev *gspca_dev,
u16 req,
u16 index)
static int write_vector(struct gspca_dev *gspca_dev,
const u8 data[][3])
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static void setbrightness(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void sd_stop0(struct gspca_dev *gspca_dev)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val)
static const struct sd_desc sd_desc = ;
static const struct usb_device_id device_table[] = ;
MODULE_DEVICE_TABLE(usb, device_table);
static int sd_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver sd_driver = ;
static int __init sd_mod_init(void)
static void __exit sd_mod_exit(void)
module_init(sd_mod_init);
module_exit(sd_mod_exit);
