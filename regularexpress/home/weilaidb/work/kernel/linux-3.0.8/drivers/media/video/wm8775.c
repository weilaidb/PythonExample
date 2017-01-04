MODULE_DESCRIPTION("wm8775 driver");
MODULE_AUTHOR("Ulf Eklund, Hans Verkuil");
MODULE_LICENSE("GPL");
enum ;
#define ALC_HOLD 0x85
#define ALC_EN 0x100
struct wm8775_state ;
static inline struct wm8775_state *to_state(struct v4l2_subdev *sd)
static inline struct v4l2_subdev *to_sd(struct v4l2_ctrl *ctrl)
static int wm8775_write(struct v4l2_subdev *sd, int reg, u16 val)
static void wm8775_set_audio(struct v4l2_subdev *sd, int quietly)
static int wm8775_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int wm8775_s_ctrl(struct v4l2_ctrl *ctrl)
static int wm8775_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static int wm8775_log_status(struct v4l2_subdev *sd)
static int wm8775_s_frequency(struct v4l2_subdev *sd, struct v4l2_frequency *freq)
static const struct v4l2_ctrl_ops wm8775_ctrl_ops = ;
static const struct v4l2_subdev_core_ops wm8775_core_ops = ;
static const struct v4l2_subdev_tuner_ops wm8775_tuner_ops = ;
static const struct v4l2_subdev_audio_ops wm8775_audio_ops = ;
static const struct v4l2_subdev_ops wm8775_ops = ;
static int wm8775_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int wm8775_remove(struct i2c_client *client)
static const struct i2c_device_id wm8775_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8775_id);
static struct i2c_driver wm8775_driver = ;
static __init int init_wm8775(void)
static __exit void exit_wm8775(void)
module_init(init_wm8775);
module_exit(exit_wm8775);
