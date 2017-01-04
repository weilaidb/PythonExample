MODULE_AUTHOR("Devin Heitmueller");
MODULE_LICENSE("GPL");
static int au8522_analog_debug;
module_param_named(analog_debug, au8522_analog_debug, int, 0644);
MODULE_PARM_DESC(analog_debug,
"Analog debugging messages [0=Off (default) 1=On]");
struct au8522_register_config ;
static const struct au8522_register_config filter_coef[] = ;
#define NUM_FILTER_COEF (sizeof(filter_coef)\
/ sizeof(struct au8522_register_config))
static const struct au8522_register_config lpfilter_coef[] = ;
#define NUM_LPFILTER_COEF (sizeof(lpfilter_coef)\
/ sizeof(struct au8522_register_config))
static inline struct au8522_state *to_state(struct v4l2_subdev *sd)
static void setup_vbi(struct au8522_state *state, int aud_input)
static void setup_decoder_defaults(struct au8522_state *state, u8 input_mode)
static void au8522_setup_cvbs_mode(struct au8522_state *state)
static void au8522_setup_cvbs_tuner_mode(struct au8522_state *state)
static void au8522_setup_svideo_mode(struct au8522_state *state)
static void disable_audio_input(struct au8522_state *state)
static void set_audio_input(struct au8522_state *state, int aud_input)
static int au8522_s_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int au8522_g_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int au8522_g_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int au8522_s_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int au8522_s_stream(struct v4l2_subdev *sd, int enable)
static int au8522_queryctrl(struct v4l2_subdev *sd, struct v4l2_queryctrl *qc)
static int au8522_reset(struct v4l2_subdev *sd, u32 val)
static int au8522_s_video_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int au8522_s_audio_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int au8522_g_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *vt)
static int au8522_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *chip)
static int au8522_log_status(struct v4l2_subdev *sd)
static const struct v4l2_subdev_core_ops au8522_core_ops = ;
static const struct v4l2_subdev_tuner_ops au8522_tuner_ops = ;
static const struct v4l2_subdev_audio_ops au8522_audio_ops = ;
static const struct v4l2_subdev_video_ops au8522_video_ops = ;
static const struct v4l2_subdev_ops au8522_ops = ;
static int au8522_probe(struct i2c_client *client,
const struct i2c_device_id *did)
static int au8522_remove(struct i2c_client *client)
static const struct i2c_device_id au8522_id[] = ;
MODULE_DEVICE_TABLE(i2c, au8522_id);
static struct i2c_driver au8522_driver = ;
static __init int init_au8522(void)
static __exit void exit_au8522(void)
module_init(init_au8522);
module_exit(exit_au8522);
