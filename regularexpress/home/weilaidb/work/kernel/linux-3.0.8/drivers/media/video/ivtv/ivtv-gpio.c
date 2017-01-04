#define IVTV_REG_GPIO_IN    0x9008
#define IVTV_REG_GPIO_OUT   0x900c
#define IVTV_REG_GPIO_DIR   0x9020
void ivtv_reset_ir_gpio(struct ivtv *itv)
int ivtv_reset_tuner_gpio(void *dev, int component, int cmd, int value)
static inline struct ivtv *sd_to_ivtv(struct v4l2_subdev *sd)
static inline struct v4l2_subdev *to_sd(struct v4l2_ctrl *ctrl)
static int subdev_s_clock_freq(struct v4l2_subdev *sd, u32 freq)
static int subdev_g_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *vt)
static int subdev_s_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *vt)
static int subdev_s_radio(struct v4l2_subdev *sd)
static int subdev_s_audio_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int subdev_s_ctrl(struct v4l2_ctrl *ctrl)
static int subdev_log_status(struct v4l2_subdev *sd)
static int subdev_s_video_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static const struct v4l2_ctrl_ops gpio_ctrl_ops = ;
static const struct v4l2_subdev_core_ops subdev_core_ops = ;
static const struct v4l2_subdev_tuner_ops subdev_tuner_ops = ;
static const struct v4l2_subdev_audio_ops subdev_audio_ops = ;
static const struct v4l2_subdev_video_ops subdev_video_ops = ;
static const struct v4l2_subdev_ops subdev_ops = ;
int ivtv_gpio_init(struct ivtv *itv)
