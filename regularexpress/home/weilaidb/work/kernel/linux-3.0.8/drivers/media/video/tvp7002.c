MODULE_DESCRIPTION("TI TVP7002 Video and Graphics Digitizer driver");
MODULE_AUTHOR("Santiago Nunez-Corrales <santiago.nunez@ridgerun.com>");
MODULE_LICENSE("GPL");
#define TVP7002_MODULE_NAME	"tvp7002"
#define I2C_RETRY_COUNT		(5)
#define TVP7002_EOR		0x5c
#define TVP7002_READ		0
#define TVP7002_WRITE		1
#define TVP7002_RESERVED	2
#define TVP7002_IP_SHIFT	5
#define TVP7002_INPR_MASK	(0x01 << TVP7002_IP_SHIFT)
#define TVP7002_CL_SHIFT	8
#define TVP7002_CL_MASK		0x0f
static int debug;
module_param(debug, bool, 0644);
MODULE_PARM_DESC(debug, "Debug level (0-2)");
struct i2c_reg_value ;
static const struct i2c_reg_value tvp7002_init_default[] = ;
static const struct i2c_reg_value tvp7002_parms_480P[] = ;
static const struct i2c_reg_value tvp7002_parms_576P[] = ;
static const struct i2c_reg_value tvp7002_parms_1080I60[] = ;
static const struct i2c_reg_value tvp7002_parms_1080P60[] = ;
static const struct i2c_reg_value tvp7002_parms_1080I50[] = ;
static const struct i2c_reg_value tvp7002_parms_720P60[] = ;
static const struct i2c_reg_value tvp7002_parms_720P50[] = ;
struct tvp7002_preset_definition ;
static const struct tvp7002_preset_definition tvp7002_presets[] = ;
#define NUM_PRESETS	ARRAY_SIZE(tvp7002_presets)
struct tvp7002 ;
static inline struct tvp7002 *to_tvp7002(struct v4l2_subdev *sd)
static inline struct v4l2_subdev *to_sd(struct v4l2_ctrl *ctrl)
static int tvp7002_read(struct v4l2_subdev *sd, u8 addr, u8 *dst)
static inline void tvp7002_read_err(struct v4l2_subdev *sd, u8 reg,
u8 *dst, int *err)
static int tvp7002_write(struct v4l2_subdev *sd, u8 addr, u8 value)
static inline void tvp7002_write_err(struct v4l2_subdev *sd, u8 reg,
u8 val, int *err)
static int tvp7002_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *chip)
static int tvp7002_write_inittab(struct v4l2_subdev *sd,
const struct i2c_reg_value *regs)
static int tvp7002_s_dv_preset(struct v4l2_subdev *sd,
struct v4l2_dv_preset *dv_preset)
static int tvp7002_s_ctrl(struct v4l2_ctrl *ctrl)
static int tvp7002_mbus_fmt(struct v4l2_subdev *sd, struct v4l2_mbus_framefmt *f)
static int tvp7002_query_dv_preset(struct v4l2_subdev *sd,
struct v4l2_dv_preset *qpreset)
static int tvp7002_g_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int tvp7002_s_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int tvp7002_enum_mbus_fmt(struct v4l2_subdev *sd, unsigned index,
enum v4l2_mbus_pixelcode *code)
static int tvp7002_s_stream(struct v4l2_subdev *sd, int enable)
static int tvp7002_log_status(struct v4l2_subdev *sd)
static int tvp7002_enum_dv_presets(struct v4l2_subdev *sd,
struct v4l2_dv_enum_preset *preset)
static const struct v4l2_ctrl_ops tvp7002_ctrl_ops = ;
static const struct v4l2_subdev_core_ops tvp7002_core_ops = ;
static const struct v4l2_subdev_video_ops tvp7002_video_ops = ;
static const struct v4l2_subdev_ops tvp7002_ops = ;
static int tvp7002_probe(struct i2c_client *c, const struct i2c_device_id *id)
static int tvp7002_remove(struct i2c_client *c)
static const struct i2c_device_id tvp7002_id[] = ;
MODULE_DEVICE_TABLE(i2c, tvp7002_id);
static struct i2c_driver tvp7002_driver = ;
static int __init tvp7002_init(void)
static void __exit tvp7002_exit(void)
module_init(tvp7002_init);
module_exit(tvp7002_exit);
