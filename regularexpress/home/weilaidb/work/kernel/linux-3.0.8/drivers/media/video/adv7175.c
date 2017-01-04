MODULE_DESCRIPTION("Analog Devices ADV7175 video encoder driver");
MODULE_AUTHOR("Dave Perks");
MODULE_LICENSE("GPL");
#define   I2C_ADV7175        0xd4
#define   I2C_ADV7176        0x54
static int debug;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug level (0-1)");
struct adv7175 ;
static inline struct adv7175 *to_adv7175(struct v4l2_subdev *sd)
static char *inputs[] = ;
static inline int adv7175_write(struct v4l2_subdev *sd, u8 reg, u8 value)
static inline int adv7175_read(struct v4l2_subdev *sd, u8 reg)
static int adv7175_write_block(struct v4l2_subdev *sd,
const u8 *data, unsigned int len)
static void set_subcarrier_freq(struct v4l2_subdev *sd, int pass_through)
#define MR050       0x11
#define MR060       0x14
#define TR0MODE     0x46
#define TR0RST	    0x80
#define TR1CAPT	    0x80
#define TR1PLAY	    0x00
static const unsigned char init_common[] = ;
static const unsigned char init_pal[] = ;
static const unsigned char init_ntsc[] = ;
static int adv7175_init(struct v4l2_subdev *sd, u32 val)
static int adv7175_s_std_output(struct v4l2_subdev *sd, v4l2_std_id std)
static int adv7175_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int adv7175_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static int adv7175_s_power(struct v4l2_subdev *sd, int on)
static const struct v4l2_subdev_core_ops adv7175_core_ops = ;
static const struct v4l2_subdev_video_ops adv7175_video_ops = ;
static const struct v4l2_subdev_ops adv7175_ops = ;
static int adv7175_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int adv7175_remove(struct i2c_client *client)
static const struct i2c_device_id adv7175_id[] = ;
MODULE_DEVICE_TABLE(i2c, adv7175_id);
static struct i2c_driver adv7175_driver = ;
static __init int init_adv7175(void)
static __exit void exit_adv7175(void)
module_init(init_adv7175);
module_exit(exit_adv7175);
