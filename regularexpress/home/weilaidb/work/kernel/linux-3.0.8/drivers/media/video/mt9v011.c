MODULE_DESCRIPTION("Micron mt9v011 sensor driver");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug level (0-2)");
#define R00_MT9V011_CHIP_VERSION	0x00
#define R01_MT9V011_ROWSTART		0x01
#define R02_MT9V011_COLSTART		0x02
#define R03_MT9V011_HEIGHT		0x03
#define R04_MT9V011_WIDTH		0x04
#define R05_MT9V011_HBLANK		0x05
#define R06_MT9V011_VBLANK		0x06
#define R07_MT9V011_OUT_CTRL		0x07
#define R09_MT9V011_SHUTTER_WIDTH	0x09
#define R0A_MT9V011_CLK_SPEED		0x0a
#define R0B_MT9V011_RESTART		0x0b
#define R0C_MT9V011_SHUTTER_DELAY	0x0c
#define R0D_MT9V011_RESET		0x0d
#define R1E_MT9V011_DIGITAL_ZOOM	0x1e
#define R20_MT9V011_READ_MODE		0x20
#define R2B_MT9V011_GREEN_1_GAIN	0x2b
#define R2C_MT9V011_BLUE_GAIN		0x2c
#define R2D_MT9V011_RED_GAIN		0x2d
#define R2E_MT9V011_GREEN_2_GAIN	0x2e
#define R35_MT9V011_GLOBAL_GAIN		0x35
#define RF1_MT9V011_CHIP_ENABLE		0xf1
#define MT9V011_VERSION			0x8232
#define MT9V011_REV_B_VERSION		0x8243
static struct v4l2_queryctrl mt9v011_qctrl[] = ;
struct mt9v011 ;
static inline struct mt9v011 *to_mt9v011(struct v4l2_subdev *sd)
static int mt9v011_read(struct v4l2_subdev *sd, unsigned char addr)
static void mt9v011_write(struct v4l2_subdev *sd, unsigned char addr,
u16 value)
struct i2c_reg_value ;
static const struct i2c_reg_value mt9v011_init_default[] = ;
static void set_balance(struct v4l2_subdev *sd)
static void calc_fps(struct v4l2_subdev *sd, u32 *numerator, u32 *denominator)
static u16 calc_speed(struct v4l2_subdev *sd, u32 numerator, u32 denominator)
static void set_res(struct v4l2_subdev *sd)
;
static void set_read_mode(struct v4l2_subdev *sd)
static int mt9v011_reset(struct v4l2_subdev *sd, u32 val)
;
static int mt9v011_g_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int mt9v011_queryctrl(struct v4l2_subdev *sd, struct v4l2_queryctrl *qc)
static int mt9v011_s_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int mt9v011_enum_mbus_fmt(struct v4l2_subdev *sd, unsigned index,
enum v4l2_mbus_pixelcode *code)
static int mt9v011_try_mbus_fmt(struct v4l2_subdev *sd, struct v4l2_mbus_framefmt *fmt)
static int mt9v011_g_parm(struct v4l2_subdev *sd, struct v4l2_streamparm *parms)
static int mt9v011_s_parm(struct v4l2_subdev *sd, struct v4l2_streamparm *parms)
static int mt9v011_s_mbus_fmt(struct v4l2_subdev *sd, struct v4l2_mbus_framefmt *fmt)
static int mt9v011_g_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int mt9v011_s_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int mt9v011_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *chip)
static const struct v4l2_subdev_core_ops mt9v011_core_ops = ;
static const struct v4l2_subdev_video_ops mt9v011_video_ops = ;
static const struct v4l2_subdev_ops mt9v011_ops = ;
static int mt9v011_probe(struct i2c_client *c,
const struct i2c_device_id *id)
static int mt9v011_remove(struct i2c_client *c)
static const struct i2c_device_id mt9v011_id[] = ;
MODULE_DEVICE_TABLE(i2c, mt9v011_id);
static struct i2c_driver mt9v011_driver = ;
static __init int init_mt9v011(void)
static __exit void exit_mt9v011(void)
module_init(init_mt9v011);
module_exit(exit_mt9v011);
