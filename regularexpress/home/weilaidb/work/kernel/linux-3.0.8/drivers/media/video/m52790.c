MODULE_DESCRIPTION("i2c device driver for m52790 A/V switch");
MODULE_AUTHOR("Hans Verkuil");
MODULE_LICENSE("GPL");
struct m52790_state ;
static inline struct m52790_state *to_state(struct v4l2_subdev *sd)
static int m52790_write(struct v4l2_subdev *sd)
static int m52790_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int m52790_g_register(struct v4l2_subdev *sd, struct v4l2_dbg_register *reg)
static int m52790_s_register(struct v4l2_subdev *sd, struct v4l2_dbg_register *reg)
static int m52790_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static int m52790_log_status(struct v4l2_subdev *sd)
static const struct v4l2_subdev_core_ops m52790_core_ops = ;
static const struct v4l2_subdev_audio_ops m52790_audio_ops = ;
static const struct v4l2_subdev_video_ops m52790_video_ops = ;
static const struct v4l2_subdev_ops m52790_ops = ;
static int m52790_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int m52790_remove(struct i2c_client *client)
static const struct i2c_device_id m52790_id[] = ;
MODULE_DEVICE_TABLE(i2c, m52790_id);
static struct i2c_driver m52790_driver = ;
static __init int init_m52790(void)
static __exit void exit_m52790(void)
module_init(init_m52790);
module_exit(exit_m52790);
