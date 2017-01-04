#define GR_MODE_MASK              0xc0
#define DIRECT_3DYCS_CONNECT_MASK 0xc0
#define SYNC_CIRCUIT_MASK         0xa0
MODULE_DESCRIPTION("uPD64031A driver");
MODULE_AUTHOR("T. Adachi, Takeru KOMORIYA, Hans Verkuil");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Debug level (0-1)");
enum ;
struct upd64031a_state ;
static inline struct upd64031a_state *to_state(struct v4l2_subdev *sd)
static u8 upd64031a_init[] = ;
static u8 upd64031a_read(struct v4l2_subdev *sd, u8 reg)
static void upd64031a_write(struct v4l2_subdev *sd, u8 reg, u8 val)
static int upd64031a_s_frequency(struct v4l2_subdev *sd, struct v4l2_frequency *freq)
static int upd64031a_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int upd64031a_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static int upd64031a_log_status(struct v4l2_subdev *sd)
static int upd64031a_g_register(struct v4l2_subdev *sd, struct v4l2_dbg_register *reg)
static int upd64031a_s_register(struct v4l2_subdev *sd, struct v4l2_dbg_register *reg)
static const struct v4l2_subdev_core_ops upd64031a_core_ops = ;
static const struct v4l2_subdev_tuner_ops upd64031a_tuner_ops = ;
static const struct v4l2_subdev_video_ops upd64031a_video_ops = ;
static const struct v4l2_subdev_ops upd64031a_ops = ;
static int upd64031a_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int upd64031a_remove(struct i2c_client *client)
static const struct i2c_device_id upd64031a_id[] = ;
MODULE_DEVICE_TABLE(i2c, upd64031a_id);
static struct i2c_driver upd64031a_driver = ;
static __init int init_upd64031a(void)
static __exit void exit_upd64031a(void)
module_init(init_upd64031a);
module_exit(exit_upd64031a);
