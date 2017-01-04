#define MT9T031_CHIP_VERSION		0x00
#define MT9T031_ROW_START		0x01
#define MT9T031_COLUMN_START		0x02
#define MT9T031_WINDOW_HEIGHT		0x03
#define MT9T031_WINDOW_WIDTH		0x04
#define MT9T031_HORIZONTAL_BLANKING	0x05
#define MT9T031_VERTICAL_BLANKING	0x06
#define MT9T031_OUTPUT_CONTROL		0x07
#define MT9T031_SHUTTER_WIDTH_UPPER	0x08
#define MT9T031_SHUTTER_WIDTH		0x09
#define MT9T031_PIXEL_CLOCK_CONTROL	0x0a
#define MT9T031_FRAME_RESTART		0x0b
#define MT9T031_SHUTTER_DELAY		0x0c
#define MT9T031_RESET			0x0d
#define MT9T031_READ_MODE_1		0x1e
#define MT9T031_READ_MODE_2		0x20
#define MT9T031_READ_MODE_3		0x21
#define MT9T031_ROW_ADDRESS_MODE	0x22
#define MT9T031_COLUMN_ADDRESS_MODE	0x23
#define MT9T031_GLOBAL_GAIN		0x35
#define MT9T031_CHIP_ENABLE		0xF8
#define MT9T031_MAX_HEIGHT		1536
#define MT9T031_MAX_WIDTH		2048
#define MT9T031_MIN_HEIGHT		2
#define MT9T031_MIN_WIDTH		18
#define MT9T031_HORIZONTAL_BLANK	142
#define MT9T031_VERTICAL_BLANK		25
#define MT9T031_COLUMN_SKIP		32
#define MT9T031_ROW_SKIP		20
#define MT9T031_BUS_PARAM	(SOCAM_PCLK_SAMPLE_RISING |	\
SOCAM_PCLK_SAMPLE_FALLING | SOCAM_HSYNC_ACTIVE_HIGH |	\
SOCAM_VSYNC_ACTIVE_HIGH | SOCAM_DATA_ACTIVE_HIGH |	\
SOCAM_MASTER | SOCAM_DATAWIDTH_10)
struct mt9t031 ;
static struct mt9t031 *to_mt9t031(const struct i2c_client *client)
static int reg_read(struct i2c_client *client, const u8 reg)
static int reg_write(struct i2c_client *client, const u8 reg,
const u16 data)
static int reg_set(struct i2c_client *client, const u8 reg,
const u16 data)
static int reg_clear(struct i2c_client *client, const u8 reg,
const u16 data)
static int set_shutter(struct i2c_client *client, const u32 data)
static int get_shutter(struct i2c_client *client, u32 *data)
static int mt9t031_idle(struct i2c_client *client)
static int mt9t031_disable(struct i2c_client *client)
static int mt9t031_s_stream(struct v4l2_subdev *sd, int enable)
static int mt9t031_set_bus_param(struct soc_camera_device *icd,
unsigned long flags)
static unsigned long mt9t031_query_bus_param(struct soc_camera_device *icd)
enum ;
static const struct v4l2_queryctrl mt9t031_controls[] = ;
static struct soc_camera_ops mt9t031_ops = ;
static u16 mt9t031_skip(s32 *source, s32 target, s32 max)
static int mt9t031_set_params(struct i2c_client *client,
struct v4l2_rect *rect, u16 xskip, u16 yskip)
static int mt9t031_s_crop(struct v4l2_subdev *sd, struct v4l2_crop *a)
static int mt9t031_g_crop(struct v4l2_subdev *sd, struct v4l2_crop *a)
static int mt9t031_cropcap(struct v4l2_subdev *sd, struct v4l2_cropcap *a)
static int mt9t031_g_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int mt9t031_s_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int mt9t031_try_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int mt9t031_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *id)
static int mt9t031_g_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int mt9t031_s_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int mt9t031_g_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int mt9t031_s_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int mt9t031_runtime_suspend(struct device *dev)
static int mt9t031_runtime_resume(struct device *dev)
static struct dev_pm_ops mt9t031_dev_pm_ops = ;
static struct device_type mt9t031_dev_type = ;
static int mt9t031_video_probe(struct i2c_client *client)
static int mt9t031_g_skip_top_lines(struct v4l2_subdev *sd, u32 *lines)
static struct v4l2_subdev_core_ops mt9t031_subdev_core_ops = ;
static int mt9t031_enum_fmt(struct v4l2_subdev *sd, unsigned int index,
enum v4l2_mbus_pixelcode *code)
static struct v4l2_subdev_video_ops mt9t031_subdev_video_ops = ;
static struct v4l2_subdev_sensor_ops mt9t031_subdev_sensor_ops = ;
static struct v4l2_subdev_ops mt9t031_subdev_ops = ;
static int mt9t031_probe(struct i2c_client *client,
const struct i2c_device_id *did)
static int mt9t031_remove(struct i2c_client *client)
static const struct i2c_device_id mt9t031_id[] = ;
MODULE_DEVICE_TABLE(i2c, mt9t031_id);
static struct i2c_driver mt9t031_i2c_driver = ;
static int __init mt9t031_mod_init(void)
static void __exit mt9t031_mod_exit(void)
module_init(mt9t031_mod_init);
module_exit(mt9t031_mod_exit);
MODULE_DESCRIPTION("Micron MT9T031 Camera driver");
MODULE_AUTHOR("Guennadi Liakhovetski <lg@denx.de>");
MODULE_LICENSE("GPL v2");
