#define AK881X_INTERFACE_MODE	0
#define AK881X_VIDEO_PROCESS1	1
#define AK881X_VIDEO_PROCESS2	2
#define AK881X_VIDEO_PROCESS3	3
#define AK881X_DAC_MODE		5
#define AK881X_STATUS		0x24
#define AK881X_DEVICE_ID	0x25
#define AK881X_DEVICE_REVISION	0x26
struct ak881x ;
static int reg_read(struct i2c_client *client, const u8 reg)
static int reg_write(struct i2c_client *client, const u8 reg,
const u8 data)
static int reg_set(struct i2c_client *client, const u8 reg,
const u8 data, u8 mask)
static struct ak881x *to_ak881x(const struct i2c_client *client)
static int ak881x_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *id)
static int ak881x_g_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int ak881x_s_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int ak881x_try_g_mbus_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int ak881x_s_mbus_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int ak881x_enum_mbus_fmt(struct v4l2_subdev *sd, unsigned int index,
enum v4l2_mbus_pixelcode *code)
static int ak881x_cropcap(struct v4l2_subdev *sd, struct v4l2_cropcap *a)
static int ak881x_s_std_output(struct v4l2_subdev *sd, v4l2_std_id std)
static int ak881x_s_stream(struct v4l2_subdev *sd, int enable)
static struct v4l2_subdev_core_ops ak881x_subdev_core_ops = ;
static struct v4l2_subdev_video_ops ak881x_subdev_video_ops = ;
static struct v4l2_subdev_ops ak881x_subdev_ops = ;
static int ak881x_probe(struct i2c_client *client,
const struct i2c_device_id *did)
static int ak881x_remove(struct i2c_client *client)
static const struct i2c_device_id ak881x_id[] = ;
MODULE_DEVICE_TABLE(i2c, ak881x_id);
static struct i2c_driver ak881x_i2c_driver = ;
static int __init ak881x_module_init(void)
static void __exit ak881x_module_exit(void)
module_init(ak881x_module_init);
module_exit(ak881x_module_exit);
MODULE_DESCRIPTION("TV-output driver for ak8813/ak8814");
MODULE_AUTHOR("Guennadi Liakhovetski <g.liakhovetski@gmx.de>");
MODULE_LICENSE("GPL v2");
