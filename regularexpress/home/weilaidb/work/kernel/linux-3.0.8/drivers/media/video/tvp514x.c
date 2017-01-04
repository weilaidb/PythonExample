#define TVP514X_MODULE_NAME		"tvp514x"
#define I2C_RETRY_COUNT                 (5)
#define LOCK_RETRY_COUNT                (5)
#define LOCK_RETRY_DELAY                (200)
static int debug;
module_param(debug, bool, 0644);
MODULE_PARM_DESC(debug, "Debug level (0-1)");
MODULE_AUTHOR("Texas Instruments");
MODULE_DESCRIPTION("TVP514X linux decoder driver");
MODULE_LICENSE("GPL");
enum tvp514x_std ;
struct tvp514x_std_info ;
static struct tvp514x_reg tvp514x_reg_list_default[0x40];
static int tvp514x_s_stream(struct v4l2_subdev *sd, int enable);
struct tvp514x_decoder ;
static struct tvp514x_reg tvp514x_reg_list_default[] = ;
static const struct tvp514x_std_info tvp514x_std_list[] = ;
static inline struct tvp514x_decoder *to_decoder(struct v4l2_subdev *sd)
static inline struct v4l2_subdev *to_sd(struct v4l2_ctrl *ctrl)
static int tvp514x_read_reg(struct v4l2_subdev *sd, u8 reg)
static void dump_reg(struct v4l2_subdev *sd, u8 reg)
static int tvp514x_write_reg(struct v4l2_subdev *sd, u8 reg, u8 val)
static int tvp514x_write_regs(struct v4l2_subdev *sd,
const struct tvp514x_reg reglist[])
static enum tvp514x_std tvp514x_query_current_std(struct v4l2_subdev *sd)
static void tvp514x_reg_dump(struct v4l2_subdev *sd)
static int tvp514x_configure(struct v4l2_subdev *sd,
struct tvp514x_decoder *decoder)
static int tvp514x_detect(struct v4l2_subdev *sd,
struct tvp514x_decoder *decoder)
static int tvp514x_querystd(struct v4l2_subdev *sd, v4l2_std_id *std_id)
static int tvp514x_s_std(struct v4l2_subdev *sd, v4l2_std_id std_id)
static int tvp514x_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int tvp514x_s_ctrl(struct v4l2_ctrl *ctrl)
static int
tvp514x_enum_mbus_fmt(struct v4l2_subdev *sd, unsigned index,
enum v4l2_mbus_pixelcode *code)
static int
tvp514x_mbus_fmt(struct v4l2_subdev *sd, struct v4l2_mbus_framefmt *f)
static int
tvp514x_g_parm(struct v4l2_subdev *sd, struct v4l2_streamparm *a)
static int
tvp514x_s_parm(struct v4l2_subdev *sd, struct v4l2_streamparm *a)
static int tvp514x_s_stream(struct v4l2_subdev *sd, int enable)
static const struct v4l2_ctrl_ops tvp514x_ctrl_ops = ;
static const struct v4l2_subdev_core_ops tvp514x_core_ops = ;
static const struct v4l2_subdev_video_ops tvp514x_video_ops = ;
static const struct v4l2_subdev_ops tvp514x_ops = ;
static struct tvp514x_decoder tvp514x_dev = ;
static int
tvp514x_probe(struct i2c_client *client, const struct i2c_device_id *id)
static int tvp514x_remove(struct i2c_client *client)
static const struct tvp514x_reg tvp5146_init_reg_seq[] = ;
static const struct tvp514x_reg tvp5147_init_reg_seq[] =	;
static const struct tvp514x_reg tvp514xm_init_reg_seq[] = ;
static const struct i2c_device_id tvp514x_id[] = ;
MODULE_DEVICE_TABLE(i2c, tvp514x_id);
static struct i2c_driver tvp514x_driver = ;
static int __init tvp514x_init(void)
static void __exit tvp514x_exit(void)
module_init(tvp514x_init);
module_exit(tvp514x_exit);
