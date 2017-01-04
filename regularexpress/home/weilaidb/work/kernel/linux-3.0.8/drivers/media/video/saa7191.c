#define SAA7191_MODULE_VERSION	"0.0.5"
MODULE_DESCRIPTION("Philips SAA7191 video decoder driver");
MODULE_VERSION(SAA7191_MODULE_VERSION);
MODULE_AUTHOR("Mikael Nousiainen <tmnousia@cc.hut.fi>");
MODULE_LICENSE("GPL");
#define dprintk(x...) printk("SAA7191: " x);
#define dprintk(x...)
#define SAA7191_SYNC_COUNT	30
#define SAA7191_SYNC_DELAY	100
struct saa7191 ;
static inline struct saa7191 *to_saa7191(struct v4l2_subdev *sd)
static const u8 initseq[] = ;
static u8 saa7191_read_reg(struct v4l2_subdev *sd, u8 reg)
static int saa7191_read_status(struct v4l2_subdev *sd, u8 *value)
static int saa7191_write_reg(struct v4l2_subdev *sd, u8 reg, u8 value)
static int saa7191_write_block(struct v4l2_subdev *sd,
u8 length, const u8 *data)
static int saa7191_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int saa7191_s_std(struct v4l2_subdev *sd, v4l2_std_id norm)
static int saa7191_wait_for_signal(struct v4l2_subdev *sd, u8 *status)
static int saa7191_querystd(struct v4l2_subdev *sd, v4l2_std_id *norm)
static int saa7191_autodetect_norm(struct v4l2_subdev *sd)
static int saa7191_g_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int saa7191_s_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int saa7191_g_input_status(struct v4l2_subdev *sd, u32 *status)
static int saa7191_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *chip)
static const struct v4l2_subdev_core_ops saa7191_core_ops = ;
static const struct v4l2_subdev_video_ops saa7191_video_ops = ;
static const struct v4l2_subdev_ops saa7191_ops = ;
static int saa7191_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int saa7191_remove(struct i2c_client *client)
static const struct i2c_device_id saa7191_id[] = ;
MODULE_DEVICE_TABLE(i2c, saa7191_id);
static struct i2c_driver saa7191_driver = ;
static __init int init_saa7191(void)
static __exit void exit_saa7191(void)
module_init(init_saa7191);
module_exit(exit_saa7191);
