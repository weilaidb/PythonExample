#define VRES_60HZ	(480+16)
MODULE_DESCRIPTION("Philips SAA7111/SAA7113/SAA7114/SAA7115/SAA7118 video decoder driver");
MODULE_AUTHOR(  "Maxim Yevtyushkin, Kevin Thayer, Chris Kennedy, "
"Hans Verkuil, Mauro Carvalho Chehab");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, bool, 0644);
MODULE_PARM_DESC(debug, "Debug level (0-1)");
struct saa711x_state ;
static inline struct saa711x_state *to_state(struct v4l2_subdev *sd)
static inline struct v4l2_subdev *to_sd(struct v4l2_ctrl *ctrl)
static inline int saa711x_write(struct v4l2_subdev *sd, u8 reg, u8 value)
static int saa711x_has_reg(const int id, const u8 reg)
static int saa711x_writeregs(struct v4l2_subdev *sd, const unsigned char *regs)
static inline int saa711x_read(struct v4l2_subdev *sd, u8 reg)
static const unsigned char saa7111_init[] = ;
static const unsigned char saa7113_init[] = ;
static const unsigned char saa7115_init_auto_input[] = ;
static const unsigned char saa7115_cfg_reset_scaler[] = ;
static const unsigned char saa7115_cfg_60hz_video[] = ;
static const unsigned char saa7115_cfg_50hz_video[] = ;
static const unsigned char saa7115_cfg_vbi_on[] = ;
static const unsigned char saa7115_cfg_vbi_off[] = ;
static const unsigned char saa7115_init_misc[] = ;
static int saa711x_odd_parity(u8 c)
static int saa711x_decode_vps(u8 *dst, u8 *p)
static int saa711x_decode_wss(u8 *p)
static int saa711x_s_clock_freq(struct v4l2_subdev *sd, u32 freq)
static int saa711x_g_volatile_ctrl(struct v4l2_ctrl *ctrl)
static int saa711x_s_ctrl(struct v4l2_ctrl *ctrl)
static int saa711x_set_size(struct v4l2_subdev *sd, int width, int height)
static void saa711x_set_v4lstd(struct v4l2_subdev *sd, v4l2_std_id std)
static void saa711x_set_lcr(struct v4l2_subdev *sd, struct v4l2_sliced_vbi_format *fmt)
static int saa711x_g_sliced_fmt(struct v4l2_subdev *sd, struct v4l2_sliced_vbi_format *sliced)
static int saa711x_s_raw_fmt(struct v4l2_subdev *sd, struct v4l2_vbi_format *fmt)
static int saa711x_s_sliced_fmt(struct v4l2_subdev *sd, struct v4l2_sliced_vbi_format *fmt)
static int saa711x_s_mbus_fmt(struct v4l2_subdev *sd, struct v4l2_mbus_framefmt *fmt)
static int saa711x_decode_vbi_line(struct v4l2_subdev *sd, struct v4l2_decode_vbi_line *vbi)
static int saa711x_g_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *vt)
static int saa711x_s_std(struct v4l2_subdev *sd, v4l2_std_id std)
static int saa711x_s_radio(struct v4l2_subdev *sd)
static int saa711x_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int saa711x_s_gpio(struct v4l2_subdev *sd, u32 val)
static int saa711x_s_stream(struct v4l2_subdev *sd, int enable)
static int saa711x_s_crystal_freq(struct v4l2_subdev *sd, u32 freq, u32 flags)
static int saa711x_reset(struct v4l2_subdev *sd, u32 val)
static int saa711x_g_vbi_data(struct v4l2_subdev *sd, struct v4l2_sliced_vbi_data *data)
static int saa711x_querystd(struct v4l2_subdev *sd, v4l2_std_id *std)
static int saa711x_g_input_status(struct v4l2_subdev *sd, u32 *status)
static int saa711x_g_register(struct v4l2_subdev *sd, struct v4l2_dbg_register *reg)
static int saa711x_s_register(struct v4l2_subdev *sd, struct v4l2_dbg_register *reg)
static int saa711x_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static int saa711x_log_status(struct v4l2_subdev *sd)
static const struct v4l2_ctrl_ops saa711x_ctrl_ops = ;
static const struct v4l2_subdev_core_ops saa711x_core_ops = ;
static const struct v4l2_subdev_tuner_ops saa711x_tuner_ops = ;
static const struct v4l2_subdev_audio_ops saa711x_audio_ops = ;
static const struct v4l2_subdev_video_ops saa711x_video_ops = ;
static const struct v4l2_subdev_vbi_ops saa711x_vbi_ops = ;
static const struct v4l2_subdev_ops saa711x_ops = ;
static int saa711x_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int saa711x_remove(struct i2c_client *client)
static const struct i2c_device_id saa711x_id[] = ;
MODULE_DEVICE_TABLE(i2c, saa711x_id);
static struct i2c_driver saa711x_driver = ;
static __init int init_saa711x(void)
static __exit void exit_saa711x(void)
module_init(init_saa711x);
module_exit(exit_saa711x);
