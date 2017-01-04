MODULE_DESCRIPTION("Philips SAA717x audio/video decoder driver");
MODULE_AUTHOR("K. Ohta, T. Adachi, Hans Verkuil");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Debug level (0-1)");
struct saa717x_state ;
static inline struct saa717x_state *to_state(struct v4l2_subdev *sd)
static inline struct v4l2_subdev *to_sd(struct v4l2_ctrl *ctrl)
#define TUNER_AUDIO_MONO   	0
#define TUNER_AUDIO_STEREO 	1
#define TUNER_AUDIO_LANG1  	2
#define TUNER_AUDIO_LANG2  	3
#define SAA717X_NTSC_WIDTH   	(704)
#define SAA717X_NTSC_HEIGHT  	(480)
static int saa717x_write(struct v4l2_subdev *sd, u32 reg, u32 value)
static void saa717x_write_regs(struct v4l2_subdev *sd, u32 *data)
static u32 saa717x_read(struct v4l2_subdev *sd, u32 reg)
static u32 reg_init_initialize[] =
;
static u32 reg_init_tuner_input[] = ;
static u32 reg_init_composite_input[] = ;
static u32 reg_init_svideo_input[] = ;
static u32 reg_set_audio_template[4][2] =
;
static void get_inf_dev_status(struct v4l2_subdev *sd,
int *dual_flag, int *stereo_flag)
static void set_audio_mode(struct v4l2_subdev *sd, int audio_mode)
static int set_audio_regs(struct v4l2_subdev *sd,
struct saa717x_state *decoder)
static void set_h_prescale(struct v4l2_subdev *sd,
int task, int prescale)
static void set_v_scale(struct v4l2_subdev *sd, int task, int yscale)
static int saa717x_s_ctrl(struct v4l2_ctrl *ctrl)
static int saa717x_s_video_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int saa717x_g_register(struct v4l2_subdev *sd, struct v4l2_dbg_register *reg)
static int saa717x_s_register(struct v4l2_subdev *sd, struct v4l2_dbg_register *reg)
static int saa717x_s_mbus_fmt(struct v4l2_subdev *sd, struct v4l2_mbus_framefmt *fmt)
static int saa717x_s_radio(struct v4l2_subdev *sd)
static int saa717x_s_std(struct v4l2_subdev *sd, v4l2_std_id std)
static int saa717x_s_audio_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int saa717x_s_stream(struct v4l2_subdev *sd, int enable)
static int saa717x_s_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *vt)
static int saa717x_g_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *vt)
static int saa717x_log_status(struct v4l2_subdev *sd)
static const struct v4l2_ctrl_ops saa717x_ctrl_ops = ;
static const struct v4l2_subdev_core_ops saa717x_core_ops = ;
static const struct v4l2_subdev_tuner_ops saa717x_tuner_ops = ;
static const struct v4l2_subdev_video_ops saa717x_video_ops = ;
static const struct v4l2_subdev_audio_ops saa717x_audio_ops = ;
static const struct v4l2_subdev_ops saa717x_ops = ;
static int saa717x_probe(struct i2c_client *client,
const struct i2c_device_id *did)
static int saa717x_remove(struct i2c_client *client)
static const struct i2c_device_id saa717x_id[] = ;
MODULE_DEVICE_TABLE(i2c, saa717x_id);
static struct i2c_driver saa717x_driver = ;
static __init int init_saa717x(void)
static __exit void exit_saa717x(void)
module_init(init_saa717x);
module_exit(exit_saa717x);
