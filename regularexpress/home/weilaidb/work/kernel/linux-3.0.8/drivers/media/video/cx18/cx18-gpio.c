#define CX18_REG_GPIO_IN     0xc72010
#define CX18_REG_GPIO_OUT1   0xc78100
#define CX18_REG_GPIO_DIR1   0xc78108
#define CX18_REG_GPIO_OUT2   0xc78104
#define CX18_REG_GPIO_DIR2   0xc7810c
static void gpio_write(struct cx18 *cx)
static void gpio_update(struct cx18 *cx, u32 mask, u32 data)
static void gpio_reset_seq(struct cx18 *cx, u32 active_lo, u32 active_hi,
unsigned int assert_msecs,
unsigned int recovery_msecs)
static int gpiomux_log_status(struct v4l2_subdev *sd)
static int gpiomux_s_radio(struct v4l2_subdev *sd)
static int gpiomux_s_std(struct v4l2_subdev *sd, v4l2_std_id norm)
static int gpiomux_s_audio_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static const struct v4l2_subdev_core_ops gpiomux_core_ops = ;
static const struct v4l2_subdev_tuner_ops gpiomux_tuner_ops = ;
static const struct v4l2_subdev_audio_ops gpiomux_audio_ops = ;
static const struct v4l2_subdev_ops gpiomux_ops = ;
static int resetctrl_log_status(struct v4l2_subdev *sd)
static int resetctrl_reset(struct v4l2_subdev *sd, u32 val)
static const struct v4l2_subdev_core_ops resetctrl_core_ops = ;
static const struct v4l2_subdev_ops resetctrl_ops = ;
void cx18_gpio_init(struct cx18 *cx)
int cx18_gpio_register(struct cx18 *cx, u32 hw)
void cx18_reset_ir_gpio(void *data)
EXPORT_SYMBOL(cx18_reset_ir_gpio);
int cx18_reset_tuner_gpio(void *dev, int component, int cmd, int value)
