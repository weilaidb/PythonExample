MODULE_AUTHOR("Brian Johnson <brijohn@gmail.com>, "
"microdia project <microdia@googlegroups.com>");
MODULE_DESCRIPTION("GSPCA/SN9C20X USB Camera Driver");
MODULE_LICENSE("GPL");
#define MODULE_NAME "sn9c20x"
#define SCALE_MASK	0x0f
#define SCALE_160x120	0
#define SCALE_320x240	1
#define SCALE_640x480	2
#define SCALE_1280x1024	3
#define MODE_RAW	0x10
#define MODE_JPEG	0x20
#define MODE_SXGA	0x80
#define SENSOR_OV9650	0
#define SENSOR_OV9655	1
#define SENSOR_SOI968	2
#define SENSOR_OV7660	3
#define SENSOR_OV7670	4
#define SENSOR_MT9V011	5
#define SENSOR_MT9V111	6
#define SENSOR_MT9V112	7
#define SENSOR_MT9M001	8
#define SENSOR_MT9M111	9
#define SENSOR_MT9M112  10
#define SENSOR_HV7131R	11
#define SENSOR_MT9VPRB	20
#define HAS_NO_BUTTON	0x1
#define LED_REVERSE	0x2
#define FLIP_DETECT	0x4
struct sd ;
struct i2c_reg_u8 ;
struct i2c_reg_u16 ;
static int sd_setbrightness(struct gspca_dev *gspca_dev, s32 val);
static int sd_getbrightness(struct gspca_dev *gspca_dev, s32 *val);
static int sd_setcontrast(struct gspca_dev *gspca_dev, s32 val);
static int sd_getcontrast(struct gspca_dev *gspca_dev, s32 *val);
static int sd_setsaturation(struct gspca_dev *gspca_dev, s32 val);
static int sd_getsaturation(struct gspca_dev *gspca_dev, s32 *val);
static int sd_sethue(struct gspca_dev *gspca_dev, s32 val);
static int sd_gethue(struct gspca_dev *gspca_dev, s32 *val);
static int sd_setgamma(struct gspca_dev *gspca_dev, s32 val);
static int sd_getgamma(struct gspca_dev *gspca_dev, s32 *val);
static int sd_setredbalance(struct gspca_dev *gspca_dev, s32 val);
static int sd_getredbalance(struct gspca_dev *gspca_dev, s32 *val);
static int sd_setbluebalance(struct gspca_dev *gspca_dev, s32 val);
static int sd_getbluebalance(struct gspca_dev *gspca_dev, s32 *val);
static int sd_setvflip(struct gspca_dev *gspca_dev, s32 val);
static int sd_getvflip(struct gspca_dev *gspca_dev, s32 *val);
static int sd_sethflip(struct gspca_dev *gspca_dev, s32 val);
static int sd_gethflip(struct gspca_dev *gspca_dev, s32 *val);
static int sd_setgain(struct gspca_dev *gspca_dev, s32 val);
static int sd_getgain(struct gspca_dev *gspca_dev, s32 *val);
static int sd_setexposure(struct gspca_dev *gspca_dev, s32 val);
static int sd_getexposure(struct gspca_dev *gspca_dev, s32 *val);
static int sd_setautoexposure(struct gspca_dev *gspca_dev, s32 val);
static int sd_getautoexposure(struct gspca_dev *gspca_dev, s32 *val);
static const struct dmi_system_id flip_dmi_table[] = ;
static const struct ctrl sd_ctrls[] = ;
static const struct v4l2_pix_format vga_mode[] = ;
static const struct v4l2_pix_format sxga_mode[] = ;
static const struct v4l2_pix_format mono_mode[] = ;
static const s16 hsv_red_x[] = ;
static const s16 hsv_red_y[] = ;
static const s16 hsv_green_x[] = ;
static const s16 hsv_green_y[] = ;
static const s16 hsv_blue_x[] = ;
static const s16 hsv_blue_y[] = ;
static u16 i2c_ident[] = ;
static u16 bridge_init[][2] = ;
static u8 ov_gain[] = ;
static u16 micron1_gain[] = ;
static u16 micron2_gain[] = ;
static u8 hv7131r_gain[] = ;
static struct i2c_reg_u8 soi968_init[] = ;
static struct i2c_reg_u8 ov7660_init[] = ;
static struct i2c_reg_u8 ov7670_init[] = ;
static struct i2c_reg_u8 ov9650_init[] = ;
static struct i2c_reg_u8 ov9655_init[] = ;
static struct i2c_reg_u16 mt9v112_init[] = ;
static struct i2c_reg_u16 mt9v111_init[] = ;
static struct i2c_reg_u16 mt9v011_init[] = ;
static struct i2c_reg_u16 mt9m001_init[] = ;
static struct i2c_reg_u16 mt9m111_init[] = ;
static struct i2c_reg_u16 mt9m112_init[] = ;
static struct i2c_reg_u8 hv7131r_init[] = ;
static int reg_r(struct gspca_dev *gspca_dev, u16 reg, u16 length)
static int reg_w(struct gspca_dev *gspca_dev, u16 reg,
const u8 *buffer, int length)
static int reg_w1(struct gspca_dev *gspca_dev, u16 reg, const u8 value)
static int i2c_w(struct gspca_dev *gspca_dev, const u8 *buffer)
static int i2c_w1(struct gspca_dev *gspca_dev, u8 reg, u8 val)
static int i2c_w2(struct gspca_dev *gspca_dev, u8 reg, u16 val)
static int i2c_r1(struct gspca_dev *gspca_dev, u8 reg, u8 *val)
static int i2c_r2(struct gspca_dev *gspca_dev, u8 reg, u16 *val)
static int ov9650_init_sensor(struct gspca_dev *gspca_dev)
static int ov9655_init_sensor(struct gspca_dev *gspca_dev)
static int soi968_init_sensor(struct gspca_dev *gspca_dev)
static int ov7660_init_sensor(struct gspca_dev *gspca_dev)
static int ov7670_init_sensor(struct gspca_dev *gspca_dev)
static int mt9v_init_sensor(struct gspca_dev *gspca_dev)
static int mt9m112_init_sensor(struct gspca_dev *gspca_dev)
static int mt9m111_init_sensor(struct gspca_dev *gspca_dev)
static int mt9m001_init_sensor(struct gspca_dev *gspca_dev)
static int hv7131r_init_sensor(struct gspca_dev *gspca_dev)
static int set_cmatrix(struct gspca_dev *gspca_dev)
static int set_gamma(struct gspca_dev *gspca_dev)
static int set_redblue(struct gspca_dev *gspca_dev)
static int set_hvflip(struct gspca_dev *gspca_dev)
static int set_exposure(struct gspca_dev *gspca_dev)
static int set_gain(struct gspca_dev *gspca_dev)
static int sd_setbrightness(struct gspca_dev *gspca_dev, s32 val)
static int sd_getbrightness(struct gspca_dev *gspca_dev, s32 *val)
static int sd_setcontrast(struct gspca_dev *gspca_dev, s32 val)
static int sd_getcontrast(struct gspca_dev *gspca_dev, s32 *val)
static int sd_setsaturation(struct gspca_dev *gspca_dev, s32 val)
static int sd_getsaturation(struct gspca_dev *gspca_dev, s32 *val)
static int sd_sethue(struct gspca_dev *gspca_dev, s32 val)
static int sd_gethue(struct gspca_dev *gspca_dev, s32 *val)
static int sd_setgamma(struct gspca_dev *gspca_dev, s32 val)
static int sd_getgamma(struct gspca_dev *gspca_dev, s32 *val)
static int sd_setredbalance(struct gspca_dev *gspca_dev, s32 val)
static int sd_getredbalance(struct gspca_dev *gspca_dev, s32 *val)
static int sd_setbluebalance(struct gspca_dev *gspca_dev, s32 val)
static int sd_getbluebalance(struct gspca_dev *gspca_dev, s32 *val)
static int sd_sethflip(struct gspca_dev *gspca_dev, s32 val)
static int sd_gethflip(struct gspca_dev *gspca_dev, s32 *val)
static int sd_setvflip(struct gspca_dev *gspca_dev, s32 val)
static int sd_getvflip(struct gspca_dev *gspca_dev, s32 *val)
static int sd_setexposure(struct gspca_dev *gspca_dev, s32 val)
static int sd_getexposure(struct gspca_dev *gspca_dev, s32 *val)
static int sd_setgain(struct gspca_dev *gspca_dev, s32 val)
static int sd_getgain(struct gspca_dev *gspca_dev, s32 *val)
static int sd_setautoexposure(struct gspca_dev *gspca_dev, s32 val)
static int sd_getautoexposure(struct gspca_dev *gspca_dev, s32 *val)
static int sd_dbg_g_register(struct gspca_dev *gspca_dev,
struct v4l2_dbg_register *reg)
static int sd_dbg_s_register(struct gspca_dev *gspca_dev,
struct v4l2_dbg_register *reg)
static int sd_chip_ident(struct gspca_dev *gspca_dev,
struct v4l2_dbg_chip_ident *chip)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static void configure_sensor_output(struct gspca_dev *gspca_dev, int mode)
#define HW_WIN(mode, hstart, vstart) \
((const u8 []))
#define CLR_WIN(width, height) \
((const u8 [])\
)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void do_autoexposure(struct gspca_dev *gspca_dev, u16 avg_lum)
static void do_autogain(struct gspca_dev *gspca_dev, u16 avg_lum)
static void sd_dqcallback(struct gspca_dev *gspca_dev)
#if defined(CONFIG_INPUT) || defined(CONFIG_INPUT_MODULE)
static int sd_int_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static const struct sd_desc sd_desc = ;
#define SN9C20X(sensor, i2c_addr, flags) \
.driver_info =  ((flags & 0xff) << 16) \
| (SENSOR_ ## sensor << 8) \
| (i2c_addr)
static const struct usb_device_id device_table[] = ;
MODULE_DEVICE_TABLE(usb, device_table);
static int sd_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver sd_driver = ;
static int __init sd_mod_init(void)
static void __exit sd_mod_exit(void)
module_init(sd_mod_init);
module_exit(sd_mod_exit);
