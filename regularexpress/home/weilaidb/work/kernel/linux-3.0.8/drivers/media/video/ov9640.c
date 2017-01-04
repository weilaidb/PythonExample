#define to_ov9640_sensor(sd)	container_of(sd, struct ov9640_priv, subdev)
static const struct ov9640_reg ov9640_regs_dflt[] = ;
static const struct ov9640_reg ov9640_regs_qqcif[] = ;
static const struct ov9640_reg ov9640_regs_qqvga[] = ;
static const struct ov9640_reg ov9640_regs_qcif[] = ;
static const struct ov9640_reg ov9640_regs_qvga[] = ;
static const struct ov9640_reg ov9640_regs_cif[] = ;
static const struct ov9640_reg ov9640_regs_vga[] = ;
static const struct ov9640_reg ov9640_regs_sxga[] = ;
static const struct ov9640_reg ov9640_regs_yuv[] = ;
static const struct ov9640_reg ov9640_regs_rgb[] = ;
static enum v4l2_mbus_pixelcode ov9640_codes[] = ;
static const struct v4l2_queryctrl ov9640_controls[] = ;
static int ov9640_reg_read(struct i2c_client *client, u8 reg, u8 *val)
static int ov9640_reg_write(struct i2c_client *client, u8 reg, u8 val)
static int ov9640_reg_rmw(struct i2c_client *client, u8 reg, u8 set, u8 unset)
static int ov9640_reset(struct i2c_client *client)
static int ov9640_s_stream(struct v4l2_subdev *sd, int enable)
static int ov9640_set_bus_param(struct soc_camera_device *icd,
unsigned long flags)
static unsigned long ov9640_query_bus_param(struct soc_camera_device *icd)
static int ov9640_g_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int ov9640_s_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int ov9640_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *id)
static int ov9640_get_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int ov9640_set_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static void ov9640_res_roundup(u32 *width, u32 *height)
static void ov9640_alter_regs(enum v4l2_mbus_pixelcode code,
struct ov9640_reg_alt *alt)
static int ov9640_write_regs(struct i2c_client *client, u32 width,
enum v4l2_mbus_pixelcode code, struct ov9640_reg_alt *alts)
static int ov9640_prog_dflt(struct i2c_client *client)
static int ov9640_s_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int ov9640_try_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int ov9640_enum_fmt(struct v4l2_subdev *sd, unsigned int index,
enum v4l2_mbus_pixelcode *code)
static int ov9640_g_crop(struct v4l2_subdev *sd, struct v4l2_crop *a)
static int ov9640_cropcap(struct v4l2_subdev *sd, struct v4l2_cropcap *a)
static int ov9640_video_probe(struct soc_camera_device *icd,
struct i2c_client *client)
static struct soc_camera_ops ov9640_ops = ;
static struct v4l2_subdev_core_ops ov9640_core_ops = ;
static struct v4l2_subdev_video_ops ov9640_video_ops = ;
static struct v4l2_subdev_ops ov9640_subdev_ops = ;
static int ov9640_probe(struct i2c_client *client,
const struct i2c_device_id *did)
static int ov9640_remove(struct i2c_client *client)
static const struct i2c_device_id ov9640_id[] = ;
MODULE_DEVICE_TABLE(i2c, ov9640_id);
static struct i2c_driver ov9640_i2c_driver = ;
static int __init ov9640_module_init(void)
static void __exit ov9640_module_exit(void)
module_init(ov9640_module_init);
module_exit(ov9640_module_exit);
MODULE_DESCRIPTION("SoC Camera driver for OmniVision OV96xx");
MODULE_AUTHOR("Marek Vasut <marek.vasut@gmail.com>");
MODULE_LICENSE("GPL v2");
