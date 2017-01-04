MODULE_DESCRIPTION("TI THS7303 video amplifier driver");
MODULE_AUTHOR("Chaithrika U S");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Debug level 0-1");
static int ths7303_setvalue(struct v4l2_subdev *sd, v4l2_std_id std)
static int ths7303_s_std_output(struct v4l2_subdev *sd, v4l2_std_id norm)
static int ths7303_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *chip)
static const struct v4l2_subdev_video_ops ths7303_video_ops = ;
static const struct v4l2_subdev_core_ops ths7303_core_ops = ;
static const struct v4l2_subdev_ops ths7303_ops = ;
static int ths7303_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int ths7303_remove(struct i2c_client *client)
static const struct i2c_device_id ths7303_id[] = ;
MODULE_DEVICE_TABLE(i2c, ths7303_id);
static struct i2c_driver ths7303_driver = ;
static int __init ths7303_init(void)
static void __exit ths7303_exit(void)
module_init(ths7303_init);
module_exit(ths7303_exit);
