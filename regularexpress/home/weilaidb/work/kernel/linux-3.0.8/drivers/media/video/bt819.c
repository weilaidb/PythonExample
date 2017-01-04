MODULE_DESCRIPTION("Brooktree-819 video decoder driver");
MODULE_AUTHOR("Mike Bernson & Dave Perks");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug level (0-1)");
struct bt819 ;
static inline struct bt819 *to_bt819(struct v4l2_subdev *sd)
static inline struct v4l2_subdev *to_sd(struct v4l2_ctrl *ctrl)
struct timing ;
static struct timing timing_data[] = ;
static inline int bt819_write(struct bt819 *decoder, u8 reg, u8 value)
static inline int bt819_setbit(struct bt819 *decoder, u8 reg, u8 bit, u8 value)
static int bt819_write_block(struct bt819 *decoder, const u8 *data, unsigned int len)
static inline int bt819_read(struct bt819 *decoder, u8 reg)
static int bt819_init(struct v4l2_subdev *sd)
static int bt819_status(struct v4l2_subdev *sd, u32 *pstatus, v4l2_std_id *pstd)
static int bt819_querystd(struct v4l2_subdev *sd, v4l2_std_id *std)
static int bt819_g_input_status(struct v4l2_subdev *sd, u32 *status)
static int bt819_s_std(struct v4l2_subdev *sd, v4l2_std_id std)
static int bt819_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int bt819_s_stream(struct v4l2_subdev *sd, int enable)
static int bt819_s_ctrl(struct v4l2_ctrl *ctrl)
static int bt819_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static const struct v4l2_ctrl_ops bt819_ctrl_ops = ;
static const struct v4l2_subdev_core_ops bt819_core_ops = ;
static const struct v4l2_subdev_video_ops bt819_video_ops = ;
static const struct v4l2_subdev_ops bt819_ops = ;
static int bt819_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int bt819_remove(struct i2c_client *client)
static const struct i2c_device_id bt819_id[] = ;
MODULE_DEVICE_TABLE(i2c, bt819_id);
static struct i2c_driver bt819_driver = ;
static __init int init_bt819(void)
static __exit void exit_bt819(void)
module_init(init_bt819);
module_exit(exit_bt819);
