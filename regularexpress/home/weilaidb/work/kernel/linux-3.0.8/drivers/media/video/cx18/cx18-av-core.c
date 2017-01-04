int cx18_av_write(struct cx18 *cx, u16 addr, u8 value)
int cx18_av_write_expect(struct cx18 *cx, u16 addr, u8 value, u8 eval, u8 mask)
int cx18_av_write4(struct cx18 *cx, u16 addr, u32 value)
int
cx18_av_write4_expect(struct cx18 *cx, u16 addr, u32 value, u32 eval, u32 mask)
int cx18_av_write4_noretry(struct cx18 *cx, u16 addr, u32 value)
u8 cx18_av_read(struct cx18 *cx, u16 addr)
u32 cx18_av_read4(struct cx18 *cx, u16 addr)
int cx18_av_and_or(struct cx18 *cx, u16 addr, unsigned and_mask,
u8 or_value)
int cx18_av_and_or4(struct cx18 *cx, u16 addr, u32 and_mask,
u32 or_value)
static void cx18_av_init(struct cx18 *cx)
static void cx18_av_initialize(struct v4l2_subdev *sd)
static int cx18_av_reset(struct v4l2_subdev *sd, u32 val)
static int cx18_av_load_fw(struct v4l2_subdev *sd)
void cx18_av_std_setup(struct cx18 *cx)
static void input_change(struct cx18 *cx)
static int cx18_av_s_frequency(struct v4l2_subdev *sd,
struct v4l2_frequency *freq)
static int set_input(struct cx18 *cx, enum cx18_av_video_input vid_input,
enum cx18_av_audio_input aud_input)
static int cx18_av_s_video_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int cx18_av_s_audio_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int cx18_av_g_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *vt)
static int cx18_av_s_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *vt)
static int cx18_av_s_std(struct v4l2_subdev *sd, v4l2_std_id norm)
static int cx18_av_s_radio(struct v4l2_subdev *sd)
static int cx18_av_s_ctrl(struct v4l2_ctrl *ctrl)
static int cx18_av_s_mbus_fmt(struct v4l2_subdev *sd, struct v4l2_mbus_framefmt *fmt)
static int cx18_av_s_stream(struct v4l2_subdev *sd, int enable)
static void log_video_status(struct cx18 *cx)
static void log_audio_status(struct cx18 *cx)
static int cx18_av_log_status(struct v4l2_subdev *sd)
static inline int cx18_av_dbg_match(const struct v4l2_dbg_match *match)
static int cx18_av_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *chip)
static int cx18_av_g_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int cx18_av_s_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static const struct v4l2_ctrl_ops cx18_av_ctrl_ops = ;
static const struct v4l2_subdev_core_ops cx18_av_general_ops = ;
static const struct v4l2_subdev_tuner_ops cx18_av_tuner_ops = ;
static const struct v4l2_subdev_audio_ops cx18_av_audio_ops = ;
static const struct v4l2_subdev_video_ops cx18_av_video_ops = ;
static const struct v4l2_subdev_vbi_ops cx18_av_vbi_ops = ;
static const struct v4l2_subdev_ops cx18_av_ops = ;
int cx18_av_probe(struct cx18 *cx)
