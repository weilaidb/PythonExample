MODULE_AUTHOR("Michael Hunold <michael@mihu.de>");
MODULE_DESCRIPTION("tda9840 driver");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Debug level (0-1)");
#define	SWITCH		0x00
#define	LEVEL_ADJUST	0x02
#define	STEREO_ADJUST	0x03
#define	TEST		0x04
#define TDA9840_SET_MUTE                0x00
#define TDA9840_SET_MONO                0x10
#define TDA9840_SET_STEREO              0x2a
#define TDA9840_SET_LANG1               0x12
#define TDA9840_SET_LANG2               0x1e
#define TDA9840_SET_BOTH                0x1a
#define TDA9840_SET_BOTH_R              0x16
#define TDA9840_SET_EXTERNAL            0x7a
static void tda9840_write(struct v4l2_subdev *sd, u8 reg, u8 val)
static int tda9840_s_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *t)
static int tda9840_g_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *t)
static int tda9840_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static const struct v4l2_subdev_core_ops tda9840_core_ops = ;
static const struct v4l2_subdev_tuner_ops tda9840_tuner_ops = ;
static const struct v4l2_subdev_ops tda9840_ops = ;
static int tda9840_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int tda9840_remove(struct i2c_client *client)
static const struct i2c_device_id tda9840_id[] = ;
MODULE_DEVICE_TABLE(i2c, tda9840_id);
static struct i2c_driver tda9840_driver = ;
static __init int init_tda9840(void)
static __exit void exit_tda9840(void)
module_init(init_tda9840);
module_exit(exit_tda9840);
