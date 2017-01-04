MODULE_AUTHOR("Michael Hunold <michael@mihu.de>");
MODULE_DESCRIPTION("tea6415c driver");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Debug level (0-1)");
static int tea6415c_s_routing(struct v4l2_subdev *sd,
u32 i, u32 o, u32 config)
static int tea6415c_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static const struct v4l2_subdev_core_ops tea6415c_core_ops = ;
static const struct v4l2_subdev_video_ops tea6415c_video_ops = ;
static const struct v4l2_subdev_ops tea6415c_ops = ;
static int tea6415c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int tea6415c_remove(struct i2c_client *client)
static const struct i2c_device_id tea6415c_id[] = ;
MODULE_DEVICE_TABLE(i2c, tea6415c_id);
static struct i2c_driver tea6415c_driver = ;
static __init int init_tea6415c(void)
static __exit void exit_tea6415c(void)
module_init(init_tea6415c);
module_exit(exit_tea6415c);
