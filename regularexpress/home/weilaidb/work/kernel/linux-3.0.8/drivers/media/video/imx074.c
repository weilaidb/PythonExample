#define MODE_SELECT			0x0100
#define IMAGE_ORIENTATION		0x0101
#define GROUPED_PARAMETER_HOLD		0x0104
#define COARSE_INTEGRATION_TIME_HI	0x0202
#define COARSE_INTEGRATION_TIME_LO	0x0203
#define ANALOGUE_GAIN_CODE_GLOBAL_HI	0x0204
#define ANALOGUE_GAIN_CODE_GLOBAL_LO	0x0205
#define PRE_PLL_CLK_DIV			0x0305
#define PLL_MULTIPLIER			0x0307
#define PLSTATIM			0x302b
#define VNDMY_ABLMGSHLMT		0x300a
#define Y_OPBADDR_START_DI		0x3014
#define FRAME_LENGTH_LINES_HI		0x0340
#define FRAME_LENGTH_LINES_LO		0x0341
#define LINE_LENGTH_PCK_HI		0x0342
#define LINE_LENGTH_PCK_LO		0x0343
#define YADDR_START			0x0347
#define YADDR_END			0x034b
#define X_OUTPUT_SIZE_MSB		0x034c
#define X_OUTPUT_SIZE_LSB		0x034d
#define Y_OUTPUT_SIZE_MSB		0x034e
#define Y_OUTPUT_SIZE_LSB		0x034f
#define X_EVEN_INC			0x0381
#define X_ODD_INC			0x0383
#define Y_EVEN_INC			0x0385
#define Y_ODD_INC			0x0387
#define HMODEADD			0x3001
#define VMODEADD			0x3016
#define VAPPLINE_START			0x3069
#define VAPPLINE_END			0x306b
#define SHUTTER				0x3086
#define HADDAVE				0x30e8
#define LANESEL				0x3301
#define IMX074_WIDTH			1052
#define IMX074_HEIGHT			780
struct imx074_datafmt ;
struct imx074 ;
static const struct imx074_datafmt imx074_colour_fmts[] = ;
static struct imx074 *to_imx074(const struct i2c_client *client)
static const struct imx074_datafmt *imx074_find_datafmt(enum v4l2_mbus_pixelcode code)
static int reg_write(struct i2c_client *client, const u16 addr, const u8 data)
static int reg_read(struct i2c_client *client, const u16 addr)
static int imx074_try_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int imx074_s_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int imx074_g_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int imx074_g_crop(struct v4l2_subdev *sd, struct v4l2_crop *a)
static int imx074_cropcap(struct v4l2_subdev *sd, struct v4l2_cropcap *a)
static int imx074_enum_fmt(struct v4l2_subdev *sd, unsigned int index,
enum v4l2_mbus_pixelcode *code)
static int imx074_s_stream(struct v4l2_subdev *sd, int enable)
static int imx074_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *id)
static struct v4l2_subdev_video_ops imx074_subdev_video_ops = ;
static struct v4l2_subdev_core_ops imx074_subdev_core_ops = ;
static struct v4l2_subdev_ops imx074_subdev_ops = ;
static unsigned long imx074_query_bus_param(struct soc_camera_device *icd)
static int imx074_set_bus_param(struct soc_camera_device *icd,
unsigned long flags)
static struct soc_camera_ops imx074_ops = ;
static int imx074_video_probe(struct soc_camera_device *icd,
struct i2c_client *client)
static int imx074_probe(struct i2c_client *client,
const struct i2c_device_id *did)
static int imx074_remove(struct i2c_client *client)
static const struct i2c_device_id imx074_id[] = ;
MODULE_DEVICE_TABLE(i2c, imx074_id);
static struct i2c_driver imx074_i2c_driver = ;
static int __init imx074_mod_init(void)
static void __exit imx074_mod_exit(void)
module_init(imx074_mod_init);
module_exit(imx074_mod_exit);
MODULE_DESCRIPTION("Sony IMX074 Camera driver");
MODULE_AUTHOR("Guennadi Liakhovetski <g.liakhovetski@gmx.de>");
MODULE_LICENSE("GPL v2");
