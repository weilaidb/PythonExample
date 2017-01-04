static char *sensor_type;
module_param(sensor_type, charp, S_IRUGO);
MODULE_PARM_DESC(sensor_type, "Sensor type: \"colour\" or \"monochrome\"");
#define MT9V022_CHIP_VERSION		0x00
#define MT9V022_COLUMN_START		0x01
#define MT9V022_ROW_START		0x02
#define MT9V022_WINDOW_HEIGHT		0x03
#define MT9V022_WINDOW_WIDTH		0x04
#define MT9V022_HORIZONTAL_BLANKING	0x05
#define MT9V022_VERTICAL_BLANKING	0x06
#define MT9V022_CHIP_CONTROL		0x07
#define MT9V022_SHUTTER_WIDTH1		0x08
#define MT9V022_SHUTTER_WIDTH2		0x09
#define MT9V022_SHUTTER_WIDTH_CTRL	0x0a
#define MT9V022_TOTAL_SHUTTER_WIDTH	0x0b
#define MT9V022_RESET			0x0c
#define MT9V022_READ_MODE		0x0d
#define MT9V022_MONITOR_MODE		0x0e
#define MT9V022_PIXEL_OPERATION_MODE	0x0f
#define MT9V022_LED_OUT_CONTROL		0x1b
#define MT9V022_ADC_MODE_CONTROL	0x1c
#define MT9V022_ANALOG_GAIN		0x35
#define MT9V022_BLACK_LEVEL_CALIB_CTRL	0x47
#define MT9V022_PIXCLK_FV_LV		0x74
#define MT9V022_DIGITAL_TEST_PATTERN	0x7f
#define MT9V022_AEC_AGC_ENABLE		0xAF
#define MT9V022_MAX_TOTAL_SHUTTER_WIDTH	0xBD
#define MT9V022_CHIP_CONTROL_DEFAULT	0x188
#define MT9V022_MAX_WIDTH		752
#define MT9V022_MAX_HEIGHT		480
#define MT9V022_MIN_WIDTH		48
#define MT9V022_MIN_HEIGHT		32
#define MT9V022_COLUMN_SKIP		1
#define MT9V022_ROW_SKIP		4
struct mt9v022_datafmt ;
static const struct mt9v022_datafmt *mt9v022_find_datafmt(
enum v4l2_mbus_pixelcode code, const struct mt9v022_datafmt *fmt,
int n)
static const struct mt9v022_datafmt mt9v022_colour_fmts[] = ;
static const struct mt9v022_datafmt mt9v022_monochrome_fmts[] = ;
struct mt9v022 ;
static struct mt9v022 *to_mt9v022(const struct i2c_client *client)
static int reg_read(struct i2c_client *client, const u8 reg)
static int reg_write(struct i2c_client *client, const u8 reg,
const u16 data)
static int reg_set(struct i2c_client *client, const u8 reg,
const u16 data)
static int reg_clear(struct i2c_client *client, const u8 reg,
const u16 data)
static int mt9v022_init(struct i2c_client *client)
static int mt9v022_s_stream(struct v4l2_subdev *sd, int enable)
static int mt9v022_set_bus_param(struct soc_camera_device *icd,
unsigned long flags)
static unsigned long mt9v022_query_bus_param(struct soc_camera_device *icd)
static int mt9v022_s_crop(struct v4l2_subdev *sd, struct v4l2_crop *a)
static int mt9v022_g_crop(struct v4l2_subdev *sd, struct v4l2_crop *a)
static int mt9v022_cropcap(struct v4l2_subdev *sd, struct v4l2_cropcap *a)
static int mt9v022_g_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int mt9v022_s_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int mt9v022_try_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int mt9v022_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *id)
static int mt9v022_g_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int mt9v022_s_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static const struct v4l2_queryctrl mt9v022_controls[] = ;
static struct soc_camera_ops mt9v022_ops = ;
static int mt9v022_g_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int mt9v022_s_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int mt9v022_video_probe(struct soc_camera_device *icd,
struct i2c_client *client)
static void mt9v022_video_remove(struct soc_camera_device *icd)
static int mt9v022_g_skip_top_lines(struct v4l2_subdev *sd, u32 *lines)
static struct v4l2_subdev_core_ops mt9v022_subdev_core_ops = ;
static int mt9v022_enum_fmt(struct v4l2_subdev *sd, unsigned int index,
enum v4l2_mbus_pixelcode *code)
static struct v4l2_subdev_video_ops mt9v022_subdev_video_ops = ;
static struct v4l2_subdev_sensor_ops mt9v022_subdev_sensor_ops = ;
static struct v4l2_subdev_ops mt9v022_subdev_ops = ;
static int mt9v022_probe(struct i2c_client *client,
const struct i2c_device_id *did)
static int mt9v022_remove(struct i2c_client *client)
static const struct i2c_device_id mt9v022_id[] = ;
MODULE_DEVICE_TABLE(i2c, mt9v022_id);
static struct i2c_driver mt9v022_i2c_driver = ;
static int __init mt9v022_mod_init(void)
static void __exit mt9v022_mod_exit(void)
module_init(mt9v022_mod_init);
module_exit(mt9v022_mod_exit);
MODULE_DESCRIPTION("Micron MT9V022 Camera driver");
MODULE_AUTHOR("Guennadi Liakhovetski <kernel@pengutronix.de>");
MODULE_LICENSE("GPL");
