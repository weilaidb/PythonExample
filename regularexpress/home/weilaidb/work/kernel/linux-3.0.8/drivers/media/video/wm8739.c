MODULE_DESCRIPTION("wm8739 driver");
MODULE_AUTHOR("T. Adachi, Hans Verkuil");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Debug level (0-1)");
enum ;
struct wm8739_state ;
static inline struct wm8739_state *to_state(struct v4l2_subdev *sd)
static inline struct v4l2_subdev *to_sd(struct v4l2_ctrl *ctrl)
static int wm8739_write(struct v4l2_subdev *sd, int reg, u16 val)
static int wm8739_s_ctrl(struct v4l2_ctrl *ctrl)
static int wm8739_s_clock_freq(struct v4l2_subdev *sd, u32 audiofreq)
static int wm8739_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static int wm8739_log_status(struct v4l2_subdev *sd)
static const struct v4l2_ctrl_ops wm8739_ctrl_ops = ;
static const struct v4l2_subdev_core_ops wm8739_core_ops = ;
static const struct v4l2_subdev_audio_ops wm8739_audio_ops = ;
static const struct v4l2_subdev_ops wm8739_ops = ;
static int wm8739_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int wm8739_remove(struct i2c_client *client)
static const struct i2c_device_id wm8739_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8739_id);
static struct i2c_driver wm8739_driver = ;
static __init int init_wm8739(void)
static __exit void exit_wm8739(void)
module_init(init_wm8739);
module_exit(exit_wm8739);
