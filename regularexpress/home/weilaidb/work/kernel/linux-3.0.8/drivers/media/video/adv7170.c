MODULE_DESCRIPTION("Analog Devices ADV7170 video encoder driver");
MODULE_AUTHOR("Maxim Yevtyushkin");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug level (0-1)");
struct adv7170 ;
static inline struct adv7170 *to_adv7170(struct v4l2_subdev *sd)
static char *inputs[] = ;
static inline int adv7170_write(struct v4l2_subdev *sd, u8 reg, u8 value)
static inline int adv7170_read(struct v4l2_subdev *sd, u8 reg)
static int adv7170_write_block(struct v4l2_subdev *sd,
const u8 *data, unsigned int len)
#define TR0MODE     0x4c
#define TR0RST	    0x80
#define TR1CAPT	    0x00
#define TR1PLAY	    0x00
static const unsigned char init_NTSC[] = ;
static const unsigned char init_PAL[] = ;
static int adv7170_s_std_output(struct v4l2_subdev *sd, v4l2_std_id std)
static int adv7170_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int adv7170_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static const struct v4l2_subdev_core_ops adv7170_core_ops = ;
static const struct v4l2_subdev_video_ops adv7170_video_ops = ;
static const struct v4l2_subdev_ops adv7170_ops = ;
static int adv7170_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int adv7170_remove(struct i2c_client *client)
static const struct i2c_device_id adv7170_id[] = ;
MODULE_DEVICE_TABLE(i2c, adv7170_id);
static struct i2c_driver adv7170_driver = ;
static __init int init_adv7170(void)
static __exit void exit_adv7170(void)
module_init(init_adv7170);
module_exit(exit_adv7170);
