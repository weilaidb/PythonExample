#define MAX_WIDTH   2048
#define MAX_HEIGHT  1536
#define VGA_WIDTH   640
#define VGA_HEIGHT  480
#define ECHECKER(ret, x)		\
do  while (0)
#define mt9t112_reg_write(ret, client, a, b) \
ECHECKER(ret, __mt9t112_reg_write(client, a, b))
#define mt9t112_mcu_write(ret, client, a, b) \
ECHECKER(ret, __mt9t112_mcu_write(client, a, b))
#define mt9t112_reg_mask_set(ret, client, a, b, c) \
ECHECKER(ret, __mt9t112_reg_mask_set(client, a, b, c))
#define mt9t112_mcu_mask_set(ret, client, a, b, c) \
ECHECKER(ret, __mt9t112_mcu_mask_set(client, a, b, c))
#define mt9t112_reg_read(ret, client, a) \
ECHECKER(ret, __mt9t112_reg_read(client, a))
#define _VAR(id, offset, base)	(base | (id & 0x1f) << 10 | (offset & 0x3ff))
#define VAR(id, offset)  _VAR(id, offset, 0x0000)
#define VAR8(id, offset) _VAR(id, offset, 0x8000)
struct mt9t112_frame_size ;
struct mt9t112_format ;
struct mt9t112_priv ;
static const struct mt9t112_format mt9t112_cfmts[] = ;
static struct mt9t112_priv *to_mt9t112(const struct i2c_client *client)
static int __mt9t112_reg_read(const struct i2c_client *client, u16 command)
static int __mt9t112_reg_write(const struct i2c_client *client,
u16 command, u16 data)
static int __mt9t112_reg_mask_set(const struct i2c_client *client,
u16  command,
u16  mask,
u16  set)
static int __mt9t112_mcu_read(const struct i2c_client *client, u16 command)
static int __mt9t112_mcu_write(const struct i2c_client *client,
u16 command, u16 data)
static int __mt9t112_mcu_mask_set(const struct i2c_client *client,
u16  command,
u16  mask,
u16  set)
static int mt9t112_reset(const struct i2c_client *client)
#define CLOCK_INFO(a, b)
#define CLOCK_INFO(a, b) mt9t112_clock_info(a, b)
static int mt9t112_clock_info(const struct i2c_client *client, u32 ext)
static void mt9t112_frame_check(u32 *width, u32 *height)
static int mt9t112_set_a_frame_size(const struct i2c_client *client,
u16 width,
u16 height)
static int mt9t112_set_pll_dividers(const struct i2c_client *client,
u8 m, u8 n,
u8 p1, u8 p2, u8 p3,
u8 p4, u8 p5, u8 p6,
u8 p7)
static int mt9t112_init_pll(const struct i2c_client *client)
static int mt9t112_init_setting(const struct i2c_client *client)
static int mt9t112_auto_focus_setting(const struct i2c_client *client)
static int mt9t112_auto_focus_trigger(const struct i2c_client *client)
static int mt9t112_init_camera(const struct i2c_client *client)
static int mt9t112_set_bus_param(struct soc_camera_device *icd,
unsigned long	flags)
static unsigned long mt9t112_query_bus_param(struct soc_camera_device *icd)
static struct soc_camera_ops mt9t112_ops = ;
static int mt9t112_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *id)
static int mt9t112_g_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int mt9t112_s_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static struct v4l2_subdev_core_ops mt9t112_subdev_core_ops = ;
static int mt9t112_s_stream(struct v4l2_subdev *sd, int enable)
static int mt9t112_set_params(struct i2c_client *client, u32 width, u32 height,
enum v4l2_mbus_pixelcode code)
static int mt9t112_cropcap(struct v4l2_subdev *sd, struct v4l2_cropcap *a)
static int mt9t112_g_crop(struct v4l2_subdev *sd, struct v4l2_crop *a)
static int mt9t112_s_crop(struct v4l2_subdev *sd, struct v4l2_crop *a)
static int mt9t112_g_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int mt9t112_s_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int mt9t112_try_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int mt9t112_enum_fmt(struct v4l2_subdev *sd, unsigned int index,
enum v4l2_mbus_pixelcode *code)
static struct v4l2_subdev_video_ops mt9t112_subdev_video_ops = ;
static struct v4l2_subdev_ops mt9t112_subdev_ops = ;
static int mt9t112_camera_probe(struct soc_camera_device *icd,
struct i2c_client *client)
static int mt9t112_probe(struct i2c_client *client,
const struct i2c_device_id *did)
static int mt9t112_remove(struct i2c_client *client)
static const struct i2c_device_id mt9t112_id[] = ;
MODULE_DEVICE_TABLE(i2c, mt9t112_id);
static struct i2c_driver mt9t112_i2c_driver = ;
static int __init mt9t112_module_init(void)
static void __exit mt9t112_module_exit(void)
module_init(mt9t112_module_init);
module_exit(mt9t112_module_exit);
MODULE_DESCRIPTION("SoC Camera driver for mt9t112");
MODULE_AUTHOR("Kuninori Morimoto");
MODULE_LICENSE("GPL v2");
