MODULE_DESCRIPTION("i2c device driver for cs5345 Audio ADC");
MODULE_AUTHOR("Hans Verkuil");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, bool, 0644);
MODULE_PARM_DESC(debug, "Debugging messages, 0=Off (default), 1=On");
struct cs5345_state ;
static inline struct cs5345_state *to_state(struct v4l2_subdev *sd)
static inline struct v4l2_subdev *to_sd(struct v4l2_ctrl *ctrl)
static inline int cs5345_write(struct v4l2_subdev *sd, u8 reg, u8 value)
static inline int cs5345_read(struct v4l2_subdev *sd, u8 reg)
static int cs5345_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int cs5345_s_ctrl(struct v4l2_ctrl *ctrl)
static int cs5345_g_register(struct v4l2_subdev *sd, struct v4l2_dbg_register *reg)
static int cs5345_s_register(struct v4l2_subdev *sd, struct v4l2_dbg_register *reg)
static int cs5345_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static int cs5345_log_status(struct v4l2_subdev *sd)
static const struct v4l2_ctrl_ops cs5345_ctrl_ops = ;
static const struct v4l2_subdev_core_ops cs5345_core_ops = ;
static const struct v4l2_subdev_audio_ops cs5345_audio_ops = ;
static const struct v4l2_subdev_ops cs5345_ops = ;
static int cs5345_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int cs5345_remove(struct i2c_client *client)
static const struct i2c_device_id cs5345_id[] = ;
MODULE_DEVICE_TABLE(i2c, cs5345_id);
static struct i2c_driver cs5345_driver = ;
static __init int init_cs5345(void)
static __exit void exit_cs5345(void)
module_init(init_cs5345);
module_exit(exit_cs5345);
