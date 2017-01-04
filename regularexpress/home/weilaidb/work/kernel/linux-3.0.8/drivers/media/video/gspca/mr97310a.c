#define MODULE_NAME "mr97310a"
#define CAM_TYPE_CIF			0
#define CAM_TYPE_VGA			1
#define MR97310A_BRIGHTNESS_DEFAULT	0
#define MR97310A_EXPOSURE_MIN		0
#define MR97310A_EXPOSURE_MAX		4095
#define MR97310A_EXPOSURE_DEFAULT	1000
#define MR97310A_GAIN_MIN		0
#define MR97310A_GAIN_MAX		31
#define MR97310A_GAIN_DEFAULT		25
#define MR97310A_CONTRAST_MIN		0
#define MR97310A_CONTRAST_MAX		31
#define MR97310A_CONTRAST_DEFAULT	23
#define MR97310A_CS_GAIN_MIN		0
#define MR97310A_CS_GAIN_MAX		0x7ff
#define MR97310A_CS_GAIN_DEFAULT	0x110
#define MR97310A_MIN_CLOCKDIV_MIN	3
#define MR97310A_MIN_CLOCKDIV_MAX	8
#define MR97310A_MIN_CLOCKDIV_DEFAULT	3
MODULE_AUTHOR("Kyle Guinn <elyk03@gmail.com>,"
"Theodore Kilgore <kilgota@auburn.edu>");
MODULE_DESCRIPTION("GSPCA/Mars-Semi MR97310A USB Camera Driver");
MODULE_LICENSE("GPL");
static int force_sensor_type = -1;
module_param(force_sensor_type, int, 0644);
MODULE_PARM_DESC(force_sensor_type, "Force sensor type (-1 (auto), 0 or 1)");
struct sd ;
struct sensor_w_data ;
static void sd_stopN(struct gspca_dev *gspca_dev);
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setexposure(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getexposure(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val);
static int sd_setgain(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getgain(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setmin_clockdiv(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getmin_clockdiv(struct gspca_dev *gspca_dev, __s32 *val);
static void setbrightness(struct gspca_dev *gspca_dev);
static void setexposure(struct gspca_dev *gspca_dev);
static void setgain(struct gspca_dev *gspca_dev);
static void setcontrast(struct gspca_dev *gspca_dev);
static const struct ctrl sd_ctrls[] = ;
static const struct v4l2_pix_format vga_mode[] = ;
static int mr_write(struct gspca_dev *gspca_dev, int len)
static int mr_read(struct gspca_dev *gspca_dev, int len)
static int sensor_write_reg(struct gspca_dev *gspca_dev, u8 reg, u8 flags,
const u8 *data, int len)
static int sensor_write_regs(struct gspca_dev *gspca_dev,
const struct sensor_w_data *data, int len)
static int sensor_write1(struct gspca_dev *gspca_dev, u8 reg, u8 data)
static int cam_get_response16(struct gspca_dev *gspca_dev, u8 reg, int verbose)
static int zero_the_pointer(struct gspca_dev *gspca_dev)
static int stream_start(struct gspca_dev *gspca_dev)
static void stream_stop(struct gspca_dev *gspca_dev)
static void lcd_stop(struct gspca_dev *gspca_dev)
static int isoc_enable(struct gspca_dev *gspca_dev)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static int start_cif_cam(struct gspca_dev *gspca_dev)
static int start_vga_cam(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void setbrightness(struct gspca_dev *gspca_dev)
static void setexposure(struct gspca_dev *gspca_dev)
static void setgain(struct gspca_dev *gspca_dev)
static void setcontrast(struct gspca_dev *gspca_dev)
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setexposure(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getexposure(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setgain(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getgain(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setmin_clockdiv(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getmin_clockdiv(struct gspca_dev *gspca_dev, __s32 *val)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
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
