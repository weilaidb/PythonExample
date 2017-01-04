#define MODULE_NAME "spca506"
MODULE_AUTHOR("Michel Xhaard <mxhaard@users.sourceforge.net>");
MODULE_DESCRIPTION("GSPCA/SPCA506 USB Camera Driver");
MODULE_LICENSE("GPL");
struct sd ;
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcolors(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcolors(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_sethue(struct gspca_dev *gspca_dev, __s32 val);
static int sd_gethue(struct gspca_dev *gspca_dev, __s32 *val);
static const struct ctrl sd_ctrls[] = ;
static const struct v4l2_pix_format vga_mode[] = ;
#define SPCA50X_OFFSET_DATA 10
#define SAA7113_bright 0x0a
#define SAA7113_contrast 0x0b
#define SAA7113_saturation 0x0c
#define SAA7113_hue 0x0d
#define SAA7113_I2C_BASE_WRITE 0x4a
static void reg_r(struct gspca_dev *gspca_dev,
__u16 req,
__u16 index,
__u16 length)
static void reg_w(struct usb_device *dev,
__u16 req,
__u16 value,
__u16 index)
static void spca506_Initi2c(struct gspca_dev *gspca_dev)
static void spca506_WriteI2c(struct gspca_dev *gspca_dev, __u16 valeur,
__u16 reg)
static void spca506_SetNormeInput(struct gspca_dev *gspca_dev,
__u16 norme,
__u16 channel)
static void spca506_GetNormeInput(struct gspca_dev *gspca_dev,
__u16 *norme, __u16 *channel)
static void spca506_Setsize(struct gspca_dev *gspca_dev, __u16 code,
__u16 xmult, __u16 ymult)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static void setbrightness(struct gspca_dev *gspca_dev)
static void setcontrast(struct gspca_dev *gspca_dev)
static void setcolors(struct gspca_dev *gspca_dev)
static void sethue(struct gspca_dev *gspca_dev)
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcolors(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcolors(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_sethue(struct gspca_dev *gspca_dev, __s32 val)
static int sd_gethue(struct gspca_dev *gspca_dev, __s32 *val)
static const struct sd_desc sd_desc = ;
static const struct usb_device_id device_table[] __devinitconst = ;
MODULE_DEVICE_TABLE(usb, device_table);
static int __devinit sd_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver sd_driver = ;
static int __init sd_mod_init(void)
static void __exit sd_mod_exit(void)
module_init(sd_mod_init);
module_exit(sd_mod_exit);
