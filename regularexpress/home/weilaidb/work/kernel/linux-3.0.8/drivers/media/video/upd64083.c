MODULE_DESCRIPTION("uPD64083 driver");
MODULE_AUTHOR("T. Adachi, Takeru KOMORIYA, Hans Verkuil");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, bool, 0644);
MODULE_PARM_DESC(debug, "Debug level (0-1)");
enum ;
struct upd64083_state ;
static inline struct upd64083_state *to_state(struct v4l2_subdev *sd)
static u8 upd64083_init[] = ;
static void upd64083_write(struct v4l2_subdev *sd, u8 reg, u8 val)
static u8 upd64083_read(struct v4l2_subdev *sd, u8 reg)
static int upd64083_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int upd64083_g_register(struct v4l2_subdev *sd, struct v4l2_dbg_register *reg)
static int upd64083_s_register(struct v4l2_subdev *sd, struct v4l2_dbg_register *reg)
static int upd64083_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static int upd64083_log_status(struct v4l2_subdev *sd)
static const struct v4l2_subdev_core_ops upd64083_core_ops = ;
static const struct v4l2_subdev_video_ops upd64083_video_ops = ;
static const struct v4l2_subdev_ops upd64083_ops = ;
static int upd64083_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int upd64083_remove(struct i2c_client *client)
static const struct i2c_device_id upd64083_id[] = ;
MODULE_DEVICE_TABLE(i2c, upd64083_id);
static struct i2c_driver upd64083_driver = ;
static __init int init_upd64083(void)
static __exit void exit_upd64083(void)
module_init(init_upd64083);
module_exit(exit_upd64083);
