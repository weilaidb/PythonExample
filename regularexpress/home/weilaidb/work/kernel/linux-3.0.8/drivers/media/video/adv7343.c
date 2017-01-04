MODULE_DESCRIPTION("ADV7343 video encoder driver");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Debug level 0-1");
struct adv7343_state ;
static inline struct adv7343_state *to_state(struct v4l2_subdev *sd)
static inline struct v4l2_subdev *to_sd(struct v4l2_ctrl *ctrl)
static inline int adv7343_write(struct v4l2_subdev *sd, u8 reg, u8 value)
static const u8 adv7343_init_reg_val[] = ;
static const struct adv7343_std_info stdinfo[] = ;
static int adv7343_setstd(struct v4l2_subdev *sd, v4l2_std_id std)
static int adv7343_setoutput(struct v4l2_subdev *sd, u32 output_type)
static int adv7343_log_status(struct v4l2_subdev *sd)
static int adv7343_s_ctrl(struct v4l2_ctrl *ctrl)
static int adv7343_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *chip)
static const struct v4l2_ctrl_ops adv7343_ctrl_ops = ;
static const struct v4l2_subdev_core_ops adv7343_core_ops = ;
static int adv7343_s_std_output(struct v4l2_subdev *sd, v4l2_std_id std)
static int adv7343_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static const struct v4l2_subdev_video_ops adv7343_video_ops = ;
static const struct v4l2_subdev_ops adv7343_ops = ;
static int adv7343_initialize(struct v4l2_subdev *sd)
static int adv7343_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int adv7343_remove(struct i2c_client *client)
static const struct i2c_device_id adv7343_id[] = ;
MODULE_DEVICE_TABLE(i2c, adv7343_id);
static struct i2c_driver adv7343_driver = ;
static __init int init_adv7343(void)
static __exit void exit_adv7343(void)
module_init(init_adv7343);
module_exit(exit_adv7343);
