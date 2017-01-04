MODULE_DESCRIPTION("Brooktree-856A video encoder driver");
MODULE_AUTHOR("Mike Bernson & Dave Perks");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug level (0-1)");
#define BT856_REG_OFFSET	0xDA
#define BT856_NR_REG		6
struct bt856 ;
static inline struct bt856 *to_bt856(struct v4l2_subdev *sd)
static inline int bt856_write(struct bt856 *encoder, u8 reg, u8 value)
static inline int bt856_setbit(struct bt856 *encoder, u8 reg, u8 bit, u8 value)
static void bt856_dump(struct bt856 *encoder)
static int bt856_init(struct v4l2_subdev *sd, u32 arg)
static int bt856_s_std_output(struct v4l2_subdev *sd, v4l2_std_id std)
static int bt856_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int bt856_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static const struct v4l2_subdev_core_ops bt856_core_ops = ;
static const struct v4l2_subdev_video_ops bt856_video_ops = ;
static const struct v4l2_subdev_ops bt856_ops = ;
static int bt856_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int bt856_remove(struct i2c_client *client)
static const struct i2c_device_id bt856_id[] = ;
MODULE_DEVICE_TABLE(i2c, bt856_id);
static struct i2c_driver bt856_driver = ;
static __init int init_bt856(void)
static __exit void exit_bt856(void)
module_init(init_bt856);
module_exit(exit_bt856);
