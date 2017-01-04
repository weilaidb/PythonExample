MODULE_DESCRIPTION("Philips SAA7185 video encoder driver");
MODULE_AUTHOR("Dave Perks");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug level (0-1)");
struct saa7185 ;
static inline struct saa7185 *to_saa7185(struct v4l2_subdev *sd)
static inline int saa7185_read(struct v4l2_subdev *sd)
static int saa7185_write(struct v4l2_subdev *sd, u8 reg, u8 value)
static int saa7185_write_block(struct v4l2_subdev *sd,
const u8 *data, unsigned int len)
static const unsigned char init_common[] = ;
static const unsigned char init_pal[] = ;
static const unsigned char init_ntsc[] = ;
static int saa7185_init(struct v4l2_subdev *sd, u32 val)
static int saa7185_s_std_output(struct v4l2_subdev *sd, v4l2_std_id std)
static int saa7185_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int saa7185_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static const struct v4l2_subdev_core_ops saa7185_core_ops = ;
static const struct v4l2_subdev_video_ops saa7185_video_ops = ;
static const struct v4l2_subdev_ops saa7185_ops = ;
static int saa7185_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int saa7185_remove(struct i2c_client *client)
static const struct i2c_device_id saa7185_id[] = ;
MODULE_DEVICE_TABLE(i2c, saa7185_id);
static struct i2c_driver saa7185_driver = ;
static __init int init_saa7185(void)
static __exit void exit_saa7185(void)
module_init(init_saa7185);
module_exit(exit_saa7185);
