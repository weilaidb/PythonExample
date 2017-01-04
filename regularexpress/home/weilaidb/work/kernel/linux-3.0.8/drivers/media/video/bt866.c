MODULE_DESCRIPTION("Brooktree-866 video encoder driver");
MODULE_AUTHOR("Mike Bernson & Dave Perks");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug level (0-1)");
struct bt866 ;
static inline struct bt866 *to_bt866(struct v4l2_subdev *sd)
static int bt866_write(struct bt866 *encoder, u8 subaddr, u8 data)
static int bt866_s_std_output(struct v4l2_subdev *sd, v4l2_std_id std)
static int bt866_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int bt866_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static const struct v4l2_subdev_core_ops bt866_core_ops = ;
static const struct v4l2_subdev_video_ops bt866_video_ops = ;
static const struct v4l2_subdev_ops bt866_ops = ;
static int bt866_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int bt866_remove(struct i2c_client *client)
static const struct i2c_device_id bt866_id[] = ;
MODULE_DEVICE_TABLE(i2c, bt866_id);
static struct i2c_driver bt866_driver = ;
static __init int init_bt866(void)
static __exit void exit_bt866(void)
module_init(init_bt866);
module_exit(exit_bt866);
