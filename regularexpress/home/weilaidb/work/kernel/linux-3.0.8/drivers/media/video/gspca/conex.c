#define MODULE_NAME "conex"
#define CONEX_CAM 1
MODULE_AUTHOR("Michel Xhaard <mxhaard@users.sourceforge.net>");
MODULE_DESCRIPTION("GSPCA USB Conexant Camera Driver");
MODULE_LICENSE("GPL");
struct sd ;
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcolors(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcolors(struct gspca_dev *gspca_dev, __s32 *val);
static const struct ctrl sd_ctrls[] = ;
static const struct v4l2_pix_format vga_mode[] = ;
static void reg_r(struct gspca_dev *gspca_dev,
__u16 index,
__u16 len)
static void reg_w_val(struct gspca_dev *gspca_dev,
__u16 index,
__u8 val)
static void reg_w(struct gspca_dev *gspca_dev,
__u16 index,
const __u8 *buffer,
__u16 len)
static const __u8 cx_sensor_init[][4] = ;
static const __u8 cx11646_fw1[][3] = ;
static void cx11646_fw(struct gspca_dev*gspca_dev)
static const __u8 cxsensor[] = ;
static const __u8 reg20[] = ;
static const __u8 reg28[] = ;
static const __u8 reg10[] = ;
static const __u8 reg71a[] = ;
static const __u8 reg71b[] = ;
static const __u8 reg7b[] = ;
static void cx_sensor(struct gspca_dev*gspca_dev)
static const __u8 cx_inits_176[] = ;
static const __u8 cx_inits_320[] = ;
static const __u8 cx_inits_352[] = ;
static const __u8 cx_inits_640[] = ;
static void cx11646_initsize(struct gspca_dev *gspca_dev)
static const __u8 cx_jpeg_init[][8] = ;
static const __u8 cxjpeg_640[][8] = ;
static const __u8 cxjpeg_352[][8] = ;
static const __u8 cxjpeg_320[][8] = ;
static const __u8 cxjpeg_176[][8] = ;
static const __u8 cxjpeg_qtable[][8] = ;
static void cx11646_jpegInit(struct gspca_dev*gspca_dev)
static const __u8 reg12[] = ;
static const __u8 regE5_8[] =
;
static const __u8 regE5a[] = ;
static const __u8 regE5b[] = ;
static const __u8 regE5c[] = ;
static const __u8 reg51[] = ;
#define reg70 0x03
static void cx11646_jpeg(struct gspca_dev*gspca_dev)
static void cx11646_init1(struct gspca_dev *gspca_dev)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stop0(struct gspca_dev *gspca_dev)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static void setbrightness(struct gspca_dev *gspca_dev)
static void setcontrast(struct gspca_dev *gspca_dev)
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcolors(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcolors(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_set_jcomp(struct gspca_dev *gspca_dev,
struct v4l2_jpegcompression *jcomp)
static int sd_get_jcomp(struct gspca_dev *gspca_dev,
struct v4l2_jpegcompression *jcomp)
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
