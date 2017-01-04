#define MT9M001_CHIP_VERSION		0x00
#define MT9M001_ROW_START		0x01
#define MT9M001_COLUMN_START		0x02
#define MT9M001_WINDOW_HEIGHT		0x03
#define MT9M001_WINDOW_WIDTH		0x04
#define MT9M001_HORIZONTAL_BLANKING	0x05
#define MT9M001_VERTICAL_BLANKING	0x06
#define MT9M001_OUTPUT_CONTROL		0x07
#define MT9M001_SHUTTER_WIDTH		0x09
#define MT9M001_FRAME_RESTART		0x0b
#define MT9M001_SHUTTER_DELAY		0x0c
#define MT9M001_RESET			0x0d
#define MT9M001_READ_OPTIONS1		0x1e
#define MT9M001_READ_OPTIONS2		0x20
#define MT9M001_GLOBAL_GAIN		0x35
#define MT9M001_CHIP_ENABLE		0xF1
#define MT9M001_MAX_WIDTH		1280
#define MT9M001_MAX_HEIGHT		1024
#define MT9M001_MIN_WIDTH		48
#define MT9M001_MIN_HEIGHT		32
#define MT9M001_COLUMN_SKIP		20
#define MT9M001_ROW_SKIP		12
struct mt9m001_datafmt ;
static const struct mt9m001_datafmt *mt9m001_find_datafmt(
enum v4l2_mbus_pixelcode code, const struct mt9m001_datafmt *fmt,
int n)
static const struct mt9m001_datafmt mt9m001_colour_fmts[] = ;
static const struct mt9m001_datafmt mt9m001_monochrome_fmts[] = ;
struct mt9m001 ;
static struct mt9m001 *to_mt9m001(const struct i2c_client *client)
static int reg_read(struct i2c_client *client, const u8 reg)
static int reg_write(struct i2c_client *client, const u8 reg,
const u16 data)
static int reg_set(struct i2c_client *client, const u8 reg,
const u16 data)
static int reg_clear(struct i2c_client *client, const u8 reg,
const u16 data)
static int mt9m001_init(struct i2c_client *client)
static int mt9m001_s_stream(struct v4l2_subdev *sd, int enable)
static int mt9m001_set_bus_param(struct soc_camera_device *icd,
unsigned long flags)
static unsigned long mt9m001_query_bus_param(struct soc_camera_device *icd)
static int mt9m001_s_crop(struct v4l2_subdev *sd, struct v4l2_crop *a)
static int mt9m001_g_crop(struct v4l2_subdev *sd, struct v4l2_crop *a)
static int mt9m001_cropcap(struct v4l2_subdev *sd, struct v4l2_cropcap *a)
static int mt9m001_g_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int mt9m001_s_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int mt9m001_try_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int mt9m001_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *id)
static int mt9m001_g_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int mt9m001_s_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static const struct v4l2_queryctrl mt9m001_controls[] = ;
static struct soc_camera_ops mt9m001_ops = ;
static int mt9m001_g_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int mt9m001_s_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int mt9m001_video_probe(struct soc_camera_device *icd,
struct i2c_client *client)
static void mt9m001_video_remove(struct soc_camera_device *icd)
static int mt9m001_g_skip_top_lines(struct v4l2_subdev *sd, u32 *lines)
static struct v4l2_subdev_core_ops mt9m001_subdev_core_ops = ;
static int mt9m001_enum_fmt(struct v4l2_subdev *sd, unsigned int index,
enum v4l2_mbus_pixelcode *code)
static struct v4l2_subdev_video_ops mt9m001_subdev_video_ops = ;
static struct v4l2_subdev_sensor_ops mt9m001_subdev_sensor_ops = ;
static struct v4l2_subdev_ops mt9m001_subdev_ops = ;
static int mt9m001_probe(struct i2c_client *client,
const struct i2c_device_id *did)
static int mt9m001_remove(struct i2c_client *client)
static const struct i2c_device_id mt9m001_id[] = ;
MODULE_DEVICE_TABLE(i2c, mt9m001_id);
static struct i2c_driver mt9m001_i2c_driver = ;
static int __init mt9m001_mod_init(void)
static void __exit mt9m001_mod_exit(void)
module_init(mt9m001_mod_init);
module_exit(mt9m001_mod_exit);
MODULE_DESCRIPTION("Micron MT9M001 Camera driver");
MODULE_AUTHOR("Guennadi Liakhovetski <kernel@pengutronix.de>");
MODULE_LICENSE("GPL");
