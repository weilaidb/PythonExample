MODULE_DESCRIPTION("Conexant CX25840 audio/video decoder driver");
MODULE_AUTHOR("Ulf Eklund, Chris Kennedy, Hans Verkuil, Tyler Trafford");
MODULE_LICENSE("GPL");
#define CX25840_VID_INT_STAT_REG 0x410
#define CX25840_VID_INT_STAT_BITS 0x0000ffff
#define CX25840_VID_INT_MASK_BITS 0xffff0000
#define CX25840_VID_INT_MASK_SHFT 16
#define CX25840_VID_INT_MASK_REG 0x412
#define CX23885_AUD_MC_INT_MASK_REG 0x80c
#define CX23885_AUD_MC_INT_STAT_BITS 0xffff0000
#define CX23885_AUD_MC_INT_CTRL_BITS 0x0000ffff
#define CX23885_AUD_MC_INT_STAT_SHFT 16
#define CX25840_AUD_INT_CTRL_REG 0x812
#define CX25840_AUD_INT_STAT_REG 0x813
#define CX23885_PIN_CTRL_IRQ_REG 0x123
#define CX23885_PIN_CTRL_IRQ_IR_STAT  0x40
#define CX23885_PIN_CTRL_IRQ_AUD_STAT 0x20
#define CX23885_PIN_CTRL_IRQ_VID_STAT 0x10
#define CX25840_IR_STATS_REG	0x210
#define CX25840_IR_IRQEN_REG	0x214
static int cx25840_debug;
module_param_named(debug,cx25840_debug, int, 0644);
MODULE_PARM_DESC(debug, "Debugging messages [0=Off (default) 1=On]");
int cx25840_write(struct i2c_client *client, u16 addr, u8 value)
int cx25840_write4(struct i2c_client *client, u16 addr, u32 value)
u8 cx25840_read(struct i2c_client * client, u16 addr)
u32 cx25840_read4(struct i2c_client * client, u16 addr)
int cx25840_and_or(struct i2c_client *client, u16 addr, unsigned and_mask,
u8 or_value)
int cx25840_and_or4(struct i2c_client *client, u16 addr, u32 and_mask,
u32 or_value)
static int set_input(struct i2c_client *client, enum cx25840_video_input vid_input,
enum cx25840_audio_input aud_input);
static int cx23885_s_io_pin_config(struct v4l2_subdev *sd, size_t n,
struct v4l2_subdev_io_pin_config *p)
static int common_s_io_pin_config(struct v4l2_subdev *sd, size_t n,
struct v4l2_subdev_io_pin_config *pincfg)
static void init_dll1(struct i2c_client *client)
static void init_dll2(struct i2c_client *client)
static void cx25836_initialize(struct i2c_client *client)
static void cx25840_work_handler(struct work_struct *work)
static void cx25840_initialize(struct i2c_client *client)
static void cx23885_initialize(struct i2c_client *client)
static void cx231xx_initialize(struct i2c_client *client)
void cx25840_std_setup(struct i2c_client *client)
static void input_change(struct i2c_client *client)
static int set_input(struct i2c_client *client, enum cx25840_video_input vid_input,
enum cx25840_audio_input aud_input)
static int set_v4lstd(struct i2c_client *client)
static int cx25840_s_ctrl(struct v4l2_ctrl *ctrl)
static int cx25840_s_mbus_fmt(struct v4l2_subdev *sd, struct v4l2_mbus_framefmt *fmt)
static void log_video_status(struct i2c_client *client)
static void log_audio_status(struct i2c_client *client)
static int cx25840_load_fw(struct v4l2_subdev *sd)
static int cx25840_g_register(struct v4l2_subdev *sd, struct v4l2_dbg_register *reg)
static int cx25840_s_register(struct v4l2_subdev *sd, struct v4l2_dbg_register *reg)
static int cx25840_s_audio_stream(struct v4l2_subdev *sd, int enable)
static int cx25840_s_stream(struct v4l2_subdev *sd, int enable)
static int cx25840_s_std(struct v4l2_subdev *sd, v4l2_std_id std)
static int cx25840_s_radio(struct v4l2_subdev *sd)
static int cx25840_s_video_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int cx25840_s_audio_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int cx25840_s_frequency(struct v4l2_subdev *sd, struct v4l2_frequency *freq)
static int cx25840_g_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *vt)
static int cx25840_s_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *vt)
static int cx25840_reset(struct v4l2_subdev *sd, u32 val)
static int cx25840_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static int cx25840_log_status(struct v4l2_subdev *sd)
static int cx23885_irq_handler(struct v4l2_subdev *sd, u32 status,
bool *handled)
static int cx25840_irq_handler(struct v4l2_subdev *sd, u32 status,
bool *handled)
static const struct v4l2_ctrl_ops cx25840_ctrl_ops = ;
static const struct v4l2_subdev_core_ops cx25840_core_ops = ;
static const struct v4l2_subdev_tuner_ops cx25840_tuner_ops = ;
static const struct v4l2_subdev_audio_ops cx25840_audio_ops = ;
static const struct v4l2_subdev_video_ops cx25840_video_ops = ;
static const struct v4l2_subdev_vbi_ops cx25840_vbi_ops = ;
static const struct v4l2_subdev_ops cx25840_ops = ;
static u32 get_cx2388x_ident(struct i2c_client *client)
static int cx25840_probe(struct i2c_client *client,
const struct i2c_device_id *did)
static int cx25840_remove(struct i2c_client *client)
static const struct i2c_device_id cx25840_id[] = ;
MODULE_DEVICE_TABLE(i2c, cx25840_id);
static struct i2c_driver cx25840_driver = ;
static __init int init_cx25840(void)
static __exit void exit_cx25840(void)
module_init(init_cx25840);
module_exit(exit_cx25840);
